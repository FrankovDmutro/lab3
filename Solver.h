#pragma once

#include <iostream>
#include <cmath>

using namespace std;

class Bisection {
    private:
        double a;
        double b;
        double eps;

        double f(double x);      //Функція

    public:
        double solve();

            Bisection() {
                a = 0;
                b = 0.8;
                eps = 1e-9;
                cout << "Значення a: " << a << "\n"
                     << "Значення b: " << b << "\n"
                     << "Значення eps: " << eps << endl;
            }

            ~Bisection() {
                cout << "Видалено!" << endl;
            }
};

class Newton {
    private:
        double a;
        double b;
        double eps;

        double f(double x);      //Функція
        double df(double x);    // f'(x) — похідна функції

    public:
        double solve();
            Newton() {
                a = 0;
                b = 0.8;
                eps = 1e-9;
                cout << "Значення a: " << a << "\n"
                     << "Значення b: " << b << "\n"
                     << "Значення eps: " << eps << endl;
            }

            ~Newton() {
                cout << "Видалено!" << endl;
            }
};
