#pragma once
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Validation {
public:
	static bool validatename(const string& nname);
	
	static bool validatepass(const string& pass);

	static bool validatebalancee(const double& balancee);
	
	static bool validatesalary(const double& salary);
	
};

