// Program that calculates the area of a rectangle using multilevel inheritence

#include <iostream>
using  namespace::std;

class Shape{
protected:
    double base, altura;
public:
    Shape(){
        base = 0;
        altura = 0;
    }
    void setBase(double base){
        this -> base = base;
    }
    void setAltura(double altura){
        this -> altura = altura;
    }
};

class CostoPintura{
public:
    double getCosto(double area){
        return area * 100;
    }
};

class Rectangulo : public Shape, public CostoPintura{
    //double area = 0;
public:
    double getArea(){
        return base * altura;
    }
};

int main(int argc, const char * argv[]) {
    double base, altura;
    Rectangulo juan;
    
    cout << "Base:\n";
    cin >> base;
    cout << "Altura:\n";
    cin >> altura;
    
    juan.setBase(base);
    juan.setAltura(altura);
    
    cout << "Area: " << juan.getArea() << "\nCosto:" << juan.getCosto(juan.getArea()) << endl;
 
    return 0;
}
