void deflateBalloons(int air[], int n) {
    int count = n;

    while (1) {
        int min = -1;

        // Trouver la plus petite valeur positive
        for (int i = 0; i < n; i++) {
            if (air[i] > 0 && (min == -1 || air[i] < min)) {
                min = air[i];
            }
        }

        // Si toutes les ballons sont à plat
        if (min == -1) {
            break;
        }

        // Compter combien de ballons sont encore gonflés
        int inflated = 0;
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                inflated++;
                air[i] -= min;
            }
        }

        printf("%d\n", inflated);
    }
}
