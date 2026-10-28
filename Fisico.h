#ifndef FISICO_H
#define FISICO_H
#include "Producto.h"
#include "Enviable.h"
#include "Remplazable.h"
#include <iostream>

using namespace std;

class Fisico : public Producto, public Enviable, public Remplazable {
private:
    double Peso;

public:
    Fisico();

    virtual ~Fisico();

    double getPeso() const;

    void setPeso(double Peso);

    string enviar() const override;
    string reemplazar() const override;
};



#endif // FISICO_H
