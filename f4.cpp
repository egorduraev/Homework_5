namespace allfunc {
void function4(int *arr6, int n) {
    int m = 0;
    if (n < 0) {
        for (int j = 0; j > n; j--) {
            m = arr6[0];
            for (int i = 0; i < 5; i++) {
                if ((i + 1) < 5) arr6[i] = arr6[i + 1];
                else arr6[i] = m;
            }

        }
    }
    else {
        for (int j = 0; j < n; j++) {
            m = arr6[4];
            for (int i = 4; i >= 0; i--) {
                if ((i - 1) >= 0) arr6[i] = arr6[i - 1];
                else arr6[i] = m;
            }

        }
    }
}
}
