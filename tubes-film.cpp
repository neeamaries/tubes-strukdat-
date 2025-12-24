#include "tubes-film.h"

// nevy
void createListAktor(ListAktor &LA) {
    LA.first = NULL; 
}

void createListFilm(ListFilm &LF) {
    LF.first = NULL; 
}

void createListRelasi(ListRelasi &LR) {
    LR.first = NULL; 
}

adrAktor newAktor(Aktor data) {
    adrAktor P = new elmAktor;
    P -> info = data;
    P -> next = NULL;
    return P;

} 

adrFilm newFilm(Film data) {
    adrFilm P = new elmFilm;
    P -> info = data;
    P -> next = NULL;
    return P;

}

adrRelasi newRelasi(adrFilm f, adrAktor a) { 
    adrRelasi P = new elmRelasi;
    P -> film = f;
    P -> aktor = a;
    P -> next = NULL;
    return P;
} 

void insertFirstAktor(ListAktor &LA, adrAktor p) { 
    p -> next = LA.first; 
    LA.first = p; 
}

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

void insertFirstFilm(ListFilm &LF, adrFilm p) {
    if (LF.first == NULL) {
        LF.first = p;
    } else {
        p->next = LF.first;
        LF.first = p;
    }
}

void insertLastFilm(ListFilm &LF, adrFilm p) {
    if (LF.first == NULL) {
        LF.first = p;
    } else {
        adrFilm q = LF.first;
        while (q->next != NULL) {
            q = q->next;
        }
        q->next = p;
    }
}

void deleteFirstAktor(ListAktor &LA, ListRelasi &LR) {
    if (LA.first != NULL){
        adrAktor p = LA.first; 
        LA.first = p -> next; 

        deleteRelasiByAktor(LR, p); 

        p -> next = NULL; 
        delete p; 
    }
} 

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

void deleteAktorByID(ListAktor &LA, ListRelasi &LR, string idAktor){
    adrAktor p = LA.first; 
    adrAktor prev = NULL; 

    while (p != NULL && p -> info.idAktor != idAktor){
        prev = p; 
        p = p -> next;
    }

    if (p != NULL) {
        deleteRelasiByAktor(LR, p); 
        if (prev == NULL){
            LA.first = p -> next; 
        } else {
            prev -> next = p -> next; 
        } delete p; 
    }
}

void deleteFilmByID(ListFilm &LF, ListRelasi &LR, string idFilm){
    adrFilm p = LF.first; 
    adrFilm prev = NULL; 

    while (p != NULL && p -> info.idFilm != idFilm){
        prev = p; 
        p = p -> next; 
    }

    if (p != NULL) {
        deleteRelasiByFilm (LR, p); 

        if (prev == NULL) {
            LF.first = p -> next; 
        } else {
            prev -> next = p -> next; 
        } delete p; 
    }
}

adrAktor findAktor(ListAktor LA, string idAktor) {
    adrAktor p = LA.first;
    while (p != NULL) {
        if (p->info.idAktor == idAktor) {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

adrFilm findFilm(ListFilm LF, string idFilm) {
    adrFilm p = LF.first;
    while (p != NULL) {
        if (p->info.idFilm == idFilm) {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

// aila
void connectAktorFilm(ListRelasi &LR, adrFilm f, adrAktor a) {
    if (f != NULL && a != NULL) {
        adrRelasi p = newRelasi(f, a);
        if (LR.first == NULL) {
            LR.first = p;
        } else {
            p->next = LR.first;
            LR.first = p;
        }
    }
}

void deleteRelasiAktorFilm(ListRelasi &LR, adrFilm f, adrAktor a) {
    adrRelasi p = LR.first;
    adrRelasi prec = NULL;
    
    while (p != NULL) {
        if (p->film == f && p->aktor == a) {
            if (prec == NULL) {
                LR.first = p->next;
            } else {
                prec->next = p->next;
            }
            delete p;
            return;
        }
        prec = p;
        p = p->next;
    }
}

void deleteRelasiByAktor(ListRelasi &LR, adrAktor a) {
    adrRelasi p = LR.first;
    adrRelasi prec = NULL;
    
    while (p != NULL) {
        if (p->aktor == a) {
            if (prec == NULL) {
                LR.first = p->next;
                delete p;
                p = LR.first;
            } else {
                prec->next = p->next;
                delete p;
                p = prec->next;
            }
        } else {
            prec = p;
            p = p->next;
        }
    }
}

void deleteRelasiByFilm(ListRelasi &LR, adrFilm f) {
    adrRelasi p = LR.first;
    adrRelasi prec = NULL;
    
    while (p != NULL) {
        if (p->film == f) {
            if (prec == NULL) {
                LR.first = p->next;
                delete p;
                p = LR.first;
            } else {
                prec->next = p->next;
                delete p;
                p = prec->next;
            }
        } else {
            prec = p;
            p = p->next;
        }
    }
}

void showAllAktor(ListAktor LA) {
    adrAktor p = LA.first; 
    while (p != NULL){
        cout << "\nID : " << p -> info.idAktor << endl; 
        cout << "Nama : "<< p -> info.nama << endl; 
        cout << "Gender : " << p -> info.gender << endl; 
        p = p -> next; 
    }
}

void showAllFilmOnly(ListFilm LF) {
    adrFilm f = LF.first; 
    while (f != NULL){
        cout << "\nID Film : " << f -> info.idFilm << endl; 
        cout << "Judul : " << f -> info.judul << endl; 
        cout << "Tahun : " << f -> info.tahun << endl; 
        f = f -> next;
    }
}

void showAllFilmWithAktor(ListFilm LF, ListRelasi LR) {
    adrFilm f = LF.first; 
    while (f != NULL){
        cout << "\n Film : " << f -> info.judul << " (" << f -> info.tahun << ")" << endl; 

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

void showFilmByAktor(ListRelasi LR, adrAktor a) {
    adrRelasi r = LR.first; 
    cout << "Film oleh aktor / aktris : " << a -> info.nama << endl; 

    while (r != NULL){
        if (r -> aktor == a){
            cout << "- " << r -> film -> info.judul << endl; 
        }
        r = r -> next; 
    }
}

void showAktorByFilm(ListRelasi LR, adrFilm f) {
    adrRelasi r = LR.first; 
    cout << "Aktor / Aktris pada film : " << f -> info.judul << endl; 

    while (r != NULL){
        if (r -> film == f){
            cout << "- " << r -> aktor -> info.nama << endl; 
        }
        r = r -> next; 
    }
}

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

void showAktorDanAktrisTerTop(ListAktor LA, ListRelasi LR) { 
     adrAktor topAktor = NULL;
    adrAktor topAktris = NULL;
    int maxFilmAktor = 0;
    int maxFilmAktris = 0;
    
    adrAktor p = LA.first;
    while (p != NULL) {
        int jumlahFilm = countFilmByAktor(LR, p);
        
        if (p->info.gender == 'L') {
            if (jumlahFilm > maxFilmAktor) {
                maxFilmAktor = jumlahFilm;
                topAktor = p;
            }
        } else if (p->info.gender == 'P') {
            if (jumlahFilm > maxFilmAktris) {
                maxFilmAktris = jumlahFilm;
                topAktris = p;
            }
        }
        
        p = p->next;
    }

    if (topAktor != NULL) {
        cout << "Aktor Ter-Top:\n";
        cout << "  ID : " << topAktor->info.idAktor << endl;
        cout << "  Nama : " << topAktor->info.nama << endl;
        cout << "  Gender : " << topAktor->info.gender << endl;
        cout << "  Jumlah Film : " << maxFilmAktor << endl;
    } else {
        cout << "Aktor Ter-Top: Tidak ada data\n";
    }
    
    cout << endl;
    
    if (topAktris != NULL) {
        cout << "Aktris Ter-Top:\n";
        cout << "  ID : " << topAktris->info.idAktor << endl;
        cout << "  Nama : " << topAktris->info.nama << endl;
        cout << "  Gender : " << topAktris->info.gender << endl;
        cout << "  Jumlah Film : " << maxFilmAktris << endl;
    } else {
        cout << "Aktris Ter-Top: Tidak ada data\n";
    }
}
