//create a calculator app
#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << num1+num2 << endl;
            break;

        case '-':
            cout << num1-num2 << endl;
            break;

        case '*':
            cout << num1*num2 << endl;
            break;

        case '/':
            cout << num1/num2 << endl;
            break;

        default:

            cout << "Error! operator is wrong !!!!!! ";

            break;  }  return 0;}