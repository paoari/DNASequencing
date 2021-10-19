//
// Created by Paola on 16/10/2021.
//

#ifndef PROYECTOSECUENCIA_TRANSCRIPCION_H
#define PROYECTOSECUENCIA_TRANSCRIPCION_H
#include <map>

using namespace std;

class ADN{

public:
    ADN(string _secuencia);
    string GetSecuencia();
    int Longitud(); //porque es un numero
    string Transcripcion(); //conjunto de letras
    string GetTranscripcion();
    string codon();


private:
    string secuencia;
    map <string, string> codones;

};


#endif //PROYECTOSECUENCIA_TRANSCRIPCION_H
