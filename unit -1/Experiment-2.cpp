#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;

public:
    void getData(float a, float b) {
        length = a;
        breadth = b;
    }

    void display() {
        float area = length * breadth;
        float perimeter = 2 * (length + breadth);

        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;
    }
};

int main() {
    Rectangle r;
    float length, breadth;

    cout << "Enter length and breadth: ";
    cin >> length >> breadth;

    r.getData(length, breadth);
    r.display();

    return 0;
}