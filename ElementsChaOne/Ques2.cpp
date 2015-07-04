//
//  Ques2.cpp
//  ElementsChaOne
//
//  Created by Ozan Asan on 03/07/15.
//  Copyright (c) 2015 OzanAsan. All rights reserved.
//

#include "Ques2.h"

//makes sure given indexes are between 0-63
bool checkIndexRange(int value){
    if(value > 63 || value < 0){
        return false;
    }
    return true;
}

uint64_t swapBits(uint64_t thatNumber, int i, int j){
    if(i == j){
        return thatNumber;
    }
    else if(((thatNumber >> i) & 1) == ((thatNumber >> j) & 1)){
        return thatNumber;
    }
    else{
        //We know we have to complement ith and jth bits.
        //XOR with a 1 = flips the bit. XOR with a 0 = keeps the bit.
        uint64_t iShift = (uint64_t)((uint64_t)1 << i); thatNumber = (uint64_t)(thatNumber ^ iShift);
        uint64_t jShift = (uint64_t)((uint64_t)1 << j); thatNumber = (uint64_t)(thatNumber ^ jShift);
    }
    return thatNumber;
}