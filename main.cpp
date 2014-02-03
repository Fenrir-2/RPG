#include "main.h"

using namespace std;

int main(int argc, char **argv)
{
    srand(time(NULL));
    initCurses();
    afficherInfos();
    return 0;
}

void initCurses()
{
    initscr();
    raw();
    keypad(stdscr, true);
    noecho();
    start_color();
}


void afficherInfos()
{
    if(has_colors == FALSE)
    {
        printw("The terminal doesn't support colors...");
        refresh();
    }
    system("Title Game Engine Demo 1 v0.8  **ALPHA - DEBUG**"); //Changement du titre
    system("cls");
    printw("Projet developpe par: ");
    attron(A_BOLD);
    attron(A_UNDERLINE);
    printw("Nicolas Fonnier\n");
    attroff(A_BOLD);
    attroff(A_UNDERLINE);
    printw("Numero de version: %d.%d \n",MAJOR_VERSION, MINOR_VERSION);
    printw("Date de compilation: %d\\%d\\%d \n",COMP_DAY, COMP_MONTH, COMP_YEAR);
    printw("Appuyer sur ");
    attron(A_BOLD);
    attron(A_UNDERLINE);
    printw("Entree");
    attroff(A_BOLD);
    attroff(A_UNDERLINE);
    printw(" pour quitter\n");
    refresh();
    getch();
}
