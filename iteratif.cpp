#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cout << "Masukkan ukuran array: ";
    cin >> n;

    vector<int> items(n);
    for(int i = 0; i < n; i++){
        cin >> items[i];
    }

    int k;
    cout << "Masukkan angka yang dicari: ";
    cin >> k;


    for(int j = 0; j < n; j++){
        if (items[j] == k){
            cout << "Angka ditemukan di index: " << items[j];
            return 1;
        }
    }
    cout << "Angka tidak ada dalam array";
}