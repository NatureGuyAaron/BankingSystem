#include "Account.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <stdexcept>
#include <ctime>
#include <fstream>


using namespace std;



class Node { 

public:
 
    Account Acc;
    Node* next;

    Node(Account acc)
        : Acc(acc)
    {
 
        next = nullptr;
    }

    
};
class LinkedList {
public:
    Node* head;
    Node* tail;
    int length;


    LinkedList(Account acc)
    {
        Node* newNode = new Node(acc);
        head = nullptr;
        tail = nullptr;
        length = 1;

    }

    ~LinkedList()
    {

        Node* temp = head;

        while (head)
        {
            head = head->next;
            delete temp;
            temp = head;
        }
    }

    void append(Account acc)
    {
        Node* newNode = new Node(acc);
        if (length == 0)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            length++;
        }


    };

    int getlength()
    {
        return length;
    };

    bool get(int pin)
    {



    }
    void print();





};
int main()
{

    //implement redo and undo functions
    //use stacks and queues 

    
    LinkedList* linkedlist = new LinkedList(Account(1234) );
    linkedlist->append(Account(999));
    int pin;
    bool running = true;
    string selection;
    int amount;

    while (running) {
        
        try {


            bool validUser = false;

           cout << "Enter your acc pin: ";
            cin>>pin;

            

            // Loop through the array to check each Account's details
            // How can I get my linkedlist to check the pin of someone
            while(linkedlist.)
                    validUser = true;
      
                }
                else
                {

                    cout << "Wrong pin  ";
                    cin >>pin;
                }


                //else {
                //    validUser = false;
                //    cout << "Please Re-enter your pin \n" << endl;
                //    cin >> pin;

                //}
            }

            if (validUser) {
                while (running) {
                    cout << "1. Deposit" << endl;
                    cout << "2. Withdraw" << endl;
                    cout << "3. Check Balance" << endl;
                    cout << "4. Quit" << endl;
                    cout << "Enter your choice: ";
                    cin >>selection;

                    try {
                        //converts string to int
                        int choice = stoi(selection);

                        switch (choice) {
                        case 1:
                            cout << "Enter the amount to deposit: ";
                            cin >> amount;
                            Arr[0].deposit(amount);
                            break;

                        case 2:
                            cout << "Enter the amount to withdraw: ";
                            cin >> amount;
                            Arr[i].withdraw(amount);
                            break;

                        case 3:
                            cout << "Balance: " << Arr[0].displayBal() << endl;
                            break;

                        case 4:
                            running = false;
                            break;

                        default:
                            cout << "Invalid choice." << endl;
                        }
                    }
                    catch (invalid_argument& e) {
                        cout << "Invalid input. Please enter a valid integer choice." << endl;
                        // Optionally rethrow the exception if needed
                        // throw;
                    }
                  
                } // end while loop
            }
        }
        catch (...) {
            cout << "Invalid input. Please try again." << endl;
        }
    } // end while

    return 0;
}
