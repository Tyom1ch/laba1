#include <stdio.h>

int main() {
    int N; // Вхідні дані
    
    printf("Введіть кількість секунд: ");
    scanf("%d", &N);
    
    int m = N / 60; // Знаходимо кількість повних хвилин
    
    printf("m = %d\n", m); // Виводимо результат
    
    return 0;
}

