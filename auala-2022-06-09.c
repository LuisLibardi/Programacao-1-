#include <stdio.h>

int main(){

char letra;

printf("Me informe alguma letra: \n");
scanf("%c", &letra);

switch (letra)
{
	case 'a':  
		printf("\nA letra digitada e uma vogal\n");  
     	break;  
   
	case 'e':  
     		printf("\nA letra digitada e uma vogal\n");  
     	break;  
   
	case 'i':  
     		printf("\nA letra digitada e uma vogal\n");  
     	break;  
   
	case 'o':  
     		printf("\nA letra digitada e uma vogal\n");  
	break;  
   
	case 'u':  
     		printf("\nA letra digitada e uma vogal\n");  
	break;  

	default:  
     		printf("\nA letra digitada e uma consoante\n ");  
}  
   
   return 0;  
 }  
