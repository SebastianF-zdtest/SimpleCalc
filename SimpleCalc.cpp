//*************Sebastian Fa³drowicz 150962

#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float number_1;
    float number_2;
    int square;
    int amplified;
    float total = 0;
    char type;

    cout << "*************Sebastian Faldrowicz 150962";
    cout << "\n----\n";
    cout << "\n***********Kalkulator***********\n";
    cout << "\n----\n";
    cout << "Podaj pierwsza liczbe: ";
    cin >> number_1;
    cout << "Podaj druga liczbe: ";
    cin >> number_2;
    cout << "\nProsze wybrac z ponizszych, rodzaj dzialania do wykonania\n";
    cout << "[1] - dodawanie\n";
    cout << "[2] - odejmowanie\n";
    cout << "[3] - mnozenie\n";
    cout << "[4] - dzielenie\n";
    cout << "[5] - potegowanie\n";
    cout << "[6] - pierwiastkowanie\n";
    cout << "[7] - WYJSCIE\n\n";
    cin >> type;

    while (type != '7') {
        if (type == '1') {
            cout << "\n----\n";
            cout << "Dodawanie\n";

            total = number_1 + number_2;

            cout << "Twoj wynik to: " << total << " !!!\n";
        }

        else if (type == '2') {
            cout << "\n----\n";
            cout << "Odejmowanie\n";

            total = number_1 - number_2;

            cout << "Twoj wynik to: " << total << " !!!\n";
        }

        else if (type == '3') {
            cout << "\n----\n";
            cout << "Mnozenie\n";

            total = number_1 * number_2;

            cout << "Twoj wynik to: " << total << " !!!\n";
        }

        else if (type == '4') {
            cout << "\n----\n";
            cout << "Dzielenie\n";

            total = number_1 / number_2;

            cout << "Twoj wynik to: " << total << " !!!\n";
        }

        else if (type == '5') {
            cout << "\n----\n";
            cout << "Potegowanie\n";

            total = pow(number_1, number_2);

            cout << "Twoj wynik to: " << total << " !!!\n";
        }

        else if (type == '6') {
            cout << "\n----\n";
            cout << "Pierwiatkowanie\n";

            total = pow(number_1, 1 / number_2);

            cout << "Twoj wynik to: " << total << " !!!\n";
        }

        cout << "\n----\n";
        cout << "Kolejny wybor: ";
        cin >> type;
    }

    return 0;
}
