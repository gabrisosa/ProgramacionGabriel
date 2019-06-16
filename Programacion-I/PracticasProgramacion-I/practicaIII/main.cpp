#include <iostream>
#include "agenda.h"
#include "evento.h"

using namespace std;



int main()
{
    int a{69};
    Agenda miAgenda;
    while (a != 0) {
        cout << "(1) Crear un evento." << endl;
        cout << "(2) Consultar todos los eventos de una fecha determinda." << endl;
        cout << "(0) Salir" << endl;
        cin >> a;
        switch (a) {
        case 1:{
            int dia, mes, ano;
            string descrip;
            cout << "Introduce el dia del evento: ";
            cin >> dia;
            cout << "Introduce el mes del evento: ";
            cin >> mes;
            cout << "Introduce el ano del evento: ";
            cin >> ano;
            cout << "Introduce la descripcion del evento: ";
            cin >> descrip;

            Evento miEvento(dia, mes, ano, descrip);
            miAgenda.addEvent(miEvento);

            break;
        }
        case 2:{
            cout << "Introuce una fecha en la que buscar" << endl;
            int dia, mes, ano;
            cout << "Introduce el dia del evento: ";
            cin >> dia;
            cout << "Introduce el mes del evento: ";
            cin >> mes;
            cout << "Introduce el ano del evento: ";
            cin >> ano;

            vector<Evento> result = miAgenda.findByDate(dia, mes, ano);
            Agenda miSegundaAgenda(result);

            cout << endl;

            miSegundaAgenda.print();

            break;
        }
        }
    }
    return 0;
}
