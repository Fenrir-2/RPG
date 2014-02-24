#include "main.h"
#include "Jeu.h"

using namespace std;

int main(int argc, char **argv)
{
    srand(time(NULL));  //Pour eviter les problemes d'aleatoirite
    initCurses();      //Plutot logique, puisque afficherInfos() se sert de PD/ncurses
    afficherInfos();  //Bonne vieille fonction bien pratique

    Jeu moteur;

    return 0;
}

void initCurses()
{
    initscr();
    keypad(stdscr, true);
    cbreak();
    noecho();
    start_color();
}
//Fonction d'init de ncurses/PDcurses


void afficherInfos()
{
    if(has_colors == FALSE)
    {
        printw("The terminal doesn't support colors...");
        refresh();
    }

    //Si jamais...
    //Terminal Windows -> OK
    //UXTerm           -> OK
    //XTerm            -> OK
    //LXTerm           -> OK
    //XFCETerm         -> OK

    system("Title RPG 2 Demo 1 v0.3  **ALPHA - DEBUG**"); //Changement du titre
    system("cls");
    printw("Projet developpe par: ");

    attron(A_BOLD);
    attron(A_STANDOUT);
    attron(A_UNDERLINE);
    printw("Nicolas Fonnier\n");
    attroff(A_BOLD);
    attroff(A_STANDOUT);
    attroff(A_UNDERLINE);
    //On met le texte en evidence

    printw("Numero de version: %d.%d \n",MAJOR_VERSION, MINOR_VERSION);
    printw("Date de compilation: %d\\%d\\%d \n",COMP_DAY, COMP_MONTH, COMP_YEAR);
    printw("Appuyer sur ");

    attron(A_BOLD);
    attron(A_UNDERLINE);
    attron(A_STANDOUT);
    printw("Entree");
    attroff(A_BOLD);
    attroff(A_UNDERLINE);
    attroff(A_STANDOUT);
    //On met le texte en evidence

    printw(" pour quitter\n");
    getch();

    refresh();
}
