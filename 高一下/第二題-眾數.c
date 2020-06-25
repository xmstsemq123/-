/*第二題-眾數*/
#include <stdio.h>
int main(){
    int number[10000],number_com[10000];
    int n,i=0,max,max_arr,arr_max;
    while(1){
        scanf("%d",&n);
        if(n>=0){
            number[i]=n;
            i++;
        }else{
            break;
        }
    }
    max=number[0];
    for(int a=0;a<i;a++){
        if(number_com[number[a]]==0){
            number_com[number[a]]=1;
        }else{
            number_com[number[a]]=number_com[number[a]]+1;
        }
        if(number[a]>max){
            max=number[a];
        }
    }
    arr_max=number_com[number[0]];
    max_arr=number[0];
    max=max+1;
    while(max--){
        if(number_com[max]>arr_max){
            arr_max=number_com[max];
            max_arr=max;
        }
    }
    printf("%d",max_arr);
	return 0;
}
