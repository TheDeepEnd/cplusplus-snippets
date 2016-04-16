////////////////////////////////////////////////////////////////////////////////
//
// AUTHOR: Mark Arakaki
//
// ORGANIZATION: Deep End
//
// FILE NAME: taxCalculator.cpp
//
// DESCRIPTION: A Calcuator that calculates an inputed tip percentage to the total
// of a bill
////////////////////////////////////////////////////////////////////////////////

#include <iostream>

void taxConverter (float, float&, float&);

int main (int argc, char* argv[])
{
    float bill;
    float tax;
    float totalCost;
/*
cout: displays to console and does not add a new line which is why I needed a new line character at the end.
cin: takes input and does not finish taking input until return (ENTER) key is pressed.
cout.precision: Sets the decimal precision to be used to format floating-point
    values on output operations.
:: This operator is a scope qualifier that is defines the function of cout in the class std.
*/
    std::cout << "Please enter the total amount of your bill: \n";
    if (!(std::cin >> bill))
    {
        std::cout << "\n\n";
        std::cout << "Please follow the directions and put in numbers!\n\n";
        std::cout << "The program is terminating, please follow instructions next time..\n\n";
    }
    else
    {
        std::cout << "Please enter in the percentage that you would like to tip: \n";
        if (!(std::cin >> tax))
        {
            std::cout << "Please follow the directs and put in numbers!\n\n";
            std::cout << "The program is terminating, please follow instructions next time..\n\n";

        }
        else
        {
            taxConverter(bill, tax, totalCost);
            std::cout.precision(5);
            std::cout << "The total cost of your bill is: $" << totalCost << "\n";
            std::cout.precision(5);
            std::cout << "The tip total is: $" << tax << "\n";
        }
    }
}

////////////////////////////////////////////////////////////////////////////////
//
// METHOD NAME: taxConverter
//
// PARAMETERS: bill (float): the cost of the original bill. tax (float): the sales tax.
// totalCost (float&): The total cost of the bill after calculating the tax into the bill.
//
// DESCRIPTION: Converts the original bill to the total bill that includes tax.
//
// OTHER NOTES: The & after float is specific to C++ and allows me to change the value of the
// actual parameter from the main. This means that I do not have to return a value, instead I can
// change the value directly from this function.
//
////////////////////////////////////////////////////////////////////////////////

void taxConverter (float bill, float& tax, float& totalCost)
{

    tax = tax / 100;

    tax = bill * tax;

    totalCost = tax + bill;
}
