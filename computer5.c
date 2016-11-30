/*

int main(){
	char a,b,c = 'c';

	a = c - 2;

	b = c * 2 / 3;

	printf("%d\n",a);

	printf("%d",b);

	return 0;
}

*/

/*
int main(){

	double a = 123456;

	int b,c = 6;

	for(b = 0; b <c; b++){
		a /= 10;
	}

	printf("%d\n",a);

	printf("%d",b);

	return 0;
}

*/



/*
int lcm(int a, int b){
	int i,g=0;
	if(a > 0&& b > 0){
		for(i = 0; i <= b; i++){
			if((a % i == 0) && (b % i == 0)}{
				g = i;
			}
		}

		return a * b / g;
	}

	return 1
}
*/


int lcm(int a, int b){
	int i,g=0;
	if(a > 0&& b > 0){
		for(i = 0; i <= b; i++){
			if((a % i == 0) && (b % i == 0)){
			}
				g = i;
		}

		return a * b / g;
	}

	return 1;
}

int main(){}