#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

int x,y,z;

printf("�п�J�T���ΤT�䪺�ƭ�\n");
printf("x="); scanf("%d",&x);
printf("y="); scanf("%d",&y);
printf("z="); scanf("%d",&z);


if( (x+y) <= z ){
printf("���i�򦨤@�ӤT���ΡC"); 
}
else if( (x+y) <= y && (y>>x>>z || y>>z>>x)){
printf("�i�򦨤@�ӤT���ΡC"); 
}
else if( (y+z) <= x ){
printf("����C"); 
}	
else{
printf("�i�H�C");
} 
printf("\n");

system("PAUSE");
return 0;
}
