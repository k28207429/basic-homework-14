#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

int x,y,z;

printf("請輸入三角形三邊的數值\n");
printf("x="); scanf("%d",&x);
printf("y="); scanf("%d",&y);
printf("z="); scanf("%d",&z);


if( (x+y) <= z ){
printf("不可圍成一個三角形。"); 
}
else if( (x+y) <= y && (y>>x>>z || y>>z>>x)){
printf("可圍成一個三角形。"); 
}
else if( (y+z) <= x ){
printf("不能。"); 
}	
else{
printf("可以。");
} 
printf("\n");

system("PAUSE");
return 0;
}
