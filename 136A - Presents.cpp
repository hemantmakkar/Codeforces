#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num{0}, x{0};
    vector<int> a,b;
    cin>> num;
    for(int i=0 ; i<num ; i++){
        cin >> x;
        a.push_back(x);
    }
    for(int j=1 ; j<=num ; j++){
        for(int i=0 ; i<num ; i++){
            if(j==a[i])
                b.push_back(i+1);
        }
    }
    for(auto c: b)
        cout << c << ' ';
    
    return 0;
}
