#include <iostream>
using namespace std;
namespace allfunc {
void printArr(int *, int);
void function1(int *);
void function2(int *);
bool function3(int *);
void function4(int *, int);
void function5(int, ...);
}
int main()
{
    void (*func0) (int*, int);
    void (*func1) (int*);
    void (*func2) (int*);
    bool (*func3) (int*);
    void (*func4) (int*, int);
    void (*func5) (int, ...);
    func0 = allfunc::printArr;
    func1 = allfunc::function1;
    func2 = allfunc::function2;
    func3 = allfunc::function3;
    func4 = allfunc::function4;
    func5 = allfunc::function5;

    //Задание 1
    std::cout<<"Task 1."<<std::endl;
    int arr1[10] = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
    (*func1)(arr1);
    (*func0)(arr1, 10);
    std::cout<<std::endl;

    //Задание 2
    std::cout<<"Task 2."<<std::endl;
    int arr2[8];
    (*func2)(arr2);
    (*func0)(arr2, 8);
    std::cout<<std::endl;

    //Задание 3
    std::cout<<"Task 3."<<std::endl;
    int arr3[5] = {1, 1, 1, 2, 1};
    std::cout<<(*func3)(arr3)<<std::endl;
    int arr4[5] = {2, 1, 1, 2, 1};
    std::cout<<(*func3)(arr4)<<std::endl;
    int arr5[5] = {10, 1, 2, 3, 4};
    std::cout<<(*func3)(arr5)<<std::endl;

    //Задание 4
    std::cout<<"Task 4."<<std::endl;
    int arr6[5] = {1, 2, 3, 4, 5};
    int n = 3;
    (*func4)(arr6, n);
    (*func0)(arr6, 5);
    std::cout<<std::endl;
    n = -1;
    (*func4)(arr6, n);
    (*func0)(arr6, 5);
    std::cout<<std::endl;

    //Задание 5
    std::cout<<"Task 5."<<std::endl;
    int const N = 10;
    int arr8[N] = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
    (*func5)(N, arr8[0], arr8[1], arr8[2], arr8[3], arr8[4], arr8[5], arr8[6], arr8[7], arr8[8], arr8[9]);

    return 0;
}
