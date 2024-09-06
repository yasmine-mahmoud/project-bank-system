#include "Validation.h"
#pragma once


	  bool Validation::validatename(const string& nname) {
		  if (nname.length() >= 5 && nname.length() <= 20) {
			  bool isalphabetic = false;
			  for (int i = 0; i < nname.length(); i++) {
				  if (isalpha(nname[i])) {
					  isalphabetic = true;
				  }
				  if (!isalphabetic)
					  return false;
			  }
			  if (isalphabetic)
				  return true;
		  }
		return false;
	}

	 bool Validation::validatepass(const string& pass) {
		if (pass.length() >= 8 && pass.length() <= 20) {
			return true;
		}
		return false;
	}

	 bool Validation::validatebalancee(const double& balancee) {
		if (balancee >= 1500) {
			return true;
		}
		return false;
	}

	 bool Validation::validatesalary(const double& salary) {
		if (salary >= 5000) {
			return true;
		}
		return false;
	}