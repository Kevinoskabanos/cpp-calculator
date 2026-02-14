#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    double a, b;
    char znak;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    cout << "Wybierz operacje (+,-,*,/): ";
    cin >> znak;

    switch (znak)
    {
    case '+':
        cout << "Wynik: " << a + b << endl;
        break;

    case '-':
        cout << "Wynik: " << a - b << endl;
        break;

    case '*':
        cout << "Wynik: " << a * b << endl;
        break;

    case '/':
        if (b == 0)
        {
            cout << "Blad: nie mozna dzielic przez zero!" << endl;
        }
        else
        {
            cout << "Wynik: " << a / b << endl;
        }
        break;

    default:
        cout << "Nieznany operator!" << endl;
        break;
    }
    return 0;
}




