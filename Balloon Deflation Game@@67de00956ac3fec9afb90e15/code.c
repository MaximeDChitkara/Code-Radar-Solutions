void deflateBalloons(int air[], int n) {
    while (1) {
        int min = -1;

        for (int i = 0; i < n; i++) {
            if (air[i] > 0 && (min == -1 || air[i] < min)) {
                min = air[i];
            }
        }

        if (min == -1) {
            break;
        }

        printf("%d\n", n);

        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= min;
            }
        }
    }
}
