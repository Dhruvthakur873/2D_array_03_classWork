/**
 * The above function prints the elements of a 5x5 matrix in a spiral order.
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int minrow = 0, mincol = 0, maxrow = 4, maxcol = 4; // Initialize loop control variables;

    int matrix[5][5] ;
    int a =1;
    while(minrow <= maxrow && mincol <= maxcol){
        // right
        for(int j = mincol;j<=maxcol;j++){
            matrix[minrow][j] = a++;
        }
            minrow++;

        //down
        for(int j=minrow;j<=maxrow;j++){
            matrix[j][maxcol] = a++;
        }
            maxcol--;

        //left
        if (minrow <= maxrow) {
            for (int j = maxcol; j >= mincol; j--) {
                matrix[maxrow][j]  = a++;
            }
        }
            maxrow--;


        //up
        if (mincol <= maxcol) {
            for (int j = maxrow; j >= minrow; j--) {
                matrix[j][mincol]  = a++;
            }
        }
            mincol++;
    }
    for(int i =0;i<5;i++){
        for(int j =0;j<5;j++){
            cout<<matrix[i][j]<<" ";
        }
    }
}