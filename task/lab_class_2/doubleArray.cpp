#include "doubleArray.h"
#include <iostream>
using namespace std;
DoubArr::DoubArr(){
data = NULL;
row = 0;
col=0;
}
DoubArr::DoubArr(int x,int y){
data = new int*[x];
 for(int i=0;i<y;i++){
        data[i]=new int[y];
  }
row = x;
col = y;
}
DoubArr::~DoubArr(){
    for(int i=0;i<row;i++){
        delete [] data[i];
    }
delete [] data;
}
int DoubArr::getValue(int row,int col ){
return data[row][col];
}
void DoubArr::setValue(int row,int col, int value){
data[row][col] = value;
}

void DoubArr::Allocate(int r, int c){
    row=r;
    col=c;
    int **temp = new int*[r];
    for(int i=0;i<r;i++){
        *(temp + i) = new int[c];
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            *(*(temp + i) + j) = *(*(data + i) + j);
        }
    }

    for(int i=0;i<row;i++){
        delete [] *(data + i);
    }

    delete [] data;

    data = temp;
}
