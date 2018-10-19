#include <iostream>

using namespace std;

class Rectangle{

        public:

            Rectangle(int _side1, int _side2){

                setSide1(_side1);

                setSide2(_side2);

            }

            int getSide1(){

                return side1;

            }

            int getSide2(){

                return side2;

            }

            void setSide1(int _side1){

                if (_side1 < 0){

                    cout << "There must be a mistake, side1 of your rectangle cannot measure " << _side1

                         << " . I'll set it to 0"

                         << endl;

                    side1 = 0;

                }else{

                    side1 = _side1;

                }

            }

            void setSide2(int _side2){

                if (_side2 < 0){

                    cout << "There must be a mistake, side2 of your rectangle cannot measure " << _side2

                         << " . I'll set it to 0"

                         << endl;

                    side2 = 0;

                }else{

                    side2 = _side2;

                }

            }

                int areaOfRectangle(int side1, int side2){

                    int area;

                    area = (side1 * side2);

                    return area;

            }
                void paintRectagle(){
                    for (int i{1}; i < side1; i++){
                        for (int j{0}; j < side2; j++){
                            cout << "**";
                        }
                        cout << endl;
                    }
                }


        private:

            int side1;

            int side2;

        };

int main()

{

    int side1, side2;

    cout << "Introduce side1 of your rectangle: ";
    cin >> side1;
    cout << "Introduce side2 of your rectangle ostia: ";
    cin >> side2;

    Rectangle cool(side1, side2);


    cout << "The area of your rectagle is: " << cool.areaOfRectangle(side1, side2)

          <<endl;
    cout << "Be hold for this masterpice: " << endl << endl;
    cool.paintRectagle();
    cout << endl;

    return 0;

}
