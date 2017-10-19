// Brendon Brandolino
#include <iostream>
#include <vector>
using namespace std;


int main() {
vector<vector<char> > starMatrix;
int rowSize;
int colSize;
cout<<"Enter rows and columns of stars:"<<endl;
cin>>rowSize;
cin>>colSize;
if (rowSize <= 0) {
  return 0;
}
if (colSize <= 0) {
  return 0;
}

starMatrix.resize(rowSize);

for(int row = 0; row < starMatrix.size(); row++)
{
  starMatrix[row].resize(colSize);

      for(int col = 0; col < starMatrix[row].size() ;col++)
      {
        starMatrix[row][col] = '*';
        cout<<starMatrix[row][col];
      }
      cout<<endl;
}







  return 0;
}
