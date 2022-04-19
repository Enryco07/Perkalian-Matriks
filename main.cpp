#include <iostream>

using namespace std;

int main() {
  int A[3][3],B[3][3],hasil[3][3];
  int m,n,k,jml = 0;

    cout << "=====================================" << endl;
    cout << "Program Perkalian Matriks 3x3" << endl;
    cout << "=====================================" << endl;


    cout << "Masukkan elemen matriks pertama: \n\n";
    for(m = 0; m < 3; m++){
      for(n = 0; n < 3; n++){
        cin >> A[m][n];
      }
    }
    cout << endl;

    cout << "Masukkan elemen matriks kedua: \n\n";
    for(m = 0; m < 3; m++){
      for(n = 0; n < 3; n++){
        cin >> B[m][n];
      }
    }
    cout << endl;

    for(m = 0; m < 3; m++){
      for(n = 0; n < 3; n++){
        for(k = 0; k < 3; k++){
          jml = jml + A[m][k] * B[k][n];
        }
        hasil[m][n] = jml;
        jml = 0;
      }
    }

    cout << "Hasil perkalian matriks: \n\n";
    for(m = 0; m < 3; m++){
      for(n = 0; n < 3; n++){
        cout << " " << A[m][n];
      } if (m == 1) {
        cout << " x";
      } else {
        cout << "\t";
      }
      for(n = 0; n < 3; n++){
        cout << " " << B[m][n];
      } if (m == 1) {
        cout << " =";
      } else {
        cout << "\t";
      }
      for(n = 0; n < 3; n++){
        cout << " " << hasil[m][n];
      }
      cout << endl;
    }
  }
