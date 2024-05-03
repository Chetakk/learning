#include <iostream>
using namespace std;
class Length {
private:
    double meters;

public:
    Length(double m = 0.0) : meters(m) {}

    // Operator overloading for adding two lengths
    Length operator+(Length other)
    {
        return Length(meters + other.meters);
    }

    operator double()
    {
        return meters * 100.0;
    }

    void display()
    {
        cout << "Length in meters: " << meters << " m" << endl;
    }
};

int main() {
    Length length1(5.0);
    Length length2(2.5);

    Length totalLength = length1 + length2;

    totalLength.display();

    double totalLengthInCm = totalLength;
    std::cout << "Total length in centimeters: " << totalLengthInCm << " cm" << std::endl;

    return 0;
}