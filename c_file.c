#include<reg51.h>
sbit led=P2^0;

void delay(unsigned int );
void main()
{	
	led=0;
	while(1)
	{	
		
			led=1;
			delay(100);
			
			led=0;
			delay(100);
 
		}
		 
  
}

void delay(unsigned int k)
{
	for(k=0;k<1200;k++);
}
