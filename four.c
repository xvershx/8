int is_two_same(int size, int a[]) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                return 1; // Если нашли два одинаковых элемента, то возвращаем 1
            }
        }
    }
    return 0; // Если не нашли двух одинаковых элементов, то возвращаем 0
}
