#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(a==0){
        return b;
    }

    return gcd(b % a, a);
}

int main(){
    int a = 66528;
    int b = 52920;

    int x = gcd(a, b);
    cout << x << endl;
}
