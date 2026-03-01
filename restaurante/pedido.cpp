#include "Pedido.h"
#include <iostream>

Pedido::Pedido(codigo id) : idPedido(id) {}

void Pedido::agregarPlato(Plato* plato) {
    platos.push_back(plato);
}

tipoPrecio Pedido::calcularTotal() const {
    tipoPrecio total = 0;
    for (auto p : platos) {
        total += p->getPrecio();
    }
    return total;
}

void Pedido::mostrarPedido() const {
    cout << "Pedido ID: " << idPedido << endl;
    for (auto p : platos) {
        p->mostrar();
    }
    cout << "Total: S/ " << calcularTotal() << endl;
}