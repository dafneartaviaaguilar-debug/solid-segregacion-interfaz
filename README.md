# Principio de Segregación de Interfaz (ISP)

Proyecto en **C++** que demuestra el cuarto principio SOLID: **Interface Segregation Principle**.

## ¿Qué dice el principio?

> Ninguna clase debe verse obligada a implementar métodos que **no necesita**. Es mejor tener varias interfaces pequeñas y específicas que una sola interfaz grande.

## ¿Cómo se implementa en este proyecto?

En lugar de crear una interfaz gigante con `enviar()`, `reemplazar()` y `expirar()`, se crearon **tres interfaces pequeñas** (clases abstractas con métodos virtuales puros). Cada producto implementa **solo** las que le corresponden:

| Interfaz | Método | La implementa |
|----------|--------|---------------|
| `Enviable` | `enviar()` | `Fisico` |
| `Remplazable` | `reemplazar()` | `Fisico` |
| `Expirable` | `expirar()` | `Digital` |

### Código clave

```cpp
// Interfaces pequeñas
class Enviable    { public: virtual string enviar() const = 0; };
class Remplazable { public: virtual string reemplazar() const = 0; };
class Expirable   { public: virtual string expirar() const = 0; };

// Un producto físico se envía y se reemplaza
class Fisico : public Producto, public Enviable, public Remplazable { ... };

// Un producto digital solo expira
class Digital : public Producto, public Expirable { ... };
```

### ¿Por qué cumple el principio?

- Un producto **digital no se envía ni se reemplaza físicamente**, así que no está obligado a implementar `enviar()` ni `reemplazar()`.
- Un producto **físico no expira**, así que no implementa `expirar()`.
- Cada clase implementa únicamente lo que realmente usa, sin métodos vacíos ni que lancen errores.

## Estructura del proyecto

```
Producto.h     / Producto.cpp      -> clase base
Enviable.h     / Enviable.cpp      -> interfaz enviar()
Remplazable.h  / Remplazable.cpp   -> interfaz reemplazar()
Expirable.h    / Expirable.cpp     -> interfaz expirar()
Fisico.h       / Fisico.cpp        -> Producto + Enviable + Remplazable
Digital.h      / Digital.cpp       -> Producto + Expirable
main.cpp                           -> programa de ejemplo
```

## Salida del programa

```
Segregación de Interfaz

Producto Fisico: Nintendo
Producto Fisico: Enviando...
Producto Fisico: Reemplazando...

Producto Digital: Game
Producto Digital: Expirado...
```

## Cómo ejecutarlo

```bash
g++ *.cpp -o programa
./programa        # en Windows: programa.exe
```
