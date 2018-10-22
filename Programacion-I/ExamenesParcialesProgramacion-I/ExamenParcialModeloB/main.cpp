#include <iostream>

using namespace std;

class Camping{
public:
    //constructor
    Camping(int _tiendas, int _bungalows, int _precio_tienda, int _precio_bungalow){
        if (_bungalows <= 0 || _tiendas <= 0 || _precio_bungalow <= 0 || _precio_tienda <= 0){
            throw string("ERROR! No se puede introducir datos que no sean enteros positivos");
        }
        tiendas = _tiendas;
        bungalows = _bungalows;
        precio_tienda = _precio_tienda;
        precio_bungalow = _precio_bungalow;
        tiendas_ocupadas = 0;
        bungalows_ocupados = 0;
    }

    int getTiendasDisponibles(){
        return tiendas;
    }
    int getBungalowsDisponibles(){
        return bungalows;
    }
    int getTiendasOcupadas(){
        return tiendas_ocupadas;
    }
    int getBungalowsOcupados(){
        return bungalows_ocupados;
    }
    int getPrecioTienda(){
        return precio_tienda;
    }
    int getPrecioBungalow(){
        return precio_bungalow;
    }
    int getRecaudacionMaxima(){
        return (precio_tienda * tiendas + precio_bungalow * bungalows);
    }
    int getRecaudacion(){
        return (precio_bungalow * bungalows_ocupados + precio_tienda * tiendas_ocupadas);
    }

    bool reservaBungalows(int num){
        if ((bungalows_ocupados + num) < bungalows){
            bungalows_ocupados = bungalows_ocupados + num;
            return true;
        }else{
            return false;
        }
    }

    bool reservaTiendas(int num){
        if ((tiendas_ocupadas + num) < tiendas){
            tiendas_ocupadas = tiendas_ocupadas + num;
            return true;
        }else{
            return false;
        }
    }
private:

    //variables miembro (atributos)
    int tiendas;
    int bungalows;
    int tiendas_ocupadas;
    int bungalows_ocupados;
    int precio_tienda;
    int precio_bungalow;

};

int main()
{
    int tiendas, bungalows, precio_bungalow, precio_tienda;

    try {
        cout << "Introduce el número de bungalows: ";
        cin >> bungalows;
        cout << "Introduce el número de tiendas: ";
        cin >> tiendas;
        cout << "Introduce el precio de los bungalows: ";
        cin >> precio_bungalow;
        cout << "Introduce el precio de las tiendas: ";
        cin >> precio_tienda;

        Camping gas{tiendas, bungalows, precio_bungalow, precio_tienda};

        cout << "\n==================================================" << endl;
        cout << "Recaudación máxima: " << gas.getRecaudacionMaxima() << endl;
        cout << "Bungalows: " << gas.getBungalowsDisponibles() << endl;
        cout << "Precio bungalows: " << gas.getPrecioBungalow() << endl;
        cout << "Tiendas: " << gas.getTiendasDisponibles() << endl;
        cout << "Precio tiendas: " << gas.getPrecioTienda() << endl;
        cout << "==================================================\n" << endl;

        int numReservaBungalows;

        cout << "¿Cuántos bungalows desea reservar?: ";
        cin >> numReservaBungalows;

        if(gas.reservaBungalows(numReservaBungalows)){
            cout << "Reserva realizada con éxito." << endl;
        }else{
            cout << "No se ha podido realizar la reserva." << endl;
        }

        int numReservaTiendas;

        cout << "¿Cuántas tiendas desea reservar?: ";
        cin >> numReservaTiendas;

        if(gas.reservaTiendas(numReservaTiendas)){
            cout << "Reserva realizada con éxito." << endl;
        }else{
            cout << "No se ha podido realizar la reserva." << endl;
        }

        cout << "Recaudación total: " << gas.getRecaudacion() << endl;

    } catch (string msg) {
        cout << msg << endl;
        return 1;
    }

    return 0;
}
