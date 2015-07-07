//
//  Ques7.cpp
//  ElementsChaOne
//
//  Created by Ozan Asan on 06/07/15.
//  Copyright (c) 2015 OzanAsan. All rights reserved.
//

#include "Ques7.h"

bool isEven(int controlledNumber){
    if(controlledNumber % 2 == 0){
        return true;
    }
    return false;
}

double square(double x){
    return x * x;
}

double exponent(double x, int y){
    if(y == 0){
        return 1;
    }
    else if(y == 1){
        return x;
    }
    else if(isEven(y)){
        return exponent(square(x), y/2);
    }
    else{
        return x * exponent(square(x), (y-1)/2);
    }
}

