 #include <iostream>

using namespace std;

int main()
{
	int amofgame, anton_w = 0, denis_w = 0;
	cin >> amofgame;
	if (amofgame > 0 && amofgame <= 1000000)
	{
		char symArr[1000000] = "";
		cin >> symArr;
		for (int i = 0; i < amofgame; i++)
		{
			if ((symArr[i] == 'A') || (symArr[i] == 'D'))
			{
				if (symArr[i] == 'A')
					anton_w++;
				else if (symArr[i] == 'D')
						denis_w++;
			}
		}
		if (anton_w < denis_w)
			cout << "Danik" << endl;
		else if (anton_w > denis_w)
			cout << "Anton" << endl;
		else 
			cout << "Friendship" << endl;
	}
}