#include <stdio.h>

main(){
	int  n = 2;
	
	while(n < 5){   
		printf("Hi~\n");
		n++;  		
	}
	printf("n=%d\n" , n);
	printf("====================\n");
	//����1)
	int i = 1;
	while(i <= 10 ){
		printf("#");
		i++;
	}	

	printf("\n====================\n");
	//���� 2
	int num = 1;
	while( num <= 5  ){
		printf("�ݺ�����:%d\n", num);
		num++;
	}
	printf("�ݺ��� ������ num=%d", num);
	
	//���� 4
	printf("\n====================\n");
	int sum = 0;
	i=1;
	while(i <= 10 ){
		sum = sum + i;
		i++;
	}		
	printf("1���� 10������ ��:%d" , sum) ;
}








