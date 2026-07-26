#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    long b;
    char c;
    float d;
    double e;

    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);

    printf("%d\n", a);
    printf("%ld\n", b);
    printf("%c\n", c);
    printf("%.3f\n", d);
    printf("%.9lf\n", e);
    
    return 0;
}
