#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>

void drawCar(int x, int y)
{
    setcolor(YELLOW);

    rectangle(x-22, y-10, x+22, y+5);

    line(x-15, y-10, x-8, y-22);
    line(x-8, y-22, x+12, y-22);
    line(x+12, y-22, x+19, y-10);

    setcolor(WHITE);
    circle(x-13, y+8, 5);
    circle(x+13, y+8, 5);
}

void main()
{
    int gd=DETECT, gm;

    int X[3], Y[3];
    int i,j,k,x,y,sx,sy;
    char msg[50];

    clrscr();

    printf("CAR ANIMATION\n");
    printf("--------------------\n");

    printf("Enter 3 coordinate pairs (X Y):\n");

    for(i=0; i<3; i++)
    {
        printf("Point %d: ",i+1);
        scanf("%d %d",&X[i],&Y[i]);
    }

    initgraph(&gd,&gm,"C:\\TC\\BGI");

    for(i=0; i<2; i++)
    {
        for(j=0; j<=100; j++)
        {
            x=X[i]+(X[i+1]-X[i])*j/100;
            y=Y[i]+(Y[i+1]-Y[i])*j/100;

            // Screen coordinates
            sx=70+x*3;
            sy=400-y*10;

            cleardevice();

            // X and Y axes
            setcolor(WHITE);
            line(50,430,620,430);
            line(50,430,50,50);

            outtextxy(560,440,"X-AXIS");
            outtextxy(10,40,"Y-AXIS");

            // Draw path
            setcolor(GREEN);

            for(k=0; k<2; k++)
            {
                line(70+X[k]*3,400-Y[k]*10,
                     70+X[k+1]*3,400-Y[k+1]*10);
            }

            // Coordinate points
            for(k=0; k<3; k++)
            {
                circle(70+X[k]*3,400-Y[k]*10,4);
            }

            // Moving car
            drawCar(sx,sy);

            setcolor(WHITE);
            sprintf(msg,"X=%d Y=%d",x,y);
            outtextxy(450,30,msg);

            delay(30);
        }
    }

    setcolor(WHITE);
    outtextxy(230,470,"SIMULATION COMPLETED");

    getch();
    closegraph();
}
