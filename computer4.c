

/*
int main(){

	int a[5]={1,1,1,1,6};

	printf("a[0]=%d\n",a[0]);
	printf("a[1]=%d\n",a[1]);
	printf("a[2]=%d\n",a[2]);
	printf("a[3]=%d\n",a[3]);
	printf("a[4]=%d\n",a[4]);
}
*/



/*
int main(){

	int i, b[100];

	for(i=0; i<=100; i++){
		b[i]=i;
		printf("b[%d]=%d\n",i,b[i]);
	}
}
*/







/*
main(){
	int sum,i,p[5]={1,2,3,4,5};

	sum = 0;

	for(i=0; i<5; i++){
		sum = p[i]+sum;
	}
	printf("goukei%d\n",sum);
	sum = sum/5;
	printf("heikin%d",sum);
}
*/


int main(){
	char e[10]={'a','b','c','d','e','f','g','h','i','j',},f[10]={0},i;
	for(i=0; i<=10; i++){
		f[i] = e[i];
	}
	for(i=0; i<=10; i++){
		printf("f[%d]=%c\n", i,f[i]);
	}
