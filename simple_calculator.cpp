#include <iostream>
using namespace std;

int main()
{
    char operands;
    float N1, N2;

    cout << "Hello,Welcome to calculator" << endl;
    cout << "---------------------------" << endl;

    cout << "Enter first number:- "; // Input first number
    cin >> N1;

    cout << "Enter second number:- "; // Input second number
    cin >> N2;

    cout << "Choose operation (+, -, *, /): "; // Choose operand
    cin >> operands;

    // Calculation based on the operands
    switch (operands)
    {
    case '+':
        cout << "Result: " << N1 + N2 << endl;
        break;
    case '-':
        cout << "Result: " << N1 - N2 << endl;
        break;
    case '*':
        cout << "Result: " << N1 * N2 << endl;
        break;
    case '/':
        if (N2 == 0)
        {
            cout << "It can't divisible by 0 " << endl;
        }
        else
        {
            cout << "Result:- " << N1 / N2 << endl;
        }
        break;
    default:
        cout << "Please choose correct operand from +, -, /,* " << endl;
        break;
    }

    return 0;
}
