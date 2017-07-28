#include <stdio.h>

int addNumbers(int a, int b);  // function prototype

int main(){
	int n1, n2, sum;

	printf("Enter two numbers: ");
	scanf("%d %d", &n1, &n2);

	sum = addNumbers(n1, n2);  // function call

	printf("fum = %d", sum);

	return 0
}


/**
 * @wi.implements playground/PLAY-1:4 adds two numbers together!
 */

int addNumbers(int a, int b){
	int result;
	result = a + b;
	return result;
}
