#include <stdio.h>
#include <conio.h>
#include <c64.h>
#include <cbm_petscii_charmap.h>

void main(void) {
    // this routine in in c64.h
    clrscr();
    puts("Hola Mundo\n");
    // this routine in in conio.h
    chline(12);
    bordercolor(COLOR_LIGHTBLUE);
    bgcolor(COLOR_GREEN);
    // access VIC registers directly
    VIC.bordercolor = COLOR_LIGHTBLUE;
    VIC.bgcolor[0]=COLOR_GREEN;
    textcolor(COLOR_YELLOW);
    gotoxy(14,12);
    puts("Esto esta en amarillo\n");
    //wait for keypress
    cgetc();
}
