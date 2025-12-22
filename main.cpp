#include "tubes-film.h"

int main() {

    /* ================== DEKLARASI LIST ================== */
    ListAktor LA;
    ListFilm LF;
    ListRelasi LR;

    /* ================== INISIALISASI ================== */
    createListAktor(LA);
    createListFilm(LF);
    createListRelasi(LR);

    /* ====================================================
       DATA DUMMY AKTOR / AKTRIS (LUAR NEGERI)
       ==================================================== */
    Aktor a1  = {"A01", "Pedro Pascal", 'L'};
    Aktor a2  = {"A02", "Ariana Grande", 'P'};
    Aktor a3  = {"A03", "Brad Pitt", 'L'};
    Aktor a4  = {"A04", "John Cena", 'L'};
    Aktor a5  = {"A05", "Barry Keoghan", 'L'};
    Aktor a6  = {"A06", "Alex Lawther", 'L'};
    Aktor a7  = {"A07", "Joseph Gordon-Levitt", 'L'};
    Aktor a8  = {"A08", "Emma Watson", 'P'};
    Aktor a9  = {"A09", "Florence Pugh", 'P'};
    Aktor a10 = {"A10", "Song Kang-ho", 'L'};
    Aktor a11 = {"A11", "Ryan Gosling", 'L'};
    Aktor a12 = {"A12", "Keanu Reeves", 'L'};

    insertFirstAktor(LA, newAktor(a1));
    insertLastAktor(LA, newAktor(a2));
    insertFirstAktor(LA, newAktor(a3));
    insertLastAktor(LA, newAktor(a4));
    insertFirstAktor(LA, newAktor(a5));
    insertLastAktor(LA, newAktor(a6));
    insertFirstAktor(LA, newAktor(a7));
    insertLastAktor(LA, newAktor(a8));
    insertFirstAktor(LA, newAktor(a9));
    insertLastAktor(LA, newAktor(a10));
    insertFirstAktor(LA, newAktor(a11));
    insertLastAktor(LA, newAktor(a12));

    /* ====================================================
       DATA DUMMY FILM
       ==================================================== */
    Film f1  = {"F01", "Wicked", 2024};
    Film f2  = {"F02", "A Man Called Otto", 2022};
    Film f3  = {"F03", "Avatar", 2009};
    Film f4  = {"F04", "Saltburn", 2023};
    Film f5  = {"F05", "The Weapon", 2023};
    Film f6  = {"F06", "Longlegs", 2024};
    Film f7  = {"F07", "500 Days of Summer", 2009};
    Film f8  = {"F08", "The Perks of Being a Wallflower", 2012};
    Film f9  = {"F09", "Man in Love", 2021};
    Film f10 = {"F10", "Parasite", 2019};

    insertFirstFilm(LF, newFilm(f1));
    insertLastFilm(LF, newFilm(f2));
    insertFirstFilm(LF, newFilm(f3));
    insertLastFilm(LF, newFilm(f4));
    insertLastFilm(LF, newFilm(f5));
    insertLastFilm(LF, newFilm(f6));
    insertFirstFilm(LF, newFilm(f7));
    insertLastFilm(LF, newFilm(f8));
    insertLastFilm(LF, newFilm(f9));
    insertLastFilm(LF, newFilm(f10));

    /* ====================================================
       DATA DUMMY RELASI (M ↔ N)
       ==================================================== */
    connectAktorFilm(LR, findFilm(LF, "F01"), findAktor(LA, "A02")); // Wicked - Ariana
    connectAktorFilm(LR, findFilm(LF, "F02"), findAktor(LA, "A11")); // Otto - Gosling
    connectAktorFilm(LR, findFilm(LF, "F03"), findAktor(LA, "A01")); // Avatar - Pedro
    connectAktorFilm(LR, findFilm(LF, "F04"), findAktor(LA, "A05")); // Saltburn - Barry
    connectAktorFilm(LR, findFilm(LF, "F05"), findAktor(LA, "A04")); // Weapon - Cena
    connectAktorFilm(LR, findFilm(LF, "F06"), findAktor(LA, "A09")); // Longlegs - Florence
    connectAktorFilm(LR, findFilm(LF, "F07"), findAktor(LA, "A07")); // 500 Days - JGL
    connectAktorFilm(LR, findFilm(LF, "F08"), findAktor(LA, "A08")); // Perks - Emma
    connectAktorFilm(LR, findFilm(LF, "F09"), findAktor(LA, "A03")); // Man in Love - Brad
    connectAktorFilm(LR, findFilm(LF, "F10"), findAktor(LA, "A10")); // Parasite - Song

    /* ====================================================
       MENU PROGRAM
       ==================================================== */
    int pilih;
    do {
        cout << "\n===== MENU DATA PERFILMAN =====\n";
        cout << "1. Insert FIRST Aktor / Aktris\n";
        cout << "2. Insert LAST  Aktor / Aktris\n";
        cout << "3. Insert FIRST Film\n";
        cout << "4. Insert LAST  Film\n";
        cout << "5. Hubungkan Aktor/Aktris dengan Film\n";
        cout << "6. Hapus Aktor/Aktris tertentu\n";
        cout << "7. Hapus Film tertentu\n";
        cout << "8. Tampilkan seluruh film beserta aktor/aktris\n";
        cout << "9. Tampilkan film oleh aktor/aktris tertentu\n";
        cout << "10. Tampilkan aktor/aktris pada film tertentu\n";
        cout << "11. Tampilkan aktor & aktris paling top\n";
        cout << "12. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                // insertFirstAktor
                break;
            case 2:
                // insertLastAktor
                break;
            case 3:
                // insertFirstFilm
                break;
            case 4:
                // insertLastFilm
                break;
            case 5:
                // connectAktorFilm
                break;
            case 6:
                // delete aktor + relasi
                break;
            case 7:
                // delete film + relasi
                break;
            case 8:
                showAllFilmWithAktor(LF, LR);
                break;
            case 9:
                // showFilmByAktor
                break;
            case 10:
                // showAktorByFilm
                break;
            case 11:
                showAktorDanAktrisTerTop(LA, LR);
                break;
        }

    } while (pilih != 0);

    return 0;
}
