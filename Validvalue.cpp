#include <iostream>
using namespace std;

int main() {
    int value = 0;
    bool isvalid = true;

    while (isvalid) {
        cout << "Enter a value between 5 and 10: " << endl;

        // checking the input if its valid
        if (!(cin >> value)) {
            cout <<"Sorry, you entered an invalid number, Please try again" << endl;

            cin.clear();
            cin.ignore(100, '\n');
          
        }
        else if (value < 5 || value > 10) {
            cout << "You entered " << value << ".Please enter a number between 5 and 10."<< endl;
        }
        else {
            isvalid = false;
        }
    }

    cout <<"Your input value (" << value << ") has been accepted." <<endl;

    return 0;
}