/*
CSC 134
M2HW1 - Gold
Keion Dobbins
2/16/25
*/
#include <iostream>

using namespace std;

int main()
{
    string name;
    double balance, deposit, withdrawl, newbalance;
    int accountNum = rand() % 900000 + 100000;
     



    cout << "Welcome to KD Bank!" << endl;
    cout << "Please enter your name: " << endl;
    cin >> name;
    cout << " " << endl;

    cout << "Hey " << name << "! Enter your starting account balance: $" << endl;
    cin >> balance;
    cout << " " << endl;

    cout << "Enter the amount you would like to withdraw: $" << endl;
    cin >> withdrawl;
    cout << " " << endl;

    cout << "Enter the amount you would like to deposit: $" << endl;
    cin >> deposit;
    cout << " " << endl;
    cout << "Processing..." << endl;
    cout << " " << endl;
    cout << "Still Processing..." << endl;
    cout << " " << endl;
    newbalance = balance - withdrawl + deposit;

    cout << "----- Account Summary -----" << endl;
    cout << " Account Name: " << name << endl;
    cout << " Account Number: " << accountNum << endl;
    cout << " Account Balance: $" << newbalance << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " Thank you! Come again!" << endl;
    



    cout << " " << endl;
return 0;    
}