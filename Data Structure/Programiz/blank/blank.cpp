#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    if (a>b || a > c || a > d) {
        cout << a << endl;
    }else if (b > c || b > d) {
        cout << b << endl;
    }else if (c > d) {
        cout << c << endl;
    }else {
     cout << d << endl;
    }
    return 0;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}