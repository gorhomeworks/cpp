#include "class.h"

int main() {
    Car* car1 = new Car("BMW", "M5", 2022, 85000);
    Car* car2 = new Car("Mercedes", "E63", 2023, 95000);

    cout << "Cars info" << endl;
    car1->display();
    cout << endl;
    car2->display();

    cout << "\nostream operator " << endl;
    cout << *car1 << endl;
    cout << *car2 << endl;

    
    cout << "\ncompare" << endl;
    if (*car1 == *car2) {
        cout << "Both cars are the same model." << endl;
    } else {
        cout << "These are different cars." << endl;
    }

  
    cout << "\nTotal car prices" << endl;
    cout << "Combined price: $" << (*car1 + *car2) << endl;

  
    cout << "\ncompare using friend" << endl;
    comparePrices(*car1, *car2);

    delete car1;
    delete car2;

    return 0;
}
