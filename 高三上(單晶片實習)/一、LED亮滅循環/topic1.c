/* LED亮滅循環 */
#include<reg51.h>
#define led P1 
void delay(int times);
main(){ //主函數
	led=0x00; //令led為全亮狀態
	while(1){ //無限迴圈
		led=~led; //led為上個狀態的相反狀態
		delay(200); //時間延遲200毫秒
	}
}
void delay(int times){ //時間延遲函數
	int i,j;
	for(i=0;i<times;i++){
		for(j=0;j<120;j++);
	}
}

