#include <iostream>

using namespace std;


int main()
{ 
	int n,i,combination;
	char a[500000];
	cin>>n>>a;
	while(i<n&&a[i]=='<')combination++,i++;
	while(n--&&a[n]=='>')combination++;
	cout<<combination;
}