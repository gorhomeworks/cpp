#include "class.h"


Car::Car(string b, string m, int y, double p) {
    brand = b;
    model = m;
    year = y;
    price = p;
}

void Car::display() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Price: $" << price << endl;
}

bool Car::operator==(const Car& other) {
    return brand == other.brand && model == other.model;
}

double Car::operator+(const Car& other) {
    return price + other.price;
}


void comparePrices(const Car& c1, const Car& c2) {
    if (c1.price > c2.price) {
        cout << c1.brand << " is more expensive." << endl;
    } else if (c1.price < c2.price) {
        cout << c2.brand << " is more expensive." << endl;
    } else {
        cout << "Both cars have the same price." << endl;
    }
}

ostream& operator<<(ostream& out, const Car& c) {
    out << c.brand << " " << c.model
        << " (" << c.year << "), Price: $" << c.price;
    return out;
}
