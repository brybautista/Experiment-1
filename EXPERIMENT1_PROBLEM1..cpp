#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()

{ 
cout << fixed << showpoint << setprecision(2);
double p, g, s, b, r, e, o, i;
r = 250; 
i = 200; 
o = 150;
e = 100;

cout << " TICKET BREAKDOWN " << endl;
cout << endl; 
cout << endl; 
cout << endl; 


cout << " ENTER THE NUMBER OF TICKETS SOLD " << endl; 
cout << endl; 



cout << " PREMIUM TICKET : ";
cin >> p;
cout << endl;

cout << " BOX TICKET : ";
cin >> b;
cout << endl;

cout << " SIDELINE TICKET : ";
cin >> s;
cout << endl;

cout << " GENERAL TICKET : ";
cin >> g;
cout << endl; 

cout << " TOTAL SALES IN PREMIUM TICKET : " << p*r << endl;
cout << " TOTAL SALES IN SIDELINE TICKET : " << s*i << endl;
cout << " TOTAL SALES IN BOX TICKET : " << b*o << endl;
cout << " TOTAL SALES IN GENERAL TICKET : " << g * e << endl;

getch();
return 0;

}
