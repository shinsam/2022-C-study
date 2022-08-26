#include <stdio.h>

main(){
	int i = 10;
	
	do{
		printf("%d ", i  );
		i--;
	}while(i>=5);
	
	printf("test");
	
	printf("\n예제11==========\n");
	int n;
	i=0;
	printf("정수:");
	scanf("%d", &n);
	do{
		printf("I Love programming\n");
		i++ ; 		
	}while(i < n);
	
	printf("\n예제12==========\n");
	int num;
	do{
		printf("숫자입력:");
		scanf("%d" , &num);
		
		if(num>0){
			if(num %2 ==1)			
				printf("홀수\n");
			else
				printf("짝수\n");
		}
	}while(  num > 0 );
	
	printf("\n예제13==========\n");
	int sum = 0;
	i=1;
	
	do{
		sum = sum + i;
		i = i + 2;  // i+=2
	}while(i < 50);
	printf("1부터 50까지의 홀수의 합:%d" , sum);
}






