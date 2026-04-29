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
        for(int p=0; p<n-i-1; p++){   //if we take p=1; p<n-i; p++
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
void pat7(int n){
    for(int i=0; i<n; i++){
        //space1
        for(int j=0; j<i; j++){  //if we take p=1 ;p<i-1; p++
            cout<<" ";
        }
        //point
        for(int j=0; j<(2*(n-i)-1); j++){  //for q=0; q< 2*(n-i)+1
            cout<<"*";
        }
        //space2
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pat8(int n){
    for(int i=0; i<n; i++){
        //space1
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //point
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        //space2
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        //space1
        for(int p=0; p<i; p++){
            cout<<" ";
        }
        //point
        for(int q=0; q< 2*(n-i)-1 ; q++){
            cout<<"*";
        }
        for(int r=0; r<i; r++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pat9(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pat10(int n){
    int start;
    for(int i=0; i<n; i++){
        if(i%2 == 0){ start=0;}
        else { start =1;}
        for(int j=0; j<i; j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}
void pat11(int n){
    for(int i=1; i<= n; i++){
        //number1
        for(int j=1; j<i; j++){
            cout<<j;
        }
        //space
        for(int j=1; j<= 2*(n-i); j++){
            cout<<" ";
        }
        //number2
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pat12(int n){
    int num =1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<" "<< num<<" ";
            num = num + 1;
        }
        cout<<endl;
    }
}
void pat13(int n){
    for( int i=1; i<=n; i++){
        for(char j= 'A'; j< 'A'+ i ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pat14(int n){

}
void pat15(int n){

}
int main(){
    int n;
    cout<<n;
    cin>>n;
    pat1(n);
    pat2(n);
    pat3(n);
    pat4(n);
    pat5(n);
    pat6(n);
    pat7(n);
    pat8(n);
    pat9(n);
    pat10(n);
    pat11(n);
    pat12(n);
    pat13(n);
    pat14(n);
    pat15(n);
}