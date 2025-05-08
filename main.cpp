#include "Solver.h"

int main(){

    int methodChoice;
    cout << "Оберіть метод розв'язку\n" 
         << "№1: Метод дихотомії\n"
         << "№2: Метод Ньютона\n"
         << ":";
    cin >> methodChoice;

    switch(methodChoice)
    {
    case 1: {
        Bisection Bis;
        double result = Bis.solve();
        cout << "Результат обчислення: " << result << endl;
        break;
    }
    case 2: {
        Newton New;
        double result = New.solve();
        cout << "Результат обчислення: " << result << endl;
        break;
    }
    default:
        break;
    }


}