#include "typeinfo.h"
#include <iostream>
void test(double, double){}

int main(int argc, char** argv)
{
    int a = 45;

    std::cout << GetTypeCategory(a) << "\n";
    std::cout << GetValueCategory(a) << "\n";
}