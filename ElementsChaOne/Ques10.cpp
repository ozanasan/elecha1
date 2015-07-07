//
//  Ques10.cpp
//  ElementsChaOne
//
//  Created by Ozan Asan on 06/07/15.
//  Copyright (c) 2015 OzanAsan. All rights reserved.
//

#include "Ques10.h"

int reverseNumber(int number){
    bool isNegative= false;
    if(number <0){
        number = (-1) *  number;
        isNegative = true;
    }
    int reverseNumber = 0;
    while(number != 0){
        reverseNumber = reverseNumber * 10 + ( number % 10);
        number = number / 10;
    }
    return isNegative ? (-1) * reverseNumber : reverseNumber;
}


