#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
 
bool sortcol ( const vector<double>& v1, const vector<double>& v2 ) { 
    if( v1[1] == v2[1] )
        return v1[0] < v2[0];
    return v1[1] > v2[1]; 
} 
 
int main(){
    int n,t1,t2,a,b;
    double k, maximum;
    vector <vector<double>> res;
    cin >> n >> t1 >> t2 >> k;
    for(int i=0 ; i<n ; i++){
        vector <double> m;
        cin >> a >> b;
        maximum = max(((a*t1)-(a*t1*(k/100))+(b*t2)) , ((b*t1)-(b*t1*(k/100))+(a*t2)));
        m.push_back(i+1);
        m.push_back(maximum);
        res.push_back(m);
    }
    
    sort(res.begin(), res.end(), sortcol);
    
    for(size_t i=0 ; i<res.size() ; i++){
            cout << fixed << setprecision(0) << res[i][0]<<" ";
	        cout << fixed << setprecision(2) << res[i][1] << endl;
    }
    
    return 0;
}
