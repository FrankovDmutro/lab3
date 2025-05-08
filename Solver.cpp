#include "Solver.h"

double Bisection::f(double x) {
    return x - 1.0 / (3 - sin(3.6 * x));
}

double Newton::f(double x) {
    return x - 1.0 / (3 - sin(3.6 * x));
}

// f'(x) — похідна функції
double Newton::df(double x) {
    double denominator = 3 - sin(3.6 * x);
    double d_sin = 3.6 * cos(3.6 * x);
    return 1.0 - (d_sin) / (denominator * denominator);
}

double Bisection::solve() {
    if (!(f(a) * f(b) < 0)) {
        cout << "Немає кореня на відрізку" << endl;
        return NAN; // або інше значення, яке означає помилку
    }

    int interations = 0;
    while ((b - a) > eps) {
        double c = (a + b) / 2;
        if ((f(a) * f(c)) < 0) {
            b = c;
        } else {
            a = c;
        }
        interations++;
    }
    double x = (a + b) / 2;
    return x;
}


double Newton::solve() {
    double x0 = ((a + b) / 2);
    double x = x0;
    int interations = 0;
    while(abs(f(x)) > eps){
        double temp = df(x);
        if(temp == 0){
            cout << "Похідна = 0. Неможливо продовжити";
            return NAN;
        }
        x = x - f(x) / temp;
        interations++;
    }   
    return x;
}


