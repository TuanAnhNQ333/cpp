#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    cout << std::setprecision(12);
  double d;
	d = 9.87654321;
	cout << d << endl;
	d = 987.654321;
	cout << d << endl;
	d = 987654.321;
	cout << d << endl;
	d = 9876543.21;
	cout << d << endl;
	d = 0.0000987654321;
	cout << d << endl;
	d = 1.23456789;
	cout << d << endl;
	
   return 0;
}
