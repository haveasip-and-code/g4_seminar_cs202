//
// Created by Nguyễn Bạch Trường Giang on 27/11/2023.
//

#include "shipping.h"

/*int order::getCost(const string& type, const int& distance){
    if (type == "bus") return distance*30;
    if (type == "car") return distance*25;
    if (type == "motorbike") return distance*10;
    if (type == "ship") return distance*40;
    if (type == "plane") return distance*70;
}*/

int bus_strategy::getCost(const int &distance) {
    return distance*30;
}

int plane_strategy::getCost(const int &distance) {
    return distance*70;
}
void order_context::setType(unique_ptr<shipping_strategy> &&src_strategy){
    this->strategy = std::move(src_strategy);
}

int order_context::getShippingCost(const int& distance){
    return strategy->getCost(distance);
}

order_context::order_context(unique_ptr<shipping_strategy> &&src_strategy) : strategy(std::move(src_strategy)){}
