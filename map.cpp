#include <iostream>
#include <unordered_map>
using namespace std;

// Map is equivalent of dictionary in python.

int main(){
    unordered_map<string, int> umap;
    umap["Name"] = 5;
    for (auto x : umap)
        cout << x.first << " " << 
            x.second << endl;
}