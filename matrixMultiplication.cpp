#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[2][3] = {1,2,3,4,5,6};
    int b[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int res[2][4];
    int n,m,p,q;
    n=3;m=2;p=3;q=4;
    if(n==p){
        for(int i=0;i<m;i++){
            for(int j = 0;j<q;j++){
                res[i][j]=0;
                for(int k = 0;k<n;k++){
                    res[i][j] +=a[i][k]*b[k][j];
                }
            }
        }
    }else{
        cout<<"matrix multiplication is not possible : ";
    }
    
        for(int i=0;i<m;i++){
            for(int j = 0;j<q;j++){
                cout<<res[i][j]<<" ";
            }cout<<endl;
        }
}