#include <stdio.h>

exam11(){
	int num1, num2, i;
	printf("공배수를 구할 두 수입력");
	scanf("%d %d" , &num1, &num2) ;
	
	for(i = 1; i<=100 ; i++ )
		if( i%num1==0 and i%num2==0 )
			printf("%d ", i);
	
	// 3 2 : 6 12 18 
} 

exam12(){
//	int sum=0, i;
//	for(i=0; i<100 && sum<2000; i++){
//		sum = sum + i;
//		printf("%d %d\n" , i, sum);
//	}
	int num=1, sum=0;
	for(;;){
		sum+=num;
		printf("%d까지의 합:%d\n", num, sum);
		num++;
		if(num>5)
			break;
	}
	
		
} 

exam13(){
	
} 

exam14(){
	
} 

exam15(){
	
} 


main(){
	int no;
	
	while(1){
		printf("\n문제번호:");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
		switch(no){
			case 11: exam11(); break;
			case 12: exam12(); break;
			case 13: exam13(); break;
			case 14: exam14(); break;
			case 15: exam15(); break;
		}
	}
}
