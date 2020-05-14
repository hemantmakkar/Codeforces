#include <iostream>
using namespace std;

int main(){
    int n{0}, m{0}, a{0}, b{0};
    cin >> n >> m >> a >> b;
    int x{0}, y{0};
    int price{0};
    if(b/m < a){
        x=n/m;
        y=n%m;
        if(y==0)
            price+=x*b;
        else if(m>n)
            price = min(n*a, b);
        else{
            if(a>b)
                price=x*b+b;
            else{
            if(y*a >b)
                price=x*b+b;
            else
                price = x*b+y*a;
            }
        }
    }
    else 
        price=n*a;
        
    cout << price << endl; 
}
