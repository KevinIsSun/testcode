#include <iostream>
#include <string>

int f(int j) {
    int x = 1, y = 2;
    y -= x;
    return 0;
    x++;
}

namespace NS1
{
    int i1;
    int j1;
    int k1;
}
using namespace NS1;

int main() {
    std::cout << "run\n";
    std::string s = "";
    return 0;
}
