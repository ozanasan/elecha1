//
//  Ques11.cpp
//  ElementsChaOne
//
//  Created by Ozan Asan on 06/07/15.
//  Copyright (c) 2015 OzanAsan. All rights reserved.
//

#include "Ques11.h"
#include "Ques10.h"

bool isPalindrome(int number){
    if((reverseNumber(number) == number) && ((number/10) > 0) )
        return true;
    return false;
}
