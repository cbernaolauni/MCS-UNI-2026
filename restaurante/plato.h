#ifndef PLATO_H
#define PLATO_H

#include <string>
#include "../types.h"

using namespace std;

class Plato {
private:
    string nombre;
    tipoPrecio precio;

public:

    /**
     * @brief Constructor de la clase Plato.
     * Inicializa un plato con un nombre y un precio.
     */
    Plato(string nombre, tipoPrecio precio);

    /** @brief Destructor de la clase Plato.
     * Libera los recursos asociados al plato.
    */
    ~Plato();

    string getNombre() const;
    tipoPrecio getPrecio() const;

    void mostrar() const;
};

#endif