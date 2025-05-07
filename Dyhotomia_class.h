#pragma once

#include <iostream>
#include <cmath>

using namespace std;

class Dyhotomia {
    private:
        double a;
        double b;
        const double eps = 1e-9;

        double f(double x);      //Функція
        double df(double x);    // f'(x) — похідна функції

    public:
        void setValue(double val_a, double val_b);

        double solveBisection();
        double solveNewton();

            Dyhotomia(double a, double b) {
                setValue(a, b);
            }

            ~Dyhotomia() {
                cout << "Deleted!" << endl;
            }
};