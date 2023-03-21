#include <stdio.h>

main ()

{
	int v,i,p,r, grandeza;
	 
	printf("Escolha uma grandeza\n");
	printf("A-Pontecia\n B-Tensao\n C-Resitencia\n D-Corrente\n");
	scanf("%d",&grandeza);
	
	switch(grandeza){
		
	
	
		case 1:
			printf("Infome o valor da tensao e  da potencia \n\n");         
	        scanf("%d" ,&i);
	        scanf("%d" ,&v);
	        
	        
	        

			p=v*i;
			
			printf("Potência e %d\n",p);
			break;
			
		case 2:;
			printf("Infome o valor da resistencia e da corrente  \n\n");         
	        scanf("%d" ,&r);
	        scanf("%d",&i);

			v=r*i;
			printf("Tensão é %d\n",v);
			break;
			
		case 3:
			printf("Infome o valor da tensao e da corrente \n\n");         
	        scanf("%d" ,&i);
	        scanf("%d" ,&v);

			r=v/i;
			printf("Resistência é %d\n",r);
			break;
			
	
			
			
		case 4:;
			printf("Infome o valor da resistencia  e  da tensao \n\n");         
	        scanf("%d" ,&r);
	        scanf("%d" ,&v);

			i=v/r;
			
			printf("Corrente é %d\n",i);
			
			break;
			
			
	}
} 



