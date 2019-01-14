#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
#include <array>
#include <vector>
#include <unistd.h>

using namespace std;

class Ruleta{
public:
    Ruleta(){
        for (unsigned short int i{0};i<37; i++){
            numeros.at(i)=i;
        }
        numeroPremiado=37;
    }
    void tirada(unsigned short int a){
        numeroPremiado = numeros.at(a);
        if (a == 0){
            throw string {"Ha salido el numero 0, gana la banca"};
        }
    }
    unsigned short int getNumeroPremiado(){
        return numeroPremiado;
    }
    string getColorPremiado(){
        if (numeroPremiado %2==0)return colorPremiado="rojo";
        else return colorPremiado="negro";
    }
    void printRuleta(){
        string a =" ";
        for (unsigned short int i{0}; i <37 ; i++){
            if(i <10){
                cout << "|0" <<numeros.at(i);
            }
            else{
                cout <<"|" <<numeros.at(i);
            }
        }
        cout << "|" << endl;
        for (unsigned short int i {0}; i <37; i++){
            if (i!=numeroPremiado){
                cout << " " << a << a;
            }
            else{
                cout << " **";
            }
            usleep(100000);
        }
        cout << endl;

    }
private:
    array <unsigned short int, 37> numeros;
    unsigned short int numeroPremiado;
    string colorPremiado;
};

class Jugador{
public:
    Jugador(){
        dinero = 10;
        color = "NULL";
        numero = 37;
    }
    bool juega(string a){
        if (dinero == 0 || a=="si") return false;
        else return true;
    }
    void apostado(unsigned short int a){
        if (a>dinero) throw string {"No tienes tanto dinero"};
        else{
            apuesta = a;
            dinero = dinero - a;
        }
    }
    unsigned short int getDinero(){
        return dinero;
    }
    void numeroapostado(unsigned short int numeroap){
        numero = numeroap;
    }
    void colorapostado(string colorap){
        color = colorap;
    }
    void Premio(string a, unsigned short int b){
        if (a == color){
            dinero = dinero +apuesta*2;
            cout << "Felicidades, has acertado el color, tu dinero actual es " << dinero << "." << endl;
        }
        else if (b == numero){
            dinero = dinero +apuesta*36;
            cout << "Felicidades, has acertado el numero, tu dinero actual es " << dinero << "." << endl;
        }
        else{
            cout << "No has ganado nada, mas suerte la proxima vez." << endl;
        }
        color="fuxia";
        numero=37;
    }

private:
    unsigned short int dinero;
    unsigned short int apuesta;
    unsigned short int numero;
    string color;
};

int main(){
    srand (time(NULL));
    Ruleta miRuleta;
    Jugador jugador1;
    Jugador jugador2;
    Jugador jugador3;
    Jugador jugador4;
    cout << "Bienvenidos a la Ruleta, hagan sus apuestas." << endl;
    string apuesta="eyyyy";
    unsigned short int dinero=11;
    unsigned short int numero=37;
    unsigned short int tirada;
    string color="Fuxia";
    string retirada1="no";
    string retirada2="no";
    string retirada3="no";
    string retirada4="no";
    miRuleta.printRuleta();
    while(jugador1.juega(retirada1) || jugador2.juega(retirada2) || jugador3.juega(retirada3) || jugador4.juega(retirada4)){
        if (jugador1.juega(retirada1)){
            while (apuesta != "color" && apuesta!= "numero"){
                cout << "Jugador 1, apuesta a 'color' o a 'numero'." << endl;
                cin >> apuesta;
            }
            while (dinero > jugador1.getDinero() || dinero <1){
                cout << "Cuanto dinero quieres apostar. Actualmente tienes " << jugador1.getDinero() << endl;
                cin >> dinero;
            }
            jugador1.apostado(dinero);
            dinero = 0;
            if (apuesta=="color"){
                while (color!= "rojo" && color != "negro"){
                    cout << "Elige 'rojo' o 'negro'." << endl;
                    cin >> color;
                }
                jugador1.colorapostado(color);
                color="fuxia";
                apuesta="eyyyy";
            }
            else if(apuesta=="numero"){
                while(numero <1 || numero >36){
                    cout << "Elige un numero del 1 al 36." << endl;
                    cin >> numero;
                }
                jugador1.numeroapostado(numero);
                numero=37;
                apuesta="eyyyy";
            }
        }
        if (jugador2.juega(retirada2)){
            while (apuesta != "color" && apuesta!= "numero"){
                cout << "Jugador 2, apuesta a 'color' o a 'numero'." << endl;
                cin >> apuesta;
            }
            while (dinero > jugador2.getDinero() || dinero <1){
                cout << "Cuanto dinero quieres apostar. Actualmente tienes " << jugador2.getDinero() << endl;
                cin >> dinero;
            }
            jugador2.apostado(dinero);
            dinero=0;
            if (apuesta=="color"){
                while (color!= "rojo" && color != "negro"){
                    cout << "Elige 'rojo' o 'negro'." << endl;
                    cin >> color;
                }
                jugador2.colorapostado(color);
                color="fuxia";
                apuesta="eyyyy";
            }
            else if(apuesta=="numero"){
                while(numero <1 || numero >36){
                    cout << "Elige un numero del 1 al 36." << endl;
                    cin >> numero;
                }
                jugador2.numeroapostado(numero);
                numero=37;
                apuesta="eyyyy";
            }
        }
        if (jugador3.juega(retirada3)){
            while (apuesta != "color" && apuesta!= "numero"){
                cout << "Jugador 3, apuesta a 'color' o a 'numero'." << endl;
                cin >> apuesta;
            }
            while (dinero > jugador3.getDinero() || dinero <1){
                cout << "Cuanto dinero quieres apostar. Actualmente tienes " << jugador3.getDinero() << endl;
                cin >> dinero;
            }
            jugador3.apostado(dinero);
            dinero=0;
            if (apuesta=="color"){
                while (color!= "rojo" && color != "negro"){
                    cout << "Elige 'rojo' o 'negro'." << endl;
                    cin >> color;
                }
                jugador3.colorapostado(color);
                color="fuxia";
                apuesta="eyyyy";
            }
            else if(apuesta=="numero"){
                while(numero <1 || numero >36){
                    cout << "Elige un numero del 1 al 36." << endl;
                    cin >> numero;
                }
                jugador3.numeroapostado(numero);
                numero=37;
                apuesta="eyyyy";
            }
        }
        if(jugador4.juega(retirada4)){
            while (apuesta != "color" && apuesta!= "numero"){
                cout << "Jugador 4, apuesta a 'color' o a 'numero'." << endl;
                cin >> apuesta;
            }
            while (dinero > jugador4.getDinero() || dinero <1){
                cout << "Cuanto dinero quieres apostar. Actualmente tienes " << jugador4.getDinero() << endl;
                cin >> dinero;
            }
            jugador4.apostado(dinero);
            dinero=0;
            if (apuesta=="color"){
                while (color!= "rojo" && color != "negro"){
                    cout << "Elige 'rojo' o 'negro'." << endl;
                    cin >> color;
                }
                jugador4.colorapostado(color);
                color="fuxia";
                apuesta="eyyyy";
            }
            else if(apuesta=="numero"){
                while(numero <1 || numero >36){
                    cout << "Elige un numero del 1 al 36." << endl;
                    cin >> numero;
                }
                jugador4.numeroapostado(numero);
                numero=37;
                apuesta="eyyyy";
            }
        }
        cout << "Han terminado las apuestas, procedemos a hacer la tirada." << endl;
        try{
            tirada=rand()%37;
            miRuleta.tirada(tirada);
            miRuleta.printRuleta();
            cout << "El numero premiado ha sido el " << miRuleta.getNumeroPremiado() << " y por tanto el color premiado ha sido el " << miRuleta.getColorPremiado() << endl;
            cout << "Jugador 1" << endl;
            jugador1.Premio(miRuleta.getColorPremiado(),miRuleta.getNumeroPremiado());
            cout << "Jugador 2" << endl;
            jugador2.Premio(miRuleta.getColorPremiado(),miRuleta.getNumeroPremiado());
            cout << "Jugador 3" << endl;
            jugador3.Premio(miRuleta.getColorPremiado(),miRuleta.getNumeroPremiado());
            cout << "Jugador 4" << endl;
            jugador4.Premio(miRuleta.getColorPremiado(),miRuleta.getNumeroPremiado());
        }catch(string e){
            cout << e << endl << endl;
        }
        cout << "Si algun jugador quiere retirarse que escriba 'si' en su turno." << endl;
        if (jugador1.juega(retirada1)==false){
            cout << "Jugador 1 estas fuera por que no tienes dinero o te has plantado previamente" << endl;
        }
        else{
            cout << "Jugador 1?" << endl;
            cin >> retirada1;
        }
        if (jugador2.juega(retirada2)==false){
            cout << "Jugador 2 estas fuera por que no tienes dinero o te has plantado previamente" << endl;
        }
        else{
            cout << "Jugador 2?" << endl;
            cin >> retirada2;
        }
        if (jugador3.juega(retirada3)==false){
            cout << "Jugador 3 estas fuera por que no tienes dinero o te has plantado previamente" << endl;
        }
        else{
            cout << "Jugador 3?" << endl;
            cin >> retirada3;
        }
        if (jugador4.juega(retirada4)==false){
            cout << "Jugador 4 estas fuera por que no tienes dinero o te has plantado previamente" << endl;
        }
        else{
            cout << "Jugador 4?" << endl;
            cin >> retirada4;
        }
    }
    cout << "Como todos los jugadores estan o bien retirados, o bien se han plantado, procedemos a decir el dinero de todos los jugadores." << endl;
    cout << "El Jugador 1 ha terminado con " << jugador1.getDinero() << endl;
    cout << "El Jugador 2 ha terminado con " << jugador2.getDinero() << endl;
    cout << "El Jugador 3 ha terminado con " << jugador3.getDinero() << endl;
    cout << "El Jugador 4 ha terminado con " << jugador4.getDinero() << endl;
    cout << "Gracias por jugar, hasta la proxima." << endl;
}
