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
    // Question 1

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
    newbalance = balance - withdrawl + deposit;
    cout << "----- Account Summary -----" << endl;
    cout << " Account Name: " << name << endl;
    cout << " Account Number: " << accountNum << endl;
    cout << " Account Balance: $" << newbalance << endl;
    cout << " " << endl;
    cout << " " << endl;
    
    // Question 2

    const double costperfoot = 0.3;
    const double maxperfoot = 0.52;
    double feet, chargeperfoot, cost, total, profit;
    cout << "Enter the amount of storage space in cubic feet: " << endl;
    cin >> feet;
    cout << " " << endl;
    cout << "Enter your charge per cubic foot (This cannot exceed $" << maxperfoot << "): " << endl;
    cin >> chargeperfoot;
        if (chargeperfoot > maxperfoot)
        {
            cout << "Charge per cubic foot cannot exceed $" << maxperfoot << endl;
            cout <<"Enter your charge per cubic foot (This cannot exceed $" << maxperfoot << "): " << endl;
    cin >> chargeperfoot;
        }
    cost = feet * costperfoot;
    total = feet * chargeperfoot;
    profit = total - cost;
    cout << "\n----- Storage Summary-----" << endl;
    cout << "Storage Space Used: " << feet << " cubic feet" << endl;
    cout << "Cost per Cubic Foot: $" << chargeperfoot << endl;
    cout << "Total Cost: $" << cost << endl;
    cout << "Total Charge: $" << total << endl;
    cout << "Total Profit: $" << profit << endl;
    cout << " " << endl;
    cout << " " << endl;
     // Question 3

    int pizzas, slices, visitors, totalslices, slicesneeded, leftovers;
    cout << "Number of pizzas were ordered: ";
    cin >> pizzas;
    cout << " " << endl;
    cout << "Number of slices per pizza: ";
    cin >> slices;
    cout << " " << endl;
    cout << "Number of visitors: ";
    cin >> visitors;
    cout << " " << endl;
    totalslices = pizzas * slices;
    slicesneeded = visitors * 3;
    leftovers = totalslices - slicesneeded;
    cout << "----- Pizza Party Summary ----- " << endl;
    cout << "Total slices available: " <<totalslices << endl;
    cout << "Total slices needed: " <<slicesneeded << endl;
        if (leftovers >=0)
        {
            cout << "Leftover slices: " << leftovers << endl;
        } else {
            cout << "Not enough pizza! You need " << -leftovers << " more slices." << endl;
        }
        cout << " " << endl;
        cout << " " << endl;
    // Question 4
    
   string letsGo = "Let's go ";
   string school = "FTCC!";
   string team = "Trojans!";
   string cheerOne = letsGo + school;
   string cheerTwo = letsGo + team;
   cout << cheerOne << endl;
   cout << cheerOne << endl;
   cout << cheerOne << endl;
   cout << cheerTwo << endl;
   
    cout << " " << endl;
return 0;    
}