#include <iostream>

int main()
{
    char op;
    double num1, num2;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    double result;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if(num2 == 0)
            {
                std::cout << "Error: Divide by zero\n";
                return 1;
            }
            result = num1 / num2;
            break;

        default:
            std::cout << "Invalid operator\n";
            return 1;
    }

    std::cout << num1 << ' ' << op << ' ' << num2 << " = " << result << '\n';

    return 0;
}
