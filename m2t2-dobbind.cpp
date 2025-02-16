// csc 134
// m2t2
// keion
// 2/16/24

#include <iostream>

using namespace std;

int main()
{
    string name;
    int apples;
    double ppapple = 0.25;

    cout << "Please enter yout name :" << endl;
    cin >> name;
    cout << " " << endl;

    cout << "hey " << name << "! how many apples would you like?" << endl;
    cin >> apples;
    cout << " " << endl;

    cout << "cool! for " << apples << " apples..." << endl;

    double total = apples * ppapple;

    cout << "your total is: $" << total << endl;
    cout << "thank you! come again!" << endl;
    cout << " " << endl;
}