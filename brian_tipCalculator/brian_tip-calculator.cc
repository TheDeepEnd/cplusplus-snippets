#include <iostream>
using namespace std;

void calculateTip(float billTotal, float tipPercent)
{
    float yourTip;
    
    cout << "Your total bill is: " << billTotal << endl;
    cout << "Your tip percentage is: " << tipPercent << "%" << endl;
    
    yourTip = billTotal * (tipPercent/100.00);
    
    cout << "The amount you pay for tip is: " << yourTip << endl;
}

int main()
{
    float billTotal = 100;
    float tipPercent = 15;
    
    cout << "This program is meant to calculate your tip" << endl;
    cout << "Your total bill is: " << billTotal << endl;
    cout << "Your tip percentage is: " << tipPercent << endl;
    
    calculateTip(billTotal, tipPercent);
    
}

