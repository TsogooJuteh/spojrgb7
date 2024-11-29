#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, pi =3.14159265358979311600;

    cin >> a ;

    double area = pi * a * a;

    double length = 2 * pi * a;
    
    cout << fixed << setprecision(1) << area << " " << length << endl;

    return 0;
}
