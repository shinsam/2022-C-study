#include <stdio.h>

exam1(){
	int i ;
	for(i=1; i<= 6; i++   )	
		printf("i = %d\n" , i);
	
} 

exam2(){
	int i, sum=0;
	for( i=1; i<=10 ; i++ )
		sum= sum+i;
		
	printf("1~10까지의 합:%d\n" , sum)	;
} 

exam3(){
	int i, even, odd;
	even = odd = 0;
	
	for(i=1; i<=100 ; i++ ){
		if(i%2==0)				//짝수 
			even+=i;
		else
			odd+=i; 
	}
	
	printf("짝수의합:%d 홀수의 합:%d\n", even, odd);
} 

exam4(){
	//구구단 2단 출력하기
	int i;
	for(i=1; i<10 ; i++   ) 
		printf("2*%d=%2d\n", i, 2*i  );
} 

exam5(){
	
} 


main(){
	int no;
	
	while(1){
		printf("\n문제번호:");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
		}
	}
}
