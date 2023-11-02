#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[3][3] = {1,2,3,4,5,6,7,8,9};
    int numRows = 3;
    int numCols = 3;
    for (int i = 0; i < numRows; i++) {
        if (i % 2 == 0) {
            // Print elements left to right for even rows
            for (int j = 0; j < numCols; j++) {
                cout << array[j][i] << " ";
            }
        } else {
            // Print elements right to left for odd rows
            for (int j = numCols - 1; j >= 0; j--) {
                cout << array[j][i] << " ";
            }
        }
    }
}