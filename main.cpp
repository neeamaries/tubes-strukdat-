#include "tubes-film.h"
#include "tubes-film.cpp"

int main() {
    ListAktor LA;
    ListFilm LF;
    ListRelasi LR;

    createListAktor(LA);
    createListFilm(LF);
    createListRelasi(LR);

    Aktor A1  = {"A1", "Pedro Pascal", 'L'};
    Aktor A2  = {"A2", "Ariana Grande", 'P'};
    Aktor A3  = {"A3", "Brad Pitt", 'L'};
    Aktor A4  = {"A4", "John Cena", 'L'};
    Aktor A5  = {"A5", "Barry Keoghan", 'L'};
    Aktor A6  = {"A6", "Alex Lawther", 'L'};
    Aktor A7  = {"A7", "Tom Hanks", 'L'};
    Aktor A8  = {"A8", "Emma Watson", 'P'};
    Aktor A9  = {"A9", "Florence Pugh", 'P'};
    Aktor A10 = {"A10", "Song Kang-ho", 'L'};


    insertFirstAktor(LA, newAktor(A1));
    insertLastAktor(LA, newAktor(A2));
    insertLastAktor(LA, newAktor(A3));
    insertLastAktor(LA, newAktor(A4));
    insertLastAktor(LA, newAktor(A5));
    insertLastAktor(LA, newAktor(A6));
    insertLastAktor(LA, newAktor(A7));
    insertLastAktor(LA, newAktor(A8));
    insertLastAktor(LA, newAktor(A9));
    insertLastAktor(LA, newAktor(A10));

    Film F1  = {"F1", "Wicked", 2024};
    Film F2  = {"F2", "A Man Called Otto", 2022};
    Film F3  = {"F3", "Avatar", 2009};
    Film F4  = {"F4", "Saltburn", 2023};
    Film F5  = {"F5", "The Weapon", 2023};
    Film F6  = {"F6", "Longlegs", 2024};
    Film F7  = {"F7", "500 Days of Summer", 2009};
    Film F8  = {"F8", "The Perks of Being a Wallflower", 2012};
    Film F9  = {"F9", "Man in Love", 2021};
    Film F10 = {"F10", "Parasite", 2019};

    insertLastFilm(LF, newFilm(F1));
    insertLastFilm(LF, newFilm(F2));
    insertLastFilm(LF, newFilm(F3));
    insertLastFilm(LF, newFilm(F4));
    insertLastFilm(LF, newFilm(F5));
    insertLastFilm(LF, newFilm(F6));
    insertLastFilm(LF, newFilm(F7));
    insertLastFilm(LF, newFilm(F8));
    insertLastFilm(LF, newFilm(F9));
    insertLastFilm(LF, newFilm(F10));

    //udah
    connectAktorFilm(LR, findFilm(LF, "F1"), findAktor(LA, "A2"));    
    connectAktorFilm(LR, findFilm(LF, "F2"), findAktor(LA, "A7"));  
    connectAktorFilm(LR, findFilm(LF, "F3"), findAktor(LA, "A1"));   
    connectAktorFilm(LR, findFilm(LF, "F4"), findAktor(LA, "A5"));   
    connectAktorFilm(LR, findFilm(LF, "F5"), findAktor(LA, "A4"));   
    connectAktorFilm(LR, findFilm(LF, "F6"), findAktor(LA, "A6"));   
    connectAktorFilm(LR, findFilm(LF, "F7"), findAktor(LA, "A7"));   
    connectAktorFilm(LR, findFilm(LF, "F7"), findAktor(LA, "A1")); 
    connectAktorFilm(LR, findFilm(LF, "F7"), findAktor(LA, "A11"));  
    connectAktorFilm(LR, findFilm(LF, "F8"), findAktor(LA, "A8"));   
    connectAktorFilm(LR, findFilm(LF, "F8"), findAktor(LA, "A1")); 
    connectAktorFilm(LR, findFilm(LF, "F9"), findAktor(LA, "A9"));   
    connectAktorFilm(LR, findFilm(LF, "F10"), findAktor(LA, "A10")); 
    
    int pilih;
    do {
        cout << "\n===== MENU DATA PERFILMAN =====\n";
        cout << "1. Insert First Aktor / Aktris \n";
        cout << "2. Insert Last Aktor/Aktris \n";
        cout << "3. Insert First Film \n";
        cout << "4. Insert Last Film \n";
        cout << "5. Tampilkan seluruh daftar Aktor/Aktris \n";
        cout << "6. Tampilkan seluruh daftar Film \n";
        cout << "7. Tambahkan relasi Aktor & Film \n";  
        cout << "8. Hapus Aktor / Aktris \n";
        cout << "9. Hapus Film \n";
        cout << "10. Tampilkan semua film yang diperankan Aktor / Aktris \n";
        cout << "11. Tampilkan Film yang diperankan Aktor / Aktris\n";
        cout << "12. Tampilkan Aktor berdasarkan Film yang diperankan\n";
        cout << "13. Hapus Relasi Aktor / Aktris dengan Film\n";
        cout << "14. Hitung Jumlah Film yang diperankan Aktor / Aktris\n";
        cout << "15. Hitung Jumlah Aktor pada Film\n";
        cout << "16. Top Aktor & Aktris\n";
        cout << "17. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        switch (pilih) {
            case 1: {
                Aktor a;
                cout << "\n===== INSERT FIRST AKTOR / AKTRIS =====\n";
                cout << "ID Aktor: "; cin >> a.idAktor; 
                cout << "Nama :"; cin.ignore(); getline(cin, a.nama); 
                cout << "Gender (L/P): "; cin >> a.gender; 

                if (findAktor(LA, a.idAktor) == NULL){
                    insertFirstAktor(LA, newAktor(a)); 
                    cout << "Berhasil menambahkan data aktor menggunakan insert first! \n"; 
                } else {
                    cout << "Gagal menambahkann data aktor. ID aktor sudah ada. \n"; 
                } break; 
            }

             case 2: {
                Aktor a; 
                cout << "\n===== INSERT LAST AKTOR / AKTRIS =====\n";
                cout << "ID Aktor: "; cin >> a.idAktor; 
                cout << "Nama :"; cin.ignore(); getline(cin, a.nama); 
                cout << "Gender (L/P): "; cin >> a.gender; 

                if (findAktor(LA, a.idAktor) == NULL){
                    insertLastAktor(LA, newAktor(a)); 
                    cout << "Berhasil menambahkan data aktor menggunakan insert last! \n"; 
                } else {
                    cout << "Gagal menambahkann data aktor. ID aktor sudah ada. \n"; 
                } break; 
            }

            case 3: {
                Film f; 
                cout << "\n===== INSERT FIRST FILM =====\n";
                cout << "ID Film: "; cin >> f.idFilm; 
                cout << "Judul: "; cin.ignore(); getline(cin, f.judul); 
                cout << "Tahun: "; cin >> f.tahun; 

                if (findFilm(LF, f.idFilm) == NULL){
                    insertFirstFilm(LF, newFilm(f)); 
                    cout << "Berhasil menambahkan data film menggunakan insert first! \n"; 
                } else {
                    cout << "Gagal menambahkan data film. ID film sudah ada \n"; 
                } break; 
            }

            case 4: {
                Film f; 
                cout << "\n===== INSERT LAST FILM =====\n";
                cout << "ID Film: "; cin >> f.idFilm; 
                cout << "Judul: "; cin.ignore(); getline(cin, f.judul); 
                cout << "Tahun: "; cin >> f.tahun; 

                if (findFilm(LF, f.idFilm) == NULL){
                    insertLastFilm(LF, newFilm(f)); 
                    cout << "Berhasil menambahkan data film menggunakan insert first! \n"; 
                } else {
                    cout << "Gagal menambahkan data film. ID film sudah ada \n"; 
                } break; 
            }

            case 5: {
                cout << "\n===== MENAMPILKAN SELURUH LIST AKTOR / AKTRIS =====\n";
                if (LA.first == NULL) {
                    cout << "Belum ada data aktor/aktris.\n";
                } else {
                    showAllAktor(LA);
                }
                break;
            }

             case 6: {
                cout << "\n===== MENAMPILKAN SELURUH LIST FILM =====\n";
                if (LF.first == NULL) {
                    cout << "Belum ada data film.\n";
                } else {
                    showAllFilmOnly(LF);
                }
                break;
            }

            case 7: {
                cout << "\n===== MENAMBAHKAN RELASI AKTOR / AKTRIS DENGAN FILM =====\n";
                string idA, idF; 
                cout << "ID Aktor: "; cin >> idA; 
                cout << "ID Film: "; cin >> idF; 

                adrAktor a = findAktor(LA, idA); 
                adrFilm f = findFilm(LF, idF); 

                if (a != NULL && f != NULL){
                    connectAktorFilm(LR, f, a); 
                    cout << "Relasi aktor dan film berhasil dibuat! \n"; 
                } else {
                    cout << "Gagal membuat relasi aktor dan film. \n"; 
                } break; 
            }

            case 8: {
                cout << "\n===== MENGHAPUS AKTOR / AKTRIS BERDASARKAN ID =====\n";
                string id; 
                cout << "ID Aktor: "; cin >> id; 
                deleteAktorByID(LA, LR, id); 
                cout << "Data aktor berserta relasinya berhasil dihapus!. \n"; 
                break; 
            }

            case 9: {
                cout << "\n===== MENGHAPUS FILM BERDASARKAN ID =====\n";
                string id; 
                cout << "ID Film: "; cin >> id; 
                deleteFilmByID(LF, LR, id); 
                cout << "Data film beserta relasinya berhasil dihapus! \n"; 
                break; 
            }

            case 10: {
                cout << "\n===== MENAMPILKAN SELURUH RELASI AKTOR / AKTRIS DENGAN FILM =====\n";
                showAllFilmWithAktor(LF, LR); 
                break; 
            }

            case 11: {
                cout << "\n===== MENAMPILKAN LIST FILM BERDASARKAN AKTOR / AKTRIS =====\n";
                string id; 
                cout << "ID Aktor: "; cin >> id; 
                adrAktor a = findAktor (LA, id); 
                if (a != NULL){
                    showFilmByAktor(LR, a); 
                } else {
                    cout << "Aktor tidak ditemukan. \n"; 
                } break; 
            }

            case 12: {
                cout << "\n===== MENAMPILKAN LIST AKTOR / AKTRIS BERDASARKAN FILM =====\n";
                string id; 
                cout << "ID Film: "; cin >> id; 
                adrFilm f = findFilm(LF, id); 
                if (f != NULL){
                    showAktorByFilm(LR, f); 
                } else {
                    cout << "Film tidak ditemukan. \n"; 
                } break;
            }

            case 13: {
                cout << "\n===== HAPUS RELASI AKTOR - FILM =====\n";
                string idA, idF;
                cout << "ID Aktor: "; cin >> idA;
                cout << "ID Film: "; cin >> idF;

                adrAktor a = findAktor(LA, idA);
                adrFilm f = findFilm(LF, idF);

                if (a != NULL && f != NULL) {
                    deleteRelasiAktorFilm(LR, f, a);
                    cout << "Relasi berhasil dihapus.\n";
                } else {
                    cout << "Aktor atau Film tidak ditemukan.\n";
                }break;
            }

            case 14: {
                cout << "\n===== HITUNG JUMLAH FILM DARI AKTOR =====\n";
                string id;
                cout << "ID Aktor: "; cin >> id;

                adrAktor a = findAktor(LA, id);
                if (a != NULL) {
                    cout << "Jumlah film: " << countFilmByAktor(LR, a) << endl;
                } else {
                    cout << "Aktor tidak ditemukan.\n";
                } break;
            }

            case 15: {
                cout << "\n===== HITUNG JUMLAH AKTOR DALAM FILM =====\n";
                string id;
                cout << "ID Film: "; cin >> id;

                adrFilm f = findFilm(LF, id);
                if (f != NULL) {
                    cout << "Jumlah aktor: " << countAktorByFilm(LR, f) << endl;
                } else {
                    cout << "Film tidak ditemukan.\n";
                } break;
            }

            case 16:
                cout << "\n===== MENAMPILKAN LIST TOP AKTOR & AKTRIS  =====\n";
                showAktorDanAktrisTerTop(LA, LR); 
                break; 
        } 
        
    } while (pilih != 17); 
        
    return 0; 
}
    