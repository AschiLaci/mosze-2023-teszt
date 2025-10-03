#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // HIBA: NELEMENTS >>> N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa" << std::endl; // HIBA: 'char' >>> "str", a C++ string dupla idezojelet hasznal, hianyzik a sor vege
    for (int i = 0; i < N_ELEMENTS; i++) // HIBA: teljes for-fejlec (kezdet; feltetel; leptetes)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // HIBA: feltetel i < N_ELEMENTS (nem 0-kent ertelmezett i)
    {
        std::cout << "Ertek: " << b[i] << std::endl; // HIBA: ertek kiirasa, sorvegi pontosvesszo es sortores
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // HIBA: inicializalas 0-ra hianyzik
    for (int i = 0; i < N_ELEMENTS; i++) // HIBA: vesszo helyett pontosvesszo a for-fejlecben
    {
        atlag += b[i]; // HIBA: sorvegi pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b; // EXTRA: lefoglalt tomb felszabaditasa (memoriaszivargas elkerulese)
    return 0;
}
