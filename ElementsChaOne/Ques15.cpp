//
//  Ques15.cpp
//  ElementsChaOne
//
//  Created by Ozan Asan on 07/07/15.
//  Copyright (c) 2015 OzanAsan. All rights reserved.
//

#include "Ques15.h"

int findGCD(int x, int y){
    while(x !=  y){
        if (x > y) {
            x = x -y;
        }
        else if(y > x){
            y = y - x;
            
        }
    }
    return x;
}