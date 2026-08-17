#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "nhap so nguyen N: ";
    cin >> N;
    if (N < 0 || N > 12) {
        cout << "N khong hop le";
    } else {
        long long giaiThua = 1; 
        for (int i = 1; i <= N; i++) {
            giaiThua *= i;
        }
        cout << giaiThua;
    }
    return 0;
}