#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[2][3];
    for(int i =0;i<2;i++){
        for(int j =0;j<3;j++){
            cin>>array[i][j];
        }
    }
    int transpose[3][2];
    for(int i =0;i<3;i++){
        for(int j =0;j<2;j++){
            transpose[i][j] = array[j][i];
        }
    }
    for(int i =0;i<3;i++){
        for(int j =0;j<2;j++){
            cout<<transpose[i][j]<< " ";
        }cout<<endl;
    }
}