#include "Output.h"
#include "Solution.h"
#include <iostream>
#include "CheckSolution.h"

using namespace std;

void Output::setExample(int example) {
	_example = example;
}

void Output::setNums(vector<int> nums) {
	_nums = nums;
}

void Output::setExpected(vector<vector<int>> expected) {
	_expected = expected;
}

void Output::setAсtual() {
	Solution solution;
	_aсtual = solution.threeSum(_nums);
}

void Output::setOutputData(int example, vector<int> nums, vector<vector<int>> expected)
{
	setExample(example);
	setNums(nums);
	setExpected(expected);
}

void Output::printSolution(){
	cout << "============ Тест " << _example << " ============" << endl;
	cout << " Входные данные: nums = ";
	printVector(_nums);
	cout << endl;
	cout << " Ожидаемый результат: ";
	printVector(_expected);
	cout << endl;
	setAсtual();
	cout << " Полученный результат: ";
	printVector(_aсtual);
	cout << endl;
	cout << "============ Проверка ===============" << endl;
	CheckSolution checkSolution;
	checkSolution.setCheckData(_expected, _aсtual);
	if (checkSolution.checkSolution()) {
		cout << " Решение верно" << endl;
	}
	else {
		cout << " Решение неверно" << endl;
	}
	cout << "=====================================\n" << endl;
}

void Output::printVector(vector<int> vec){
	cout << "[ ";
	for (auto& i : vec) {
		cout << i;
		if (&i != &vec.back()) cout << ", ";
	}
	cout << " ]";
}

void Output::printVector(vector<vector<int>> vec){
	cout << "[ ";
	for (auto& i : vec) {
		cout << "[ ";
		for (auto& j : i) {
			cout << j;
			if (&j != &i.back()) cout << ", ";
		}
		cout << " ]";
		if (&i != &vec.back()) cout << ", ";
	}
	cout << " ]";
}
