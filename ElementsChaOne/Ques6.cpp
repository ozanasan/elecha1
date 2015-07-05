//
//  Ques6.cpp
//  ElementsChaOne
//
//  Created by Ozan Asan on 05/07/15.
//  Copyright (c) 2015 OzanAsan. All rights reserved.
//

#include "Ques6.h"

unsigned recursiveFound(unsigned x, unsigned y){
    if(y > x){
        return 0;
    }
    unsigned originalY = y;
    int count = 0;
    while(x >= y){
        y = y << 1;
        count++;
    }
    count--;
    y = y >> 1;
    x = x - y;
    return recursiveFound(x, originalY) + (1 << count);
}