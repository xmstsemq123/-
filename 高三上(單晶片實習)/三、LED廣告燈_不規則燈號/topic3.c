/* LED廣告燈_不規則燈號 */
#include<reg51.h>
#define led P1
void delay(int times);
char code ledmovement[]={~0x81,~0x42,~0x24,~0x18,~0x24,~0x42}; //宣告char陣列於程式記憶體
main(){ //主函數
	while(1){ //無限迴圈
		int i;
		for(i=0;i<6;i++){ 
			led=ledmovement[i]; //提取陣列資料
			delay(200); //時間延遲200毫秒
		}
	}
}
void delay(int times){
	int i,j;
	for(i=0;i<times;i++){
		for(j=0;j<120;j++);
	}
}


