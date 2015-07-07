//
//  Ques8.cpp
//  ElementsChaOne
//
//  Created by Ozan Asan on 06/07/15.
//  Copyright (c) 2015 OzanAsan. All rights reserved.
//

#include "Ques8.h"

std::string finalString;


int converToDecimal(std::string number, int base){
    int length = (int)number.length();
    int decimalRepresentation = 0;
    int decimalWeight = 0;
    for(int i = length - 1; i >= 0; i--){
        decimalRepresentation += pow(base, decimalWeight) * (number[i] - '0');
        decimalWeight++;
    }
    return decimalRepresentation;
}

void ConvertFromDecimal(int decimal, int toBase)
{
    if (decimal / toBase != 0) {
        ConvertFromDecimal(decimal / 2, toBase);
    }
    char thisDigit = '0' + (decimal % toBase);
    finalString.append(&thisDigit);
}

int convertBaseToBase(int fromBase, std::string number, int toBase){
    int decimalrep = converToDecimal(number, fromBase);
    finalString = "";
    ConvertFromDecimal(decimalrep, toBase);
    return std::stoi(finalString);
}