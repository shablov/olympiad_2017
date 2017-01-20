#include <fstream>
#include <vector>
#include <math.h>

unsigned int calc_mid_tax(const std::vector<std::pair<unsigned int, bool>> &taxes) {
	unsigned int all_taxes = 0;
	unsigned int people_count = 0;
	for (const auto &value : taxes) {
		if (value.second) {
			all_taxes += value.first;
			++people_count;
		}
	}
	return static_cast<unsigned int>(std::ceil(all_taxes / static_cast<double>(people_count)));
}

void test_1_2(const std::string &input_filename, const std::string &output_filename)
{
	std::ifstream input_file(input_filename, std::ios::in);
	std::ofstream output_file(output_filename, std::ios::out | std::ios::trunc);

	unsigned int people_count = 0;
	input_file >> people_count;

	unsigned int commission = 0;
	input_file >> commission;

	std::vector<std::pair<unsigned int, bool>> people_taxes;	// tax, true - collective
	for (unsigned int i = 0; i < people_count; ++i)
	{
		unsigned int tmp = 0;
		input_file >> tmp;
		people_taxes.emplace_back(tmp, true);
	}

	bool is_all = false;
	unsigned int mid_tax = 0;
	while (!is_all) {
		is_all = true;
		mid_tax = calc_mid_tax(people_taxes);
		for (auto &person_tax : people_taxes) {
			if (person_tax.second && (person_tax.first + commission < mid_tax)) {
				person_tax.first += commission;
				person_tax.second = false;
				is_all = false;
			}
		}
	}

	for (auto &person : people_taxes) {
		output_file << ((person.second) ? mid_tax : person.first) << " ";
	}
}
