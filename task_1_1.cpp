#include <vector>
#include <fstream>
#include <map>
#include <string>

void test_1_1(const std::string &input_filename, const std::string &output_filename)
{
	std::ifstream input_file(input_filename, std::ios::in);
	std::ofstream output_file(output_filename, std::ios::out | std::ios::trunc);

	unsigned int products_count = 0;
	input_file >> products_count;

	unsigned int presents_count = 0;
	input_file >> presents_count;

	std::vector<unsigned int> products_price;	// common
	std::map<unsigned int, unsigned int> products_prices;	// common, sale
	for (unsigned int i = 0; i < products_count; ++i)
	{
		unsigned int tmp = 0;
		input_file >> tmp;
		products_price.emplace_back(tmp);
	}
	for (const auto &price : products_price)
	{
		unsigned int tmp = 0;
		input_file >> tmp;
		products_prices.emplace(price, tmp);
	}

	int price_difference = 0;
	unsigned int count = 0;
	for (const auto &value : products_prices) {
		price_difference += value.first - value.second;
		if (++count >= presents_count) {
			output_file << price_difference;
			break;
		}
	}
}
