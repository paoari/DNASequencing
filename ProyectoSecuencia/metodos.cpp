//
// Created by Paola on 16/10/2021.
//
#include <iostream>
#include <array>
#include "Transcripcion.h"
#include <map>

using namespace std;

ADN::ADN(string _secuencia){
    secuencia=_secuencia;

    codones.insert(pair<string, string>("UUU", "Phe"));
    codones.insert(pair<string, string>("UUC", "Phe"));
    codones.insert(pair<string, string>("UUA", "Leu"));
    codones.insert(pair<string, string>("UUG", "Leu"));
    codones.insert(pair<string, string>("CUU", "Leu"));
    codones.insert(pair<string, string>("CUC", "Leu"));
    codones.insert(pair<string, string>("CUA", "Leu"));
    codones.insert(pair<string, string>("CUG", "Leu"));
    codones.insert(pair<string, string>("AUU", "Ile"));
    codones.insert(pair<string, string>("AUC", "Ile"));
    codones.insert(pair<string, string>("AUA", "Ile"));
    codones.insert(pair<string, string>("AUG", "Met"));
    codones.insert(pair<string, string>("GUU", "Val"));
    codones.insert(pair<string, string>("GUC", "Val"));
    codones.insert(pair<string, string>("GUA", "Val"));
    codones.insert(pair<string, string>("GUG", "Val"));
    codones.insert(pair<string, string>("UCU", "Ser"));
    codones.insert(pair<string, string>("UCC", "Ser"));
    codones.insert(pair<string, string>("UCA", "Ser"));
    codones.insert(pair<string, string>("UCG", "Ser"));
    codones.insert(pair<string, string>("CCU", "Pro"));
    codones.insert(pair<string, string>("CCC", "Pro"));
    codones.insert(pair<string, string>("CCA", "Pro"));
    codones.insert(pair<string, string>("CCG", "Pro"));
    codones.insert(pair<string, string>("ACU", "Thr"));
    codones.insert(pair<string, string>("ACC", "Thr"));
    codones.insert(pair<string, string>("ACA", "Thr"));
    codones.insert(pair<string, string>("ACG", "Thr"));
    codones.insert(pair<string, string>("GCU", "Ala"));
    codones.insert(pair<string, string>("GCC", "Ala"));
    codones.insert(pair<string, string>("GCA", "Ala"));
    codones.insert(pair<string, string>("GCG", "Ala"));
    codones.insert(pair<string, string>("UAU", "Tyr"));
    codones.insert(pair<string, string>("UAC", "Tyr"));
    codones.insert(pair<string, string>("UAA", "Stop"));
    codones.insert(pair<string, string>("UAG", "Stop"));
    codones.insert(pair<string, string>("CAU", "His"));
    codones.insert(pair<string, string>("CAC", "His"));
    codones.insert(pair<string, string>("CAA", "Gln"));
    codones.insert(pair<string, string>("CAG", "Gln"));
    codones.insert(pair<string, string>("AAU", "Asn"));
    codones.insert(pair<string, string>("AAC", "Asn"));
    codones.insert(pair<string, string>("AAA", "Lys"));
    codones.insert(pair<string, string>("AAG", "Lys"));
    codones.insert(pair<string, string>("GAU", "Asp"));
    codones.insert(pair<string, string>("GAC", "Asp"));
    codones.insert(pair<string, string>("GAA", "Glu"));
    codones.insert(pair<string, string>("GAG", "Glu"));
    codones.insert(pair<string, string>("UGU", "Cys"));
    codones.insert(pair<string, string>("UGC", "Cys"));
    codones.insert(pair<string, string>("UGA", "Stop"));
    codones.insert(pair<string, string>("UGG", "Trp"));
    codones.insert(pair<string, string>("CGU", "Arg"));
    codones.insert(pair<string, string>("CGC", "Arg"));
    codones.insert(pair<string, string>("CGA", "Arg"));
    codones.insert(pair<string, string>("CGG", "Arg"));
    codones.insert(pair<string, string>("AGU", "Ser"));
    codones.insert(pair<string, string>("AGC", "Ser"));
    codones.insert(pair<string, string>("AGA", "Arg"));
    codones.insert(pair<string, string>("AGG", "Arg"));
    codones.insert(pair<string, string>("GGU", "Gly"));
    codones.insert(pair<string, string>("GGC", "Gly"));
    codones.insert(pair<string, string>("GGA", "Gly"));
    codones.insert(pair<string, string>("GGG", "Gly"));
}
string ADN::GetSecuencia(){
    return secuencia;
}

int ADN::Longitud(){
    return secuencia.length();
}

string ADN::Transcripcion() {
    //Recordamos que la transpuesta de cada nucleotido es:
    //Adenina-Uracilo, Timina-Adenina, Guanina-Citosina, Citosina-Guanina

    for (int i = 0; i <= secuencia.length(); i++)
        if (secuencia[i] == 'A') {
            secuencia[i] = 'U';
        }

        else if (secuencia[i] == 'T'){
            secuencia[i] = 'A';
        }

        else if (secuencia[i] == 'G'){
            secuencia[i] = 'C';
        }

        else if (secuencia[i] == 'C'){
            secuencia[i] = 'G';
        }
    return secuencia;

    }

string ADN::codon(){
string result = "";
    for (int i = 0; i < secuencia.length(); i+=3) {
        string codon_ = secuencia.substr(i,3);
        auto it = codones.find(codon_);
        string amino = it->second;
        result += amino + " - ";
    }
    return result;
}