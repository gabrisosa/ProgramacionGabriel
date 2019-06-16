#ifndef EVENTO_H
#define EVENTO_H
#include <iostream>

using namespace std;



class Evento
{
public:
    Evento(int _dia, int _mes, int _ano, string _descripcion);

    bool isDate(int dia, int mes, int ano);

    string getDescripcion() const;

    void print();

private:
    int dia;
    int mes;
    int ano;
    string descripcion;
};

#endif // EVENTO_H
