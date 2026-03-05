#include <reg51.h>

sbit LED = P1^0;   // LED connected to Port 1 Pin 0

// Delay function
void delay(unsigned int t)
{
    unsigned int i,j;
    for(i=0;i<t;i++)
        for(j=0;j<1275;j++);
}

// Dot signal
void dot()
{
    LED = 1;
    delay(1);
    LED = 0;
    delay(1);
}

// Dash signal
void dash()
{
    LED = 1;
    delay(3);
    LED = 0;
    delay(1);
}

// Function to send Morse code for characters
void morse(char c)
{
    switch(c)
    {
        case 'A': dot(); dash(); break;
        case 'B': dash(); dot(); dot(); dot(); break;
        case 'C': dash(); dot(); dash(); dot(); break;
        case 'D': dash(); dot(); dot(); break;
        case 'E': dot(); break;
        case 'F': dot(); dot(); dash(); dot(); break;
        case 'G': dash(); dash(); dot(); break;
        case 'H': dot(); dot(); dot(); dot(); break;
        case 'I': dot(); dot(); break;
        case 'J': dot(); dash(); dash(); dash(); break;
        case 'K': dash(); dot(); dash(); break;
        case 'L': dot(); dash(); dot(); dot(); break;
        case 'M': dash(); dash(); break;
        case 'N': dash(); dot(); break;
        case 'O': dash(); dash(); dash(); break;
        case 'P': dot(); dash(); dash(); dot(); break;
        case 'Q': dash(); dash(); dot(); dash(); break;
        case 'R': dot(); dash(); dot(); break;
        case 'S': dot(); dot(); dot(); break;
        case 'T': dash(); break;
        case 'U': dot(); dot(); dash(); break;
        case 'V': dot(); dot(); dot(); dash(); break;
        case 'W': dot(); dash(); dash(); break;
        case 'X': dash(); dot(); dot(); dash(); break;
        case 'Y': dash(); dot(); dash(); dash(); break;
        case 'Z': dash(); dash(); dot(); dot(); break;
    }

    delay(3); // space between characters
}

void main()
{
    char message[] = "SOS";
    int i = 0;

    while(message[i] != '\0')
    {
        morse(message[i]);
        i++;
    }

    while(1);
}