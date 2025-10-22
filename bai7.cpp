#7
void tinhGiaithua() {
    int n;
    long long kq = 1;

    printf("\nNhap so nguyen can tinh giai thua: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Khong co giai thua cho so am!\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        kq *= i;
    }

    printf("%d! = %lld\n", n, kq);
}
