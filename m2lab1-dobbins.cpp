/*
CSC 134
M2LAB1
Keion Dobbins
02/16/25
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
const double COST_PER_CUBIC_FOOT = 0.23;
const double CHARGE_PER_CUBIC_FOOT = 0.5;
double length, width, height, volume, cost, charge, profit;

    cout << setprecision(2) << fixed << showpoint;

    cout << "Enter the dimensions of the crate (in feet): " << endl;
    cout << "Length: " << endl;
    cin >> length;
    cout << "Width: " << endl;
    cin >> width;
    cout << "Height: " << endl;
    cin >> height;
    cout << " " << endl;

volume = length * width * height;
cost = volume * COST_PER_CUBIC_FOOT;
charge = volume * CHARGE_PER_CUBIC_FOOT;
profit = charge - cost;

    cout << "The volume of the crate is " << volume << " cubic feet." << endl;
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    cout << " " << endl;
    

return 0;    
}

