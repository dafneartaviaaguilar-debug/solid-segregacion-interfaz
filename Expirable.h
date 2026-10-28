#ifndef EXPIRABLE_H
#define EXPIRABLE_H
#include <iostream>

using namespace std;

class Expirable
{
    public:
        Expirable();
        virtual ~Expirable();

        virtual string expirar() const = 0;
};

#endif // EXPIRABLE_H
