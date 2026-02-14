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

    auto start = chrono::high_resolution_clock::now();

    for (int i = 0; i < 1000000; ++i)
    {
        int x = i * i;
    }
    return 0;
}



