//
// Created by Paola on 14/10/2021.
//

#ifndef PROYECTOSECUENCIA_ADN_H
#define PROYECTOSECUENCIA_ADN_H

class ADN {
private:
    string secuencia;

public:
    ADN(string _secuencia);
    string GetSecuencia();
    int Longitud();
    string Transcripcion();
    string GetTranscripcion();

};


#endif //PROYECTOSECUENCIA_ADN_H
