#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // HIBA: NELEMENTS >>> N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' // HIBA: 'char' >>> "str", a C++ string dupla idezojelet hasznal, hianyzik a sor vege
    for (int i = 0;) // HIBA: teljes for-fejlec (kezdet; feltetel; leptetes)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // HIBA: feltetel i < N_ELEMENTS (nem 0-kent ertelmezett i)
    {
        std::cout << "Ertek:" // HIBA: ertek kiirasa, sorvegi pontosvesszo es sortores
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // HIBA: inicializalas 0-ra hianyzik
    for (int i = 0; i < N_ELEMENTS, i++) // HIBA: vesszo helyett pontosvesszo a for-fejlecben
    {
        atlag += b[i] // HIBA: sorvegi pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
