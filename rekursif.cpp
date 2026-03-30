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
    vector<int> items = {4, 12, 3 , 32, 1};
    int k = 1;
    int n = items.size();

    int result = search(items, 0, k, n);
    if (result == -1){
        cout << "Angka tidak ada dalam array";
    } else {
        cout << "Angka ditemukan di index: " << result;
    }
}