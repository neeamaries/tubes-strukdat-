#include "tubes-film.h"

int main() {
    ListAktor LA;
    ListFilm LF;
    ListRelasi LR;

    createListAktor(LA);
    createListFilm(LF);
    createListRelasi(LR);

    int pilih;
    int pilih;
    do {
    cout << "\n===== MENU DATA PERFILMAN =====\n";
    cout << "1. Insert FIRST Aktor / Aktris\n";
    cout << "2. Insert LAST  Aktor / Aktris\n";
    cout << "3. Insert FIRST Film\n";
    cout << "4. Insert LAST  Film\n";
    cout << "5. Penentuan relasi aktor/aktris dan film\n";
    cout << "6. Menghapus data aktor/aktris tertentu\n";
    cout << "7. Menghapus data film tertentu\n";
    cout << "8. Menampilkan seluruh film beserta aktor/aktris\n";
    cout << "9. Menampilkan film yang dibintangi aktor/aktris tertentu\n";
    cout << "10. Menampilkan aktor/aktris yang membintangi film tertentu\n";
    cout << "11. Menampilkan aktor & aktris paling top\n";
    cout << "12. Keluar\n";
    cout << "Pilih: ";
    cin >> pilih;

    //test

    switch (pilih) {
        case 1:
            // insertFirstAktor(LA, ...)
            break;

        case 2:
            // insertLastAktor(LA, ...)
            break;

        case 3:
            // insertFirstFilm(LF, ...)
            break;

        case 4:
            // insertLastFilm(LF, ...)
            break;

        case 5:
            // connectAktorFilm(LR, adrFilm, adrAktor)
            break;

        case 6:
            // delete aktor + seluruh relasinya
            // deleteFirstAktor(LA, LR) atau berdasarkan id
            break;

        case 7:
            // delete film + seluruh relasinya
            // deleteLastFilm(LF, LR) atau berdasarkan id
            break;

        case 8:
            showAllFilmWithAktor(LF, LR);
            break;

        case 9:
            // showFilmByAktor(LR, adrAktor)
            break;

        case 10:
            // showAktorByFilm(LR, adrFilm)
            break;

        case 11:
            showAktorDanAktrisTerTop(LA, LR);
            break;
    }

    } while (pilih != 0);
}
