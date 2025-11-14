
#include <iostream>
using namespace std;

int funkcja(int n) {
    if(n==1) {
        return -4;
    }
    if(n==2) {
        return 4;
    }
    else {
        return funkcja(n-1) *funkcja(n-2);
    }
}
int main()
{
    for(int i=3; i<11; i++) {
        cout << "Funkcja(" << i << "): " << funkcja(i) << endl;
    }

    return 0;
}