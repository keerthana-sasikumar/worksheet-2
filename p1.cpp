#include <iostream>
using namespace std;

class Batsman {
private:
    int bcode;
    char bname[30];
    int innings, notout, runs;
    float batavg;

public:
    void getdata() {
        cout << "Enter Batsman Code: ";
        cin >> bcode;
        cout << "Enter Name: ";
        cin >> bname;
        cout << "Enter Innings: ";
        cin >> innings;
        cout << "Enter Not Outs: ";
        cin >> notout;
        cout << "Enter Runs: ";
        cin >> runs;
    }

    void calcavg() {
        batavg = (float)runs / (innings - notout);
    }

    void displaydata() {
        cout << "\nBatsman Code: " << bcode;
        cout << "\nName: " << bname;
        cout << "\nBatting Average: " << batavg << endl;
    }
};

int main() {
    Batsman b[10];

    for (int i = 0; i < 10; i++) {
        cout << "\nEnter details of player " << i + 1 << endl;
        b[i].getdata();
        b[i].calcavg();
    }

    for (int i = 0; i < 10; i++) {
        b[i].displaydata();
    }

    return 0;
}
