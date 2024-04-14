#pragma once

class Account {
private:
    float balance;
 
    int pin;

public:

    // Constructor
    Account(int pin);
    Account(int pin, int AccNum);
    Account();
    // Member functions
    void setPin(int pin);
    int getAccNum();
    void welcome();

    void Writeaccount();
    void genAccNum();
    int getPin();
    void logDetails();
    bool verifyPin(int pin);
    void deposit(int amount);
    void withdraw(int amount);
    float displayBal();
};
