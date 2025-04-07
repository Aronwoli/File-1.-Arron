#include <stdio.h>
#include <conio.h>

void penjumlahan();
void perkalian();
void kombinasi();
int a,b,c=0;

int main(){
	a+=5;
	b+=5;
	printf("Hallo Hendrik! aku Siap praktikum\n");
	printf("a=%i \nb=%i\n",a,b);
	penjumlahan();
	perkalian();
	kombinasi();
}
void penjumlahan(){
	c=a+b;
	printf("\nhasil a+b = %i\n",c);
}
void perkalian(){
	c=c*a;
	printf("nilai c*a = %i\n",c);
}
void kombinasi(){
	c=c*(a+b);
	printf("Nilai c*a+b =%i\n",c);
}
