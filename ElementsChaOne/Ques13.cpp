//
//  Ques13.cpp
//  ElementsChaOne
//
//  Created by Ozan Asan on 07/07/15.
//  Copyright (c) 2015 OzanAsan. All rights reserved.
//

#include "Ques13.h"

bool doTheyIntersect(struct rectangle firstRectangle, struct rectangle secondRectangle){
    if((firstRectangle.x <= secondRectangle.x) && ((firstRectangle.x + firstRectangle.width) >= secondRectangle.x)){
        if((firstRectangle.y <= secondRectangle.y) && ((firstRectangle.y + firstRectangle.height) >= secondRectangle.y)){
            return true;
        }
    }
    return false;
}




