#include <iostream>
using namespace std;

class Country {
public:
    char name[30];
    float population;
    float area;

    float density() {
        return population / area;
    }
};

int main() {
    int n;
    cout << "Enter number of countries: ";
    cin >> n;

    Country c[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter country name: ";
        cin >> c[i].name;
        cout << "Enter population: ";
        cin >> c[i].population;
        cout << "Enter area: ";
        cin >> c[i].area;
    }

    int largeArea = 0, smallPop = 0, smallDensity = 0;

    for (int i = 1; i < n; i++) {
        if (c[i].area > c[largeArea].area)
            largeArea = i;

        if (c[i].population < c[smallPop].population)
            smallPop = i;

        if (c[i].density() < c[smallDensity].density())
            smallDensity = i;
    }

    cout << "\nCountry with Largest Area: " << c[largeArea].name;
    cout << "\nCountry with Smallest Population: " << c[smallPop].name;
    cout << "\nCountry with Smallest Population Density: " << c[smallDensity].name;

    return 0;
}
