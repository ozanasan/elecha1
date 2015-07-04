//
//  Ques3.cpp
//  ElementsChaOne
//
//  Created by Ozan Asan on 03/07/15.
//  Copyright (c) 2015 OzanAsan. All rights reserved.
//

#include "Ques3.h"

uint64_t reverse64Bit(uint64_t thatNumber){
    for(int i = 0; i < 32; i++){
        thatNumber = swapBits(thatNumber, i, 63-i);
    }
    return thatNumber;
}
