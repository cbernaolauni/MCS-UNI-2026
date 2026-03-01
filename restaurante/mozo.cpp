#include "Mozo.h"
#include <iostream>

Mozo::Mozo(string nombre, string apellido, positivo edad, codigo idEmpleado)
    : Persona(nombre, apellido, edad), idEmpleado(idEmpleado) {
    cout << "Mozo(" << GetNombre() << ", " << GetApellido() << ", Edad: " << GetEdad() << ", Id Empleado: " << this->idEmpleado << ")" << endl;
    }

Mozo::~Mozo() {
    cout << "~Mozo(Id Empleado: " << idEmpleado << ")" << endl;   
}

void Mozo::mostrarInformacion() const {
    cout << "Mozo Id Empleado: " << idEmpleado << endl;
    Persona::mostrarInformacion();
}