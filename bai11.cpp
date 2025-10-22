
void VeTamGiac() {
	int n;
	printf("\nnhap vao n:");
	scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int spaces = n - i;     
        int stars = 2 * i - 1;   

        for (int s = 0; s < spaces; ++s)
            printf(" ");
        for (int s = 0; s < stars; ++s)
            printf("*");

        printf("\n");
    }
}

