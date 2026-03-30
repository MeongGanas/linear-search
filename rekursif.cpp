#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> items, int index, int k, int size){
    if (index > size - 1){
        return -1;
    }

    if (items[index] == k){
        return index;
    }

    return search(items, index+1, k, size);
}

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


    int result = search(items, 0, k, n);
    if (result == -1){
        cout << "Angka tidak ada dalam array";
    } else {
        cout << "Angka ditemukan di index: " << result;
    }
}