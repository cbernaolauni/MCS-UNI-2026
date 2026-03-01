#include "restaurante.h"
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

void DemoRestaurante() {
    cout << "========================\n";
    cout << "Creando platos...\n";
    Plato* p1 = new Plato("Ceviche", 25.0);
    Plato* p2 = new Plato("Lomo Saltado", 30.5);
    Plato* p3 = new Plato("Arroz con Pollo", 28.5);
    Plato* p4 = new Plato("Ají de Gallina", 27.0);
    Plato* p5 = new Plato("Causa Limeña", 10.0);

    Mesa* mesa = new Mesa(1);
    mesa->asignarMozo(
        make_unique<Mozo>("Juan", "Perez", 30, 1)
    );
    mesa->agregarCliente(
        make_unique<Cliente>("Carlos", "Lopez", 1)
    );
    mesa->agregarCliente(
        make_unique<Cliente>("Ana", "Martinez", 2)
    );

    Pedido* pedido1 = new Pedido(1);
    pedido1->agregarPlato(p1);
    pedido1->agregarPlatos(p2, p3);

    Pedido* pedido2 = new Pedido(2);
    pedido2->agregarPlato(p1);
    pedido2->agregarPlatos(p2, p4);

    mesa->agregarPedido(
        make_unique<Pedido>(*pedido1)
    );
    mesa->agregarPedido(
        make_unique<Pedido>(*pedido2)
    );

    mesa->mostrarInformacion();

    cout << "========================\n";
    Mesa mesa2(2);
    mesa2.asignarMozo(
        make_unique<Mozo>("Carlos", "Lopez", 28, 2)
    );
    mesa2.agregarCliente(
        make_unique<Cliente>("Ana", "Martinez", 3)
    );
    mesa2.agregarCliente(
        make_unique<Cliente>("Cesar", "Perez", 4)
    );

    Pedido* pedido3 = new Pedido(1);
    pedido3->agregarPlato(p1);
    pedido3->agregarPlatos(p3, p5);

    mesa2.agregarPedido(
        make_unique<Pedido>(*pedido3)
    );

    mesa2.mostrarInformacion();

    delete pedido1;
    delete pedido2;
    delete pedido3;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    delete mesa;
}