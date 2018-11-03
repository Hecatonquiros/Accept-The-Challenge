#include <iostream>
using namespace std;

int main(){

  int num;
  int a, b, c;
  int A, B, C;
  cin >> num;
  while(num--){
    cin >> a >> b >> c;
    if((a + b <= c) || (a + c <= b) || (b + c <= a))
      cout << "IMPOSIBLE"<< endl;
    else{
      A = a*a + b*b - c*c;
      B = a*a + c*c - b*b;
      C = b*b + c*c - a*a;
      if (A == 0 || B == 0 || C == 0)
	cout << "RECTANGULO" << endl;
      else if (A < 0 || B < 0 || C < 0)
	cout << "OBTUSANGULO" << endl;
      else if (A > 0 || B > 0 || C > 0)
	cout << "ACUTANGULO" << endl;
    }
  }
  return 0;
}
