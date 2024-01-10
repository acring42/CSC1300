#include "IceCream.h"

int main(){
    int size;
    string cone, flavor, topping;
    double price;
    cout << "How many ice creams would you like?" << endl;
    cin >> size;

    IceCream *iceCream = new IceCream[size];
    for(int i=0; i<size; i++){
        cout << "\nEnter data for ice cream " << i << ":" << endl;
        cout << "Type of cone:\t";
        cin.ignore();
        getline(cin, cone);
        iceCream->setCone(cone);
        cout << "What flavor?\t";
        getline(cin, flavor);
        iceCream->setFlavor(flavor);
        cout << "What topping?\t";
        getline(cin, topping);
        iceCream->setTopping(topping);
        cout << "Price:\t";
        cin >> price;
        iceCream->setPrice(price);

        cout << iceCream->getCone() << endl;
        cout << iceCream->getFlavor() << endl;
        cout << iceCream->getTopping() << endl;
        cout << iceCream->getPrice() << endl;

    }
    for(int i=0; i<size; i++)
        delete IceCream[i]
    delete [] iceCream;
    return 0;
}