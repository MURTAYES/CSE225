#include <iostream>
#include "doubleArray.h"
using namespace std;

int main()
{
    DoubArr arr1(2,2);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){

       cout << arr1.getValue(i,j)<<" ";
       }
        cout<<endl;
    }
   arr1.Allocate(3,3);
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

       cout << arr1.getValue(i,j)<<" ";
       }
        cout<<endl;
    }
    return 0;
}
