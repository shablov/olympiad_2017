#include <iostream>

#include <fstream>
#include <vector>
#include <algorithm>

#include <atomic>

void replace_first_symbol(std::string &input_line, char symbol_in_line, char required) {
	std::atomic_flag flag;
	std::replace_if(input_line.begin(), input_line.end(), [&] (char symbol) {
		return (symbol == symbol_in_line && !flag.test_and_set());
	}, required);
	flag.clear();
}

void test_1_3(const std::string &input_filename, const std::string &output_filename)
{
	std::ifstream input_file(input_filename, std::ios::in);
	std::ofstream output_file(output_filename, std::ios::out | std::ios::trunc);

	unsigned int length = 0;
	input_file >> length;

	unsigned int limit = 0;
	input_file >> limit;

	std::vector<std::pair<unsigned int, char>> statistics;	// count, letter
	for (char begin = 'a'; begin <= 'z'; ++begin) {
		statistics.emplace_back(0, begin);
	}

	std::string input_line;
	input_line.resize(length);
	input_file >> input_line;

	for (auto &symbol : input_line) {
		++statistics[static_cast<unsigned int>(symbol - 'a')].first;
	}

	statistics.erase(std::remove_if(statistics.begin(), statistics.end(), [&] (std::pair<unsigned int, char> &value) {
		return value.first == 0;
	}), statistics.end());

	std::stable_sort(statistics.begin(), statistics.end(), std::greater<std::pair<unsigned int, char>>());

	while ((limit-- > 0) && (statistics.front().first > (statistics.back().first + 1))) {
		replace_first_symbol(input_line, statistics.front().second, statistics.back().second);
		--statistics.front().first;
		++statistics.back().first;
		std::stable_sort(statistics.begin(), statistics.end(), std::greater<std::pair<unsigned int, char>>());
	}

	output_file << input_line;
}
