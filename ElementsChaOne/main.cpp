//
//  main.cpp
//  ElementsChaOne
//
//  Created by Ozan Asan on 01/07/15.
//  Copyright (c) 2015 OzanAsan. All rights reserved.
//

#include <iostream>
#include <assert.h>
#include "Ques1.h"
#include "Ques2.h"
#include "Ques3.h"
#include "Ques4.h"
#include "Ques5.h"
#include "Ques6.h"
#include "Ques7.h"
#include "Ques8.h"
#include "Ques9.h" //not working now.
#include "Ques10.h"
#include "Ques11.h"
#include "Ques12.h" //not working for now.
#include "Ques13.h"
#include "Ques14.h" //not working now.
#include "Ques15.h"

//this is for helping to visualise 64 bits representation of a number.
void print64Bits(uint64_t numberToBePrinted){
    for(int i = 63; i >= 0; i--){
        int printBit = (numberToBePrinted >> i) & 1;
        std::cout << printBit;
    }
    std::cout << std::endl;
}

bool testForQuestionOne(){
    uint64_t testNumber = 7; assert(parityForNumber(testNumber) == 1);
    testNumber = 8; assert(parityForNumber(testNumber) == 1);
    testNumber = 9; assert(parityForNumber(testNumber) == 0);
    testNumber = 10; assert(parityForNumber(testNumber) == 0);
    testNumber = 11; assert(parityForNumber(testNumber) == 1);
    testNumber = 500; assert(parityForNumber(testNumber) == 0);
    testNumber = 5000; assert(parityForNumber(testNumber) == 1);
    testNumber = 1; assert(parityForNumber(testNumber) == 1);
    return true;
}

bool testForQuestionTwo(){
    uint64_t testNumber = 16; assert(swapBits(testNumber, 4, 3) == 8);
    assert(swapBits(testNumber, 4, 0) == 1);
    assert(swapBits(testNumber, 3, 0) == 16);
    assert(swapBits(testNumber, 4, 1) == 2);
    assert(swapBits(testNumber, 4, 2) == 4);
    
    testNumber = 39; assert(swapBits(testNumber, 4, 5) == 23);
    assert(swapBits(testNumber, 3, 0) == 46);
    assert(swapBits(testNumber, 4, 0) == 54);
    assert(swapBits(testNumber, 4, 3) == 39);
    return true;
}

bool testForQuestionThree(){
    uint64_t testnumber = 789172;
    std::cout << "64 bit number is: ";
    print64Bits(testnumber);
    
    uint64_t reversed = reverse64Bit(testnumber);
    std::cout << "Reversed 64 bit number is: ";
    print64Bits(reversed);
    
    assert(testnumber == reverse64Bit(reversed));
    
    return true;
    
}

bool testForQuestionFour(){
    unsigned testNumber = 15; assert(findClose(testNumber) == 23);
    testNumber = 2; assert(findClose(testNumber) == 1);
    testNumber = 5; assert(findClose(testNumber) == 6);
    return true;
}

bool testForQuestionFive(){
    assert(multiplyInHardTimes(3, 5) == 15);
    assert(multiplyInHardTimes(2, 1) == 2);
    assert(multiplyInHardTimes(5, 30) == 150);
    assert(multiplyInHardTimes(11, 11) == 121);
    assert(multiplyInHardTimes(5555, 0) == 0);
    return true;
}

bool testForQuestionSix(){
    assert(recursiveFound(6, 3) == 2);
    assert(recursiveFound(17, 4) == 4);
    assert(recursiveFound(31, 7) == 4);
    assert(recursiveFound(32, 8) == 4);
    assert(recursiveFound(64, 3) == 21);
    assert(recursiveFound(10000, 2) == 5000);
    assert(recursiveFound(10001, 2) == 5000);
    assert(recursiveFound(4999, 5000) == 0);
    assert(recursiveFound(5001, 5000) == 1);
    assert(recursiveFound(1, 1) == 1);
    return true;
}

bool testForQuestionSeven(){
    assert(exponent(3, 4) == 81);
    assert(exponent(10, 3) == 1000);
    assert(exponent(5, 0) == 1);
    assert(exponent(6, 2) == 36);
    assert(exponent(117, 1) == 117);
    assert(exponent(5, 3) == 125);
    return true;
}

bool testForQuestionEight(){
    //will do tests
    return true;
}

bool testForQuestionTen(){
    assert(reverseNumber(1234) == 4321);
    assert(reverseNumber(12) == 21);
    assert(reverseNumber(50) == 5);
    assert(reverseNumber(-162) == -261);
    assert(reverseNumber(1171) == 1711);
    assert(reverseNumber(5333) == 3335);
    return true;
}

bool testForQuestionEleven(){
    assert(isPalindrome(121));
    assert(isPalindrome(4224));
    assert(!isPalindrome(445));
    assert(!isPalindrome(12));
    assert(!isPalindrome(-878));
    assert(!isPalindrome(2));
    return true;
}

bool testForQuestionTwelve(){
    return true;
}

bool testForQuestionThirteen(){
    struct rectangle rectangleOne;
    struct rectangle rectangleTwo;
    rectangleOne.x = 0; rectangleOne.y = 0; rectangleOne.width = 5; rectangleOne.height = 3;
    rectangleTwo.x = 2; rectangleTwo.y = 2; rectangleTwo.width = 5; rectangleTwo.height = 7;
    assert(doTheyIntersect(rectangleOne, rectangleTwo));
    rectangleTwo.x = 10; rectangleTwo.y = 11; rectangleTwo.width = 5; rectangleTwo.height = 7;
    assert(!doTheyIntersect(rectangleOne, rectangleTwo));
    return true;
}

bool testForQuestionFifteen(){
    assert(findGCD(15, 10) == 5);
    assert(findGCD(100, 30) == 10);
    assert(findGCD(75, 25) == 25);
    return true;
}

int main(int argc, const char * argv[]) {
    testForQuestionOne();
    std::cout << "Question One looks okay." << std::endl;
    
    testForQuestionTwo();
    std::cout << "Question Two looks okay." << std::endl;
    
    testForQuestionThree();
    std::cout << "Question Three looks okay." << std::endl;
    
    testForQuestionFour();
    std::cout << "Question Four looks okay." << std::endl;
    
    testForQuestionFive();
    std::cout << "Question Five looks okay." << std::endl;
    
    testForQuestionSix();
    std::cout << "Question Six looks okay." << std::endl;
    
    testForQuestionSeven();
    std::cout << "Question Seven looks okay." << std::endl;
    
    testForQuestionEight();
    std::cout << "Question Eight looks okay." << std::endl;
    
    testForQuestionTen();
    std::cout << "Question Ten looks okay." << std::endl;
    
    testForQuestionEleven();
    std::cout << "Question Eleven looks okay." << std::endl;
    
    testForQuestionTwelve();
    std::cout << "Question Twelve looks okay." << std::endl;
    
    testForQuestionThirteen();
    std::cout << "Question Thirteen looks okay." << std::endl;
    
    testForQuestionFifteen();
    std::cout << "Question Fifteen looks okay." << std::endl;
    
    return 0;
}
