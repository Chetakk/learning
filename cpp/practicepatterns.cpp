#include<bits/stdc++.h>
using namespace std;
void patern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}   

int main(){
    int n;
    cin>>n;
    patern1(n);
}