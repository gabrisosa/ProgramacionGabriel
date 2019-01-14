//librerias
#include <iostream>
#include <array>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>

using namespace std;

//variable global que dara la ganacia total del dia al final


/*clase para juntar todas las funciones lo cual las hace mas funcionales ya que se pueden utilizar
las mismas variables y se pueden llamar las unas a las otras*/
class Pedido{

public:

    //constructor vacio ya que no utilizo ninguna variable perteneciente fuera de la misma
    Pedido(){}

    //despues de meter el usuario y la contraseña
    void Choices(){

        //el usuario introduce lo que quiera elegir
        cout << "1.-A domicilio\n2.-Carta\n3.-Almacen y Cierre";
        cin >> choices;

        //limpia la pantalla
        system("clear");

        //estos if ejecutan diferente funciones segun lo que el usuario elija en las linea 26 y 27
        if(choices == 1){
            getDomicilio();
            pedi++;
        }
        if(choices == 2){
            getPedido();
            pedi++;
        }
        if(choices == 3){
            getAlmacen();
            Cierre();
        }
    }

    //consigue datos si es solicitado
    void getDomicilio(){

        cout << "---------DOMICILIO---------"<< endl;

        cout << "Introduzca su nombre y un apellido:  ";
        cin >> nombre;
        cin >> apellido;
        cout << endl;

        cout << "Direccion " << endl;
        cout << endl;

        cout << "Introduzca calle(para introducir un espacio introduzca un punto): ";
        cin >> calle;

        cout <<"Introduzca numero: ";
        cin >> numero;

        cout <<"Introduzca codigo postal: ";
        cin >> codpost;

        cout << "Introduzca su numero de telefono: ";
        cin >> tel;

        while(tel < 60000000 || tel > 999999999) {

            cout <<"Numero introducido incorrecto:"<<endl;
            cout << "Introduzca su numero de telefono: ";
            cin >> tel;


        }

        //convierte un int o string o char en un string y los une
        d << nombre<<apellido<<"\n"<<calle<<numero<<"\n"<<codpost<<"\n"<<tel;
        sa.push_back(d.str());

        system("clear");

        getPedido();
    }

    //dependiendo de que numero asignes a choices1 te enseñara una parte de la carta o otra
    void getPedido(){

        cout << "1.-Desayuno\n2.-Aperitivos\n3.-Carta\n4.-Bebidas\n5.-Postres\n6.-Finalizar Pedido";
        cin >> choices1;
        system("clear");

        if(choices1 == 1){

            getDesayuno();

        }
        if(choices1 == 2){

            getAperitivos();

        }
        if(choices1 == 3){

            getCarta();

        }
        if(choices1 == 4){

            getBebidas();

        }
        if(choices1 == 5){

            getPostres();

        }
        if(choices1 == 6){

            getFinal();

        }
    }

    //si choices1 == 1 enseña la carta de desayunos
    void getDesayuno(){

        do {
            cout << "Que quiere para desayunar?"<<endl;

            cout <<"1.-"<< aa.at(0)<<"\n2.-"<<aa.at(1)<<"\n3.-"<<aa.at(2)<<"\n4.-"<<aa.at(3)<<"\n5.-"<<aa.at(4);
            cin >> choices2;

            cout << "Que cantidad de "<<aa.at(choices2-1)<<" quieres?: ";
            cin >> cant;

            s << cant<<" "<<aa.at(choices2-1);
            ss.push_back(s.str());
            s.clear();

            count ++;

            if(choices2 == 1){tost = tost - cant; pretot = pretot + cant*pretost;}
            if(choices2 == 2){cere = cere - cant; pretot = pretot + cant*precere;}
            if(choices2 == 3){bolle = bolle - cant; pretot = pretot + cant*prebolle;}
            if(choices2 == 4){zum = zum - cant; pretot = pretot + cant*prezum;}
            if(choices2 == 5){tort = tort - cant; pretot = pretot + cant*pretort;}

            cant = 0;
            choices1=0;
            choices2=0;

            cout << "Si quiere continuar presiona s de lo contrario n: ";
            cin >> cho1;

            system("clear");

        }while(cho1 != "n");

        getPedido();

    }

    //si choices1 == 2 te enseña la carta de aperitivos
    void getAperitivos(){

        do {
            cout << "Que quiere de aperitivo? "<<endl;

            cout <<"1.-"<< ab.at(0)<<"\n2.-"<<ab.at(1)<<"\n3.-"<<ab.at(2)<<"\n4.-"<<ab.at(3)<<"\n5.-"<<ab.at(4);
            cin >> choices2;

            cout << "Que cantidad de "<<ab.at(choices2-1)<<" quieres?: ";
            cin >> cant;

            s << cant<<" "<<ab.at(choices2-1);
            ss.push_back(s.str());
            s.clear();

            count ++;

            if(choices2 == 1){ tablq = tablq - cant;pretot = pretot + pretablq*cant;}
            if(choices2 == 2){ tablj = tablj - cant;pretot = pretot + pretablj*cant;}
            if(choices2 == 3){ patbra = patbra - cant;pretot = pretot + prepatbra*cant;}
            if(choices2 == 4){ chipi = chipi - cant;pretot = pretot + prechipi*cant;}
            if(choices2 == 5){ boque = boque - cant;pretot = pretot + preboque*cant;}

            cant = 0;
            choices1=0;
            choices2=0;

            cout << "Si quiere continuar presiona s de lo contrario n: ";
            cin >> cho1;

            system("clear");

        }while(cho1 != "n");

        getPedido();

    }

    //si choices == 3 te devuelve la carta de comida
    void getCarta(){

        do {

            cout << "Que quiere de de comer: "<<endl;

            cout <<"1.-"<< ac.at(0)<<"\n2.-"<<ac.at(1)<<"\n3.-"<<ac.at(2)<<"\n4.-"<<ac.at(3)<<"\n5.-"<<ac.at(4);
            cin >> choices2;

            cout << "Que cantidad de "<<ac.at(choices2-1)<<" quieres?: ";
            cin >> cant;

            s << cant<<" "<<ac.at(choices2-1);
            ss.push_back(s.str());
            s.clear();

            count ++;

            if(choices2 == 1){ tortpat = tortpat - cant;pretot = pretot + pretortpat*cant;}
            if(choices2 == 2){ pisto = pisto - cant;pretot = pretot + prepisto*cant;}
            if(choices2 == 3){ huevo = huevo - cant;pretot = pretot + prehuevo*cant;}
            if(choices2 == 4){ chulet = chulet - cant;pretot = pretot + prechulet*cant;}
            if(choices2 == 5){ lubin = lubin - cant;pretot = pretot + prelubin*cant;}

            cant = 0;
            choices1=0;
            choices2=0;

            cout << "Si quiere continuar presiona s de lo contrario n: ";
            cin >> cho1;

            system("clear");

        }while(cho1 != "n");

        getPedido();

    }

    //si choices1 == 4 te devuelve la carta de bebidas
    void getBebidas(){

        do {

            cout << "Que quiere de de beber"<<endl;

            cout <<"1.-"<< ad.at(0)<<"\n2.-"<<ad.at(1)<<"\n3.-"<<ad.at(2)<<"\n4.-"<<ad.at(3)<<"\n5.-"<<ad.at(4);
            cin >> choices2;

            cout << "Que cantidad de "<<ad.at(choices2-1)<<" quieres?: ";
            cin >> cant;

            s << cant<<" "<<ad.at(choices2-1);
            ss.push_back(s.str());
            s.clear();

            count ++;

            if(choices2 == 1){ coca = coca - cant;pretot = pretot + precoca*cant;}
            if(choices2 == 2){ fanta = fanta - cant;pretot = pretot + prefanta*cant;}
            if(choices2 == 3){cerve = cerve - cant;pretot = pretot + precerve*cant;}
            if(choices2 == 4){ vino = vino - cant;pretot = pretot + previno*cant;}
            if(choices2 == 5){ cafe = cafe - cant;pretot = pretot + precafe*cant;}

            cant = 0;
            choices1=0;
            choices2=0;

            cout << "Si quiere continuar presiona s de lo contrario n: ";
            cin >> cho1;

            system("clear");

        }while(cho1 != "n");

        getPedido();

    }

    //si choices1 == 5 te devuelve la carta de postres
    void getPostres(){

        do {
            cout << "Que quiere de de postre"<<endl;

            cout <<"1.-"<< ae.at(0)<<"\n2.-"<<ae.at(1)<<"\n3.-"<<ae.at(2)<<"\n4.-"<<ae.at(3)<<"\n5.-"<<ae.at(4);
            cin >> choices2;

            cout << "Que cantidad de "<<ae.at(choices2-1)<<" quieres?:";
            cin >> cant;

            s << cant<<" "<<ae.at(choices2-1);
            ss.push_back(s.str());
            s.clear();

            count ++;

            if(choices2 == 1){ flan = flan - cant;pretot = pretot + preflan*cant;}
            if(choices2 == 2){ tarta = tarta - cant;pretot = pretot + pretarta*cant;}
            if(choices2 == 3){ yogur = yogur - cant;pretot = pretot + preyogur*cant;}
            if(choices2 == 4){ natillas = natillas - cant;pretot = pretot + prenatillas*cant;}
            if(choices2 == 5){ fruta = fruta - cant;pretot = pretot + prefruta*cant;}

            cant = 0;
            choices1=0;
            choices2=0;

            cout << "Si quiere continuar presiona s de lo contrario n:";
            cin >> cho1;

            system("clear");

        }while(cho1 != "n");

        getPedido();

    }

    //si choices1 == 6 te da el estado final del pedido y lo que debe el cliente
    void getFinPed(){
        //si choices == 1 al principio esta funcion pide tambien los valores del domicilio
        //si choices == 2 deveulve el menu sin mas
        if(choices == 1){

            s << pretot;
            ss.push_back(s.str());
            s.clear();

            cout <<"Pedido numero "<< pedi<<endl;
            cout << sa.at(0);
            cout << endl;

            do{

                cout << ss.at(i);
                i++;
                cout <<endl;

            }while(i != count);

            cout << "Precio total "<<pretot<<"\n";

            cout << "1.-Nuevo pedido\n2.-Almacen y Cierre";
            cin>>cho4;

            gantot = gantot + pretot;

            system("clear");

            if(cho4 == 1){
                cant = 0;
                nombre = "";
                direccion = "";
                tel = 9000000;
                apellido = "";
                calle = "";
                numero = 0;
                codpost = "";
                choices2 = 0;
                choices1 = 0;
                cho1 = "";
                pretot = 0;
                cant = 0;
                choices=0;
                cho3=0;
                cho4=0;

                Choices();

            }

            if(cho4 == 2){

                getAlmacen();
                Cierre();

            }

        }
        if(choices == 2){

            s << pretot;
            ss.push_back(s.str());
            s.clear();

            cout <<"Pedido numero "<< pedi<<endl;

            do{

                cout << ss.at(i);
                i++;
                cout <<endl;

            }while(i != count);

            cout << "Precio total "<<pretot<<"\n";

            cout << "1.-Nuevo pedido\n2.-Almacen y Cierre";
            cin>>cho4;

            gantot = gantot + pretot;

            system("clear");
            if(cho4==1){
                nombre = "";
                direccion = "";
                tel = 9000000;
                apellido = "";
                calle = "";
                numero = 0;
                codpost = "";
                choices2 = 0;
                choices1 = 0;
                cho1 = "";
                pretot = 0;
                cant = 0;
                choices=0;
                cho3=0;
                cho4=0;

                Choices();
            }
            if(cho4 == 2){

            getAlmacen();
            Cierre();

            }
        }
        choices = 0;
    }

    void getAlmacen(){

        cout << "Quedan "<<tost<<" unidades de "<< aa.at(0)<<endl;
        cout << "Quedan "<<cere<<" unidades de "<< aa.at(1)<<endl;
        cout << "Quedan "<<bolle<<" unidades de "<< aa.at(2)<<endl;
        cout << "Quedan "<<zum<<" unidades de "<< aa.at(3)<<endl;
        cout << "Quedan "<<tort<<" unidades de "<< aa.at(4)<<endl;
        cout << "Quedan "<<tablq<<" unidades de "<< ab.at(0)<<endl;
        cout << "Quedan "<<tablj<<" unidades de "<< ab.at(1)<<endl;
        cout << "Quedan "<<patbra<<" unidades de "<< ab.at(2)<<endl;
        cout << "Quedan "<<chipi<<" unidades de "<< ab.at(3)<<endl;
        cout << "Quedan "<<boque<<" unidades de "<< ab.at(4)<<endl;
        cout << "Quedan "<<tortpat<<" unidades de "<< ac.at(0)<<endl;
        cout << "Quedan "<<pisto<<" unidades de "<< ac.at(1)<<endl;
        cout << "Quedan "<<huevo<<" unidades de "<< ac.at(2)<<endl;
        cout << "Quedan "<<chulet<<" unidades de "<< ac.at(3)<<endl;
        cout << "Quedan "<<lubin<<" unidades de "<< ac.at(4)<<endl;
        cout << "Quedan "<<coca<<" unidades de "<< ad.at(0)<<endl;
        cout << "Quedan "<<fanta<<" unidades de "<< ad.at(1)<<endl;
        cout << "Quedan "<<cerve<<" unidades de "<< ad.at(2)<<endl;
        cout << "Quedan "<<vino<<" unidades de "<< ad.at(3)<<endl;
        cout << "Quedan "<<cafe<<" unidades de "<< ad.at(4)<<endl;
        cout << "Quedan "<<flan<<" unidades de "<< ae.at(0)<<endl;
        cout << "Quedan "<<tarta<<" unidades de "<< ae.at(1)<<endl;
        cout << "Quedan "<<yogur<<" unidades de "<< ae.at(2)<<endl;
        cout << "Quedan "<<natillas<<" unidades de "<< ae.at(3)<<endl;
        cout << "Quedan "<<fruta<<" unidades de "<< ae.at(4)<<endl;

        cout << "presiones cualquier letra para cerrar";
        cin >> c;

        Cierre();
    }

    void getFinal(){

        cout << "1.-Volver a carta\n2.-Finalizar pedido\n3.-Cerrar";
        cin >> cho3;
        system("clear");

        if(cho3 == 1){

            getPedido();
            cho3 = 0;

        }

        if(cho3 == 2){

            getFinPed();
            cho3 = 0;

        }
        if(cho3 == 3){

            Cierre();
            cho3 = 0;

        }
    }

    int Cierre(){

        cout <<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<< "                                 El restaurante esta cerrado\n"
            <<"                                   ganancias totales: "<<gantot<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
        return 0;
    }
private:
    string nombre;
    string direccion;
    unsigned int tel;
    string apellido;
    string calle;
    unsigned short int numero;
    string codpost;
    unsigned short int choices2;
    array<string, 5>aa = {"tostadas","cerales","bolleria","zumos","tortitas"};
    array<string, 5>ab = {"tabla de quesos","tabla de jamon","patatas bravas","chipirones","boquerones"};
    array<string, 5>ac = {"tortilla de patatas","pisto","huevo frito con patatas","chuletas","lubina con ensalada"};
    array<string, 5>ad = {"coca-cola","fanta","cerveza","vino","cafe"};
    array<string, 5>ae = {"flan","tarta casera","yogur","natillas","fruta"};
    unsigned short int choices1;
    string cho1;
    unsigned short int tost{100},cere{100},bolle{100},zum{100},tort{100};
    double pretost{1.50},precere{1.20},prebolle{1.20},prezum{1.50},pretort{3.10};
    unsigned int tablq{100},tablj{100},patbra{100},chipi{100},boque{100};
    double pretablq{5.50},pretablj{6.00},prepatbra{2.50},prechipi{6.00},preboque{6.00};
    unsigned int tortpat{100},pisto{100},huevo{100},chulet{100},lubin{100};
    double pretortpat{8.00},prepisto{5.50},prehuevo{6.00},prechulet{7.00},prelubin{8.00};
    unsigned int coca{100},fanta{100},cerve{100},vino{100},cafe{100};
    double precoca{1.50},prefanta{1.50},precerve{1.30},previno{1.30},precafe{1.25};
    unsigned int flan{100},tarta{100},yogur{100},natillas{100},fruta{100};
    double preflan{2.00},pretarta{3.00},preyogur{1.50},prenatillas{2.00},prefruta{1.50};
    double pretot{0};
    unsigned short int cant;
    vector <string> ss;
    vector <string> sa;
    stringstream s;
    stringstream d;
    unsigned short int count{0};
    unsigned short int choices,cho3,cho4;
    unsigned short int pedi = 1;
    unsigned short int i{0};
    string c;
    double gantot{0};
};
int main()
{

    Pedido pedi{};

    string usario;
    string contrasena;
    char error[] = {'u','s','u','a','r','i','o',' ','o',' ','c','o','n','t','r','a','s','e','n','a',' ','i','n','c','o','r','r','e','c','t','o','s'};

     cout << "Introduzca:"<<endl;

     cout << "usuario: ";
     cin >> usario;

     cout << "contraseña: ";
     cin >> contrasena;
     system("clear");

     if(usario != "cafe01" || contrasena != "1234"){

         cout << error<<endl;
         return 0;

     }

        cout << "                ----------CAFE01----------"<<endl;

        pedi.Choices();

     return 0;
}
