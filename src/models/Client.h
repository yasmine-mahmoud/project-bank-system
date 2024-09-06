#pragma once
#include <iostream>
#include <string>
#include <cctype>
#include "validation.h"
#include "Person.h"

using namespace std;

class Client : public Person {
private:
    static int clientCounter;
    string password;
    double balance;

public:
    string name;

    Client();

    Client(string password , string name, double balance);
  
    bool setBalance(double balance);
  
    double getBalance();
   
    void deposit(double amount);
   
    void withdraw(double amount);
 
    void checkbalance();
   
    void transfer(Client& otherClient, double amount);

    void dispaly();
 
    ~Client() {};
};

