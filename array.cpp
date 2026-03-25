#include <iostream>
#include <string>
using namespace std;

int main() {
    //declaring and intializing the array
    string sets[] = {"B123", "C234" ,"A345" ,"C15", "B177", "G3003", "C235", "B179"};

    //size of array
    int arraySize = sizeof(sets) / sizeof(sets[0]);

    //for loop to iterate the array
    for (int i = 0; i < arraySize; i++) {

        if (sets[i][0] == 'B') {
            //we output the set
            cout << sets[i] << endl;
        }
    }
    return 0;
}