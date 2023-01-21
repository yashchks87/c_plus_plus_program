#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> test;
    test.insert(5);
    test.insert(7);
    test.insert(10);
    for (auto test_ : test){
        cout << test_;
    }
    // Methods to find sizes
    // Method to find weather set is empty or not...
    bool c = test.empty();
    cout << c;
    // Gives us size of set...
    int d = test.size();
    cout << d;
    // Gives us max size of set...
    int e = test.max_size();
    cout << e;
    return 0;
}