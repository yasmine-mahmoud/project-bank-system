#pragma once
#include "Admin.h"
#include "Person.h"
#include "Employee.h"

int Admin::adminCounter = 22000;

	Admin::Admin() : Employee() {
		adminCounter++;
		setid(adminCounter);
		this->employees = new vector<Employee*>();
	}

	Admin::Admin(string password, string name, double salary, vector<Client*>* clients, vector<Employee*>* employee):Employee(password , name, salary , clients){
		adminCounter++;
		setid(adminCounter);
		setEmployee(employee);
	}

	void Admin::setEmployee(vector<Employee*>* employee) {
		this->employees = employee;
	}

	vector<Employee*>* Admin::getEmployee() {
		return this->employees;
	}

	void Admin::addNewEmployee(Employee* newemployee) {
		this->employees->push_back(newemployee);
	}

	bool Admin::searchForEmployee(int id) {
		for (int i = 0; i < employees->size(); i++) {
			if (employees->at(i)->getid() == id) {
				employees->at(i)->dispaly();
				return true;
			}
		}
		return false;
	}

	bool Admin::editEmployee(Employee &e, string newname, double newsalary) {
		for (int i = 0; i < employees->size(); i++) {
			if (employees->at(i)->getid() == e.getid()) {
				employees->at(i)->setname(newname);
				employees->at(i)->setsalary(newsalary);
				return true;
			}
		}
		cout << "this employee doesnt exist" << "\n";
		return false;
	}

	 void Admin::listAllEmployees() {
		for (int i = 0; i < employees->size(); i++) {
			employees->at(i)->dispaly();
			cout << "\n-----------------------------\n";
		}
	}

	void Admin::dispaly() {
		Person::dispaly();
		cout << "Salary: " << getsalary() << endl;
		cout << "list of employees:\n";
		listAllEmployees();
	}




