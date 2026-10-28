#ifndef DIGITAL_H
#define DIGITAL_H
#include "Producto.h"
#include "Expirable.h"
using namespace std;

class Digital: public Producto, public Expirable {
private:
    string filePath;
public:
    Digital();

    virtual ~Digital();

    const string &getFilePath() const;

    void setFilePath(const string &filePath);

    string expirar() const override;
};


#endif // DIGITAL_H
