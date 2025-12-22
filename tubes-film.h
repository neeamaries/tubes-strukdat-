#ifndef FILM_H_INCLUDED
#define FILM_H_INCLUDED

#include <iostream>
using namespace std;

/* ===================== DATA ===================== */
// Parent TANPA relasi
struct Aktor {
    string idAktor;
    string nama;
    char gender; // L / P
};

// Parent DENGAN relasi
struct Film {
    string idFilm;
    string judul;
    int tahun;   // wajib integer
};

/* ===================== POINTER ===================== */
typedef struct elmAktor *adrAktor;
typedef struct elmFilm *adrFilm;
typedef struct elmRelasi *adrRelasi;

/* ===================== NODE ===================== */
struct elmAktor {
    Aktor info;
    adrAktor next;
};

struct elmFilm {
    Film info;
    adrFilm next;
};

// CHILD (relasi) → minimal pointer
struct elmRelasi {
    adrFilm film;
    adrAktor aktor;
    adrRelasi next;
};

/* ===================== LIST ===================== */
struct ListAktor {
    adrAktor first;   // TANPA relasi
};

struct ListFilm {
    adrFilm first;    // DENGAN relasi
};

struct ListRelasi {
    adrRelasi first;
};

/* ===================== PRIMITIF ===================== */
void createListAktor(ListAktor &LA);
void createListFilm(ListFilm &LF);
void createListRelasi(ListRelasi &LR);

/* ===================== ALOKASI ===================== */
adrAktor newAktor(Aktor data);
adrFilm newFilm(Film data);
adrRelasi newRelasi(adrFilm f, adrAktor a);

/* ===================== INSERT ===================== */
// Aktor
void insertFirstAktor(ListAktor &LA, adrAktor p);
void insertLastAktor(ListAktor &LA, adrAktor p);

// Film
void insertFirstFilm(ListFilm &LF, adrFilm p);
void insertLastFilm(ListFilm &LF, adrFilm p);

/* ===================== DELETE PARENT ===================== */
void deleteFirstAktor(ListAktor &LA, ListRelasi &LR);
void deleteLastFilm(ListFilm &LF, ListRelasi &LR);

/* ===================== SEARCH PARENT ===================== */
adrAktor findAktor(ListAktor LA, string idAktor);
adrFilm findFilm(ListFilm LF, string idFilm);

/* ===================== RELASI ===================== */
void connectAktorFilm(ListRelasi &LR, adrFilm f, adrAktor a);

// hapus 1 child tertentu dari 1 parent tertentu
void deleteRelasiAktorFilm(ListRelasi &LR, adrFilm f, adrAktor a);

// hapus semua relasi milik parent
void deleteRelasiByAktor(ListRelasi &LR, adrAktor a);
void deleteRelasiByFilm(ListRelasi &LR, adrFilm f);

/* ===================== SHOW ===================== */
void showAllAktor(ListAktor LA);
void showAllFilmOnly(ListFilm LF);
void showAllFilmWithAktor(ListFilm LF, ListRelasi LR);
void showFilmByAktor(ListRelasi LR, adrAktor a);
void showAktorByFilm(ListRelasi LR, adrFilm f);

/* ===================== COUNT ===================== */
int countFilmByAktor(ListRelasi LR, adrAktor a);
int countAktorByFilm(ListRelasi LR, adrFilm f);

/* ===================== TOP ===================== */
void showAktorDanAktrisTerTop(ListAktor LA, ListRelasi LR);

#endif
