int main()
{
    int A[9];
    int B[9];
    int C[9];
    int sum1;
    int sum2;
    int prom1;
    int prom2;
    int num;
    int n;
    int p;
    int i;
    int multi;
    int mul;


    n = 0;
    sum1 = 0;
    sum2 = 0;



        for (p=0;p<9;p++)
        {
           cout<<"Ingrese un numero par"<<endl;
           cin>>A[p];

           sum1=sum1+A[p];
           A[p]*3;

        }

        for (i=0;i<9;i++)
        {
            cout<<"Ingrese un numero impar"<<endl;
            cin>>B[i];

            sum2=sum2+B[i];
            B[i]*2;
        }

        C[p]= A[p] + B[i];

         n++;


    prom1 = sum1/9;
    prom2 = sum2/9;

    cout<<"La suma de 3A + 2B es igual a: "<<endl;
    cout<<C[p]<<", ";

    cout<<"\t"<<endl;

    cout<<endl<<"El promedio del vector A es igual a: "<<prom1;
    cout<<endl<<"El promedio del vector B es igual a: "<<prom2;


system ("PAUSE");
return EXIT_SUCCESS;
}
