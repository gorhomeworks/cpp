#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    double price;

public:
    Car(string b, string m, int y, double p);

    void display();

    bool operator==(const Car& other);
    double operator+(const Car& other);

    friend void comparePrices(const Car& c1, const Car& c2);
    friend ostream& operator<<(ostream& out, const Car& c);
};
