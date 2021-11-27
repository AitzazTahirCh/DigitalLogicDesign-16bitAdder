#include <iostream>
using namespace std;

void isPalindrome(char* string)
{
	char* pointer, * reverse;

	pointer = string;

	while (*pointer != '\0') {
		++pointer;
	}
	--pointer;

	for (reverse = string; pointer >= reverse;) {
		if (*pointer == *reverse) {
			--pointer;
			reverse++;
		}
		else
			break;
	}

	if (reverse > pointer)
		cout << "String is Palindrome"<<endl;
	else
		cout <<"String is not a Palindrome"<<endl;
}


int main()
{
	char str[50];
	cout << " Enter Word to Check if PALINDROME :";
	cin >> str;

	isPalindrome(str);
	system("pause");
	return 0;
}
