#include "Account.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include <vector>




using namespace std;


class Node {

public:

    Account Acc;
    Node* next;
    Node* pre;
    Node(Account acc)
       
    {
        Acc = acc;
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
        head = newNode;
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


    int  getLength()
    {

        return length;
    };



    Node* search(int accNum)
    {
        if (length == 0)
        {
            return nullptr;
        }

        Node* temp = head;

        while (temp->Acc.getAccNum() != accNum)
        {
            temp = temp->next;

        }

        return temp;
    }

};



int main()
{

    //implement redo and undo functions
    //use stacks and queues 


    LinkedList* linkedlist = new LinkedList(Account("John Ralf", 1234));



    linkedlist->append(Account("Mandy JnoBaptiste", 999));
    linkedlist->append(Account("Roy Astaphans", 789));
    linkedlist->append(Account("Jill evans", 5019));

    Account user;
    int AccNum;
    int pin;
    bool running = true;
    string selection;
    int amount;
    int length = linkedlist->getLength();



    while (running) {




        {


            bool validuser = false;

            cout << "Enter Account Number ";
            cin >> AccNum;
            cout << "enter your acc pin: ";
            cin >> pin;
            cout << endl;

            if (linkedlist->search(AccNum) != nullptr) {
                Account acc = linkedlist->search(AccNum)->Acc;
                if (acc.getAccNum() == AccNum && acc.getPin() == pin)

                {
                    validuser = true;

                    while (running) {
                        cout << "1. deposit" << endl;
                        cout << "2. withdraw" << endl;
                        cout << "3. check balance" << endl;
                        cout << "4. quit" << endl;
                        cout << "enter your choice: ";
                        cin >> selection;

                        try {
                            int choice = stoi(selection);

                            switch (choice) {
                            case 1:
                                cout << "enter the amount to deposit: ";
                                cin >> amount;
                                acc.deposit(amount);
                                break;

                            case 2:
                                cout << "enter the amount to withdraw: ";
                                cin >> amount;
                                acc.withdraw(amount);
                                break;

                            case 3:
                                acc.displayBal();
                                break;

                            case 4:
                                running = false;
                                break;

                            default:
                                cout << "invalid choice." << endl;
                            }
                        }
                        catch (invalid_argument& e) {
                            cout << "invalid input. please enter a valid integer choice." << endl;
                        }
                    }
                }
                else
                {
                    cout << "wrong value" << endl;
                }
            }
        }

    }
}