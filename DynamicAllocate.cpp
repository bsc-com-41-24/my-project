#include <iostream>
#include <string>
using namespace std;

int main() {
    //dynamically allocating an integer 

    int* dynamicInt = new int; 
    string* dynamicString = new string;

//creating where users can input values
cout << "Enter a value: ";
cin >> *dynamicInt;

cout << "Enter a string: ";
cin >> *dynamicString;

//output the results 
cout << "\nthe dynamically allocated Integer is: " << *dynamicInt << endl;
cout << "\nthe dynamically allocated String is: " << *dynamicString << endl;

//cleaning up to deallocate memory 
delete dynamicInt;
delete dynamicString;

return 0;



}