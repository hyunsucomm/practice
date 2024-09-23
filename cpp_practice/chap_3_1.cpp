#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
double a;
cout << "숫자를 입력해주세요" << endl;
cin >> a;
cout << "입력된 숫자의 제곱근은" << sqrt(a) << "입니다." << endl;
cout << "입력된 숫자의 제곱은" << pow(a, 2) << "입니다." << endl;
cout << "입력된 숫자의 절댓값은" << fabs(a) << "입니다." << endl;
cout << "입력된 숫자의 올림은" << ceil(a) << "입니다." << endl;
cout << "입력된 숫자의 내림은" << floor(a) << "입니다." << endl;
return 0;
}
