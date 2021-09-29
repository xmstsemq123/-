#include<reg51.h>
#include<stdio.h>
#include<stdlib.h>
#define seg P1
char code segmovement[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void delay(int times);
int segmovement_length=sizeof(segmovement)/sizeof(segmovement[0]);
int delay_time=1000;
main(){
	while(1){
		int random_num=rand()%10;
		seg=segmovement[random_num];
	}
}
/*void delay(int times){
	int i,j;
	for(i=0;i<times;i++){
		for(j=0;j<120;j++);
	}
}*/