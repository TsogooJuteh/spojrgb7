#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b;

    cin >> a >> b;

    double arith_mean = (a + b) / 2;

    double geom_mean = sqrt(a * b);
    
    cout << fixed << setprecision(2) << arith_mean << " " << geom_mean << endl;

    return 0;
}
