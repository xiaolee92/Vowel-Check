#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	std::string inputText;
	const char vowels[5] = {'a','e','i','o','u'};
	int indVowels[] = { 0,0,0,0,0 };
	std::string words;

	std::cout << "Input text:\n";
	std::getline(std::cin, inputText);

	int vowelCount= 0;
	for (int i = 0; i < inputText.size(); i++) {
		for (int x = 0; x < sizeof(vowels)/sizeof(vowels[0]); x++) {
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
	
	std::cout << "Total vowels: " << vowelCount << "\n";
}

