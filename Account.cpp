#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Account.h"
#include <fstream>
#include <string>

    float balance;
    int accNum;
    int pin;

    void Account:: printAccnum() {
        std::cout << accNum;
    }

    Account:: Account(int pin) {

        balance = 0;
        this->pin = pin;
    }


    Account::Account()
    {

    }

    int Account:: getAccNum()
    {
        return accNum;
    }

    void Account:: setPin(int pin) {
        this->pin = pin;
    }

    void Account:: welcome() {
        std::cout << "Welcome Back " << accNum << " We missed You!!";
    }

    int Account::getPin() {
        return pin;
    }

    
    void Account:: logDetails() {
        std::ofstream file("Atm.txt");
        std::string AccN = std::to_string(getAccNum()) ; 
        
    }

    bool Account:: verifyPin(int pin) {

       
        return (this->pin == pin);
        
     
    }

    void Account:: deposit(int amount) {
        balance += amount;
        std::cout << "Deposit was successful";
        printAccnum();
    }

    void Account:: withdraw(int amount) {
        balance -= amount;
        std::cout << "Withdrawal was successful";
        printAccnum();
    }

    float Account:: displayBal() {
        return balance;
    }

    void printReceipt()
    {

    };


