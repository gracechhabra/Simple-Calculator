#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    //Introduction
    cout << endl;
    cout << "Welcome to the calculator." << endl << endl;
    cout << "This calculator will add, subtract, multiply, divide, and take the modulus of two numbers." << endl << endl;

    //Defining the variables
    int first_number;
    int second_number;
    cout << "Please enter the first number: ";
    cin >> first_number;
    cout << "Please enter the second number: ";
    cin >> second_number;
    int options;
    char absolute_subtract;

    //Options code
    cout << "What do you want to do? " << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Modulus" << endl;
    cout << "Please enter 1 to 5: ";
    cin >> options;

    //if else for different operations
    if (options == 1)
    {
        int sum = first_number + second_number;
        cout << first_number << " + " << second_number << " = " << sum << endl;
    }
    else if (options == 2)
    {
        int subtract = first_number - second_number;
        cout << first_number << " - " << second_number << " = " << subtract << endl;
        if (subtract <= 0)
        {
            cout << "Do you want the absolute value of the number? Please enter (y/n): ";
            cin >> absolute_subtract;
            if (absolute_subtract == 'y')
            {
                int absolute_value = abs(subtract);
                cout << "The absolute value is: " << absolute_value;
            }
            else if (absolute_subtract == 'n')
            {
                cout << "The value is: " << subtract;
            }
        }
    }
    if (options == 3){
        int multiply = first_number * second_number;
        cout << first_number << " * " << second_number << " = " << multiply << endl;
    }

    if (options == 4){
        while (second_number == 0){
            cout << "You cannot divide by 0. Please enter the numbers again." << endl;
            cout << "Please enter the first number: ";
            cin >> first_number;
            cout << "Please enter the second number: ";
            cin >> second_number;
        }
        if (second_number != 0){
            double divide = first_number / second_number;
            cout << first_number << "/" << second_number << " = " << divide;
        }

    }
    if (options == 5){
        int modulus = first_number % second_number;
        cout << first_number << " % " << second_number << " = " << modulus << endl;
    }
}
