#include <iostream>

int main()
{
    int h, m, s, a;
    std::cin >> a;
    h = a / 3600;
    m = (a % 3600) / 60;
    s = a % 60;
    std::cout << h << ":" << m << ":" << s << std::endl;
    return 0;
}