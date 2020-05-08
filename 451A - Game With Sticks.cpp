#include <iostream>
using namespace std;

int main(){
    int n{0}, m{0}, i{0};
    cin >> n >> m;
    if(n>m)
        i=m;
    else
        i=n;
    
    if(i%2==0)
        cout << "Malvika" << endl;
    else
        cout << "Akshat" << endl;
    return 0;
}
