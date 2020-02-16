  #include<stdio.h>
  #include<conio.h>
  
    int main(void){
    	
   	 int n,squareOfSum,sumOfSquares=0,sum=0;
   	 
		for(n=1;n<=100;n++){
            sum += n;
             sumOfSquares += n*n;
        }
        
    	squareOfSum=sum*sum;
        printf("%i",squareOfSum-sumOfSquares);
        
        getch();
        return 0;
    }
