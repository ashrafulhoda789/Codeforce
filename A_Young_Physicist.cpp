#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,x_sum = 0,y_sum=0,z_sum=0;
    cin >> n;

    for(int i=0; i<n; i++){
        int x,y,z;
        cin >> x >> y >> z;

        x_sum += x;
        y_sum += y;
        z_sum += z;
    }

    if(x_sum == 0 && y_sum == 0 && z_sum == 0) cout << "YES\n";
    else cout << "NO\n";

    
      
    return 0;
}