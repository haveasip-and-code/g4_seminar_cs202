//
// Created by Nguyễn Bạch Trường Giang on 29/11/2023.
//

#include "beverage.h"

syrup_vanilla::syrup_vanilla(beverage_component* src){
    beverage = src;
}
string syrup_vanilla::getDescription(){
    return beverage->getDescription() + " + Vanilla syrup";
}
double syrup_vanilla::getCost(){
    return beverage->getCost() + 0.5;
}

syrup_hazelnut::syrup_hazelnut(beverage_component* src) {
    beverage = src;
}
string syrup_hazelnut::getDescription(){
    return beverage->getDescription() + " + Hazelnut syrup";
}
double syrup_hazelnut::getCost(){
    return beverage->getCost() + (0.7);
}

pistachio::pistachio(beverage_component*src) {
    beverage = src;
}
string pistachio::getDescription(){
    return beverage->getDescription() + " + Pistachio crumble";
}
double pistachio::getCost(){
    return beverage->getCost() + 1.2;
}

cinnamon::cinnamon(beverage_component* src) {
    beverage = src;
}
string cinnamon::getDescription(){
    return beverage->getDescription() + " + Cinnamon powder";
}
double cinnamon::getCost(){
    return beverage->getCost() + 1;
}
