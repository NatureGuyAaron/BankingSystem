#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Account.h"

    float balance;
    int accNum;
    int pin;

    void Account:: printAccnum() {
        std::cout << accNum;
    }
    //Create numbers in sequence instead
    int  Account:: genAccNum() {
        int x = time(0);
        srand(x);
        accNum = rand();
        return accNum;
    }


    Account:: Account(int pin) {
        accNum = genAccNum();
        balance = 0;
        this->pin = pin;
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
        // Provide an implementation or remove if not needed.
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


