#include "Dyhotomia_class.h"

double Dyhotomia::f(double x) {
    return x - 1.0 / (3 - sin(3.6 * x));
}

// f'(x) — похідна функції
double Dyhotomia::df(double x) {
    double denominator = 3 - sin(3.6 * x);
    double d_sin = 3.6 * cos(3.6 * x);
    return 1.0 - (d_sin) / (denominator * denominator);
}

void Dyhotomia::setValue (double val_a, double val_b) {
    this->a = val_a;
    this->b = val_b;
}

double Dyhotomia::solveBisection() {
    if (!(f(a) * f(b) < 0)) {
        cout << "Немає кореня на відрізку" << endl;
        return NAN; // або інше значення, яке означає помилку
    }

    while ((b - a) > eps) {
        double c = (a + b) / 2;
        if ((f(a) * f(c)) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    double x = (a + b) / 2;
    return x;
}


double Dyhotomia::solveNewton() {
    double x0 = ((a + b) / 2);
    double x = x0;
    while(abs(f(x)) > eps){
        double temp = df(x);
        if(temp == 0){
            cout << "Похідна = 0. Неможливо продовжити";
            return NAN;
        }
        x = x - f(x) / temp;
    }   
    return x;
}


