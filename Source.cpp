 //Found Compiler error. This is not needed and breaks Visual Studio. This wsa only usable in Visual Studio 2017 for a different type of project
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string textToAnalyze;
	//Easter egg spotted! Foo is not being used!
	int foo = 0;
	//Counts the amount of vowels in the sentence or sentences used
	int vowels = 0;
	//Counts the amount of consonants used in the sentence
	int consonants = 0;
	//Counts the amount of numbers in the sentence
	int digits = 0;
	//Counts the amount of spaces used in the sentence
	int spaces = 0;
	//Counts the amount of characters used in the total string
	int lengthOfStringSubmittedForAnalysis = 0;
	//Counts the amount of symbols that are not identifiable
	int unknownCharacters = 0;
	//Counts the total amount of characters used
	int checkSum = 0;
	//Possible easter egg spotted, bar is not being used!
	int bar = 0;
	
	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);
	//This loop is analyzing one letter each pass.
	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		//This is checking to see if the current letter is a vowel or not
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			//If it is val it will run this code and should add to the vowel count
			//However this is an error because it is subtracting from out vowel count
			//todo: Canidate for a fix!
			vowels++;
		}
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A' && textToAnalyze[i] <= 'Z'))
		{
			++consonants; //originally commented out
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}
		else
		{
			++unknownCharacters;
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		//This message shows if the message was received without errors
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		//If something goes wrong, this message shows
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}