#include "car.hpp"

string Auto(string marka, string model)
{
if (marka == model)
    {return "Nieprawidlowe dane. Wprowadzono podwojnie marke/model. Upewnij sie, ze wprowadziles poprawne dane!";}
else
 {
 cout << "Twoje auto to: " << marka << " " << model << endl;
    return "Wprowadzono marke oraz model samochodu";}
}
