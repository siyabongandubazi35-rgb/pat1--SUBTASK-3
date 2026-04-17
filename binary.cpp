#include <iostream>

//Ndubazi siyabonga
//
using namespace std;
// calling global variables
int decimalNum;
int choice;
string binaryNum;

string decimalToBinary(int decimal) // calculation for decimal to binary
    string binary = "";
    int remainder;

    if (decimal == 0) {
        return "0";
    }

    while (decimal > 0) {
        remainder = decimal % 2;
        binary = to_string(remainder) + binary;
        decimal = decimal / 2;
    }

    return binary;
}
// I have added the  the converting from binary to decimal  code
// I have added the  the converting from binary to decimal  code
int binaryToDecimal(string binary) {// calculation for binary to decimal
    int decimal = 0;
    int power = 1;
    int i;

    for (i = binary.length() - 1; i >= 0; i--) {

        if (binary[i] == '1') {
            decimal = decimal + power;
        }

        power = power * 2;
    }

    return decimal;
}



int main()
{
    cout << "Conversion Menu:" << endl;      // creating a menu input and output
    cout << "1. Decimal to Binary" << endl;
    cout << "2. Binary to Decimal" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {// adding conditions on the choices
        cout << "Enter a decimal number: ";
        cin >> decimalNum;
        cout << "Binary representation: " << decimalToBinary(decimalNum) << endl;
    }
    else if (choice == 2) {
        cout << "Enter a binary number: ";
        cin >> binaryNum;
        cout << "Decimal representation: " << binaryToDecimal(binaryNum) << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
