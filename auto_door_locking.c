#include <reg51.h>

sbit sensor = P1^0;
sbit relay1 = P1^1;
sbit relay2 = P1^2;

void delay();  // function declaration

void main()
{
    relay1 = 0;
    relay2 = 0;
    while(1)
    {
        if(sensor == 0)//Prototype button,connected between I/O and GND
        {
            delay();
            if(sensor == 0)
            {
                relay1 = 1;
                relay2 = 0;  //motor runs clockwise - door opens
                delay();

                relay1 = 0;
                relay2 = 1;  //motor runs anticlockwise - door closes
                delay();

                relay1 = 0;
                relay2 = 0;

                while(sensor == 0);  // wait for button release
            }
        }
    }
}

void delay()
{
    unsigned int i, j;
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 60000; j++);
    }
}
