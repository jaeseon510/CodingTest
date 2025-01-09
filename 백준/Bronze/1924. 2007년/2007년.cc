#include<stdio.h>
int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	for(int i=1;i<x;i++){
		if(i==1)
		{
			if(x==1)
				break;
			y+=31;
		}
		if(i==2){
			if(x==2)
				break;
			y+=28;
		}
		if(i==3){
			if(x==3)
				break;
			y+=31;
		}
		if(i==4){
			if(x==4)
				break;
			y+=30;
		}
		if(i==5){
			if(x==5)
				break;
			y+=31;
		}
		if(i==6){
			if(x==6)
				break;
			y+=30;
		}if(i==7){
			if(x==7)
				break;
			y+=31;
		}
		if(i==8){
			if(x==8)
				break;
			y+=31;
		}
		if(i==9){
			if(x==9)
				break;
			y+=30;
		}
		if(i==10){
			if(x==10)
				break;
			y+=31;
		}
		if(i==11){
			if(x==11)
				break;
			y+=30;
		}
		if(i==12){
			if(x==12)
				break;
			y+=30;
		}
	}
	y=y%7;
	if(y==1){
		printf("MON"); 
	}
	else if(y==2){
		printf("TUE");
	}
	else if(y==3){
		printf("WED");
	}
	else if(y==4){
		printf("THU");
	}
	else if(y==5){
		printf("FRI");
	}
	else if(y==6){
		printf("SAT");
	}
	else{
		printf("SUN");
	}
}