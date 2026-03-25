#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Simple Reverse function
string Reverse(string text) {
    string reversed = "";
    for (int i = text.length() - 1; i >= 0; i--) {
        reversed += text[i];
    }
    return reversed;
}

int main() {
    // Reading the file
    ifstream file("data.txt");
    string fileData;
    getline(file, fileData);
    file.close();

    cout << "Original: " << fileData << endl;

    //  Counting Vowels
    int vowels = 0;
    for (int i = 0; i < fileData.length(); i++) {
        char c = tolower(fileData[i]);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            vowels++;
        }
    }
    cout << "Vowels: " << vowels << endl;

    // Counting Words
    int words = 1;
    for (int i = 0; i < fileData.length(); i++) {
        if (fileData[i] == ' ') words++;
    }
    cout << "Words: " << words << endl;

    // Use Reverse function
    cout << "Reversed: " << Reverse(fileData) << endl;

    // Capitalize the 2nd letter of every word
    for (int i = 0; i < fileData.length(); i++) {
        // If we find a space, the character two spots after it is a "second letter"
        if (i == 0) { 
            fileData[1] = toupper(fileData[1]);
        }
        if (fileData[i] == ' ' && (i + 2) < fileData.length()) {
            fileData[i + 2] = toupper(fileData[i + 2]);
        }
    }
    cout << "Modified: " << fileData << endl;

    return 0;
}
