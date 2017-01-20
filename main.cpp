#include <string>
#include <iostream>

#include <algorithm>

extern void test_1_1(const std::string &input_filename, const std::string &output_filename);
extern void test_1_2(const std::string &input_filename, const std::string &output_filename);
extern void test_1_3(const std::string &input_filename, const std::string &output_filename);
extern void test_1_4(const std::string &input_filename, const std::string &output_filename);
extern void test_2_1(const std::string &input_filename, const std::string &output_filename);
extern void test_2_2(const std::string &input_filename, const std::string &output_filename);
extern void test_2_3(const std::string &input_filename, const std::string &output_filename);
extern void test_2_4(const std::string &input_filename, const std::string &output_filename);

int main(int argc, char **argv) {

	test_1_1("test_files/tour_1_task_1/1", "output/tour_1_task_1_answer_1");
	test_1_1("test_files/tour_1_task_1/2", "output/tour_1_task_1_answer_2");
	test_1_1("test_files/tour_1_task_1/3", "output/tour_1_task_1_answer_3");

	test_1_2("test_files/tour_1_task_2/1", "output/tour_1_task_2_answer_1");
	test_1_2("test_files/tour_1_task_2/2", "output/tour_1_task_2_answer_2");
	test_1_2("test_files/tour_1_task_2/3", "output/tour_1_task_2_answer_3");

	test_1_3("test_files/tour_1_task_3/1", "output/tour_1_task_3_answer_1");
	test_1_3("test_files/tour_1_task_3/2", "output/tour_1_task_3_answer_2");
	test_1_3("test_files/tour_1_task_3/3", "output/tour_1_task_3_answer_3");

	test_1_4("test_files/tour_1_task_4/1", "output/tour_1_task_4_answer_1");
	test_1_4("test_files/tour_1_task_4/2", "output/tour_1_task_4_answer_2");
	test_1_4("test_files/tour_1_task_4/3", "output/tour_1_task_4_answer_3");

	test_2_1("test_files/tour_2_task_1/1", "output/tour_2_task_1_answer_1");
	test_2_1("test_files/tour_2_task_1/2", "output/tour_2_task_1_answer_2");
	test_2_1("test_files/tour_2_task_1/3", "output/tour_2_task_1_answer_3");

	test_2_2("test_files/tour_2_task_2/1", "output/tour_2_task_2_answer_1");
	test_2_2("test_files/tour_2_task_2/2", "output/tour_2_task_2_answer_2");
	test_2_2("test_files/tour_2_task_2/3", "output/tour_2_task_2_answer_3");

	test_2_3("test_files/tour_2_task_3/1", "output/tour_2_task_3_answer_1");
	test_2_3("test_files/tour_2_task_3/2", "output/tour_2_task_3_answer_2");
	test_2_3("test_files/tour_2_task_3/3", "output/tour_2_task_3_answer_3");

	test_2_4("test_files/tour_2_task_4/1", "output/tour_2_task_4_answer_1");
	test_2_4("test_files/tour_2_task_4/2", "output/tour_2_task_4_answer_2");
	test_2_4("test_files/tour_2_task_4/3", "output/tour_2_task_4_answer_3");

	return 0;
}
