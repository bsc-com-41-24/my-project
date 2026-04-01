#include <iostream>
using namespace std;

int main() {

    int rows;
    int columns;

    while (true) {
        cout << "Enter the number of rows 1-3: ";
        cin >> rows;
        cout << "Enter the number of columns 1-3: ";
        cin >> columns;

        if (rows > 0 && rows <= 3 && columns > 0 && columns <= 3 ) {
            break;
        }
        else {
            cout << "Invalid Entry. Dimension must be between 1 and 2.\n";
        }
    }
    double** array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double [columns];

        }

        cout << "\nEnter values for the " << rows << "x" << columns << " array: " << endl; 
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << "Value of element [" << i << "][" << j << "]: ";
                cin >> array[i][j];
            }
        }

        cout << "\nArray Content: " << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << array[i][j] << "\t";

            }
            cout << endl;
        }

        for (int i = 0; i < rows; ++i) {
            delete[] array[i];
        }
        delete[] array;

        return 0;
    }
