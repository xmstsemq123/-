#include<reg51.h>
#include<stdio.h>
#define seg P1
char code segmovement[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void delay(int times);
int segmovement_length=sizeof(segmovement)/sizeof(segmovement[0]);
int delay_time=1000;
main(){
  int i;
	while(1){
		for(i=0;i<segmovement_length;i++){
			seg=segmovement[i];
			delay(delay_time);
		}
	}
}
void delay(int times){
	int i,j;
	for(i=0;i<times;i++){
		for(j=0;j<120;j++);
	}
}