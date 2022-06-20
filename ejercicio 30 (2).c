//Manuel Rodriguez y carlos moya 

#include <stdio.h>

int main(){
	
	int n,f= 1,i;
	
printf("ingrese un numero para calcular su factorial:");
scanf("%d",&n);

for(i= 1; i<=n;i++){
	
	f*=i;
}
	printf("el numero factorial de %d es: %d",n,f);
	
	
	
	
	
	
	
	
	
	
	return 0;
}