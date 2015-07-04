//
//  Ques4.cpp
//  ElementsChaOne
//
//  Created by Ozan Asan on 03/07/15.
//  Copyright (c) 2015 OzanAsan. All rights reserved.

#include "Ques4.h"

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

