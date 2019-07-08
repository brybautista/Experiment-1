#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()

{ 
double net, pay, x, y;


cout << fixed << showpoint << setprecision(3);
cout << endl; 

cout << " ENTER NET BALANCE : "; cin >> net;
cout << endl;

cout << " ENTER PAYMENT MADE : "; cin >> pay;
cout << endl;

cout << " NO. DAYS IN BILLING CYCLE: "; cin >> x;
cout << endl;

cout << " NO. OF DAYS BEFORE BILLING CYCLE: "; cin >> y; 
cout << endl;


cout << " AVERAGE DAILY BALANCE : " << ((net*x - pay*y)/x) << endl;
cout << endl;


cout << " INTEREST: " << ((net*x - pay*y)/x) * 0.0097 << endl;



getch();
return 0;




}
