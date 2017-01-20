#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>

void test_2_1(const std::string &input_filename, const std::string &output_filename)
{
	std::ifstream input_file(input_filename, std::ios::in);
	std::ofstream output_file(output_filename, std::ios::out | std::ios::trunc);

	unsigned int regions_count = 0;
	input_file >> regions_count;

	std::vector<unsigned int> region_people_count((std::istream_iterator<unsigned int>(input_file)), std::istream_iterator<unsigned int>());
	std::sort(region_people_count.begin(), region_people_count.end());

	auto need_regions = regions_count / 2 + 1;
	unsigned int need_people = 0;
	for (auto &people : region_people_count) {
		--need_regions;
		need_people += people / 2 + 1;
		if (need_regions == 0) {
			break;
		}
	}

	output_file << need_people;
}
