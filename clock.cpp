# include "iGraphics.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int s[6];
int r=5,w=10,h=80;
void time()
{
    time_t currentTime;
    time(&currentTime);
    struct tm*myTime = localtime(&currentTime);
    int x=myTime->tm_hour;
    int y=myTime->tm_min;
    int z=myTime->tm_sec;
    int d=myTime->tm_wday;
    switch(d)
    {
    case 0:
        iText(1050, 220, "SUNDAY," , GLUT_BITMAP_HELVETICA_18);
        break;
    case 1:
        iText(1050, 220, "MONDAY,", GLUT_BITMAP_HELVETICA_18);
        break;
    case 2:
        iText(1050, 220, "TUESDAY,", GLUT_BITMAP_HELVETICA_18);
        break;
    case 3:
        iText(1050, 220, "WEDNESDAY,", GLUT_BITMAP_HELVETICA_18);
        break;
    case 4:
        iText(1050, 220, "THURSDAY,", GLUT_BITMAP_HELVETICA_18);
        break;
    case 5:
        iText(1050, 220, "FRIDAY", GLUT_BITMAP_HELVETICA_18);
        break;
        case 6:
        iText(1050, 220, "SATURDAY,", GLUT_BITMAP_HELVETICA_18);
        break;
    }
    int u=myTime->tm_mday;
    char r[2];
    itoa(u,r,10);
    iText(1050, 170, r, GLUT_BITMAP_HELVETICA_18);
    int m=myTime->tm_mon;
    m+=1;
    switch(m)
    {
    case 1:
        iText(1050, 120, "JANUARY", GLUT_BITMAP_HELVETICA_18);
        break;
    case 2:
        iText(1050, 120, "FEBRUARY", GLUT_BITMAP_HELVETICA_18);
        break;
    case 3:
        iText(1050, 120, "MARCH", GLUT_BITMAP_HELVETICA_18);
        break;
    case 4:
        iText(1050, 120, "APRIL", GLUT_BITMAP_HELVETICA_18);
        break;
    case 5:
        iText(1050, 120, "MAY" , GLUT_BITMAP_HELVETICA_18);
        break;
    case 6:
        iText(1050, 120, "JUNE", GLUT_BITMAP_HELVETICA_18);
        break;
    case 7:
        iText(1050, 120, "JULY", GLUT_BITMAP_HELVETICA_18);
        break;
    case 8:
        iText(1050, 120, "AUGUST", GLUT_BITMAP_HELVETICA_18);
        break;
    case 9:
        iText(1050, 120, "SEPTEMBER", GLUT_BITMAP_HELVETICA_18);
        break;
    case 10:
        iText(1050, 120, "OCTOBER", GLUT_BITMAP_HELVETICA_18);
        break;
    case 11:
        iText(1050, 120, "NOVEMBER", GLUT_BITMAP_HELVETICA_18);
        break;
    case 12:
        iText(1050, 120, "DECEMBER", GLUT_BITMAP_HELVETICA_18);
        break;
    }
    s[0]=(x/10);
    s[1]=(x%10);
    s[2]=(y/10);
    s[3]=(y%10);
    s[4]=(z/10);
    s[5]=(z%10);
}
void iDraw()
{
    int i;
    iClear();
    iSetColor(100, 150, 200);
    iFilledCircle(369, 217, r);
    iFilledCircle(369, 137, r);
    iFilledCircle(690, 217, r);
    iFilledCircle(690, 137, r);
    time();
    for(i=0; i<6; i++)
    {
        int l=(i*160);
        switch(s[i])
        {
        case 0:
        {
            iFilledRectangle((80+l),80,h,w);
            iFilledRectangle((70+l),91,w,h);
            iFilledRectangle((70+l),183,w,h);
            iFilledRectangle((80+l),264,h,w);
            iFilledRectangle((160+l),91,w,h);
            iFilledRectangle((160+l),183,w,h);
        }
        break;
        case 1:
        {
            iFilledRectangle((160+l),91,w,h);
            iFilledRectangle((160+l),183,w,h);
        }
        break;
        case 2:
        {
            iFilledRectangle((80+l),80,h,w);
            iFilledRectangle((70+l),91,w,h);
            iFilledRectangle((80+l),172,h,w);
            iFilledRectangle((80+l),264,h,w);
            iFilledRectangle((160+l),183,w,h);
        }
        break;
        case 3:
        {
            iFilledRectangle((80+l),80,h,w);
            iFilledRectangle((80+l),172,h,w);
            iFilledRectangle((80+l),264,h,w);
            iFilledRectangle((160+l),91,w,h);
            iFilledRectangle((160+l),183,w,h);
        }
        break;
        case 4:
        {
            iFilledRectangle((80+l),172,h,w);
            iFilledRectangle((70+l),183,w,h);
            iFilledRectangle((160+l),91,w,h);
            iFilledRectangle((160+l),183,w,h);
        }
        break;
        case 5:
        {
            iFilledRectangle((80+l),80,h,w);
            iFilledRectangle((80+l),172,h,w);
            iFilledRectangle((70+l),183,w,h);
            iFilledRectangle((80+l),264,h,w);
            iFilledRectangle((160+l),91,w,h);
        }
        break;
        case 6:
        {
            iFilledRectangle((80+l),80,h,w);
            iFilledRectangle((70+l),91,w,h);
            iFilledRectangle((80+l),172,h,w);
            iFilledRectangle((70+l),183,w,h);
            iFilledRectangle((80+l),264,h,w);
            iFilledRectangle((160+l),91,w,h);
        }
        break;
        case 7:
        {
            iFilledRectangle((80+l),172,h,w);
            iFilledRectangle((80+l),264,h,w);
            iFilledRectangle((160+l),91,w,h);
            iFilledRectangle((160+l),183,w,h);
        }
        break;
        case 8:
        {
            iFilledRectangle((80+l),80,h,w);
            iFilledRectangle((70+l),91,w,h);
            iFilledRectangle((80+l),172,h,w);
            iFilledRectangle((70+l),183,w,h);
            iFilledRectangle((80+l),264,h,w);
            iFilledRectangle((160+l),91,w,h);
            iFilledRectangle((160+l),183,w,h);
        }
        break;
        case 9:
        {
            iFilledRectangle((80+l),80,h,w);
            iFilledRectangle((80+l),172,h,w);
            iFilledRectangle((70+l),183,w,h);
            iFilledRectangle((80+l),264,h,w);
            iFilledRectangle((160+l),91,w,h);
            iFilledRectangle((160+l),183,w,h);
        }
        break;
        }
    }
}
void iMouseMove(int mx, int my)
{
}

void iMouse(int button, int state, int mx, int my)
{

}

void iKeyboard(unsigned char key)
{
    if (key == 'e')
    {
        exit(0);
    }
}
void iSpecialKeyboard(unsigned char key)
{

    if (key == GLUT_KEY_F10)
    {
        exit(0);
    }
}
int main()
{

    iInitialize(1200, 354, "Clock");
    return 0;
}


