#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "";
	int n;
	cin >> n;
	string a[100];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		string current = a[i];
		if (current.size() > 10) {
			cout << current[0] << current.size() - 2 << current[current.size() - 1] << endl;
		}
		else {
			cout << current << endl;
		}
	}

	//system("pause");
}