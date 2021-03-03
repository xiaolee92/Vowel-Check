#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	const char vowels[5] = { 'a','e','i','o','u' };
	
	std::string again = "y";

	do {

		std::string inputText;
		int indVowels[] = { 0,0,0,0,0 };
		
		std::cout << "Input text:\n";
		std::getline(std::cin, inputText);

		int vowelCount = 0;
		for (int i = 0; i < inputText.size(); i++) {
			for (int x = 0; x < sizeof(vowels) / sizeof(vowels[0]); x++) {
				if (tolower(inputText[i]) == vowels[x]) {
					vowelCount++;
					indVowels[x]++;
				}
			}
		}
		for (int i = 0; i < sizeof(indVowels) / sizeof(indVowels[0]); i++) {
			if (indVowels[i] > 0) {
				std::cout << "Vowel " << vowels[i] << ": " << indVowels[i] << "\n";
			}
		}
		std::cout << "Total vowels: " << vowelCount << "\n\n";
		std::cout << "Would you like to check another word? (y/n): ";
		std::getline(std::cin, again);
		system("CLS");
		
	} while (again == "y");
	

	return 0;
	
}

