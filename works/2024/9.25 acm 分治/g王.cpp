#include "bits/stdc++.h"
using namespace std;
double a, b, c, d;

double fun(double x) {
    return a * x * x * x + b * x * x + c * x + d;
}

int main () {
    double x1, x2, mid;
    cin >> a >> b >> c >> d;
    for (int xx = -100; xx <= 100; xx++) {
        x1 = xx, x2 = xx + 1;
        if (fun(x1) == 0) {
            printf("%0.2lf ", x1);
        } else if (fun(x1)*fun(x2) < 0) {
            while (x2 - x1 >= 0.001) {
                mid = (x2 + x1) / 2;
                if (fun(x1)*fun(mid) <= 0)
                    x2 = mid;
                else
                    x1 = mid;
            }
            printf("%0.2lf ", x1);
        }
    }
    return 0;
}