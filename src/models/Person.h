#pragma once
#include <iostream>
#include<string>
#include "Validation.h"
#include<vector>

class Person
{
private:
	int id;
	string password;
public:
	string name;


	Person() {
		this->id = 0;
		this->password = " ";
		this->name = " ";
	}

	Person( string password, string name){
		setpassword(password);
		setname(name);
	}

	void setid(int id) {
		this->id = id;
	}

	bool setpassword(string password) {
		if (Validation::validatepass(password)) {
			this->password = password;
			return true;
		}
		return false;
	}

	bool setname(string name) {
		if (Validation::validatename(name))
		{
			this->name = name;
			return true;
		}
		return false;
	}

	int getid() {
		return this->id;
	}

	string getpassword() {
		return this->password;
	}

	string getname() {
		return this->name;
	}

	bool login(string pass, int idd) {
		if (this->id != idd) {
			cout << "Incorrect ID" << endl;
			return false;
		}
		if (this->password != pass) {
			cout << "Incorrect password" << endl;
			return false;
		}
		return true;
	}

	void dispaly() {
		cout << "ID: " << getid() << endl;
		cout << "Name: " << getname() << endl;
	}

	~Person() {};
};

