#include "car.hpp"

string Auto(string marka, string model)
{
if (marka == model)
    {return "Bledne dane. Wprowadzono podwojnie marke/model. Sprawdz dane!";}
else
 {
 cout << "Twoje auto to: " << marka << " " << model << endl;
    return "Wprowadzono marke oraz model samochodu";}
}
