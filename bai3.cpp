#3
void giaiPt(){
    float a, b, c;
    printf("\nNhap a: ");
    scanf("%f",&a);
    
    printf("Nhap b: ");
    scanf("%f",&b);
    
    printf("Nhap c: ");
    scanf("%f",&c);


	if (a == 0){
	    if(b==0){
	        if(c==0){
	            printf("Phuong trình vô sô nghiêm.");
	        }
	        else
	        {
	            printf("Phuong trình vô nghiêm.");
	        }
	    }
	    else
	    {
	        float x = -c/b;
	        printf("Phuong trình bâc nhât có nghiêm: x= %.2f \n", x);
	    }
	}
	else{
	    float delta = b * b - 4 *a *c;
	    if (delta < 0) {
	        printf("Vô nghi?m. \n");
	    }
	    else if (delta == 0){
	        float x= -b / (2 * a);
	        printf("Phuong trình có nghi?m kép: x = %.2f \n");
	    }
	    else
	    {
	        float x1= (-b + sqrt(delta))/ (2*a);
	        float x2= (-b - sqrt(delta))/ (2*a);
	        printf("Phuong trình có 2 nghiêm phân biêt\n");
	        printf("x1 = %.2f \n",x1);
	        printf("x2 = %.2f \n",x2);
	    }
	}
}
