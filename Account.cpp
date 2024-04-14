#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Account.h"
#include <fstream>
#include <string>


    float balance;
    int pin;

   int static AccNum = 0;

    Account:: Account(int pin) {

        balance = 0;
        this->pin = pin;
        genAccNum();
        Writeaccount();
   
        
    }


    Account:: Account()
    {

    }

    void Account:: genAccNum()
    {
        AccNum = +1;

    };

    int Account:: getAccNum()
    {
   

        return AccNum;
       
    }

    void Account:: setPin(int pin) {
        this->pin = pin;
    }

    void Account:: welcome() {
        std::cout << "Welcome Back " << AccNum << " We missed You!!";
    }

    int Account::getPin() {
        return pin;
    }

    void Account:: Writeaccount()
    {
        std::ofstream accountF("account.txt");

        accountF << getAccNum();
     

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

 


