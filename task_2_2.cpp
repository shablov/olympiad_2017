#include <iostream>

#include <fstream>

void test_2_2(const std::string &input_filename, const std::string &output_filename)
{
	std::ifstream input_file(input_filename, std::ios::in);
	std::ofstream output_file(output_filename, std::ios::out | std::ios::trunc);

	unsigned int number = 0;
	input_file >> number;

	unsigned int left_limit = 0;
	input_file >> left_limit;
	unsigned int right_limit = 0;
	input_file >> right_limit;

	for (unsigned int i = 1; i <= number; ++i) {
		std::vector<unsigned char> digit_set = create_digit_set()
	}
}
