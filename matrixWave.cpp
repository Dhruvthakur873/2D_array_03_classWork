#include<bits/stdc++.h>
using namespace std;
void change(int array[3][3]){
    for(int i=0;i<3;i++){
        if(i%2!=0){
            int s =0;
            int e = 2;
            while(s<e){                
                swap(array[i][s],array[i][e]);
                s++;
                e--;
            }
        }
    }
    for(int i=0;i<3;i++){
            for(int j = 0;j<3;j++){
                cout<<array[i][j]<<" ";
            }cout<<endl;
        }
}
void printwave(int array[3][3]){
    int numRows = 3;
    int numCols = 3;

    for (int i = 0; i < numRows; i++) {
        if (i % 2 == 0) {
            // Print elements left to right for even rows
            for (int j = 0; j < numCols; j++) {
                cout << array[i][j] << " ";
            }
        } else {
            // Print elements right to left for odd rows
            for (int j = numCols - 1; j >= 0; j--) {
                cout << array[i][j] << " ";
            }
        }
    }


}
int main(){
    int array[3][3] = {1,2,3,4,5,6,7,8,9};
    
}