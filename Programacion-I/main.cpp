#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;
class Juego {
private:
    vector <int> bolas;
    unsigned short int puntuacionJ1=0;
    unsigned short int puntuacionJ2=0;
    unsigned short int turno=1;
    unsigned short int plantados=0;
public:
    Juego(){
        for (unsigned short int i=1; i<21; i++){
            bolas.push_back(i);
        }
    }
    int getTurno(){
        return turno;
    }
    int getPlantados(){
        return plantados;
    }
    int getPuntuacion(){
        if (turno==1){
            return puntuacionJ1;
        } else{
            return puntuacionJ2;
        }
    }
    void cambioDeTurno(){
        if(turno==1){
            turno=2;
        } else{
            turno=1;
        }
    }
    void sumarPuntuacion (unsigned short int bolaSacada){
        if (turno ==1){
            puntuacionJ1=puntuacionJ1+bolaSacada;
        } else{
            puntuacionJ2=puntuacionJ2+bolaSacada;
        }
    }
    int sacarBolas(){
        unsigned short int a=0;
        unsigned short int b=0;
        srand(time(NULL));
        a=rand()%bolas.size();
        b=bolas.at(a);
        bolas.erase(bolas.begin()+a);
        return b;
    }
    bool sigueElJuego(){
        if(plantados<2 && bolas.size()>0){
            return true;
        } else{
            return false;
        }
    }
    void seplanta(){
        plantados ++;
    }
    string quienGana(unsigned short int apuesta1,unsigned short int apuesta2){
        unsigned short int a, b;
        if (apuesta1<puntuacionJ1){
            a= puntuacionJ1-apuesta1;
        } else{
            a=apuesta1-puntuacionJ1;
        }
        if (apuesta2<puntuacionJ2){
            b=puntuacionJ2-apuesta2;
        } else{
            b=apuesta2-puntuacionJ2;
        }
        if (a<b){
            turno=1;
            return "Gana el jugador 1";
        }else{
            if (a==b){
                return "Ha habido un empate";
            } else{
                turno=2;
                return "Gana el jugador 2";
            }
        }
    }

};
int main()
{
    Juego fortnite;
    unsigned short int apuesta1=0, apuesta2=0, respuesta, bolasacada;
    cout << "Jugador 1, dime a que numero apuestas entre el 10 y el 50"<<endl;
    cin>> apuesta1;
    while (apuesta1<10||apuesta1>50){
        cout << "Esa no es una apuesta valida, tiene que ser un numero natural entre el 10 y el 50"<<endl;
        cin >> apuesta1;
    }
    cout << "Jugador 2, dime a que numero apuestas entre el 10 y el 50"<<endl;
    cin >>apuesta2;
    while (apuesta2<10||apuesta2>50){
        cout <<"Esa no es una apuesta valida, tiene que ser un numero natural entre el 10 y el 50"<<endl;
        cin >> apuesta2;
    }
    while (fortnite.sigueElJuego()){
        cout << "Turno del jugador "<< fortnite.getTurno()<<" introduce cualquier numero si quieres sacar bola"
                                                            " o un 0 si te quieres plantar"<<endl;
        cin >> respuesta;
        if (respuesta==0){
            fortnite.seplanta();
            fortnite.cambioDeTurno();
        }else{
            bolasacada=fortnite.sacarBolas();
            fortnite.sumarPuntuacion(bolasacada);
            cout << "Has sacado la bola: " << bolasacada<<" llevas: "<< fortnite.getPuntuacion()<<" y tu apuesta"
                    " era: ";
            if (fortnite.getTurno()==1){
                cout << apuesta1<< endl;
            } else{
                cout << apuesta2<< endl;
            }
            if (fortnite.getPlantados()==0){
                fortnite.cambioDeTurno();
            }
        }
    }
    cout << "El juego ha terminado."<<fortnite.quienGana(apuesta1, apuesta2)<<" con: "<< fortnite.getPuntuacion()<< "puntos"<<endl;

    return 0;
}
