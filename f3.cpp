namespace allfunc {
bool function3(int *arr345) {
    int sum, half, i;
    sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr345[i];
    }
    half = 0;
    i = 0;
    while (half < (sum / 2)) {
        half += arr345[i];
        ++i;
    }
    if (half == (sum / 2) && ((sum % 2) == 0)) return 1;
    else return 0;
}
}
