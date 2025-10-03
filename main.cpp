

#include <iostream>
using namespace std;



int Fib(int n)
{
    if(n==1 || n==2) {
        return 1;
    }
    else {
        return Fib(n-1) + Fib(n-2);
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