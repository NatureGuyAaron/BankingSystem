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
    Node* pre;
    Node(Account acc)
        : Acc(acc)
    {
 
        next = nullptr;
        pre = nullptr;
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
        head = newNode ;
        tail = newNode;
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
            newNode->pre = tail;
            tail = newNode;
       
        }
        length++;

    };

    Node* get(int index)
    {
        
        if (index < 0 || index >= length)
        {

            return nullptr;
        }

        Node* temp = head;
        for (int i = 0; i < index; i++)
        {

            temp = temp->next;
        }

        return temp;
    }
    int getlength()
    {
        return length;
    };

    void print();





};
int main()
{

    //implement redo and undo functions
    //use stacks and queues 

    
    LinkedList* linkedlist = new LinkedList(Account(1234) );
    linkedlist->append(Account(999));
    linkedlist->append(Account(789));
    linkedlist->~LinkedList();
    int pin;
    bool running = true;
    string selection;
    int amount;


    
    //while (running) {
    //  
    //    try {


    //        bool validuser = false;

    //       cout << "enter your acc pin: ";
    //        cin>>pin;

    //        

            // loop through the array to check each account's details
            // how can i get my linkedlist to check the pin of someone
    //        if(linkedlist->get(i))
    //                validuser = true;
    //  
    //            }
    //            else
    //            {

    //                cout << "wrong pin  ";
    //                cin >>pin;
    //            }


    //            //else {
    //            //    validuser = false;
    //            //    cout << "please re-enter your pin \n" << endl;
    //            //    cin >> pin;

    //            //}
    //        }

    //        if (validuser) {
    //            while (running) {
    //                cout << "1. deposit" << endl;
    //                cout << "2. withdraw" << endl;
    //                cout << "3. check balance" << endl;
    //                cout << "4. quit" << endl;
    //                cout << "enter your choice: ";
    //                cin >>selection;

    //                try {
    //                    //converts string to int
    //                    int choice = stoi(selection);

    //                    switch (choice) {
    //                    case 1:
    //                        cout << "enter the amount to deposit: ";
    //                        cin >> amount;
    //                        arr[0].deposit(amount);
    //                        break;

    //                    case 2:
    //                        cout << "enter the amount to withdraw: ";
    //                        cin >> amount;
    //                        arr[i].withdraw(amount);
    //                        break;

    //                    case 3:
    //                        cout << "balance: " << arr[0].displaybal() << endl;
    //                        break;

    //                    case 4:
    //                        running = false;
    //                        break;

    //                    default:
    //                        cout << "invalid choice." << endl;
    //                    }
    //                }
    //                catch (invalid_argument& e) {
    //                    cout << "invalid input. please enter a valid integer choice." << endl;
    //                    // optionally rethrow the exception if needed
    //                    // throw;
    //                }
    //              
    //            } // end while loop
    //        }
    //    }
    //    catch (...) {
    //        cout << "invalid input. please try again." << endl;
    //    }
    //} // end while

    //return 0;
}
