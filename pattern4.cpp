#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows:";
    cin>>n;
    int m=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<m<<" ";
            m++;
        }
        cout<<endl;
    }
    return 0;
}