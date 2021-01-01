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



    cout << "== " << equal << endl; // 0 is false, 1 is true
    cout << "!= " << notEqual << endl; // 0 is false, 1 is true
    cout << "< " << less << endl; // 0 is false, 1 is true
    cout << "> " << greater << endl; // 0 is false, 1 is true
    cout << "<= " << lessOrEqual << endl; // 0 is false, 1 is true
    cout << "<= " << greaterOrEqual << endl; // 0 is false, 1 is true

    return 0;
}
