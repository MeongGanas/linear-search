#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> items = {4, 12, 3 , 32, 1};
    int k = 1;
    int n = items.size();

    for(int j = 0; j < n; j++){
        if (items[j] == k){
            cout << "Angka ditemukan di index: " << items[j];
            return 1;
        }
    }
    cout << "Angka tidak ada dalam array";
}