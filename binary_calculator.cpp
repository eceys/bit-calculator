#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	int x;
	int y;
	printf("Enter \"0\" for exit.\n\n");
	
	while(1){	
	printf("Number : ");
	scanf("%d",&x);
	
	if(x == 0){
		break;
	}
	
	for(int a=15;a>=0;a--){
		
		if(x&1<<a){
			printf("1 ");
		}else{
			printf("0 ");
			}
		}
		
	printf("\n");
	}
	
	
	return 0;
}
