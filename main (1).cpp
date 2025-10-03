

#include <iostream>
using namespace std;



int Fib(int n)
{
    if(n==1) {
        return 1234;
    }
    if(n==2) {
        return 1010;
    }
    if(n==3) {
        return 44;
    }
    else {
        return Fib(n-1) - Fib(n-2) + Fib(n-3);
    }
    
    return 0;
}

int main() {
    int n;
    cout << "Podaj ktory wyraz ciagu chcesz wyświetlić: ";
    cin >> n;
    cout << endl;

    Fib(n);
    cout << Fib(n);
    return 0;
}