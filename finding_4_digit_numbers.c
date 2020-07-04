#include <stdio.h>
int power4(int n){
	return n*n*n*n;
}
int main(void){
	int sum = 0;
	for(int i = 1000; i < 10000; i++){
		if(i == power4(i%10) + power4(i/10%10) + power4(i/100%10) + power4(i/1000))
			printf("%d\n", i);
	}
}