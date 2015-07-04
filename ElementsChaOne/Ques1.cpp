//
//  Ques1.cpp
//  ElementsChaOne
//
//  Created by Ozan Asan on 01/07/15.
//  Copyright (c) 2015 OzanAsan. All rights reserved.
//
#include "Ques1.h"

//this function returns the number of 1`a in a binary representation.
int countOfOneInNumber(uint64_t That64BitNumber){
    int count = 0;
    while(That64BitNumber != 0){
        count++;
        That64BitNumber = (uint64_t)(That64BitNumber & (uint64_t)(That64BitNumber - (uint64_t)1));
    }
    return count;
}

int parityForNumber(uint64_t That64BitNumber){
    int countOf1s = countOfOneInNumber(That64BitNumber);
    return countOf1s%2;
}
