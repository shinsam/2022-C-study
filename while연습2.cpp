#include <stdio.h>
main(){
	int i , n , sum = 0;
	int start;
	
	printf("���� ��:") ;  //2
	scanf("%d" , &i);
	start = i;
	
	printf("������ ��:") ; //4 
	scanf("%d" , &n);
	//printf("%d���� %d������ ", i, n);
	while( i <= n ) 
	{
		sum = sum+i;
		i++;
	}
	printf("%d���� %d������ ���� %d",start,  n , sum );
	//printf("���� %d", sum );
}
