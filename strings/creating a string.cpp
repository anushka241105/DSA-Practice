#include <bits/stdc++.h>
using namespace std;
int main(){
    string name= "Anushka";  //double quotaion len>1
                //0123456   stored as indexes just like arrays
    cout<< name[0];
    cout<< name.size(); //length
    //string manipulation
    name[2]='a'; //single quotation len<1 ie. character //Anashka
    //string traversal and manipulation
    int n= name.size();
    for(int i=0; i<n; i++){
        cout<<name[i]<<" ";
        cout<< isupper(name[0]); //1111
        cout<<isupper(name[i]);//1000
    }
    cout<<toupper(name[0]);//65 returns ASCII value 
    cout<<(char)toupper(name[1]); //N (typecasting) 
}