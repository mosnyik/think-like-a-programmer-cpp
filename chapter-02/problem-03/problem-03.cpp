// problem-03 : 
 /* A message has been encoded as a text stream that is to be read character by character.
 The stream contains a series of comma-delimited integers, each a positive number
 capable of being represented by a C++ int.However, the character represented by
 a particular integer depends on the current decoding mode.There are three modes :
 uppercase, lowercase, and punctuation.
 In uppercase mode, each integer represents an uppercase letter : The integer
 modulo 27 indicates the letter of the alphabet(where 1 = A and so on).So an input
 value of 143 in uppercase mode would yield the letter H because 143 modulo 27 is
 8 and H is the eighth letter in the alphabet.
 The lowercase mode works the same but with lowercase letters; the remainder of
 dividing the integer by 27 represents the lowercase letter(1 = a and so on).So an
 input value of 56 in lowercase mode would yield the letter b because 57 modulo 27
 is 2 and b is the second letter in the alphabet.
 In punctuation mode, the integer is instead considered modulo 9, 
 with the interpretation given by Table 2 - 3 below.
 So 19 would yield an exclamation point because 19 modulo 9 is 1.
 At the beginning of each message, the decoding mode is uppercase letters.Each
 time the modulo operation(by 27 or 9, depending on mode) results in 0, 
 the decoding mode switches.If the current mode is uppercase, 
 the mode switches to lowercase
 letters.If the current mode is lowercase, 
 the mode switches to punctuation, and if it is
 punctuation, it switches back to  */
 

#include <iostream>

using namespace std;

int main()
{

    // EXPERIMENT 1
   
    /*char digit;
    cout << "Enter a 2-digit number: \n";
    digit = cin.get();
    int digitInt1 = digit - '0';
    digit = cin.get();
    int digitInt2 = digit - '0';
    cout << "You entered Intergers " << digitInt1 << " and " << digitInt2 << endl;*/

    // this reads 2-digit number and return it as int
    //char digit;
    //int wholeInt;
    //cout << "Enter a 2-digit number: \n";
    //digit = cin.get();
    //wholeInt = (digit - '0') * 10;
    //digit = cin.get();
    //wholeInt += digit - '0';
    //cout << "You entered the Interger " << wholeInt << endl;
    

    // EXPERIMENT 2 - finding the char rep of , and endl
    // OUTCOME: The char rep of , is 44 for endl is 10
    /*cout << "Enter a number ending with a comma" << endl;
    char digit;
    while (true) {
        digit = cin.get();
        int value = digit;
        cout << "The interger entered is " << value << endl;
    }*/

    // SUBPROBLEM
    /*
    Write a program to read a number character by character and convert it to an integer, using just one char variable and one int variable.The number will have either
     three or four digits.
      */
    char digit;
    int value;
    int position = 1;
    int threeDigitsSum;
    int fourDigitsSum;
    cout << "Enter a 3 or 4 digit number: ";
    digit = cin.get();
    threeDigitsSum = (digit - '0') * 100;
    fourDigitsSum = (digit - '0') * 1000;
    digit = cin.get();
    threeDigitsSum += (digit - '0') * 10;
    fourDigitsSum += (digit - '0') * 100;
    digit = cin.get();
    threeDigitsSum += (digit - '0');
    fourDigitsSum += (digit - '0') * 10;
    digit = cin.get();
    if (digit == 10) {
        cout << "The 3 digit sum is: " << threeDigitsSum << endl;
    }
    else {
        fourDigitsSum += (digit - '0');
        cout << "The 4 digit sum is: " << fourDigitsSum << endl;
    }


    // now lets read the digits until we hit a comma delimiter
  /*  char digit;
    int value = 0;
    cout << "Enter a number ending with a comma" << endl;
    digit = cin.get();
    while (digit != 44) {
        value = (digit - '0') * 10;
        digit = cin.get();
        value += digit - '0';

        cout << "The interger entered is " << value << endl;
    }
    cout << "The interger entered is " << value << endl;*/

    return 0;
}
