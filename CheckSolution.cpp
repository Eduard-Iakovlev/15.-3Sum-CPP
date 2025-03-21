#include "CheckSolution.h"

void CheckSolution::setExpected(vector<vector<int>> expected) {
	_expected = expected;
}

void CheckSolution::setActual(vector<vector<int>> actual) {
	_actual = actual;
}

void CheckSolution::setCheckData(vector<vector<int>>& expected, vector<vector<int>>& actual) {
	setExpected(expected);
	setActual(actual);
}

bool CheckSolution::checkSolution() {
	if (_expected.size() != _actual.size()) return false;
	for (int i = 0; i < _expected.size(); i++) {
		if (_expected[i].size() != _actual[i].size()) return false;
		for (int j = 0; j < _expected[i].size(); j++) {
			if (_expected[i][j] != _actual[i][j]) return false;
		}
	}
	return true;
}