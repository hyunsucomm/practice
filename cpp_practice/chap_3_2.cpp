#include<iostream>
using namespace std;
int func1(int aParameter);
int main()
{
int end;
cout << "3과 5 배수의 총 합을 구하는 프로그램 입니다. \n\n";
cout << "입력한 숫자 미만에서 3과 5의 배수의 총 합을 구합니다 : ";
cin >> end;
cout << end << " 미만의 3, 5의 배수의 총 합은 " << func1(end) << "입니다\n";
return 0;
}
int func1(int end)
{
int sum = 0;
for (int i = 0; i < end; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum += i;
}
}
return sum;
}
