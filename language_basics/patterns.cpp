#include <bits/stdc++.h>
using namespace std;
void pat1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pat2(int n){
    for (int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pat3(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pat4(int n){
    for(int i=0; i<n; i++){
        for(int j=n; j>=i; j--){    //can also write as (int j=0; j<=n+i-1; j++)
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pat5(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pat6(int n){
    for(int i=0; i<n; i++){
        //space1
        for(int p=0; p<n-i-1; p++){
            cout<<" ";
        }
        //point/star
        for(int q=0; q<(2*i)-1; q++){
            cout<<"*";
        }
        //space2
        for(int r=0; r<n-i-1; r++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<n;
    cin>>n;
    pat1(n);
    pat2(n);
    pat3(n);
    pat4(n);
}