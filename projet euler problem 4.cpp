//Problem 4 progect euler
//Largest palindrome product
#include<stdio.h>

int main(){
	
	int x,y;
	int product, revpod,reverse,max;
	
	max=0;
	
	for(x=100;x<1000;x++){
		for(y=100;y<1000;y++){
			
			product = x*y;
			revpod=product;
			reverse=0;
			
			while(revpod>0){
				
				reverse=reverse*10+revpod%10;
				revpod/=10;
			}
			if(reverse==product){
				if(product>max){
					max=product;
				}
			}
		}
	}
	printf("%d\n",max);
	
	return 0;
	
}
