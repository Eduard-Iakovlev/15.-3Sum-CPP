#pragma once
#include <vector>

using namespace std;

class CheckSolution{
public:
	CheckSolution() = default;
	void setCheckData(vector<vector<int>>& expected, vector<vector<int>>& actual);
	bool checkSolution();
private:
	vector<vector<int>> _expected, _actual;
	void setExpected(vector<vector<int>> expected);
	void setActual(vector<vector<int>> actual);
};

