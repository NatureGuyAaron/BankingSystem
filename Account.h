#pragma once
#include <string>

class Account {
private:
    float balance;
    int pin;
    std::string Name;
public:

    // Constructor
    Account(std::string FirstName, int pin);
    Account(int pin, int AccNum);
    Account();
    // Member functions
    void setPin(int pin);
    int getAccNum();
    std::string getName();
    void welcome();
    void setName(std:: string name);
    void Writeaccount();
    void setAccNum();
    int getPin();
    void logDetails();
    bool verifyPin(int pin);
    void deposit(int amount);
    void withdraw(int amount);
    float displayBal();
};
