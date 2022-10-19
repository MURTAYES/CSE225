#ifndef DOUBLEARRAY_H_INCLUDED
#define DOUBLEARRAY_H_INCLUDED

class DoubArr{
private:
   int **data;
   int row;
   int col;
public:
   DoubArr();
   DoubArr(int,int);
   ~DoubArr();
 void setValue(int, int,int);
 int getValue(int,int);
 void Allocate(int,int);
 void getRow();
 void getColumn();
};

#endif // DOUBLEARRAY_H_INCLUDED
