#5
void Tiendien(){
	int tiendien;
	
	printf("\nnhap vao tien dien:");
	scanf("%d" ,&tiendien);
	
	
	if (tiendien <= 150 and tiendien > 0){
		printf("tien dien: %d", (tiendien * 500));
	}
	else if (tiendien >= 150 and tiendien < 350){
		printf("tien dien: %d", ((tiendien-149)*550+149*500));
	}
	else{
		printf("tien dien: %d", (149*500+201*550+(tiendien-350)*650));
	}
	return;
}
