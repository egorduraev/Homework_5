namespace allfunc {
void function1(int *arr1) {
    bool b1;
    for (int i = 0; i < 10; i++) {
        b1 = !((bool)arr1[i]);
        arr1[i] = (int) b1;
    }
}
}
