/**
 * The above function prints the elements of a 5x5 matrix in a spiral order.
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int minrow = 0, mincol = 0, maxrow = 4, maxcol = 4; // Initialize loop control variables;

    int matrix[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    while(minrow <= maxrow && mincol <= maxcol){
        // right
        for(int j = mincol;j<=maxcol;j++){
            cout<<matrix[minrow][j]<<" ";
        }
            minrow++;
        //down
        for(int j=minrow;j<=maxrow;j++){
            cout<<matrix[j][maxcol]<<" ";
        }
            maxcol--;
        //left
        if (minrow <= maxrow) {
            for (int j = maxcol; j >= mincol; j--) {
                cout << matrix[maxrow][j] << " ";
            }
        }
            maxrow--;

        //up
        if (mincol <= maxcol) {
            for (int j = maxrow; j >= minrow; j--) {
                cout << matrix[j][mincol] << " ";
            }
        }
            mincol++;
    }
}