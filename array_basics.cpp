#include <iostream>
using namespace std;
int main(){
    int test[5] = {1, 2, 3, 4, 5};
    int size = sizeof(test) / sizeof(int);
    cout << size << "\n";
    for (int i = 0; i < size; i++){
        cout << test[i] << "\n";
    }
}