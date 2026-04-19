#include <iostream>
#include"clsString.h"

using namespace std;

int main()
{
	clsString String1("ilyass");

	string S1 = "the number of words in this string should be ten";

	String1.Value = "I don't what to write but i'll write whatever :)";

	cout << String1.GetValue();

	cout << "Number of words in the string is : " << String1.CountWords();

	cout<< "\n\nNumber of words in S1 is : " << clsString::CountWords(S1);

	String1.PrintWordsSeperately();

	clsString::PrintWordsSeperately(S1);

	cout << "\nLetter count in string1 is : " << String1.LetterCount('s');

	cout << "\n\nUppercase FirstLetters of S1 :\n";

	S1 = clsString::UppercaseFirstLetters(S1);

	cout << S1<<"\n\n";

}
