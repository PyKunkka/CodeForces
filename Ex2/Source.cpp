#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
using namespace std;

bool isVowels(char character) {
	string vowels = "aeiouy";
	for (int i = 0; i < vowels.length(); i++)
	{
		if (character == vowels[i] || character == toupper(vowels[i])) 
		{
			return true;
		}
	}
	return false;
}

bool isComfortable(char character) {
	return !isVowels(character);
}


int main()
{
	string w, result="";
	cout << "";
	cin >> w;
	for (int i = 0; i < w.length() ; i++)
	{
		char ch = w[i];
		if (isComfortable(w[i])) {
			printf("%c%c", '.',tolower(w[i]));
		}
	}
}