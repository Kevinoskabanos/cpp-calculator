#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    char decyzja;


    do {
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
                cout << "\033[1;32mWynik: " << a + b << "\033[0m" <<  endl;
                break;

            case '-':
                cout << "\033[1;32mWynik: " << a - b << "\033[0m" << endl;
                break;

            case '*':
                cout << "\033[1;32mWynik: " << a * b << "\033[0m" <<  endl;
                break;

            case '/':
                if (b == 0)
                {
                    cout << "\033[1;31mBlad: nie mozna dzielic przez zero!\033[0m" << endl;
                }
                else
                {
                    cout << "\033[1;32mWynik: " << a / b << "\033[0m" << endl;
                }
                break;

            default:
                cout << "\033[1;31mNieznany operator!\033[0m" <<  endl;
                break;
        }

        cout << "Czy chcesz wykonac kolejne dzialanie? (t/n): ";
        cin >> decyzja;
        cout << endl;

    } while (decyzja == 't' || decyzja == 'T');

    cout << "Koniec programu. Do zobaczenia!" << endl;
    return 0;
}
