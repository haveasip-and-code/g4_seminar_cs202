//
// Created by Nguyễn Bạch Trường Giang on 29/11/2023.
//

#ifndef DECORATORPATTERN_COFFEESHOP_H
#define DECORATORPATTERN_COFFEESHOP_H

#endif //DECORATORPATTERN_COFFEESHOP_H
#include <iostream>
#include <string>
using namespace std;

class beverage_component {
private:
    string description;
public:
    virtual string getDescription() = 0;
    virtual double getCost() = 0;
    virtual ~beverage_component() = default;
};

class espresso : public beverage_component{
public:
    string getDescription() override;
    double getCost() override;
};

class oolong_tea : public beverage_component{
public:
    string getDescription() override;
    double getCost() override;
};

class ice_blend : public beverage_component{
public:
    string getDescription() override;
    double getCost() override;
};

class customizations_decorator : public beverage_component{
public:
    virtual string getDescription() = 0;
};

class syrup_vanilla : public customizations_decorator{
private:
    beverage_component* beverage;
public:
    explicit syrup_vanilla(beverage_component* src);
    string getDescription() override;
    double getCost() override;
};

class syrup_hazelnut : public customizations_decorator{
private:
    beverage_component* beverage;
public:
    explicit  syrup_hazelnut(beverage_component* src);
    string getDescription();
    double getCost();
};

class pistachio : public customizations_decorator{
private:
    beverage_component* beverage;
public:
    explicit pistachio(beverage_component* src);
    string getDescription() override;
    double getCost() override;
};

class cinnamon : public customizations_decorator{
private:
    beverage_component* beverage;
public:
    explicit cinnamon(beverage_component* src);
    string getDescription() override;
    double getCost() override;
};