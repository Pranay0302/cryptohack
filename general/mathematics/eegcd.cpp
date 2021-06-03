#include <iostream>
using namespace std;
// ac + bd = gcd(a,b)
int egcd(int a,int b, int *c, int *d){
    if(a==0){
        *c = 0;
        *d = 1;
        return b;
    }

    int c1, d1;
    int sol = egcd(b % a, a, &c1, &d1);
    *c = d1 - (b / a) * c1;
    *d = c1;
    return sol;
}

int main(){
    int p = 26513;
    int q = 32321;
    int c, d;
    int s = egcd(p, q, &c, &d);
    printf("crypto{%d,%d}", c, d);
}
