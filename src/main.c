#include <stdio.h>

int addNumbers(int a, int b);  // function prototype

/**
* @wi.implements playground/PLAY-4 main method
*/
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

/**
 * @wi.test_point broadcomDemo/BCD-430 tests if ints are equal by subtraction
 */

bool sameNumber(int a, int b){
	if (a - b == 0){
		return true;
	} else {
		return false;
	}
