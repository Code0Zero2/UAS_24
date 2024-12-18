#include <iostream>
using namespace std;

void ratarata(int jumlahdata, int data[]){
    float jmlhdata_dua = jumlahdata;
    int hasil = 0, tmbh = 0;
    for(int i = 0; i < jumlahdata; i++){
        tmbh = hasil;
        hasil = tmbh + data[i];
    }
    float rata_rata = hasil / jumlahdata;
    cout << "hasil : " << hasil;
    cout << "rata-rata : " << rata_rata;
}

int main(){
    int jumlahdata;
    cout << "jmlhdata : ";
    cin >> jumlahdata;
    int data[jumlahdata];
    for(int i = 0; i < jumlahdata; i++){
        cout << "data : ";
        cin >> data[i];
    }
    ratarata(jumlahdata,data);
}


