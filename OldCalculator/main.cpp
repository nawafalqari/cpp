#include<iostream>
using namespace std;

int main()
{
    int currentYear = 2020;
    int year;

    cout << "Write your birth year..." << endl;

    cin >> year;

    int age = currentYear - year;

    cout << "You are " << age << " years old" << endl;
}
