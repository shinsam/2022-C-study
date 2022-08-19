#include <stdio.h>

main(){
	int  n = 2;
	
	while(n < 5){   
		printf("Hi~\n");
		n++;  		
	}
	printf("n=%d\n" , n);
	printf("====================\n");
	//예제1)
	int i = 1;
	while(i <= 10 ){
		printf("#");
		i++;
	}	

	printf("\n====================\n");
	//예제 2
	int num = 1;
	while( num <= 5  ){
		printf("반복내용:%d\n", num);
		num++;
	}
	printf("반복문 종료후 num=%d", num);
	
	//예제 4
	printf("\n====================\n");
	int sum = 0;
	i=1;
	while(i <= 10 ){
		sum = sum + i;
		i++;
	}		
	printf("1부터 10까지의 합:%d" , sum) ;
}








