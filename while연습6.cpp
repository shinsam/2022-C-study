#include <stdio.h>
main(){
	printf("\n예제14==========\n");
	//사용자가 0을 입력할 때 까지 입력받은 
	//정수들(n)의 합(sum)을 출력해보자.
	
	int n, sum=0;
	printf("숫자 입력");
	do{
		scanf("%d" , &n);
		sum = sum + n;
	}while(n!=0);
	printf("합:%d" , sum);
	
	printf("\n문제 2==========\n");
	//	수(num)를 입력받아 그 수의 약수를 출력해보자.
	int i , num;
	
	i =1;
	printf("약수를 구할 수:") ;
	scanf("%d" , &num) ;
	
	while(i<=8 ){
		if(num%i==0 )
			printf("%d " , i);
		i++;	
	}
	
	printf("\n문제 3==========\n");
	// while문으로 입력받은 수(su)가 소수인지를
	//판별해서출력
	int su, cnt=0;
	i=1;
	printf("숫자입력:");
	scanf("%d" , &su);//7
	
	while(i <=su  ){
		if(su %i==0) 
			cnt++;   //2	
		i++;
	}
	if(cnt==2)
		printf("%d는 소수",su );
	else
		printf("%d는 소수아니다",su );	
}











