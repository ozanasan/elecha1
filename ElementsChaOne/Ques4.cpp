//
//  Ques4.cpp
//  ElementsChaOne
//
//  Created by Ozan Asan on 03/07/15.
//  Copyright (c) 2015 OzanAsan. All rights reserved.

#include "Ques4.h"
#include "Ques2.h"

//bad way..
/*
unsigned findClosest(unsigned theNumber){
    int weight = countOfOneInNumber(theNumber);
    int number = theNumber;
    
    
    int index = 1;
    
    while(true){
        number = theNumber + index;
        if(countOfOneInNumber(number) == weight){
            break;
        }
        else if(index < theNumber){
            number = theNumber - index;
            if(countOfOneInNumber(number) == weight){
                break;
            }
        }
        index++;
    }
    return number;
}
 */

//smart way from oytun.
unsigned findClose(unsigned theNumber){
    int bit = theNumber & 1;
    unsigned helper = theNumber;
    int changeIndex = 0;
    while((helper & 1) == bit){
        changeIndex++;
        helper = helper >> 1;
    }
    return (unsigned)swapBits(theNumber, changeIndex, changeIndex - 1);
}

