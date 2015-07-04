//
//  Ques5.cpp
//  ElementsChaOne
//
//  Created by Ozan Asan on 03/07/15.
//  Copyright (c) 2015 OzanAsan. All rights reserved.
//

#include "Ques5.h"


unsigned addInHardTimes(unsigned x, unsigned y){
    unsigned helper = 0;
    while(x != 0){
        helper = x & y;
        y = y ^ x;
        helper = helper << 1;
        x = helper;
    }
    return y;
}

unsigned multiplyInHardTimes(unsigned x, unsigned y){
    unsigned helper = 0;
    while(y != 0){
        if(y & 1){
            helper = addInHardTimes(x, helper);
        }
        x = x << 1;
        y = y >> 1;
    }
    return helper;
}
