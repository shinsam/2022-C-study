#include <stdio.h>
main(){
	int  i=1 , dan;
	
	while(1){
		i = 1; //�ʱ�ȭ 
		
		printf("���?[0:����]"); //0�� �Է��ϸ� ����
		scanf("%d" , &dan) ;
		
		if(dan==0) {
			printf("Bye~");
			break;
		}
		
		printf("\n*** %d�� ***\n" , dan  );
		
		while(i <= 9 ){
			printf("%d * %d = %d\n", dan, i , dan*i );
			i++;
		} 
	}
	
}
