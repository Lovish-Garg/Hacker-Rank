#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    /*
     I used cout in this program but
     it didnot passed maybe so that we can 
     understand different format specifiers
     */
    int a;
    long int b;
    char ch;
    float x;
    double y;
    
    cin >> a >> b >> ch >> x >> y;
    
    printf("%d\n", a);
    printf("%ld\n", b);
    printf("%c\n", ch);
    
    printf("%f\n", x);
    printf("%lf\n", y);
    // Complete the code.
    return 0;
}
