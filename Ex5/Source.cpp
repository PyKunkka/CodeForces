#include <iostream>
#include <stdio.h>

using namespace std;

void main() 
{ 
	long long n, m, a;
	cin >> n >> m >> a;
	cout << ((--n / a + 1)*(--m / a + 1));
}