#include "Account.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <stdexcept>
#include <ctime>

using namespace std;



class Node {
public:
    int value;
    Node* next;

};
struct LinkedList {

    LinkedList(Account value)
    {
        Node* head;
        Node* tail;

    }
};

int main()
{
    Account user2 = Account(1234);
    Account user1 = Account(999);
    Account Arr[] = { user2, user1 };

    int pin;
    bool running = true;
    string selection;
    int amount;

    while (running) {
        
        try {


         

           cout << "Enter your acc pin: ";
            cin >>pin;

            bool validUser = false;

            // Loop through the array to check each Account's details
            for (int i = 0; i < sizeof(Arr) / sizeof(Arr[0]); i++) {
                if (Arr[i].verifyPin(pin)) {
                    validUser = true;
                    break;
                }
                else
                {

                    cout << "Wrong pin";
                    cin >> pin;
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
                            Arr[0].withdraw(amount);
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
