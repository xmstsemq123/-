/*第一題-圓面積與體積*/
#include <stdio.h>
#define pi 3.14
float area3(float r,float h);
float area2(float r);
int main(){
    float r,h;
    for(int i=1;i<=10;i++){
        scanf("%f %f",&r,&h);
        printf("圓柱體體積%.2f\n",area3(r,h));
    }
	return 0;
}
float area3(float r,float h){
    return area2(r)*h;
}
float area2(float r){
    return r*r*pi;
}

