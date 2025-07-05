#include<iostream>
using namespace std;

// Find the area and circumference of a circle
// Circumference = 2 * pi * r
// Area = pi * r^2

double pi = 3.14159265359;

double circumference(int r) {
    return 2 * pi * r;
}

double area(int r) {
    return pi * r * r;
}

int main() {
    int r;
    cout << "Enter radius: ";
    cin >> r;

    cout << "Circumference: " << circumference(r) << endl;
    cout << "Area: " << area(r) << endl;

    return 0;
}
