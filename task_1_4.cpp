#include <vector>
#include <fstream>
#include <vector>

std::vector<std::vector<unsigned int>> compute_ways(const std::vector<std::pair<unsigned int, unsigned int>> &stages) {
	return std::vector<std::vector<unsigned int>>();
}

void test_1_4(const std::string &input_filename, const std::string &output_filename)
{
	std::ifstream input_file(input_filename, std::ios::in);
	std::ofstream output_file(output_filename, std::ios::out | std::ios::trunc);

	unsigned int stations_count = 0;
	input_file >> stations_count;

	std::vector<std::pair<unsigned int, unsigned int>> railway_stages;
	for (unsigned int i = 1; i < stations_count; ++i)
	{
		std::pair<unsigned int, unsigned int> tmp;
		input_file >> tmp.first;
		input_file >> tmp.second;
		railway_stages.emplace_back(tmp);
	}
	 auto ways = compute_ways(railway_stages);
}
