#include "tubes-film.h"
#include "tubes-film.cpp"

int main() {
    ListAktor LA;
    ListFilm LF;
    ListRelasi LR;

    createListAktor(LA);
    createListFilm(LF);
    createListRelasi(LR);

    Aktor a1  = {"a1", "Pedro Pascal", 'L'};
    Aktor a2  = {"a2", "Ariana Grande", 'P'};
    Aktor a3  = {"a3", "Brad Pitt", 'L'};
    Aktor a4  = {"a4", "John Cena", 'L'};
    Aktor a5  = {"a5", "Barry Keoghan", 'L'};
    Aktor a6  = {"a6", "Alex Lawther", 'L'};
    Aktor a7  = {"a7", "Tom Hanks", 'L'};
    Aktor a8  = {"a8", "Emma Watson", 'P'};
    Aktor a9  = {"a9", "Florence Pugh", 'P'};
    Aktor a10 = {"a10", "Song Kang-ho", 'L'};


    insertFirstAktor(LA, newAktor(a1));
    insertLastAktor(LA, newAktor(a2));
    insertLastAktor(LA, newAktor(a3));
    insertLastAktor(LA, newAktor(a4));
    insertLastAktor(LA, newAktor(a5));
    insertLastAktor(LA, newAktor(a6));
    insertLastAktor(LA, newAktor(a7));
    insertLastAktor(LA, newAktor(a8));
    insertLastAktor(LA, newAktor(a9));
    insertLastAktor(LA, newAktor(a10));

    Film f1  = {"f1", "Wicked", 2024};
    Film f2  = {"f2", "A Man Called Otto", 2022};
    Film f3  = {"f3", "Avatar", 2009};
    Film f4  = {"f4", "Saltburn", 2023};
    Film f5  = {"f5", "The Weapon", 2023};
    Film f6  = {"f6", "Longlegs", 2024};
    Film f7  = {"f7", "500 Days of Summer", 2009};
    Film f8  = {"f8", "The Perks of Being a Wallflower", 2012};
    Film f9  = {"f9", "Man in Love", 2021};
    Film f10 = {"f10", "Parasite", 2019};

    insertLastFilm(LF, newFilm(f1));
    insertLastFilm(LF, newFilm(f2));
    insertLastFilm(LF, newFilm(f3));
    insertLastFilm(LF, newFilm(f4));
    insertLastFilm(LF, newFilm(f5));
    insertLastFilm(LF, newFilm(f6));
    insertLastFilm(LF, newFilm(f7));
    insertLastFilm(LF, newFilm(f8));
    insertLastFilm(LF, newFilm(f9));
    insertLastFilm(LF, newFilm(f10));

    connectAktorFilm(LR, findFilm(LF, "f1"), findAktor(LA, "a2"));    
    connectAktorFilm(LR, findFilm(LF, "f2"), findAktor(LA, "a7"));  
    connectAktorFilm(LR, findFilm(LF, "f3"), findAktor(LA, "a1"));   
    connectAktorFilm(LR, findFilm(LF, "f4"), findAktor(LA, "a5"));   
    connectAktorFilm(LR, findFilm(LF, "f5"), findAktor(LA, "a4"));   
    connectAktorFilm(LR, findFilm(LF, "f6"), findAktor(LA, "a6"));   
    connectAktorFilm(LR, findFilm(LF, "f7"), findAktor(LA, "a7"));   
    connectAktorFilm(LR, findFilm(LF, "f7"), findAktor(LA, "a1")); 
    connectAktorFilm(LR, findFilm(LF, "f7"), findAktor(LA, "a11"));  
    connectAktorFilm(LR, findFilm(LF, "f8"), findAktor(LA, "a8"));   
    connectAktorFilm(LR, findFilm(LF, "f8"), findAktor(LA, "a1")); 
    connectAktorFilm(LR, findFilm(LF, "f9"), findAktor(LA, "a9"));   
    connectAktorFilm(LR, findFilm(LF, "f10"), findAktor(LA, "a10")); 
    
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
        cout << "10. Tampilkan semua film dan aktor\n";
        cout << "11. Tampilkan film berdasarkan aktor\n";
        cout << "12. Tampilkan aktor berdasarkan film\n";
        cout << "13. Top Aktor & Aktris\n";
        cout << "14. Keluar\n";
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

            case 13:
                cout << "\n===== MENAMPILKAN LIST TOP AKTOR & AKTRIS  =====\n";
                showAktorDanAktrisTerTop(LA, LR); 
                break; 
        } 
        
    } while (pilih != 14); 
        
    return 0; 
}
    