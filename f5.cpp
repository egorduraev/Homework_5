#include <iostream>
#include <stdarg.h>
namespace allfunc {
void function5(int size, ...) {
    bool b1;
    va_list lst;
    va_start(lst, size);
    for (int i = 0; i < size; i++) {
        b1 = !((bool)(va_arg(lst, int)));
         std::cout<<b1<<" ";
    }
}
}
