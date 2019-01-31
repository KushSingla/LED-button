#include<reg51.h>
sbit b1= P2^0;
sbit b2= P2^1;
sbit l1= P2^2;
sbit l2= P2^3;
void main()
{ int bs;
  l1=l2=0;
	
	while(1){
if(b1==0||b2==0)
{ if(bs==1) bs=0;
	else	bs=1;
	
	while(b1==0||b2==0);

if(bs==1){l1=l2=1;}
else {l1=l2=0;}
}}}