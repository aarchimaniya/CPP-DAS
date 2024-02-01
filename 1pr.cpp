#include <iostream>

class Distance {
private:
    int feet;
    float inches;

public:
    void Distance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void Distance() {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }

    void Distance(Distance d1, Distance d2) {
        inches = d1.inches + d2.inches;
        feet = d1.feet + d2.feet;

        if (inches >= 12) {
            inches -= 12;
            feet++;
        }
    }
};

int main() {
    Distance distance1, distance2, distance3;

    cout << "Enter the first distance" << endl;
    distance1.getDistance();

    cout << "Enter the second distance" << endl;
    distance2.Distance();

    distance3.Distance(distance1, distance2);

    cout << "Total distance is:" << endl;
    distance3.Distance();

    return 0;
}

