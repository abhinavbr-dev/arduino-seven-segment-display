#include<avr/io.h>
int main()
{
 int arr[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f},i,j,k,l;
  DDRD=0xff;
  DDRB=0xff;
  while(9)
  {
 for(i=0;i<6;i++)
 {
   for(j=0;j<10;j++)
   {
     for(k=0;k<6;k++)
     {
       for(l=0;l<10;l++)
       {
         PORTB=~(1<<0);
         PORTD=arr[l];
         _delay_ms(1);

         PORTB=~(1<<1);
         PORTD=arr[k];
         _delay_ms(1);

         PORTB=~(1<<2);
         PORTD=arr[j];
         PORTD|=(1<<7);
         _delay_ms(1);
         PORTB=~(1<<3);
         PORTD=arr[i];
         _delay_ms(1);
       }
       }
}
}
  }
}