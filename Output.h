#pragma once
#include <vector>

using namespace std;

class Output{
public:
	Output() = default;
	void setOutputData(int example, vector<int> nums, vector<vector<int>> expected);

	void printSolution();
	void printVector(vector<int> vec);
	void printVector(vector<vector<int>> vec);

private:
	int _example;
	vector<int> _nums;
	vector<vector<int>> _expected, _aсtual;

	void setExample(int example);
	void setNums(vector<int> nums);
	void setExpected(vector<vector<int>> expected);
	void setAсtual();
};

