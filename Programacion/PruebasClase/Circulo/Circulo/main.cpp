#include <iostream>

using namespace std;

class Circulo{

public:

    Circulo(float _radio){

        setRadio(_radio);
    }

    float getRadio(){

        return radio;

    }

    void setRadio(float _radio){

        if (_radio < 0){

            cout << "El radio de tu triangulo no puede ser " << _radio

                 << " . Lo pondre a cero"

                 << endl;

            radio = 0;

        }else{

            radio = _radio;

        }

    }

    int areaDelCirculo(float radio){

        float area;

        area = radio*radio*(3.14);

        return area;

    }

    int perimetroDelCirculo(float radio){
        float perimetro;

        perimetro = 2*radio*(3.14);

        return perimetro;
    }
    void pintaCirculo(){
        for (float i{1}; i <= radio ; i++){
            for (float j{1}; j<= radio ; j++){
                cout << "*";
            }
            cout << endl;
        }
    }



private:

    float radio;

};

int main()

{

    float radio;

    cout << "Introduce el radio de tu circulo: ";
    cin >> radio;

    Circulo sick(radio);

    cout << "El area de tu circulo es: " << sick.areaDelCirculo(radio);
    cout << " u2";
    cout << ", y la longitud de su circulo es de: " << sick.perimetroDelCirculo(radio);
    cout << "u" << endl;
    cout << "Be hold for this masterpice: " <<endl << endl;

    sick.pintaCirculo();
    cout << endl;

    return 0;
}
