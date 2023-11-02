#include<bits/stdc++.h>
using namespace std;
void printPlusPattern(int array[][5],int row,int col){
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            if(i==(row-1)/2||j==((col-1)/2)){
                cout<<array[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }cout<<endl;
    }
}
int main(){
int array[5][5] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7};
int row=5;
int col =5;
printPlusPattern(array,row,col);
}