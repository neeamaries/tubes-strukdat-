#include "tubes-film.h"

// nevy
void createListAktor(ListAktor &LA) {
    LA.first = NULL; 
}

 //nevy
void createListFilm(ListFilm &LF) {
    LF.first = NULL; 
}

//nevy
void createListRelasi(ListRelasi &LR) {
    LR.first = NULL; 
}

/* ================= ALOKASI ================= */
adrAktor newAktor(ListAktor data) { } // aila 
adrFilm newFilm(Film data) { } // aila 
adrRelasi newRelasi(adrFilm f, adrAktor a) { } // aila 

// nevy 
void insertFirstAktor(ListAktor &LA, adrAktor p) { 
    p -> next = LA.first; 
    LA.first = p; 
}

// nevy 
void insertLastAktor(ListAktor &LA, adrAktor p) { 
    if (LA.first == NULL){
        LA.first = p; 
    } else {
        adrAktor q = LA.first; 
        while (q -> next != NULL){
            q = q -> next; 
        }
        q -> next = p; 
    }
    p -> next = NULL; 
}

// Film
void insertFirstFilm(ListFilm &LF, adrFilm p) { } // aila
void insertLastFilm(ListFilm &LF, adrFilm p) { } // aila

// nevy 
void deleteFirstAktor(ListAktor &LA, ListRelasi &LR) {
    if (LA.first != NULL){
        adrAktor p = LA.first; 
        LA.first = p -> next; 

        deleteRelasiByAktor(LR, p); 

        p -> next = NULL; 
        delete p; 
    }
} 

 // nevy 
void deleteLastFilm(ListFilm &LF, ListRelasi &LR) {
    if (LF.first != NULL){
        adrFilm p; 

        if (LF.first -> next == NULL){
            p = LF.first; 
            LF.first = NULL; 
        } else {
            adrFilm q = LF.first; 
            while (q -> next -> next != NULL){
                q = q -> next; 
            }
            p = q -> next; 
            q -> next = NULL; 
        }
        deleteRelasiByFilm(LR, p); 

        delete p; 
    }
}

/* ================= SEARCH ================= */ 
adrAktor findAktor(ListAktor LA, string idAktor) { } // aila 
adrFilm findFilm(ListFilm LF, string idFilm) { } // aila 

/* ================= RELASI ================= */
void connectAktorFilm(ListRelasi &LR, adrFilm f, adrAktor a) { } // aila 
void deleteRelasiAktorFilm(ListRelasi &LR, adrFilm f, adrAktor a) { } // aila 
void deleteRelasiByAktor(ListRelasi &LR, adrAktor a) { } // aila 
void deleteRelasiByFilm(ListRelasi &LR, adrFilm f) { } // aila 

// nevy 
void showAllAktor(ListAktor LA) {
    adrAktor p = LA.first; 
    while (p != NULL){
        cout << "ID : " << p -> info.idAktor << endl; 
        cout << "Nama : "<< p -> info.nama << endl; 
        cout << "Gender : " << p -> info.gender << endl; 
        p = p -> next; 
    }
}

// nevy 
void showAllFilmOnly(ListFilm LF) {
    adrFilm f = LF.first; 
    while (f != NULL){
        cout << "ID Film : " << f -> info.idFilm << endl; 
        cout << "Judul : " << f -> info.judul << endl; 
        cout << "Tahun : " << f -> info.tahun << endl; 
        f = f -> next;
    }
}

// nevy 
void showAllFilmWithAktor(ListFilm LF, ListRelasi LR) {
    adrFilm f = LF.first; 
    while (f != NULL){
        cout << "Film : " << f -> info.judul << " (" << f -> info.tahun << ")" << endl; 

        adrRelasi r = LR.first; 
        while (r != NULL) {
            if (r -> film == f){
                cout << "- " << r -> aktor -> info.nama << endl; 
            }
            r = r -> next; 
        }
        f = f -> next; 
    }
}

// nevy 
void showFilmByAktor(ListRelasi LR, adrAktor a) {
    adrRelasi r = LR.first; 
    cout << "Film oleh aktor / aktris: " << a -> info.nama << endl; 

    while (r != NULL){
        if (r -> aktor == a){
            cout << "- " << r -> film -> info.judul << endl; 
        }
        r = r -> next; 
    }
}

// nevy 
void showAktorByFilm(ListRelasi LR, adrFilm f) {
    adrRelasi r = LR.first; 
    cout << "Aktor / Aktris pada film: " << f -> info.judul << endl; 

    while (r != NULL){
        if (r -> film == f){
            cout << "- " << r -> aktor -> info.nama << endl; 
        }
        r = r -> next; 
    }
}

// nevy 
int countFilmByAktor(ListRelasi LR, adrAktor a) {
    int count = 0; 
    adrRelasi r = LR.first; 

    while (r != NULL){
        if (r -> aktor == a){
            count++;
        }
        r = r -> next; 
    }

    return count; 
}

// nevy 
int countAktorByFilm(ListRelasi LR, adrFilm f) {
    int count = 0; 
    adrRelasi r = LR.first; 

    while (r != NULL){
        if (r -> film == f){
            count++; 
        }
        r = r -> next; 
    }
    return count; 
}

/* ================= TOP ================= */
void showAktorDanAktrisTerTop(ListAktor LA, ListRelasi LR) { } // aila 
