#include "tubes-film.h"

/* ================= PRIMITIF ================= */
void createListAktor(ListAktor &LA) { }
void createListFilm(ListFilm &LF) { }
void createListRelasi(ListRelasi &LR) { }

/* ================= ALOKASI ================= */
adrAktor newAktor(Aktor data) { }
adrFilm newFilm(Film data) { }
adrRelasi newRelasi(adrFilm f, adrAktor a) { }

/* ================= INSERT ================= */
// Aktor
void insertFirstAktor(ListAktor &LA, adrAktor p) { }
void insertLastAktor(ListAktor &LA, adrAktor p) { }

// Film
void insertFirstFilm(ListFilm &LF, adrFilm p) { }
void insertLastFilm(ListFilm &LF, adrFilm p) { }

/* ================= DELETE PARENT ================= */
void deleteFirstAktor(ListAktor &LA, ListRelasi &LR) { }
void deleteLastFilm(ListFilm &LF, ListRelasi &LR) { }

/* ================= SEARCH ================= */
adrAktor findAktor(ListAktor LA, string idAktor) { }
adrFilm findFilm(ListFilm LF, string idFilm) { }

/* ================= RELASI ================= */
void connectAktorFilm(ListRelasi &LR, adrFilm f, adrAktor a) { }
void deleteRelasiAktorFilm(ListRelasi &LR, adrFilm f, adrAktor a) { }
void deleteRelasiByAktor(ListRelasi &LR, adrAktor a) { }
void deleteRelasiByFilm(ListRelasi &LR, adrFilm f) { }

/* ================= SHOW ================= */
void showAllAktor(ListAktor LA) { }
void showAllFilmOnly(ListFilm LF) { }
void showAllFilmWithAktor(ListFilm LF, ListRelasi LR) { }
void showFilmByAktor(ListRelasi LR, adrAktor a) { }
void showAktorByFilm(ListRelasi LR, adrFilm f) { }

/* ================= COUNT ================= */
int countFilmByAktor(ListRelasi LR, adrAktor a) { }
int countAktorByFilm(ListRelasi LR, adrFilm f) { }

/* ================= TOP ================= */
void showAktorDanAktrisTerTop(ListAktor LA, ListRelasi LR) { }
