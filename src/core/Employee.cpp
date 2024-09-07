#include "Employee.h"


	 int Employee::numberOfemployee = 11000;


	Employee::Employee():Person() ,salary(0){
		numberOfemployee++;
		this->setid(numberOfemployee);
		this->clients = new vector<Client*>();
	}

	Employee::Employee(string password, string name, double salary, vector<Client*>* clients) :Person(password, name) {
		numberOfemployee++;
		this->setid(numberOfemployee);
		setsalary(salary);
		setclients(clients);
	}

	bool Employee::setclients(vector<Client*>* clients)
	{

		this->clients = clients;
		return true;
	}

	bool Employee::setsalary(double salary) {
		if (Validation::validatesalary(salary))
		{
			this->salary = salary;
			return true;
		}
		return false;
	}
	double Employee::getsalary() {
		return this->salary;
	}

	vector<Client*>* Employee::getClients() {
		return this->clients;
	}

	bool Employee::addclient(Client* Client){
		this->clients->push_back(Client);
		return true;
	}

 

   bool Employee::searchClientById(int id) {
	   for (int i = 0; i < clients->size(); i++) {
		   if (this->clients->at(i)->getid() == id) {
			   this->clients->at(i)->dispaly();
			   return true;
		   }
		}
	   cout << "this client doesnt exist" << "\n";
	   return false;
	}

	void Employee::listallclients() {
		for (int i = 0; i < clients->size(); i++) {
			clients->at(i)->dispaly();
			cout << "\n-----------------------------\n";
		}
	}

	bool Employee::editClientInfo(Client &c, string newname , double newbalance,string newpass) {
		for (int i = 0; i < clients->size(); i++) {
			if (clients->at(i)->getid() == c.getid()) {
				clients->at(i)->setname(newname);
				clients->at(i)->setBalance(newbalance);
				clients->at(i)->setpassword(newpass);
				return true;
			}
		}
		cout << "this client doesnt exist" << "\n";
		return false;
	}

	void Employee::dispaly() {
		Person::dispaly();
		cout << "Salary: " << getsalary() << endl;
		cout << "list of clients:\n";
			listallclients();
	}




