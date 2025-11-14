
#include <iostream>
using namespace std;

float funkcja(int n) {
    if(n==1) {
        return 10;
    }
    if(n==2) {
        return 5;
    }
    else {
        return funkcja(n-1) / funkcja(n-2) + funkcja(n-2) / funkcja(n-1);
    }
}
int main()
{
    for(int i=3; i<11; i++) {
        cout << "Funkcja(" << i << "): " << funkcja(i) << endl;
    }

    return 0;
}