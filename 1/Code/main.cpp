#include <iostream> ///for std::cout
#include <cmath> /// ������

int main()
{
  long double a, b, c, S; //������� � ��������
  float Square;
    // ����� �����
  std::cout << "������� ������� ������������";
  std::cin >> a >> b >> c;
  double  p=(a+b+c)/2;
 if(((a + b) > c) && ((a+c) > b) && ((b + c) > a))
 {
S=p*(p-a)*(p-b)*(p-c);
    Square=sqrt(S);
    std::cout << "Square of triangle = " << Square;  }
else
{
  std::cout << "Ego net";
} 
  return 0;
}
