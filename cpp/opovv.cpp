#include <iostream>

class LengthConverter {
private:
    double meters;

public:
    LengthConverter(double m = 0.0) : meters(m) {}

    operator double(){
        return meters * 100.0;
    }

    void display(){
        std::cout << "Length in meters: " << meters << " m" << std::endl;
    }
};

int main() {
    LengthConverter length1(5.0);
    length1.display();
    double lengthInCm = length1;
    std::cout << "Length in centimeters: " << lengthInCm << " cm" << std::endl;

    return 0;
}