#include <stdio.h>


void  func1(){
	printf("1�� �Լ��Դϴ�.\n");
	//while������ ���� ������ ����Ͽ� 1~10������ 
	//���� ���ϵ� 5�� ����� �����ϴ� ���α׷�
	int i = 0, sum = 0;
	
	while(1){
		i++; 
		if(i>10)
			break;
		if(i%5==0)	
			continue;
		sum = sum + i;	
	}
	printf("SUM=%d\n" , sum);
	
}


void  func2(){
	printf("2�� �Լ��Դϴ�.\n");

	int n, count = 0, sum=0;
	do{
		scanf("%d" , &n);
		if(n<1)
			continue;
		sum += n;
		count++;
	} while( count <5);
	printf("�հ�:%d\n", sum);
}


int main(){
	
	int no;
	while(1){
		printf("�Լ���ȣ:");
		scanf("%d", &no);
		switch(no){
			case 0:
				return 0;
			case 1:
				func1();
				break;
			case 2:
				func2();
				break;
			default:
				printf("�߸��� �Լ� ��ȣ�Դϴ�.\n");	

		}		
	} 
} 


