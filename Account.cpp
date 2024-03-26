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

    Account:: Account(int pin) {

        balance = 0;
        this->pin = pin;
    }

    //Create numbers in sequence instead
    Account:: Account( int pin , int AccNum)
        :  accNum {AccNum}, pin {pin}
    {

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


