#include <iostream>
using namespace std;


int main()
{
	char a[20] = { 0 };
	char firstName;
	int spacePos;
	cout << "enter your name: ";
	int len = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < len && (a[i] = getchar()) != '\n'; i++)
	{
		firstName = a[0];
		if (a[i] == ' ')
		{
			spacePos = i;
		}
	}
 	for (int i = spacePos+1; i < len && a[i] != '\n'; i++)
	{
		cout << a[i];
	}	
	cout << ", " << firstName << ".";
}
