#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()

{ 

double m, d;

cout << fixed << showpoint << setprecision(2);
cout << " ENTER MASS: ";
 cin >> m;
cout << " ENTER DENSITY :";
 cin >> d;
cout << " VOLUME : " << d / 4*m << endl;

getch();
return 0;

}
