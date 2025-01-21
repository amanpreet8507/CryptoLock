//
//  main.cpp
//  CryptoLock
//
//  Created by Amanpreeet Sandhu on 2025-01-21.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // Declare variables
    int input;
    
    // Read input
    cout << "Input 4 integers: " ;
    cin >> input;
    
    // Encrypt the integers
    int firstDigit = (( input / 1000 ) + 7 ) % 10;
    int secondDigit = (((input/100) % 10) + 7) % 10;
    int thirdDigit = (((input/10) % 10) + 7) % 10;
    int fourthDigit = ((input%10) + 7) % 10 ;
    
    cout << thirdDigit << fourthDigit << firstDigit << secondDigit;
    
    std::cout << "Hello, World!\n";
    return 0;
}
