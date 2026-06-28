#include <iostream>
#include <string>
#include "liba.h"
#include "libb.h"
#include "libc.h"
#include "libf.h"

int main()
{
    std::cout << "Top " << depa() << '\n';
    std::cout << "Top " << depb() << '\n';
    std::cout << "Top " << depc() << '\n';
    std::cout << "Top " << depf() << '\n';
    return 0;
}