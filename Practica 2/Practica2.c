#include <stdio.h>
void G();
void O();
void N();
void Z();
void A();
void L();
void O2();

int main(){
	G();
	return 0;
}

void G(){
	printf("G");
	O();
}

void O(){
	printf("O");
	N();
}
void N(){
	printf("N");
	Z();
}
void Z(){
	printf("Z");
	A();
}
void A(){
	printf("A");
	L();
}
void L(){
	printf("L");
	O2();
}
void O2(){
	printf("O");
}

