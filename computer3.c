//Double�^�̈������󂯁A�����_�ȉ���؂�̂Ă��l(int)�Ƃ���֐����쐬����B�����������͐��̒l�Ƃ���B
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

//����(�l�͎����Ƃ���)���{�ɂ��ĕԂ�l�Ƃ���֐����쐬����B
/*
int two(int a){
	int b;

	b = a * 2;

	return b;
}

int main(){
	int c,d;

	printf("��������͂��Ă��������B\n");

	scanf("%d",&c);

	d = two(c);

	printf("%d���{�����l��%d�ł��B", c, d);

}
*/


//3�̈���(�l�͎����Ƃ���)�̂����ォ��傫��2�l�𑫂����l��Ԃ�l�Ƃ���֐����쐬����B
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

	printf("1�ڂ̒l����͂��Ă�������");
	scanf("%d",&x);
	printf("1�ڂ̒l����͂��Ă�������");
	scanf("%d",&y);
	printf("1�ڂ̒l����͂��Ă�������");
	scanf("%d",&z);

	n = three(x, y, z);

	printf("��L��̒l�𑫂���%d�ƂȂ�B", n);
}

*/


//"�֐�"�ƕ\������֐����쐬����B
/*

void text(){

	printf("ÃÃâ€“�‚ÂÃ¢");
}

int main(){

	text();
}

*/


//*��6�쐬����֐����쐬����
void shiri(){

	int a;
	for(a=0; a<6; a++){

		printf("*");
	}
}

main(){
	shiri();
}