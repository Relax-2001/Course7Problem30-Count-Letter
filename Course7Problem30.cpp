#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString()
{
	string UserString = " ";
	cout << "Enter a string\n";
	getline(cin , UserString);
	return UserString;
}

char ReadLetter()
{
	char Letter = ' ';
	cout << "Enter a letter to search:\n";
	cin >> Letter;
	return Letter;
}

short CalculateLetterIterations(string & UserString , char Letter)
{
	short Counter = 0;
	for (short i = 0 ; i < UserString.length() ; i++)
	{
		if (UserString[i] == Letter)
			Counter++;
	}
	return Counter;

}

int main()
{
	string UserString = ReadString();
	char Letter = ReadLetter();

	cout << "Letter \'"<< Letter << "\' iterations = " << CalculateLetterIterations(UserString, Letter);

	return 0;
}
