#6
void CuuChuong(){
	int n;
	printf("\nnhap vao so cuu chuong:");
	scanf("%d", &n);
	
	for(int i=1; i<=10; i++){
		printf("%d * %d = %d\n", n, i, (n*i));
	}
}
