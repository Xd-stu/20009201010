#include <reg51.h>
#include <intrins.h>
#define uchar unsigned char
#define uint  unsigned int

#define nop(); _nop_();

sbit D4094=P1^0; //串行数据输出端,H 使能
sbit STR4094=P1^1; //锁存器移位使能端,H 使能
sbit CLK4094=P1^2; //串行时钟输出端,H 使能输出状态使能端,H 使能
void delayms(unsigned short ms)
{
   unsigned short i;
   uchar j;
   for(i=0;i<ms;i++)
        {
    for(j=0;j<200;j++);
    for(j=0;j<102;j++);
    } //for(i=0;i<ms;i++)
}

void Out4094(uchar dat0)
{
        uchar a,b;

        b=dat0;//读入待发送的数据
        STR4094=0;
        for(a=0;a<8;a++)
                {
                if(b&0x80)
                D4094=1;
                else D4094=0;
        CLK4094=0;
                nop();
                   CLK4094=1;
                b<<=1;//向左移一位
                }
   STR4094=1;
}

void main()
{
        uchar a=0,b,c,d;
        while(1)
                {
                if(a>=100) a=0;
                b=a/10;//取十位
                c=a%10;//取个位
                d=c<<4|b&0x0f;
                Out4094(d);
                delayms(500);
                a++;
                }
}