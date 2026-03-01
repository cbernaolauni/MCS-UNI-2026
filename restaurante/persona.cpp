#include "persona.h"

using namespace std;

/**
 * @brief Muestra la información básica de la persona.
 *
 * Esta función imprime en la salida estándar (cout) el nombre,
 * apellido y edad de la persona. Utiliza los métodos GetNombre(),
 * GetApellido() y GetEdad() para acceder a los atributos.
 *
 * @note Esta función es constante (const), por lo que no modifica
 * el estado del objeto Persona.
 */
void Persona::mostrarInformacion() const {
    cout << "Persona: "
         << GetNombre() << " "
         << GetApellido()
         << " Edad: " << GetEdad()
         << endl;
}