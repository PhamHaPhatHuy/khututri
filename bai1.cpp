#1
void thang()
{
	int thang;
	
	printf("\nnhap vao 1 thang:");
	scanf("%d" ,&thang);
	
	if (thang ==1 || thang==3 ||thang ==5 || thang ==7 || thang ==8 || thang==10 || thang ==12)
	{
		printf("Thang %d co 31 ngay", thang);
	}
	else if (thang ==4 || thang ==6 || thang ==9 || thang ==11)
	{
		printf("Thang %d co 30 ngay", thang);
		
	}
	else if (thang == 2)
	{
		printf("nam nhuan co 29 kh nhuan thi 28");
	}
	
	return;
}
