#include<bits/stdc++.h>
using namespace std;
int main(){
  /* The code snippet is creating a Pascal's triangle and storing it in a 2D vector `v`. */
    int numRows = 5;
    vector<vector<int>>v(numRows);
    for (int i = 0; i <numRows; i++) {
        v[i] = vector<int>(i + 1, 1);
    }
    //filling elements in the pascal's triangle 
    for(int i=2;i<numRows;i++){
        for(int j =1;j<i;j++){
            v[i][j] = v[i-1][j]+v[i-1][j-1];
        }
    }
/* The code snippet is printing the elements of the Pascal's triangle. */
    for(int i = 0;i<numRows;i++){
        for(int j =0;j<=i;j++){
            cout<<v[i][j]<<" " ;
        }cout<<endl;
    }
}