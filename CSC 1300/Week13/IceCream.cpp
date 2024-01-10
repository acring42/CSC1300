#include "IceCream.h"

IceCream::IceCream(string a, string b, string c, double d){
    this->cone = a;
    this->flavor = b;
    this->topping = c;
    this->price = d;
}

void IceCream::printIceCream(){
    cout << "YOUR ICE CREAM ORDER:" << endl;
    for(int i=0; i<s; i++){
        cout << "Ice Cream number " << i+1 << endl;
        cout << "Cone:\t" << this->cone << endl;
        cout << "Flavor:\t" << this->flavor << endl;
        cout << "Topping:\t" << this->topping << endl;
        cout << "Price:\t" <<this->price << endl;
    }
}