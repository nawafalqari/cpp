#include<iostream>
using namespace std;

int main()
{

    cout << "1- English\n"<< "2- Spanish\n" << "Select a language... ";

    int choice;

    cin >> choice;

    switch(choice) {
        case 1:
        cout << "Hello!" << endl;
        break;
        case 2:
        cout << "Hola!" << endl;
        break;
        default: 
        cout << "Incorrect number" << endl;
    }

    return 0;
}