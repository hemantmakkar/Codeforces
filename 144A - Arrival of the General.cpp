#include <iostream>
using namespace std;

int main(){
    int n{0}, x{0}, y{101}, ia{0}, ib{0};
    int a[101];
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        if(a[i] > x){
            x = a[i];
            ia = i;
        }
        if(a[i] <= y){
            y = a[i];
            ib = i;
        }
    }
    
    int pass = ia - 1 + n - ib;
    if(ia>ib)
        pass--;
    cout << pass;
    return 0;
}
