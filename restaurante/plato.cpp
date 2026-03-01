#include "Plato.h"
#include <iostream>

Plato::Plato(string nombre, tipoPrecio precio)
    : nombre(nombre), precio(precio) {
        cout << "Creando plato: " << nombre << endl;
    }

Plato::~Plato() {}

string Plato::getNombre() const {
    return nombre;
}

double Plato::getPrecio() const {
    return precio;
}

/**
 * @brief Muestra la información del plato.
 * Imprime el nombre del plato y su precio.
 */
void Plato::mostrar() const {
    cout << nombre << " - S/ " << precio << endl;
}