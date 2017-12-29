#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int p,k;

	cin >> p >> k;

	if (k == 0 && p == 0)  // norm
	
		cout << "0";
	
	else if ((p == 0) && (k >= 1) && (k <= 16)) //norm
	
		cout << k / 2;
	
	else if ((k == 0) && (p >= 1) && (p <= 16)) //norm 
	
		cout << p / 2;
	
	else if ((p >= 1) && (p <= 16) && (k >= 1) && (k <= 16)) // norm
	
		cout << p*k / 2;
	else
	
		cout << "0";
	
	return 0;
}