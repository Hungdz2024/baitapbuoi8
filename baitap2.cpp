#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "nhap so nguyen N: ";
    cin >> n;
    if(n <= 0){
        cout << "N khong hop le";
        return 0;
    }
    int dem = 0;
    long long tong = 0;
    for(int i = 1;i <= n;i++){
        if(i % 3 != 0){
            continue;
        }
        dem++;
        tong += i;
    }
    cout << "so luong: " << dem << endl;
    cout << "tong cac so: " << tong << endl;
    return 0;
}