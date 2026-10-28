#ifndef REMPLAZABLE_H
#define REMPLAZABLE_H
#include <iostream>

using namespace std;

class Remplazable
{
    public:
        Remplazable();
        virtual ~Remplazable();
        virtual string reemplazar() const = 0;

};

#endif // REMPLAZABLE_H
