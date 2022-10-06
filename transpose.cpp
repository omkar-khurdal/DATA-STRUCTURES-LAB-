/* Chinmay Kotkar
SE AI-DS 29*/
#include <iostream>

using namespace std;

int main() {
  int a[10][10], transpose[10][10], i, j, row, column;
  cout << "Enter number of rows and column" << endl;

  cin >> row >> column;

  cout << "Enter elements of matrix" << endl;
  for (i = 0; i < row; ++i) {
    for (j = 0; j < column; j++) {
      cout << "enter elements" << i + 1 << j + 1 << " : ";
      cin >> a[i][j];
    }
  }

  for (i = 0; i < row; ++i) {
    for (j = 0; j < column; j++) {
      cout << " " << a[i][j];
      if (j == column - 1) {
        cout << endl << endl;
      }

    }
  }

  for (i = 0; i < row; ++i) {
    for (j = 0; j < column; ++j) {
      transpose[i][j] = 0;
    }
  }

  for (i = 0; i < row; ++i) {
    for (j = 0; j < column; j++) {

      transpose[j][i] = a[i][j];
    }
  }

  for (i = 0; i < row; ++i) {
    for (j = 0; j < column; j++) {
      cout << " " << transpose[i][j];
      if (j == column - 1) {
        cout << endl << endl;
      }

    }
  }
  
  
  
      int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (i < j)
            {
                cout << "0" << " ";
            }
            else
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
}
