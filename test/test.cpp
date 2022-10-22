#include "../src/car.hpp"
#include <iostream>

using namespace std;

int main ()
{
    string marka = "Honda";
    string model = "Civic";

    Auto(marka, model);

    if(marka == model)
    {
        cout << "Wprowadzono dwukrotnie model/marke samochodu." << endl;
    return 1;
    }
cout << "Test nie zawiera bledow" << endl;
return 0;
}