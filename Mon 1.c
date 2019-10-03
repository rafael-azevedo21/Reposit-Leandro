#include <stdio.h>

int main(){
    int x,y,i,result;
	printf("Digite dois numeros: \t"); 
	scanf("%d %d", &x, &y);
	if(x<y){
		result=0;
		for(i=x;i<=y;i++){
			if (i%13 != 0){
				result=result+i;
			}
	}
	}else{
		result=0;
		for(i=y;i<=x;i++){
			if (i%13 != 0){
			result=result+i;
			}
		}
	}
	printf("%d", result);
}
