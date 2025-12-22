#ifndef FILM_H_INCLUDED
#define FILM_H_INCLUDED

#include <iostream>
using namespace std;

/* ================= DATA ================= */
//anjay
struct Aktor {
    string idAktor;
    string nama;
    char gender; // L / P
};

struct Film {
    string idFilm;
    string judul;
    int tahun;
};

/* ================= POINTER ================= */

typedef struct elmAktor *adrAktor;
typedef struct elmFilm *adrFilm;
typedef struct elmRelasi *adrRelasi;

/* ================= NODE ================= */

struct elmAktor {
    Aktor info;
    adrAktor next;
};

struct elmFilm {
    Film info;
    adrFilm next;
};

struct elmRelasi {
    adrAktor aktor;
    adrFilm film;
    adrRelasi next;
};

/* ================= LIST ================= */

struct ListAktor {
    adrAktor first;
};

struct ListFilm {
    adrFilm first;
};

struct ListRelasi {
    adrRelasi first;
};

/* ================= PRIMITIF ================= */

void createListAktor(ListAktor &LA);
void createListFilm(ListFilm &LF);
void createListRelasi(ListRelasi &LR);

/* ================= ALOKASI ================= */

adrAktor newAktor(Aktor data);
adrFilm newFilm(Film data);
adrRelasi newRelasi(adrAktor a, adrFilm f);

/* ================= INSERT ================= */

// Aktor
void insertFirstAktor(ListAktor &LA, adrAktor p);
void insertLastAktor(ListAktor &LA, adrAktor p);

// Film
void insertFirstFilm(ListFilm &LF, adrFilm p);
void insertLastFilm(ListFilm &LF, adrFilm p);

/* ================= DELETE ================= */

void deleteAktor(ListAktor &LA, ListRelasi &LR, string idAktor);
void deleteFilm(ListFilm &LF, ListRelasi &LR, string idFilm);

/* ================= SEARCH ================= */

adrAktor findAktor(ListAktor LA, string idAktor);
adrFilm findFilm(ListFilm LF, string idFilm);

/* ================= RELASI ================= */

void connectAktorFilm(ListRelasi &LR, adrAktor a, adrFilm f);
void deleteRelasiByAktor(ListRelasi &LR, adrAktor a);
void deleteRelasiByFilm(ListRelasi &LR, adrFilm f);

/* ================= SHOW ================= */

void showAllFilm(ListFilm LF, ListRelasi LR);
void showFilmByAktor(ListRelasi LR, adrAktor a);
void showAktorByFilm(ListRelasi LR, adrFilm f);
void showAktorDanAktrisTerTop(ListAktor LA, ListRelasi LR);

#endif
