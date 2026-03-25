#include <iostream>
using namespace std;

void areaSquare() {
    float side;
    cout << "Enter side: ";
    cin >> side;
    cout << "Area: " << (side * side) << endl;

}

void areaRectangle() {
    float l, w;
    cout << "Enter length and width: ";
    cin >> l >> w;
    cout << "Area: " << (l * w) << endl;
}

void areaTriangle() {
    float b, h;
    cout << "Enter base and height: ";
    cin >> b >> h;
    cout << "Area: " << (0.5 * b * h) << endl;
}

int main() {
    string choice;

    while (true) {
        cout << "\nPlease select the area of shape " << endl;
        cout << "1. Square\n2. Rectangle\n3. Triangle\n4. Quit Program"<< endl;
        cout << "\nEnter selection: ";
        cin >> choice;

        if (choice == "1") {
            areaSquare();
        }
        else if (choice == "2") {
            areaRectangle();
        }
        else if (choice == "3") {
            areaTriangle();
        }
        else if (choice == "4") {
            cout << "Exiting program" << endl;
            break;
        }
        else {
            cout << "\nYour input was: " << choice << "which is invalid input" << endl;
            cout << "Please enter a valid input." << endl;
        }
    }
    return 0;
}