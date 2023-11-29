#include "shipping.h"

int main() {
    /*order Giang;
    cout << Giang.getCost("ship", 10) << endl;
    cout << Giang.getCost("motorbike", 10) << endl;*/

    order_context Giang(make_unique<plane_strategy>());
    cout << Giang.getShippingCost(10) << endl;

    Giang.setType(make_unique<bus_strategy>());
    cout << Giang.getShippingCost(10) << endl;
    return 0;
}
