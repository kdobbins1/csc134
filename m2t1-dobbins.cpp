// csc 134
// m2t1
// keion
// 2/16/24

#include <iostream>

using namespace std;

int main()
{
    // variables are like mailboxes
    string name = "kd";
    int num_apples = 10;            // int are whole numbers, like 3 but not 3.5
    double price_each = 0.25;       // double stands for floating point -- numbers like 3.5, 1.23, or 7.193759

    // think of it like an assembly line -- put words or numbers on in the order they should print out.
    cout << "welcome to the " << name << " apple farm!" << endl;
    cout << "we have " << num_apples << " in stock" << endl;
    cout << "each apple costs " << price_each << endl;

    // let's do math
    double total_price = num_apples * price_each;

    // finally print answer
    cout << " " << endl;
    cout << "for " << num_apples << " kd apples" << endl;
    cout << "your total is: $" << total_price << endl;
    cout << "thank you! come again!" <<endl;
    cout << " " << endl;

    return 0;
}