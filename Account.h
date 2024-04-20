#pragma once
#include <string>

class Account {
private:
    float balance;
    int pin;
    int accNum;

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
    
    int removeFile();
    void welcome();
    void setName(std:: string name);
    void WriteAccount();
    void setAccNum();
    int getPin();
    void logDetails();
    bool verifyPin(int accNum, int pin);
    void deposit(int amount);
    void withdraw(int amount);
    float displayBal();
};
