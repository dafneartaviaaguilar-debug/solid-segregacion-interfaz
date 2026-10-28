#include "Fisico.h"

Fisico::Fisico()
{
    //ctor
}

Fisico::~Fisico()
{
    //dtor
}


double Fisico::getPeso() const {
    return Peso;
}

void Fisico::setPeso(double Peso) {
    Fisico::Peso = Peso;
}

string Fisico::enviar() const {
    return "Enviando...";
}

string Fisico::reemplazar() const {
    return "Reemplazando...";
}
