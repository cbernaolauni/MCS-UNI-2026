#ifndef MOZO_H
#define MOZO_H

#include "Persona.h"

class Mozo : public Persona {
private:
    codigo idEmpleado;

public:
    /**
     * @brief Constructor de la clase Mozo.
     *
     * Inicializa un objeto Mozo con su nombre, apellido, edad y id de empleado.
     * Llama al constructor de la clase base Persona para inicializar los atributos heredados.
     *
     * @param nombre Nombre del mozo.
     * @param apellido Apellido del mozo.
     * @param edad Edad del mozo.
     * @param idEmpleado Número de identificación del empleado.
     */
    Mozo(string nombre, string apellido, positivo edad, codigo idEmpleado);

    /**
     * @brief Destructor de la clase Mozo.
     *
     * Libera los recursos asociados con el objeto Mozo.
     */
    ~Mozo();

    /**
     * @brief Muestra la información del mozo.
     */
    void mostrarInformacion() const override;
};

#endif