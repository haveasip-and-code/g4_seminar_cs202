//
// Created by Nguyễn Bạch Trường Giang on 29/11/2023.
//

#include "beverage.h"

string espresso::getDescription(){
    return "Espresso";
}
double espresso::getCost(){
    return 2.5;
}

string oolong_tea::getDescription(){
    return "Oolong tea";
}
double oolong_tea::getCost(){
    return 3;
}

string ice_blend::getDescription(){
    return "Matcha ice blended";
}

double ice_blend::getCost(){
    return 3.5;
}
