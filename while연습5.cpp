#include <stdio.h>

main(){
	int i = 10;
	
	do{
		printf("%d ", i  );
		i--;
	}while(i>=5);
	
	printf("test");
	
	printf("\n����11==========\n");
	int n;
	i=0;
	printf("����:");
	scanf("%d", &n);
	do{
		printf("I Love programming\n");
		i++ ; 		
	}while(i < n);
	
	printf("\n����12==========\n");
	int num;
	do{
		printf("�����Է�:");
		scanf("%d" , &num);
		
		if(num>0){
			if(num %2 ==1)			
				printf("Ȧ��\n");
			else
				printf("¦��\n");
		}
	}while(  num > 0 );
	
	printf("\n����13==========\n");
	int sum = 0;
	i=1;
	
	do{
		sum = sum + i;
		i = i + 2;  // i+=2
	}while(i < 50);
	printf("1���� 50������ Ȧ���� ��:%d" , sum);
}






