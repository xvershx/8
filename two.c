void sort_even_odd(int n, int a[]) {
    int left = 0, right = n - 1;
    while (left < right) {
        while (a[left] % 2 == 0 && left < right) {
            left++;
        }
        while (a[right] % 2 != 0 && left < right) {
            right--;
        }
        if (left < right) {
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
        }
    }
}