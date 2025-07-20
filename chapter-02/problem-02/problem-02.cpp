
#include <iostream>

using namespace std;

// PROBLEM
// Write a program that takes an identification number of arbitrary length and
// determines whether the number is valid under the Luhn formula.The program must
// process each character before reading the next one.

  //SOLUTION
    // - figure out how to read numbers from input
    // - figure out when to stop counting
    // - figure out how to treate sum of doubled number
int static doubleNumberSum(int digit) {
    
    int sum = 0;
    int doubledDigit = digit * 2;
    if (doubledDigit > 9) sum += doubledDigit - 9;
    else sum = doubledDigit;

    cout << "The digit double sum is: " << sum << endl;

    return sum;
}

int static validateNumber() {
    char digit;
    int position = 0 ;
    int number = 0;
    cout << "Enter an id number:"<< endl;       
    digit = cin.get();
   /* number = digit - '0';*/

    while (digit != 10)
    {
        digit = cin.get();
      
        number += digit - '0';
        cout << "Entered digit is:" << number << endl;
        position++;
    }
    cout << "Entered number is:" << number << endl;
    //doubleNumberSum(7);
    return 0;
}

int main()
{
    validateNumber();
    return 0;
}

