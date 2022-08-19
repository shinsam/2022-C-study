#include <stdio.h>

main(){
	//무한 루프를 사용하여 0부터 100까지의
	// 3의 배수를 출력하고 그 합을 출력하시오 
	int i = 0, sum = 0;
	
	while(1) {
		printf("%d " , i)	;
		sum = sum + i;
		
		i = i+ 3;
		if(i > 100)
			break;
	}
	printf("sum=%d" , sum);
}
