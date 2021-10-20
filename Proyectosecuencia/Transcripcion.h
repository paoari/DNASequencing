//
// Created by Paola on 16/10/2021.
//

#ifndef PROYECTOSECUENCIA_TRANSCRIPCION_H
#define PROYECTOSECUENCIA_TRANSCRIPCION_H
#include <map>

using namespace std;

class ADN{

public: //métodos
    ADN(string _secuencia);
    string GetSecuencia();
    int Longitud();
    string Transcripcion();
    string codon();


private: //atributos
    string secuencia;
    map <string, string> codones;

};


#endif //PROYECTOSECUENCIA_TRANSCRIPCION_H
