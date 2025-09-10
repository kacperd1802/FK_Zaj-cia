#include <iostream>
using namespace std;
int x = 0;
int y = 0;

void zad1() {
    for(int i=5; i<16; i++) {
        cout << i << " ";
    }
}
void zad2() {
    for(int i=20; i>9; i--) {
        cout << i << " ";
    }
}
void zad3() {
    for(int i=0; i<10; i++) {
        cout << i << ". " << "Kacper" << endl;
    }
}
void zad4() {
    for(int i=0; i<5; i++) {
        for(int j=0; j<10; j++) {
            cout << "*";
        }
        cout << endl;
}
}

void zad5() {
    cout << "Podaj x: ";
    cin >> x;
    cout << "Podaj y: ";
    cin >> y;
    for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
            cout << "*";
    }
    cout << endl;
}
}
void zad6() {
    for(int i=1; i<11; i++) {
        for(int j=1; j<11; j++) {
            cout << i << " * " << j << " = " << i*j;
            cout << endl;
}
}
}


int main()
{
    zad1();
    zad2();
    zad3();
    zad4();
    zad5();
    zad6();
    return 0;
}