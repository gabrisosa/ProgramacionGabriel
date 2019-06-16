#include "evento.h"

Evento::Evento(int _dia, int _mes, int _ano, string _descripcion)
{
    dia = _dia;
    mes = _mes;
    ano = _ano;
    descripcion = _descripcion;
}

bool Evento::isDate(int dia, int mes, int ano){
    if((dia = dia) && (mes = mes) && (ano = ano)){
        return true;
    }else {
        return false;
    }
}

string Evento::getDescripcion() const
{
    return descripcion;
}

void Evento::print()
{
    cout << dia << "/" << mes << "/" << ano << endl;
    cout << descripcion << endl;
}
