#ifndef ENVIABLE_H
#define ENVIABLE_H
#include <iostream>
using namespace std;
class Enviable {
public:
    Enviable();
    virtual ~Enviable();

    virtual string enviar() const = 0;
};

#endif // ENVIABLE_H
