#include<iostream>
using namespace std;
int main(){
    int z;
    cin>>z;
    int y=(z+1)/2;
    for(int i=1;i<=y;i++){
        for(int j=y;j>=0;j--){
            if(j>=i){
                cout<<" ";
            }
            else{
            cout<<"*";
            }
        }
        for(int l=1;l<i;l++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int m=1;m<=(y-1);m++){
        for(int n=0;n<=(y-1);n++){
            if(n>m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int x=(y-1);x>=m;x--){
            cout<<"*";
        }
        cout<<"\n";
    }
    
}