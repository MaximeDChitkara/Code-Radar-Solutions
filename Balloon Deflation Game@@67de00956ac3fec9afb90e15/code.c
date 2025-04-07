void deflateBalloons(int air[], int n) {
    while (1) {
        int count = 0;
        int min_air = 1e9;

        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                count++;
                if (air[i] <= min_air) {
                    min_air = air[i];
                }
            }
        }
        if (count == 0) {
            break;
        }

        printf("%d\n", count);

        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= min_air;
            }
        }
    }
}
