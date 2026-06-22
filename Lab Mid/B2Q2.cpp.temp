#include<iostream>
using namespace std;

class Distance{
    int feet, inches;
public:
    Distance(int f=0, int i=0){
        feet = f;
        inches = i;
    }
    Distance add(Distance d1){
        Distance temp;
        if((d1.inches+inches)>=12){
            temp.feet = ((d1.inches+inches)/12)+d1.feet+feet;
            temp.inches = (d1.inches+inches)%12;
        }else{
            temp.feet = d1.feet+feet;
            temp.inches = d1.inches+inches;
        }
        return temp;
    }
    void show(){
        cout << feet << " feet " << inches << " inches" << endl;
    }
};
int main(){

    int f1, i1, f2, i2;
    cout << "Distance 1: " << endl;
    cout << "Feet = ";
    cin >> f1;
    cout << "Inches = ";
    cin >> i1;

    cout << "Distance 2: " << endl;
    cout << "Feet = ";
    cin >> f2;
    cout << "Inches = ";
    cin >> i2;

    Distance D1(f1, i1), D2(f2, i2), D3;

    D3 = D1.add(D2);

    cout << "First Distance: ";
    D1.show();

    cout << "Second Distance: ";
    D2.show();

    cout << "Sum = ";
    D3.show();

    return 0;

}
