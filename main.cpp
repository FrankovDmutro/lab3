#include "Dyhotomia_class.h"

int main(){
    int methodChoice;
    double a, b;
    
    cout << "Введіть проміжок від a до b: " << endl;
    cin >> a >> b; 
    
    cout << "Оберіть метод розв'язку\n" 
         << "№1: Метод дихотомії\n"
         << "№2: Метод Ньютона\n"
         << ":";
    cin >> methodChoice;

    switch(methodChoice)
    {
    case 1: {
        Dyhotomia* dyh = new Dyhotomia(a, b);
        double result = dyh->solveBisection();
        cout << "Result:" << result << endl;
        delete dyh;
        break;
    }
    case 2: {
        Dyhotomia* nut = new Dyhotomia(a, b);
        double result = nut->solveNewton();
        cout << "Result:" << result << endl;
        delete nut;
        break;
    }
    default:
        break;
    }


}