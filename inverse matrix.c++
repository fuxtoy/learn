//反矩陣運算
//Sample Input 1 
// 3 1  ->   0.4 -0.1
// 2 4      -0.2 0.3
#include <iostream>
#include<iomanip>
using namespace std;
class matrix{
    private:
        double a11, a12, a21, a22;
    public:
        void inverse(){
          double b11, b12, b21, b22;
          double det = a11*a22 - a12*a21 ; 
          if (!det){
            cout<<"singular matrix" ; 
          }
          else {
            b11 = a22/det ; b12 = -a12/det ; b21 = -a21/det ;b22 = a11/det ; 
            a11 = b11 ; a12 = b12 ; a21 = b21 ; a22 = b22 ; 
          }
        };
    friend istream& operator>>(istream&,matrix&);
    friend ostream& operator<<(ostream&,matrix&);
};
istream& operator>>(istream& in ,matrix& element){
  in>>element.a11>>element.a12 ;
  in>>element.a21>>element.a22 ;
  return in ;
}
ostream& operator<<(ostream& out ,matrix& element){
  out<<fixed <<setprecision(1)<<element.a11<<" "<<element.a12<<"\n";
  out<<element.a21<<" " << element.a22 ;
  return out ;
}
int main()
{
    matrix matrix_A;
    cin >> matrix_A;
    matrix_A.inverse();
    cout << matrix_A;
}
