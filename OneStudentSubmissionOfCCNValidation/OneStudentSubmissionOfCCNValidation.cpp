//credit card number validation algorithm


#include <iostream>
#include <vector>
using namespace std;


int main()
{
    //declare

    vector<int> creditCardNum = { 4,5,5,6,   7,3,7,5,     8,6,8,9,     9,8,5,5 };

    //original ccn
    cout << "Orginal CCN: ";
    for (int num : creditCardNum)
    {
        cout << num << " ";
    }

    cout << endl;

    //drop the rightmost digit
    int rightmostDigit = creditCardNum.back();
    creditCardNum.pop_back();


    //display rightmost digit
    cout << "Rightmost digit: " << rightmostDigit;
    cout << endl;


    //ccn without rightmost digit
    cout << "CCN without rightmost digit: ";
    for (auto& number : creditCardNum) {
        cout << number << " ";
    }
    cout << endl;


    //reverse digits
    reverse(creditCardNum.begin(), creditCardNum.end());


    //print the reversed one out
    cout << "Reversed CCN: ";

    for (int reversed : creditCardNum) {
        cout << reversed << " ";
    }


    //multiply digits in odd positions by 2
    for (int i = 0; i < creditCardNum.size(); i++) {
        if (i % 2 == 1) {
            creditCardNum[i] *= 2;
        } //i divided by 2 = 1 : odd, = 0 : even
    }
    cout << endl;


    //display the multiplied ccn
    cout << "After multiplying digits in odd positions by 2: ";
    for (int multiplied : creditCardNum) {
        cout << multiplied << " ";
    }
    cout << endl;


    //subtract 9 from any digits that are greater than 9
    int i = 0;
    for (int i = 0; i < creditCardNum.size(); i++)
    {
        if (creditCardNum[i] > 9) {
            creditCardNum[i] -= 9;
        }
    }


    //display substracted ccn
    cout << "After substracting 9 from digit if the digit is greater than 9: ";
    for (int substracted : creditCardNum) {
        cout << substracted << " ";
    }

    cout << endl;

    //sum of the digits
    int sum = 0;
    for (int i = 0; i < creditCardNum.size(); i++) {
        sum += creditCardNum[i];
    }

    //display the sum
    cout << "Sum of digits is " << sum << endl;

    //calculation for validation
    double numForValidation = 0;
    numForValidation = sum % 10;

    //display the result
    cout << "Sum mod 10 is " << numForValidation << " and rightmost digit is " << rightmostDigit << endl;
    if (numForValidation == rightmostDigit) {
        cout << "These are equal, so the CCN is valid.";
    }
    else {
        cout << "These are not equal, so the CCN is NOT valid." << endl;
    }

}//end of main function

