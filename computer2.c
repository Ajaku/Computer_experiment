
/*
int main(){
	float a, b;

	printf("数字を入力してください。");
	scanf("%f",&a);

	b = (int)a;

	if(a == b){

		printf("整数です。");

	}
	else{
		printf("整数ではありません。")
	}
}
*/
/*

int multi(int a,int b){
	int i,j=0;

	if(b>0){


		for(i=0; i<b; i++){

			j = j + a;
		}
	}

	else{

		for(i=0; i>b; i--){

			j = j + a;
		}

		j = -j;
	}

	return j;
}

int main(){

	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);

	z = multi(x, y);

	printf("%d",z);
}

*/


/*
int main(){
	float a, b;

	printf("数字を入力してください。\n");
	scanf("%f",&a);

	if(a > 0){

		a = a + 0.5;

		printf("%dです。",(int)a);

	}
}

*/


int gcd(int a, int b){
	int h,i,j=a,k,l,m;

		for(i=0; i<=a; i++){

			j = j - b;

			for(k=0; k<=b; k++){

				l = b - j;
			}

			if(j == l){
				j = m;
			}
		}

	}

	return m;
}

int main(){

	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);

	z = gcd(x, y);

	printf("%d",z);
}