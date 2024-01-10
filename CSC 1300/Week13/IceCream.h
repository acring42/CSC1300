#ifndef ICECREAM_H
#define ICECREAM_H

#include <iostream>
using namespace std;

class IceCream {
    private:
        string cone, flavor, topping;
        double price;

    public:
        IceCream();
        void setCone(string c){
            this->cone = c;
        }
        string getCone(){
            return this->cone;
        }
        void setFlavor(string f){
            this->flavor = f;
        }
        string getFlavor(){
            return this->flavor;
        }
        void setTopping(string t){
            this->topping = t;
        }
        string getTopping(){
            return this->topping;
        }
        void setPrice(double p){
            this->price = p;
        }
        double getPrice(){
            return this->price;
        }

        void printIceCream();

};


#endif