#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "nhap so N: ";
    cin >> n;
    if(n < 2){
        cout << "N khong hop le";
        return 0;
    }
    int uocdautien = -1;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            uocdautien = i;
            break;
        }
    }
    if(uocdautien != -1){
        cout << "Uoc so nho nhat lon hon 1 la: " << uocdautien;
    }else{
        cout << "n la so nguyen to";
    }
    return 0;
}