#include<stdio.h>
void ngayTrongThang(int ngay,int thang,int nam){
	switch(thang){
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 :
			 printf("\nThang co 31 ngay!!!");
			 break;
		case 2 :
			if(nam%400==0 || nam%4==0 && nam%10!=0){
				printf("\nNam nhuan-T2 co 29 ngay!!!");
			}else{
				printf("\nNam khong nhuan-T2 co 28 ngay!!!");
			}
			break;
		case 4 :
		case 6 :
		case 9 :
		case 11 :
			printf("\nThang co 30 ngay!!!");
			break;
	    default :
	    	printf("\nVui long nhap lai !!!");
	    }
}

int main(){
	int ngay;
	int thang;
	int nam;
	printf("Nhap ngay thang nam : ");
	scanf("%d%d%d",&ngay,&thang,&nam);
	ngayTrongThang(ngay,thang,nam);
}
