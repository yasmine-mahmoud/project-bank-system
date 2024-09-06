#pragma once
#include <iostream>
#include<string>
#include "validation.h"
#include "Person.h"
#include "Client.h"
#include<vector>

using namespace std;

class Employee :public Person
{
private:
	static  int numberOfemployee;
	double salary;
	vector<Client*>* clients;

public:
	
	Employee();

	Employee(string password, string name, double salary, vector<Client*>* clients);
	
	bool setclients(vector<Client*>* clients);
	

	void setsalary(double salary);
	
	double getsalary();

	bool addclient(Client* Client);


	bool searchClientById(int id);

	void listallclients();
	

	bool editClientInfo(Client &c, string newname, double newbalance);


	void dispaly();
	
	~Employee() {};
};

