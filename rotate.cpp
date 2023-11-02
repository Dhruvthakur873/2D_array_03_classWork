#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v(3,vector<int>(3));
    cout<<"enter the elements of the matrix";
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cin>>v[i][j];
        }
    }
    // transpose
    for(int i = 0;i<3;i++){
        for(int j=i+1;j<3;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    // reverse all rows of the matrix
    for(int i =0;i<3;i++){
        int s =0;
        int e = v[0].size()-1;
        while(s<e){
            swap(v[i][s],v[i][e]);
            s++;
            e--;
        }
    }
    //printing our rotated matrix
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
}