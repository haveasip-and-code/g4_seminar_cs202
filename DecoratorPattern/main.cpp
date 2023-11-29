#include "beverage.h"

int main() {
    beverage_component* giang_order = new oolong_tea;
    giang_order = new syrup_vanilla(giang_order);
    giang_order = new pistachio(giang_order);
    cout << "Giang's order: " << giang_order->getDescription() << ": " << giang_order->getCost() << "$" << endl;

    beverage_component* jane_order = new espresso;
    jane_order = new syrup_hazelnut(jane_order);
    jane_order = new cinnamon(jane_order);
    jane_order = new pistachio(jane_order);
    cout << "Jane's order: " << jane_order->getDescription() << ": " << jane_order->getCost() << "$" << endl;

    delete giang_order;
    delete jane_order;
    return 0;
}
