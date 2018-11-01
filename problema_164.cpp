#include <iostream>
using namespace std;

int main(){

  int x_1, x_2, y_1,y_2;
  cin >> x_1 >> y_1 >> x_2 >> y_2;

  while(y_1 <= y_2 &&  x_1 <= x_2){
    cout << (x_2 - x_1) * (y_2 - y_1) << endl;
    cin >> x_1 >> y_1 >> x_2 >> y_2;
  }

  return 0;
}
