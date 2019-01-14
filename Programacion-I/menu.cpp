#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;





int menu()
{
    cout << "\n1.Calcular el factorial de un numero.\n";
    cout << "2.Calcular la n-esima potencia de un numero.\n";
    cout << "3.Escribir los n primeros numeros de la serie de fibonacci.\n";
    cout << "4.Convertir numeros romanos.\n";
    cout << "0.Salir.\n";
    cout << "\nIntroduzca Opcion: ";
}
int Factorial()
{
    int fac, num1, res1;
    res1=1;
    cout <<"Escribe un numero: ";
    cin >> num1;
    fac=num1;
    while(fac>=1)
    {
        res1=res1*fac;
        fac=fac-1;
    }
    cout<<"El factorial del numero " << num1 << " es " << res1 << endl;
    return 0;
}
int Potencia()
{
    int pot, num2, res2=1, cont=1;
    cout << "Cual es su base: ";
    cin >>  num2;
    cout  << "Cual es el exponente: ";
    cin >> pot;
    while(cont<=pot)
    {
        res2=res2*num2;
        ++cont;
    }
    cout << "El resultado es: " << res2 << endl;
}
int Fibonacci()
{
    int cont=3, ant1=0, ant2=1, pos, num;
    cout << "Serie Fibonacci, introduzca posicion: ";
    cin >> pos;
    if(pos==0)
    {
        cout << "Valor nulo.";
    }else{
        if(pos==1) cout <<  ant1;
        else cout <<  ant1 <<  ant2;
    }

    while(cont <= pos)
    {
        num=ant1+ant2;
        cout <<  num;
        ant1=ant2;
        ant2=num;
        ++cont;
    }
    cout <<"\n";
}
int convertir(char);

int Romanos(){

    char numeror[1000];
    int i=0;
    long int res =0;

    cout << "Introduzca Numero Romano: ";
    cin >> numeror;

    while(numeror[i]){

            if(convertir(numeror[i]) >= convertir(numeror[i+1]))
                res = res + convertir(numeror[i]);
            else{
                    res = res + (convertir(numeror[i+1]) - convertir(numeror[i]));
            i++;
            }
            i++;
            }

           if(res == 0){
               cout << "\nEso no es un numero romano";

           }else{
               cout << "El numero romano equivale a:\n " << res <<  endl;

             }



            return 0;
};

int convertir(char c){

    int sig=0;

    switch(c){
        case 'I': sig = 1; break;
        case 'V': sig = 5; break;
        case 'X': sig = 10; break;
        case 'L': sig = 50; break;
        case 'C': sig = 100; break;
        case 'D': sig = 500; break;
        case 'M': sig = 1000; break;
        case '\0': sig = 0; break;

        }

        return sig;
}
int  main()

{
    int num;
    while(1)
    {
        menu();
        scanf("%d", &num);
        if(num==0) break;
        switch(num)
        {
            case 1:
                Factorial();
                break;
            case 2:
                Potencia();
                break;
            case 3:
                Fibonacci();
                break;
            case 4:
                Romanos();
                break;


            default: cout <<"\nERROR - Introduca un numero entre el 0-4.\n"; break;
        }
    }
}
