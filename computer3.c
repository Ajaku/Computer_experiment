//Double型の引数を受け、小数点以下を切り捨てた値(int)とする関数を作成せよ。ただし引数は正の値とする。
/*

double  truncation(int a){
	int b;
	b =  a;
	printf("%d",b);

	return b;

}
int main(){
	float c,d;

	d = 10.5;

	  truncation(d);

}

*/

//引数(値は実数とする)を二倍にして返り値とする関数を作成せよ。
/*
int two(int a){
	int b;

	b = a * 2;

	return b;
}

int main(){
	int c,d;

	printf("整数を入力してください。\n");

	scanf("%d",&c);

	d = two(c);

	printf("%dを二倍した値は%dです。", c, d);

}
*/


//3つの引数(値は実数とする)のうち上から大きい2値を足した値を返り値とする関数を作成せよ。
/*

int three (int a, int b, int c){

	int d;

	if(a<b){
		if(a<c){
			d = b + c;
			}

		else{
			d = a + b;
		}
	}

	else{
		d = a + c;
	}

	return d;
}

int main(){

	int x,  y,  z, n;

	printf("1つ目の値を入力してください");
	scanf("%d",&x);
	printf("1つ目の値を入力してください");
	scanf("%d",&y);
	printf("1つ目の値を入力してください");
	scanf("%d",&z);

	n = three(x, y, z);

	printf("上記二つの値を足すと%dとなる。", n);
}

*/


//"関数"と表示する関数を作成せよ。
/*

void text(){

	printf("ﾃεε｢竄ｬ窶愿窶堙つ静δ｢");
}

int main(){

	text();
}

*/


//*を6個作成する関数を作成せよ
void shiri(){

	int a;
	for(a=0; a<6; a++){

		printf("*");
	}
}

main(){
	shiri();
}