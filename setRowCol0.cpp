#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v ;
    vector<int>a = {1,1,1};
    vector<int>a1 = {1,0,1};
    vector<int>a2 = {1,1,1};
    v.push_back(a);
    v.push_back(a1);
    v.push_back(a2);
    int pivotrow = -1;
    int pivotcol =-1;
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            if(v[i][j]==0){
                pivotcol = j;
                pivotrow = i;
                break;
            }
        }
    }
    for(int i=0;i<3;i++){
        v[pivotrow][i]=0;
    }
    for(int j=0;j<3;j++){
        v[j][pivotcol]=0;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

    

}