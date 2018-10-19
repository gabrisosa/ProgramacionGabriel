#include <iostream>

using namespace std;

int main()
{
 int num;
 int add{0};
 cout << "Introduce numeros enteros y di basta cuando quieras parar y sumare todos" << endl;
 while(num != 0){
  cout << "Introduce a number: ";
  cin >> num;
  add += num;
 }
 cout << "Total addition is: " << add << endl;
 return 0;
}
