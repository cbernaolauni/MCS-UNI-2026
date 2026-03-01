#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"

class Cliente : public Persona {
private:
    codigo idCliente;

public:
    /**
     * @brief Constructor de la clase Cliente.
     *
     * Inicializa un objeto Cliente con su nombre, apellido e identificador único.
     * Llama al constructor de la clase base Persona para inicializar los atributos heredados.
     *
     * @param nombre Nombre del cliente.
     * @param apellido Apellido del cliente.
     * @param id Identificador único del cliente.
     *
     * @note La edad se inicializa con el valor por defecto definido en Persona.
     */
    Cliente(string nombre, string apellido, codigo id);
    
    /**
     * @brief Destructor de la clase Cliente.
     *
     * Se ejecuta automáticamente cuando el objeto Cliente es destruido.
     * Muestra un mensaje indicando la liberación del cliente.
     */
    ~Cliente();
    
    /**
     * @brief Muestra la información del cliente.
     *
     * Sobrescribe el método virtual de la clase Persona.
     * Primero muestra el identificador del cliente y luego muestra
     * la información general heredada (nombre, apellido, edad).
     */
    void mostrarInformacion() const override;
};

#endif