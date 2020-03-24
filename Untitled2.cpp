#include <iostream>
using namespace std;

class Test
{
public:
     void foo()
     {
          cout << "Test::foo called" << endl;
     }
};

int main()
{
     //��������� ��� ���������
     typedef void (Test::* pToFunc)();

     //������ ������ ����� ���� � �������������� ���
     pToFunc pt = &Test::foo;

     //������� ������ ������
     Test test;

     //� ������� ������� �������� �������, ����� ������� �������� � pt
     (test.*pt)();

     // ����� � �� ���������:
     Test *test2 = new Test; 

     (test2->*pt)();

     delete test2;
}
