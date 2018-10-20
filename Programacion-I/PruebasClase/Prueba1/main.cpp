#include <iostream>

using namespace std;

class Triangle{

public:

    Triangle(float _base, float _height){

        setBase(_base);

        setHeight(_height);

    }

    float getBase(){

        return base;

    }

    float getHeight(){

        return height;

    }

    void setBase(float _base){

        if (_base < 0){

            cout << "There must be a mistake, the height of your triangle cannot be " << _base

                 << " . I'll set its height to 0"

                 << endl;

            base = 0;

        }else{

            base = _base;

        }

    }

    void setHeight(float _height){

        if (_height < 0){

            cout << "There must be a mistake, the height of your triangle cannot be " << _height

                 << " . I'll set its height to 0"

                 << endl;

            height = 0;

        }else{

            height = _height;

        }

    }

    int areaOfTriangle(float base, float height){

        float area;

        area = (base * height) / 2;

        return area;

    }
    void paintTriangle(){
        for (float i{1}; i <= height ; i++){
            for (float j{1}; j<= base*(i/height) ; j++){
                cout << "**";
            }
            cout << endl;
        }
    }



private:

    float base;
    float height;

};




int main()

{

    float base, height;

    cout << "Enter the base of your triangle: ";

    cin >> base;

    cout << "Enter the height of your triangle: ";

    cin >> height;

    Triangle sick(base, height);

    cout << "The area of your triangle is: " << sick.areaOfTriangle(base, height) << endl;
    cout << "Be hold for this masterpice: " <<endl << endl;
    sick.paintTriangle();
    cout << endl;

    return 0;
}
