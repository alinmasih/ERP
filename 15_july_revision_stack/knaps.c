#include <stdio.h>

void swapFloat(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void swapInt(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(float p[], int v[], int w[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (p[j] < p[j + 1]) {
                swapFloat(&p[j], &p[j + 1]);
                swapInt(&v[j], &v[j + 1]);
                swapInt(&w[j], &w[j + 1]);
            }
        }
    }
}

int main() {
    int n, W;
    scanf("%d", &n);
    scanf("%d", &W);
    
    int v[n], w[n];
    float p[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        scanf("%d", &w[i]);
        p[i] = (float)v[i] / w[i];
    }

    bubbleSort(p, v, w, n);

    float totalValue = 0.0;
    int currentWeight = 0;

    for (int i = 0; i < n; i++) {
        if (currentWeight + w[i] <= W) {
            currentWeight += w[i];
            totalValue += v[i];
        } else {
            int remainingCapacity = W - currentWeight;
            totalValue += v[i] * ((float)remainingCapacity / w[i]);
            break;
        }
    }

    printf("%.2f\n", totalValue);
    return 0;
}