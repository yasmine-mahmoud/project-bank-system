#include "Client.h"

int Client::clientCounter = 100;

    Client::Client() :Person(), balance(0) {
        clientCounter++;
        setid(clientCounter);
    };
    
    Client::Client( string password, string name,  double balance):Person(password,name) {
        setBalance(balance);
        clientCounter++;
        setid(clientCounter);
    }

    bool Client::setBalance(double balance) {
        if (Validation::validatebalancee(balance)) {
            this->balance = balance;
            return true;
        }
        return false;
    }

    double Client::getBalance() {
        return this->balance;
    }

    void Client::deposit(double amount) {
        double newBalance = getBalance() + amount;
        setBalance(newBalance);
        cout << "New balance: " << getBalance() << endl;
    }

    void Client::withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            this->balance -= amount;
            cout << "New balance = " << getBalance() << endl;
        }
        else {
            cout << "sorry, amount exceeded your balance ^_^ " << endl;
        }
    }

    void Client::checkbalance() {
        cout << "the client id: " << getid() << " has in his balance " << getBalance() << endl;
    }

    void Client::transfer(Client& otherClient, double amount) {
        if (amount > 0 && amount <= balance) {
            this->balance -= amount;
            otherClient.balance += amount;

            cout << "Transferred " << amount << " to " << otherClient.getname() << " successfully\n";
            cout << "your new balance = " << this->balance << "\n";
        }
        else {
            cout << "Invalid transfer amount.\n";
        }
    }

    void Client::dispaly() {
        Person::dispaly();
        cout << "Balance: " << getBalance() << endl;
    }


