#include <iostream>

class LengthConverter {
private:
    double meters;

public:
    LengthConverter(double m = 0.0) : meters(m) {}

    // Operator overloading for adding two lengths
    LengthConverter operator+(const LengthConverter& other) const {
        return LengthConverter(meters + other.meters);
    }

    // Conversion operator: meters to centimeters
    operator double() const {
        return meters * 100.0;
    }

    void display() const {
        std::cout << "Length in meters: " << meters << " m" << std::endl;
    }
};

int main() {
    LengthConverter length1(5.0); // 5 meters
    LengthConverter length2(2.5); // 2.5 meters

    LengthConverter totalLength = length1 + length2; // Adding meters

    totalLength.display(); // Display the result in meters

    // Convert total length to centimeters and display
    double totalLengthInCm = totalLength;
    std::cout << "Total length in centimeters: " << totalLengthInCm << " cm" << std::endl;

    return 0;
}