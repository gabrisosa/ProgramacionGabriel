#include <iostream>

using namespace std;


class Square{
public:
    Square(int _side){
        setSide(_side);
        }

        int getSide(){
            return side;
        }

        void setSide(int _side){
            if (_side <= 0){
                cout << "There must be a mistake, side of your square be less than 0 " <<
                 " . I'll set it to 0" << endl;

                    side = 0;

                }else{

                    side = _side;

                }

            }

                int areaOfSquare(){
                     int area;

                    area = (side * side);

                    return area;


            }


                void paintSquare(){
                    for (int i{1}; i < side; i++){
                        for (int j{0}; j < side; j++){
                        cout << "**";
                    }
                    cout << endl;
                }
            }
private:

    int side;

};

int main()
{
    int side;
    cout << "Enter the side of your square: ";
    cin >> side;
    Square sick(side);
    cout << "The area of your square is: " << sick.areaOfSquare() << endl;

    cout << "Be hold for this masterpice: " << endl << endl;
    sick.paintSquare();
    cout << endl;

    return 0;

}
