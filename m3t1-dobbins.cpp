/*
CSC 134
M2T1
Keion Dobbins
02/17/25
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
 // declare vairibles
int widthone, lengthone, areaone, widthtwo, lengthtwo, areatwo;

 // ask for user input
    cout << "please enter the width and height of the first" << endl;
    cout << "rectangle, seperated by a space or newline" << endl;
cin >> widthone >> lengthone;
cout << " " << endl;

cout << "please enter the width and height of the second" << endl;
    cout << "rectangle, seperated by a space or newline" << endl;
cin >> widthtwo >> lengthtwo;
cout << " " << endl;

// calculate answer
areaone = widthone * lengthone;
areatwo = widthtwo * lengthtwo;
// display results
cout << "rectangle one has an area of: "<< areaone << endl;
cout << "rectangle two has an area of: "<< areatwo << endl;
cout << " " << endl;
return 0;    
}