#include "Mesa.h"
#include <iostream>

using namespace std;

Mesa::Mesa(codigo idMesa) : idMesa(idMesa){}

Mesa::~Mesa() {}

void Mesa::asignarMozo(unique_ptr<Mozo> mozo)
{
    this->mozo = move(mozo);
}

void Mesa::agregarCliente(unique_ptr<Cliente> cliente)
{
    clientes.push_back(move(cliente));
}

void Mesa::agregarPedido(unique_ptr<Pedido> pedido)
{
    pedidos.push_back(move(pedido));
}

/**
 * @brief Calcula el total de todos los pedidos de la mesa
 */
tipoPrecio Mesa::calcularTotalMesa() const
{
    tipoPrecio total = 0;

    for (const auto& pedido : pedidos)
    {
        total += pedido->calcularTotal();
    }

    return total;
}

void Mesa::mostrarInformacion() const
{
    cout << "\n=== Mesa " << idMesa << " ===\n";

    if (mozo)
    {
        cout << "Mozo asignado:\n";
        mozo->mostrarInformacion();
    }

    cout << "\nClientes:\n";
    for (const auto& cliente : clientes)
    {
        cliente->mostrarInformacion();
    }

    cout << "\nPedidos:\n";
    for (const auto& pedido : pedidos)
    {
        pedido->mostrarPedido();
    }

    cout << "\nTOTAL MESA: S/ " << calcularTotalMesa() << endl;
}