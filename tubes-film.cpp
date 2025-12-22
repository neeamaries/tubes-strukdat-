#include "tubes-film.h"

/* ================= PRIMITIF ================= */
void createListAktor(ListAktor &LA) { } // nevy 
void createListFilm(ListFilm &LF) { } // nevy 
void createListRelasi(ListRelasi &LR) { } // nevy 

/* ================= ALOKASI ================= */
adrAktor newAktor(ListAktor data) { } // aila 
adrFilm newFilm(Film data) { } // aila 
adrRelasi newRelasi(adrFilm f, adrAktor a) { } // aila 

/* ================= INSERT ================= */
// Aktor
void insertFirstAktor(ListAktor &LA, adrAktor p) { } // nevy
void insertLastAktor(ListAktor &LA, adrAktor p) { } // nevy

// Film
void insertFirstFilm(ListFilm &LF, adrFilm p) { } // aila
void insertLastFilm(ListFilm &LF, adrFilm p) { } // aila

/* ================= DELETE PARENT ================= */
void deleteFirstAktor(ListAktor &LA, ListRelasi &LR) { } // nevy 
void deleteLastFilm(ListFilm &LF, ListRelasi &LR) { } // nevy 

/* ================= SEARCH ================= */ 
adrAktor findAktor(ListAktor LA, string idAktor) { } // aila 
adrFilm findFilm(ListFilm LF, string idFilm) { } // aila 

/* ================= RELASI ================= */
void connectAktorFilm(ListRelasi &LR, adrFilm f, adrAktor a) { } // aila 
void deleteRelasiAktorFilm(ListRelasi &LR, adrFilm f, adrAktor a) { } // aila 
void deleteRelasiByAktor(ListRelasi &LR, adrAktor a) { } // aila 
void deleteRelasiByFilm(ListRelasi &LR, adrFilm f) { } // aila 

/* ================= SHOW ================= */
void showAllAktor(ListAktor LA) { } // nevy 
void showAllFilmOnly(ListFilm LF) { } // nevy 
void showAllFilmWithAktor(ListFilm LF, ListRelasi LR) { } // nevy 
void showFilmByAktor(ListRelasi LR, adrAktor a) { } // nevy 
void showAktorByFilm(ListRelasi LR, adrFilm f) { } // nevy 

/* ================= COUNT ================= */
int countFilmByAktor(ListRelasi LR, adrAktor a) { } // nevy 
int countAktorByFilm(ListRelasi LR, adrFilm f) { } // nevy 

/* ================= TOP ================= */
void showAktorDanAktrisTerTop(ListAktor LA, ListRelasi LR) { }
