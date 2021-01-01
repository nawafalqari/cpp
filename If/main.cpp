#include<iostream>
using namespace std;

int main()
{

    const int password = 1234;
    int input;

    cout << "Enter password... ";
    cin >> input;

    if(input == password) {
        cout << "Password is correct" << endl;
    }
    else {
        cout << "Incorrect password" << endl;
    }

    return 0;
}