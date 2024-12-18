﻿

#include <iomanip>


#ifndef USE_SET

#include <iostream>
#include "translator.h"
#include <string>

int main()
{
	string str;

	setlocale(LC_ALL, "Russian");

	cout << "Enter an arithmetic expression: ";
	std::getline(std::cin, str);
	Translator t(str);
	map<string, double> values;
	if (t.GetStatus()) {
		vector<string> name_vars = t.GetOperands();
		for (const auto name : name_vars) {
			double value;
			cout << "Enter value of " << name << ": ";
			cin >> value;
			values[name] = value;
		}
	}
	try {
		cout << "Result: " << t.Calculate(values) << endl;
	}
	catch (int code) {
		cout << "The expression cannot be evaluated" << endl;
	}
}
#endif