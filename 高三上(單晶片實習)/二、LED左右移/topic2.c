/* LED左右移 */
#include<reg51.h>
#define led P1
void delay(int times);
main(){ //主函數
	while(1){ //無限迴圈
		int i;
		for(i=0x01;i<0x80;i=i<<1){ //令led向左移
			led=~i; //led為i的位元取反
			delay(100); //時間延遲100毫秒
		}
		for(i=0x80;i>0x01;i=i>>1){ //令led向右移
			led=~i; //led為i的位元取反
			delay(100); //時間延遲100毫秒
		}
	}
}
void delay(int times){
	int i,j;
	for(i=0;i<times;i++){
		for(j=0;j<120;j++);
	}
}

