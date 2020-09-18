#include <stdio.h>
int solution(int n){
	if(n<=0){
		return 0; //Illegal number of stairs
	}
	switch(n){
		case 1: return 1;
		case 2: return 2;
		default:{
			return solution(n-1)+solution(n-2);
		}		
	}
	

}
int main(void){
	int s;
	printf("Please input the number of stairs:");
	scanf("%d",&s);
	printf("There are %d ways of walking to the top.\n",solution(s));
}
