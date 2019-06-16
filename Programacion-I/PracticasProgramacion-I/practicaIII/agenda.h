#ifndef AGENDA_H
#define AGENDA_H
#include <iostream>
#include <vector>
#include "evento.h"

using namespace std;


class Agenda
{
public:
    Agenda();

    Agenda(vector<Evento> e);

    void addEvent(Evento a);

    vector<Evento> findByDate(int dia, int mes, int ano);

    void print();

private:
    vector<Evento> lista;
};

#endif // AGENDA_H
