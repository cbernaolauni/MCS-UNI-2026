#ifndef __PERSONA_H__
#define __PERSONA_H__
#include <iostream>
#include <string>
#include "../types.h"

using namespace std;

class Persona
{
private:
    string nombre;
    string apellido;
    positivo edad;

public:

    /**
     * @brief Constructor de la clase Persona.
     * Inicializa un objeto Persona con su nombre, apellido y edad.
     */
    Persona(string nombre, string apellido, positivo edad): nombre(nombre), apellido(apellido), edad(edad) {
        cout << "Persona(" << GetNombre() << ", " << GetApellido() << ", Edad: " << GetEdad() << ")" << endl;
    }

    /**
     * @brief Constructor alternativo de la clase Persona.
     * Inicializa un objeto Persona con su nombre y apellido, asignando una edad por defecto de 0.
     */
    Persona(string nombre, string apellido) : Persona(nombre, apellido, 0) {}
    
    /**
     * @brief Destructor virtual de la clase base Persona.
     *
     * Necesario para garantizar la correcta destrucción de objetos derivados
     * cuando se usan punteros a la clase base.
     */
    virtual ~Persona() {
        cout << "Destruyendo clase Persona: " << nombre << " " << apellido << " - edad: " << edad << endl;
    };

    virtual void SetNombre(string nombre) { this->nombre = nombre; };
    virtual string GetNombre() const { return nombre; };
    
    virtual void SetApellido(string apellido) { this->apellido = apellido; };   
    virtual string GetApellido() const { return apellido; };

    virtual void SetEdad(positivo edad) { this->edad = edad; };
    virtual positivo GetEdad() const { return edad; };

    virtual void mostrarInformacion() const;
};

#endif
