#include<stdlib.h>
#include<stdio.h>
int main(void){
	int n,i=0;
	int *p;
	p=&n;
	to:
	printf("saiser le nombre ");
	scanf("%d",p);
	printf("les diviseur sont ");
	if(*p>0){
		
		for(i=1;i<*p;i++){
			
		if(*p%i==0)
		{
			
		printf(" %d ",i);	
			
			
			
			
				}		
			
			
			
		}
	
		
		
		
		
		
		
		
		
		
		
		
		
	}else 
	printf("erreur ");
	goto to;
	
	
	
	
	
	
	
	
	
	
	
}
