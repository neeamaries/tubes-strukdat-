#include "tubes-film.h"

/* ================= PRIMITIF ================= */

void createListAktor(ListAktor &LA) {
    // isi sendiri
}

void createListFilm(ListFilm &LF) {
    // isi sendiri
}

void createListRelasi(ListRelasi &LR) {
    // isi sendiri
}

/* ================= ALOKASI ================= */

adrAktor newAktor(Aktor data) {
    // isi sendiri
}

adrFilm newFilm(Film data) {
    // isi sendiri
}

adrRelasi newRelasi(adrAktor a, adrFilm f) {
    // isi sendiri
}

/* ================= INSERT ================= */

void insertFirstAktor(ListAktor &LA, adrAktor p) {
    // isi sendiri
}

void insertLastAktor(ListAktor &LA, adrAktor p) {
    // isi sendiri
}

void insertFirstFilm(ListFilm &LF, adrFilm p) {
    // isi sendiri
}

void insertLastFilm(ListFilm &LF, adrFilm p) {
    // isi sendiri
}

/* ================= DELETE ================= */

void deleteAktor(ListAktor &LA, ListRelasi &LR, string idAktor) {
    // hapus aktor + semua relasinya
}

void deleteFilm(ListFilm &LF, ListRelasi &LR, string idFilm) {
    // hapus film + semua relasinya
}

/* ================= SEARCH ================= */

adrAktor findAktor(ListAktor LA, string idAktor) {
    // isi sendiri
}

adrFilm findFilm(ListFilm LF, string idFilm) {
    // isi sendiri
}

/* ================= RELASI ================= */

void connectAktorFilm(ListRelasi &LR, adrAktor a, adrFilm f) {
    // isi sendiri
}

void deleteRelasiByAktor(ListRelasi &LR, adrAktor a) {
    // isi sendiri
}

void deleteRelasiByFilm(ListRelasi &LR, adrFilm f) {
    // isi sendiri
}

/* ================= SHOW ================= */

void showAllFilm(ListFilm LF, ListRelasi LR) {
    // tampilkan film + aktor/aktris
}

void showFilmByAktor(ListRelasi LR, adrAktor a) {
    // isi sendiri
}

void showAktorByFilm(ListRelasi LR, adrFilm f) {
    // isi sendiri
}

void showAktorDanAktrisTerTop(ListAktor LA, ListRelasi LR) {
    // hitung relasi terbanyak
}
