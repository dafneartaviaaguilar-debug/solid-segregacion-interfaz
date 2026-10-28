#include <iostream>
#include <iostream>
#include "Fisico.h"
#include "Digital.h"

using namespace std;

int main() {
    cout << "Segregación de Interfaz\n" << endl;

    Fisico ProductoFisico;
    ProductoFisico.setNombre("Nintendo");
    ProductoFisico.setPrecio(500);
    ProductoFisico.setPeso(1200);

    Digital ProductoDigital;
    ProductoDigital.setNombre("Game");
    ProductoDigital.setPrecio(120);
    ProductoDigital.setFilePath("c:\\file\\game.app");

    cout << "Producto Fisico: " << ProductoFisico.getNombre() << endl;
    cout << "Producto Fisico: " << ProductoFisico.enviar() << endl;
    cout << "Producto Fisico: " << ProductoFisico.reemplazar() << "\n" << endl;

    cout << "Producto Digital: " << ProductoDigital.getNombre() << endl;
    cout << "Producto Digital: " << ProductoDigital.expirar() << "\n" <<endl;

    return 0;
}
