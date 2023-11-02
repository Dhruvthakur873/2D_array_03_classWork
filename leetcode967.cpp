#include<bits/stdc++.h>
using namespace std;
int main(){
vector<vector<int>>a(3,vector<int>(3)) ;
    int row = a.size()-1;
    int col = a[0].size()-1;

    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<=row;i++){
        for(int j=i+1;j<=col;j++){
            swap(a[i][j],a[j][i]);
        }

    }for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
}

