#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Klavyeden girilen text bir ifadeyi okuyan ve bu textin içindeki 
harflerin sayýsýný veren programý dinamik bellek yönetimi kullanarak yazýnýz*/

int main()
{
    char *s;
    s=(int *) malloc (1000*sizeof(int));
    int  i,j,k,counter=0,n;	
 				
    printf("Lutfen bir cumle giriniz: ");
    gets(s);
    
	int *p;
 	p=s;
     
    for(j=0;s[j];j++);
	 n=j; 
    
	printf("Dizideki karakterler:\n");

    for(i=0;i<n;i++)  
    {
     	counter=1;
    	if(*s)
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(*(s+i)==*(s+j))
    	    {
                 counter++;
            
	     	}
	      } 
	      printf(" '%c' = %d \n",*(s+i),counter);
       }
 	} 
 	free(s);
    return 0;
}
