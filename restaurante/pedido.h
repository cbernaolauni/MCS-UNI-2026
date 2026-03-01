#ifndef PEDIDO_H
#define PEDIDO_H

#include <vector>
#include "Plato.h"

class Pedido {
private:
    codigo idPedido;
    vector<Plato*> platos;

public:
    /**
     * @brief Constructor de la clase Pedido.
     *
     * Inicializa un pedido con un identificador único.
     *
     * @param id Identificador del pedido.
     */
    Pedido(codigo id);

    /**
     * @brief Agrega un plato al pedido.
     *
     * Esta función añade un puntero a un objeto Plato al contenedor
     * de platos del pedido.
     *
     * @param plato Puntero al objeto Plato que se agregará al pedido.
     *
     */
    void agregarPlato(Plato* plato);

    /**
     * @brief Variadic template para agregar múltiples platos
     */
    template<typename... Args>
    void agregarPlatos(Args... args)
    {
        (agregarPlato(args), ...);
    }

    /**
     * @brief Calcula el costo total del pedido.
     *
     * Recorre todos los platos del pedido y suma sus precios
     * utilizando el método getPrecio().
     *
     * @return double El resultado fianl de la suma de los precios de los platos.
     */
    tipoPrecio calcularTotal() const;
    
    /**
     * @brief Muestra la información completa del pedido.
     *
     * Imprime el identificador del pedido, la lista de platos
     * incluidos y el costo total calculado.
     */
    void mostrarPedido() const;
};

#endif