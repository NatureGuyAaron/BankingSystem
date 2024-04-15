#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Account.h"
#include <fstream>
#include <string>


    float balance;
    int pin;

 
   int static UniqueAccountNumber = 0;
   std::string Name;

    Account:: Account(std:: string Name , int pin) 
    {

        balance = 0;
        this->pin = pin;
        this->Name = Name;
    setAccNum();
        Writeaccount();
       
        
    }

    void Account:: setName(std::string Name)
    {
        
        this->Name = Name;
    }

    std::string Account:: getName()
    {

        return Name; 
    }

    Account:: Account()
    {

    }

    void Account:: setAccNum()
    {

        UniqueAccountNumber++;

    };

    int Account:: getAccNum()
    {
   

    return UniqueAccountNumber;
       
    }

    void Account:: setPin(int pin) {
        this->pin = pin;
    }

    void Account:: welcome() {
        std::cout << "Welcome Back " << UniqueAccountNumber << " We missed You!!";
    }

    int Account::getPin() {
        return pin;
    }

    void Account:: Writeaccount()
    {
        std::ofstream accountF("account.txt");

        for(int i = 0 ; i <= UniqueAccountNumber ; i++)
        {
            accountF << "Account:  " << getAccNum()  <<  " " << getName() << std::endl;
        }

    };


    bool Account:: verifyPin(int pin) {

       
        return (this->pin == pin);
        
     
    }

    void Account:: deposit(int amount) {
        balance += amount;
        std::cout << "Deposit was successful";
   
    }

    void Account:: withdraw(int amount) {
        balance -= amount;
        std::cout << "Withdrawal was successful";
   
    }

    float Account:: displayBal() {
        return balance;
    }

 


