#ifndef MESA_H
#define MESA_H

#include <memory>
#include <vector>
#include "Mozo.h"
#include "Cliente.h"
#include "Pedido.h"

using namespace std;

class Mesa {
private:
    codigo idMesa;
    std::unique_ptr<Mozo> mozo;
    std::vector<std::unique_ptr<Cliente>> clientes;
    std::vector<std::unique_ptr<Pedido>> pedidos;

public:

    /**
     * @brief Constructor de la clase Mesa.
     * Inicializa una mesa con un identificador único y sin mozo, clientes ni platos asignados
     */
    Mesa(codigo idMesa);

    /**
     * @brief Destructor de la clase Mesa.
     */
    ~Mesa();

    /**
     * @brief Asigna un mozo a la mesa.
     */
    void asignarMozo(std::unique_ptr<Mozo> mozo);

    /**
     * @brief Agrega un cliente a la mesa.
     */
    void agregarCliente(std::unique_ptr<Cliente> cliente);

    /**
     * @brief Agrega un pedido a la mesa.
     */
    void agregarPedido(std::unique_ptr<Pedido> pedido);

    tipoPrecio calcularTotalMesa() const;
    /**
     * @brief Muestra la información completa de la mesa.
     */
    void mostrarInformacion() const;

};

#endif