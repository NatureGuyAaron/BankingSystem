#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Account.h"
#include <fstream>
#include <string>
#include <filesystem>



using namespace std;


// ACCOUNT MEMBERS
    float balance;
    int pin;
    int accNum;
    int static NumberOfAccounts = 0;
   int static UniqueAccountNumber = 1;
   std::ofstream accountFile("account.txt");
   std::string Name;


    Account:: Account(std:: string Name , int pin) 
    {
     
        balance = 0;
        this->pin = pin;
        this->Name = Name;
        accNum = UniqueAccountNumber++;
        getAccNum();
        WriteAccount();
        NumberOfAccounts++;
       
        
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

    //PROBLEM FILE CREATES MULTIPLE COPIES OF THE SAME ACCOUNT

    void Account::WriteAccount() {

        std::ofstream accountFile("account.txt", std::ios::app); // Append mode
        std::string line;
        if (accountFile.is_open()) {
            accountFile << "Account: " << getName() << " " << getAccNum() << " " << getPin() << std::endl;
            accountFile.close();
        }
        else {
            std::cerr << "Unable to open file!" << std::endl;
        }

    }//end method

    //IMPLEMENT A FUNCTION TO GET THE ACCOUNT NAME AND NUMBER 
/* 


    int removefile()
    {

        if (remove("account.txt") != 0)
            perror("error deleting file");
        else
            puts("file successfully deleted");
        return 0;
    }


*/


    bool Account:: verifypin( int pin)
    {
        //THESE SNIPPETS OF CODE WAS OBTAIN FROM TUTSWOOD 
        string search, line;
        int offset = 1 ;
        std::fstream my_file;
        my_file.open("C:\\Users\\Jigz2\\source\\repos\\BankingSystem\\BankingSystem\\account.txt");
        cout << " Enter You pin number" << endl;
        cin >>search;
        if (my_file.is_open())
        {
            while (!my_file.eof())
            {
                getline(my_file, line);
                if ((offset == line.find(search, 0)) != string::npos)
                {
                    cout << "Successful login" << search << endl;
                    return true;
                }//end 2nd if

                else
                {

                    cout << " the pin could not be found";
                }
            }//end while



            my_file.close();

        }
        else
        {
            cout << "could not find file" << endl;
            system("PAUSE");
            return false;
        }
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

 


