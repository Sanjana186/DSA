#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the rows number:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m=1;
        for(int j=0;j<i+1;j++){
            cout<<m<<" ";
            m++;
        }
        cout<<endl;
    }
    return 0;
}