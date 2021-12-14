#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<=5;i++){
        if(i==3){
            cout<<"  ******\n";
            continue;
        }
        for(int j=5;j>=1;j--){
            if(j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int k=1;k<=i;k++){
            if(k==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}