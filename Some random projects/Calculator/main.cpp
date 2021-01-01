#include<iostream>
using namespace std;

int main()
{

    int choice;

    cout << "1- +\n2- -\n3- x\n4- /" << endl;

    cout << "Enter... ";

    cin >> choice;

    if(choice >= 1 && choice <= 4) {
        cout << "Enter first num... ";
        int a, b;
        cin >> a;
        cout << "Enter second num... ";
        cin >> b;
        
        if(choice == 1) {
            int result = a + b;
            cout << a << " + " << b << " = " << result << endl;
        }
        if(choice == 2) {
            int result = a - b;
            cout << a << " - " << b << " = " << result << endl;
        }   
        if(choice == 3) {
            int result = a * b;
            cout << a << " x " << b << " = " << result << endl;
        }
        if(choice == 4) {
            int result = a / b;
            cout << a << " / " << b << " = " << result << endl;
        }

    }

    else {
        cout << "Nope" << endl;
    }

    return 0;
}
