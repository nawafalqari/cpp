#include<iostream>
using namespace std;

int main()
{
    int num1 = 100;
    int num2 = 200;

    bool equal = num1 == num2;
    bool notEqual = num1 != num2;
    bool less = num1 < num2;
    bool greater = num1 > num2;
    bool lessOrEqual = num1 <= num2;
    bool greaterOrEqual = num1 <= num2;



    cout << "== " << equal << endl;
    cout << "!= " << notEqual << endl;
    cout << "< " << less << endl;
    cout << "> " << greater << endl;
    cout << "<= " << lessOrEqual << endl;
    cout << "<= " << greaterOrEqual << endl;

    return 0;
}