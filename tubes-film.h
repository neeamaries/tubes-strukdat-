#ifndef FILM_H_INCLUDED
#define FILM_H_INCLUDED

#include <iostream>
using namespace std;

struct Aktor {
    string idAktor;
    string nama;
    char gender; 
};

struct Film {
    string idFilm;
    string judul;
    int tahun; 
};

typedef struct elmAktor *adrAktor;
typedef struct elmFilm *adrFilm;
typedef struct elmRelasi *adrRelasi;

struct elmAktor {
    Aktor info;
    adrAktor next;
};

struct elmFilm {
    Film info;
    adrFilm next;
};

struct elmRelasi {
    adrFilm film;
    adrAktor aktor;
    adrRelasi next;
};

struct ListAktor {
    adrAktor first;   
};

struct ListFilm {
    adrFilm first;    
};

struct ListRelasi {
    adrRelasi first;
};

void createListAktor(ListAktor &LA);
void createListFilm(ListFilm &LF);
void createListRelasi(ListRelasi &LR);
adrAktor newAktor(Aktor data);
adrFilm newFilm(Film data);
adrRelasi newRelasi(adrFilm f, adrAktor a);
void insertFirstAktor(ListAktor &LA, adrAktor p);
void insertLastAktor(ListAktor &LA, adrAktor p);
void insertFirstFilm(ListFilm &LF, adrFilm p);
void insertLastFilm(ListFilm &LF, adrFilm p);
void deleteFirstAktor(ListAktor &LA, ListRelasi &LR);
void deleteLastFilm(ListFilm &LF, ListRelasi &LR);
void deleteAktorByID(ListAktor &LA, ListRelasi &LR, string idAktor); 
void deleteFilmByID(ListFilm &LF, ListRelasi &LR, string idFilm); 
adrAktor findAktor(ListAktor LA, string idAktor);
adrFilm findFilm(ListFilm LF, string idFilm);
void connectAktorFilm(ListRelasi &LR, adrFilm f, adrAktor a);
void deleteRelasiAktorFilm(ListRelasi &LR, adrFilm f, adrAktor a);
void deleteRelasiByAktor(ListRelasi &LR, adrAktor a);
void deleteRelasiByFilm(ListRelasi &LR, adrFilm f);
void showAllAktor(ListAktor LA);
void showAllFilmOnly(ListFilm LF);
void showAllFilmWithAktor(ListFilm LF, ListRelasi LR);
void showFilmByAktor(ListRelasi LR, adrAktor a);
void showAktorByFilm(ListRelasi LR, adrFilm f);
int countFilmByAktor(ListRelasi LR, adrAktor a);
int countAktorByFilm(ListRelasi LR, adrFilm f);
void showAktorDanAktrisTerTop(ListAktor LA, ListRelasi LR);

#endif
