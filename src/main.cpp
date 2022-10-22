#include "car.hpp"
#include <iostream>
using namespace std;


int main()
{   string marka;
    string model;

    cout << "Podaj marke swojego samochodu: " << endl;
    getline (cin, marka);
    cout << "Podaj model swojego samochodu: " << endl;
    getline (cin, model);

    cout << Auto(marka, model) << endl;

    return 0;
}