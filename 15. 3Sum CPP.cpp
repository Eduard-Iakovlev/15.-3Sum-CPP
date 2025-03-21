#include <iostream>
#include <vector>
#include "Output.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");

	int example = 0;
	vector<int> nums = {};
	vector<vector<int>> expected = {};

	Output output;

	example++;
	nums = { -1, 0, 1, 2, -1, -4 };
	expected = { {-1, -1, 2}, {-1, 0, 1} };
	output.setOutputData(example, nums, expected);
	output.printSolution();

	example++;
	nums = { 0, 1 };
	expected = {};
	output.setOutputData(example, nums, expected);
	output.printSolution();

	example++;
	nums = { 0, 0, 0 };
	expected = { {0 ,0 , 0} };
	output.setOutputData(example, nums, expected);
	output.printSolution();

}
