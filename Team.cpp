#include<iostream>
using namespace std;
int main(){

    int n,total=0;
    cin >> n;

    while(n--){
        int arr[3];
        int countt=0;
        for(int i=0; i<3; i++){
            cin >> arr[i];
        }

        for(int i=0; i<3; i++){
            if(arr[i]==1){
                countt++;
            }
        }
        if(countt==2 || countt==3){
            total++;
        }
        
    }
    cout << total << endl;
}