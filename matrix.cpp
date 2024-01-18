// represent matrix in a one-dimensional array in cpp
//Suppose we have a m*n matrix

class Matrix{
int m;
int n;
vector<int> array;

public:
Matrix Matrix(int m, int n):m{m}, n{n}{
array = vector<int>(m*n);
}

int call(int i, int j){
  return array[i*m+j]
}
