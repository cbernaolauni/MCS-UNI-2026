#include "Cliente.h"
#include <iostream>

Cliente::Cliente(string nombre, string apellido, codigo id)
    : Persona(nombre, apellido), idCliente(id) {
        cout << "Cliente(" << GetNombre() << ", " << GetApellido() << ", Id Cliente: " << idCliente << ")" << endl;
    }

Cliente::~Cliente() {
    cout << "~Cliente(Id Cliente: " << idCliente << ")" << endl;
}

void Cliente::mostrarInformacion() const {
    cout << "Id Cliente: " << idCliente << endl;
    Persona::mostrarInformacion();
}