//
// Created by Nguyễn Bạch Trường Giang on 27/11/2023.
//

#ifndef STRATEGYPATTERN_SHIPPING_H
#define STRATEGYPATTERN_SHIPPING_H

#endif //STRATEGYPATTERN_SHIPPING_H
#include <iostream>
#include <string>
using namespace std;

/*
class order{
public:
    int getCost(const string& type, const int& distance);
};
 */

class shipping_strategy{
public:
    virtual int getCost(const int &distance) = 0;
    virtual ~shipping_strategy() = default;
};

class bus_strategy : public shipping_strategy{
public:
    int getCost(const int &distance) override;
};

class plane_strategy : public shipping_strategy{
public:
    int getCost(const int &distance) override;
};

class order_context{
private:
    unique_ptr<shipping_strategy> strategy;
public:
    explicit order_context(unique_ptr<shipping_strategy> &&src_strategy);
    void setType(unique_ptr<shipping_strategy> &&src_strategy);
    int getShippingCost(const int& distance);
};