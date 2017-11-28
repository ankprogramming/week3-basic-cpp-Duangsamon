#include <iostream>

using namespace std;

int main() {

    const float pi = 3.14315926536;
    float r;
    float h=15;
    float area;
    float around;
    float cylinder=15;

    cout << "Please enter radius : ";
    cin >> r;
    area = pi * r * r;
    cout << "Area of Circle : " << area << endl;

    around = 2 * pi * r;
    cout << "Area of Circle : " << around << endl;

    cylinder = pi * r * h;
    cout << "Area of Circle : " << cylinder << endl;

  return 0;
}
