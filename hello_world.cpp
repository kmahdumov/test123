#include <iostream>
#include <string>
//using namespace не используется
int main()
{
    std::string urname;

    std::cout << "Введите ваше имя: ";
    //запрос имени пользователя
    std::cin >> urname;

    std::cout << "Hello world from " << urname << std::endl;
    //вывод результата работы программы

    return 0;
}
