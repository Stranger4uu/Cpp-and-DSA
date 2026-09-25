#include<iostream>
using namespace std; 

void printDevisiors(int n){
    for(int i; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
            
        }
    }
}

int main (){
    printDevisiors(36);
}