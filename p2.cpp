#include <iostream>
using namespace std;

class Employee {
private:
    int emp_no;
    char emp_name[30];
    float basic_pay, DA, HRA, CCA, PF, gross_pay, net_pay;

public:
    void getdata() {
        cout << "Enter Employee Number: ";
        cin >> emp_no;
        cout << "Enter Name: ";
        cin >> emp_name;
        cout << "Enter Basic Pay: ";
        cin >> basic_pay;
    }

    void calculate() {
        DA = 0.32 * basic_pay;
        HRA = 0.15 * basic_pay;
        CCA = 0.10 * basic_pay;
        PF = 0.15 * basic_pay;

        gross_pay = basic_pay + DA + HRA + CCA + PF;
        net_pay = gross_pay - PF;
    }

    void display() {
        cout << "\nEmployee No: " << emp_no;
        cout << "\nName: " << emp_name;
        cout << "\nGross Pay: " << gross_pay;
        cout << "\nNet Pay: " << net_pay << endl;
    }
};

int main() {
    Employee e[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details of employee " << i + 1 << endl;
        e[i].getdata();
        e[i].calculate();
    }

    for (int i = 0; i < 5; i++) {
        e[i].display();
    }

    return 0;
}
