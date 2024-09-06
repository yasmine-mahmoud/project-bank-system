#pragma once
#include "Person.h"
#include "Employee.h"

class Admin :public Employee
{
private:
	static int adminCounter;
	vector<Employee*>* employees;
public:

	Admin();


	Admin(string password, string name, double salary, vector<Client*>* clients , vector<Employee*>* employee);
	

	void setEmployee(vector<Employee*>* employee);
	

	vector<Employee*>* getEmployee();
	

	void addNewEmployee(Employee* newemployee);
	

	bool searchForEmployee(int id);
	

	bool editEmployee(Employee &e, string newname, double newsalary);
	

	 void listAllEmployees();
	

	void dispaly();


	~Admin() {};
};

