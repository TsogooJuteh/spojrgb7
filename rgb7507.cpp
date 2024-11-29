#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_val = a[0];
    int index = 1;     

    for (int i = 1; i < n; i++) {
        if (a[i] > max_val) {
            max_val = a[i];
            index = i + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == max_val) {
            index = i + 1;
            break;
        }
    }

    cout << max_val << " " << index;
    return 0;
}
