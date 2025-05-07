#include <iostream>
using namespace std;

int countVowels(string word) {
    int count = 0;
    for (char letter : word) {
        char lowerLetter = tolower(letter);
        if (lowerLetter == 'a' || lowerLetter == 'e' || lowerLetter == 'i' || lowerLetter == 'o' || lowerLetter == 'u') {
            count++;
        }
    }
    return count;
}
int countConsonants(string word) {
    int count = 0;
    for (char letter : word) {
        char lowerLetter = tolower(letter);
        if (isalpha(letter) && lowerLetter != 'a' && lowerLetter != 'e' && lowerLetter != 'i' && lowerLetter != 'o' && lowerLetter != 'u') {
            count++;
        }
    }
    return count;
}

bool isPalindrome(string word) {
    string reversedWord = word;
    reverse(reversedWord.begin(), reversedWord.end());
    string lowerCaseWord = word;
    string lowerCaseReversedWord = reversedWord;

    for (char &letter : lowerCaseWord) {
        letter = tolower(letter);
    }
    for (char &letter : lowerCaseReversedWord) {
        letter = tolower(letter);
    }
    return (lowerCaseWord == lowerCaseReversedWord);
}

char firstLetter(string word) {
    return word[0];
}
string reverse(string word) {
    reverse(word.begin(), word.end());
    return word;
}


int main() {
    string word;
    char analyzeAgain;

    cout << "Enter a word: ";
    cin >> word;

    cout << "\nWord Analysis:" << endl;
    cout <<  "--------------" << endl;

    cout <<  "Original word: " << word << endl;
    cout <<  "Number of vowels: "  << countVowels(word) << endl;
    cout << "Number of consonants: " << countConsonants(word) << endl;
    cout <<  "First letter: " << firstLetter(word) << endl;
    cout <<  "Reversed: " << reverse(word) << endl;
    cout <<  "Is palindrome: " << (isPalindrome(word) ? "Yes" : "No") << endl;

    do{
        cout << "Would you like to analyze another word? (y/n): ";
        cin >> analyzeAgain;
        if (analyzeAgain == 'n') {
            exit(1);
        }
        cout << endl;
        main();

    }while(analyzeAgain == 'y');
    
    
    return 0;
}