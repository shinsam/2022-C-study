#include <stdio.h>
main(){
	printf("\n����14==========\n");
	//����ڰ� 0�� �Է��� �� ���� �Է¹��� 
	//������(n)�� ��(sum)�� ����غ���.
	
	int n, sum=0;
	printf("���� �Է�");
	do{
		scanf("%d" , &n);
		sum = sum + n;
	}while(n!=0);
	printf("��:%d" , sum);
	
	printf("\n���� 2==========\n");
	//	��(num)�� �Է¹޾� �� ���� ����� ����غ���.
	int i , num;
	
	i =1;
	printf("����� ���� ��:") ;
	scanf("%d" , &num) ;
	
	while(i<=8 ){
		if(num%i==0 )
			printf("%d " , i);
		i++;	
	}
	
	printf("\n���� 3==========\n");
	// while������ �Է¹��� ��(su)�� �Ҽ�������
	//�Ǻ��ؼ����
	int su, cnt=0;
	i=1;
	printf("�����Է�:");
	scanf("%d" , &su);//7
	
	while(i <=su  ){
		if(su %i==0) 
			cnt++;   //2	
		i++;
	}
	if(cnt==2)
		printf("%d�� �Ҽ�",su );
	else
		printf("%d�� �Ҽ��ƴϴ�",su );	
}











