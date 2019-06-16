#include "agenda.h"

Agenda::Agenda()
{

}

Agenda::Agenda(vector<Evento> e)
{
    lista = e;
}

void Agenda::addEvent(Evento a)
{
    lista.push_back(a);
}

vector<Evento> Agenda::findByDate(int dia, int mes, int ano)
{
    vector<Evento> aux;
    for(auto w: lista){
        if(w.isDate(dia, mes, ano)){
            aux.push_back(w);
        }
    }
    return aux;
}

void Agenda::print()
{
    for(auto d: lista){
        d.print();
        cout << endl;
    }
}
