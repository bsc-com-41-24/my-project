#include <iostream>
#include <cstdlib> //used for random integers from 0 to 11
#include <ctime> //used for time
using namespace std;

int main() {
    srand(time(0));

    //creating random numbers between 0 and 11
    int daysUntilExpiry = rand() % 12;

    //output depending on conditions 
    if (daysUntilExpiry == 0) {
        cout << "Your subscription has expired." << endl;
    }
    else if (daysUntilExpiry == 1) {
        cout << "your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    }
    else if (daysUntilExpiry <= 5) {
        cout << "Your Subscription exipres in " << daysUntilExpiry << "days." << endl;
        cout << "Renew now and save 10%!" << endl;
    }
    else if (daysUntilExpiry <= 10) {
        cout << "Your subscription will expire soon .Renew now!" <<endl;
    }
    else {
        cout << "You have an active subscription." << endl;
    }
    return 0;
}