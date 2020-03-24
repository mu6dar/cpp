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
     //объявляем тип указателя
     typedef void (Test::* pToFunc)();

     //создаём объект этого типа и инициализируем его
     pToFunc pt = &Test::foo;

     //создаем объект класса
     Test test;

     //с помощью объекта вызываем функцию, адрес который хранится в pt
     (test.*pt)();

     // Можно и по указателю:
     Test *test2 = new Test; 

     (test2->*pt)();

     delete test2;
}
