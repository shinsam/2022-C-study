#include <stdio.h>
main(){
	int i , n , sum = 0;
	int start;
	
	printf("시작 수:") ;  //2
	scanf("%d" , &i);
	start = i;
	
	printf("마지막 수:") ; //4 
	scanf("%d" , &n);
	//printf("%d부터 %d까지의 ", i, n);
	while( i <= n ) 
	{
		sum = sum+i;
		i++;
	}
	printf("%d부터 %d까지의 합은 %d",start,  n , sum );
	//printf("합은 %d", sum );
}
