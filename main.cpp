#include "tubes-film.h"

int main() {
    ListAktor LA;
    ListFilm LF;
    ListRelasi LR;

    createListAktor(LA);
    createListFilm(LF);
    createListRelasi(LR);

    int pilih;
    do {
        cout << "\n===== MENU DATA PERFILMAN =====\n";
        cout << "1. Penambahan aktor/aktris\n";
        cout << "2. Penambahan film\n";
        cout << "3. Relasi aktor/aktris dan film\n";
        cout << "4. Hapus aktor/aktris tertentu\n";
        cout << "5. Hapus film tertentu\n";
        cout << "6. Tampilkan semua film beserta aktor/aktris\n";
        cout << "7. Tampilkan film oleh aktor/aktris tertentu\n";
        cout << "8. Tampilkan aktor/aktris dari film tertentu\n";
        cout << "9. Tampilkan aktor & aktris paling top\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                // input aktor/aktris
                break;
            case 2:
                // input film
                break;
            case 3:
                // relasi aktor - film
                break;
            case 4:
                // hapus aktor
                break;
            case 5:
                // hapus film
                break;
            case 6:
                showAllFilm(LF, LR);
                break;
            case 7:
                // show film by aktor
                break;
            case 8:
                // show aktor by film
                break;
            case 9:
                showAktorDanAktrisTerTop(LA, LR);
                break;
        }
    } while (pilih != 0);

    return 0;
}
