

#include <iostream>
using namespace std;


int fib(int n) {
if(n==1 || n==2 ) {
    return 1;
}
else {
    return fib(n-1) + fib(n-2);
}
}

int fun(int n) {
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
    return fun(n-1) - fun(n-2) + fun(n-3);
}
}

int main(){
    cout << fun(24) << endl;
        cout << fun(19) << endl;
            cout << fun(8) << endl;
                cout << fun(14) << endl;



    return 0;
}