#10
void Fi(){
	int n;
	printf("\nnhap vao n:");
	scanf("%d", &n);
	if (n<=0){
		printf("ko hop le");
	}
	int a=0, b=1, temp;
	printf("day fibonacci: ");
	for(int i=1; i<=n; i++){
		if (b<n){
			printf("%d ", b);
        	temp = a + b;
        	a = b;
        	b = temp;
		}
	}
}


