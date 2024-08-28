#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double q, q1, q2, r, e, f;
    int pilihan;
    char ulang;
    const double K = 9e9;  

    do {
        printf("==============================\n");
        printf("||       Listrik Statis     ||\n");
        printf("==============================\n");
        printf("\n");
        printf("1. Gaya listrik\n");
        printf("2. Medan listrik\n");
        printf("Masukkan pilihan anda: ");
        scanf("%d", &pilihan);
        printf("\n");

        if (pilihan == 1) {
            printf("Menghitung Gaya listrik\n");
            printf("1. Mencari F\n");
            printf("2. Mencari q1\n");
            printf("3. Mencari q2\n");
            printf("4. Mencari r\n");
            printf("Masukkan pilihan anda: ");
            scanf("%d", &pilihan);

            if (pilihan == 1) {
                printf("Masukkan nilai q1 (dalam Coulomb): ");
                scanf("%lf", &q1);
                printf("Masukkan nilai q2 (dalam Coulomb): ");
                scanf("%lf", &q2);
                printf("Masukkan jarak r antara q1 dan q2 (dalam meter): ");
                scanf("%lf", &r);
                
                f = K * (q1 * q2) / pow(r, 2);
                
                printf("Gaya listrik F adalah: %.2e Newton\n", f);
                
            } else if (pilihan == 2) {
                printf("Masukkan nilai F: ");
                scanf("%lf", &f);
                printf("Masukkan nilai q2: ");
                scanf("%lf", &q2);
                printf("Masukkan nilai r: ");
                scanf("%lf", &r);
                
                q1 = f * pow(r, 2) / (K * q2);
                
                printf("Nilai q1 adalah: %.2e Coulomb\n", q1);
                
            } else if (pilihan == 3) {
                printf("Masukkan nilai F: ");
                scanf("%lf", &f);
                printf("Masukkan nilai q1: ");
                scanf("%lf", &q1);
                printf("Masukkan nilai r: ");
                scanf("%lf", &r);
                
                q2 = f * pow(r, 2) / (K * q1);
                
                printf("Nilai q2 adalah: %.2e Coulomb\n", q2);
                
            } else if (pilihan == 4) {
                printf("Masukkan nilai q1: ");
                scanf("%lf", &q1);
                printf("Masukkan nilai q2: ");
                scanf("%lf", &q2);
                printf("Masukkan nilai F: ");
                scanf("%lf", &f);
                
                r = sqrt(K * q1 * q2 / f);
                
                printf("Nilai r adalah: %.2e meter\n", r);
            } else {
                printf("Pilihan tidak valid.\n");
            }

        } else if (pilihan == 2) {
            printf("Menghitung Medan listrik\n");
            printf("1. Mencari e\n");
            printf("2. Mencari q\n");
            printf("3. Mencari r\n");
            printf("Masukkan pilihan anda: ");
            scanf("%d", &pilihan);

            if (pilihan == 1) {
                printf("Masukkan nilai q: ");
                scanf("%lf", &q);
                printf("Masukkan nilai r: ");
                scanf("%lf", &r);
                
                e = K * q / pow(r, 2);
                
                printf("Nilai medan listrik E adalah: %.2e N/C\n", e);
                
            } else if (pilihan == 2) {
                printf("Masukkan nilai E: ");
                scanf("%lf", &e);
                printf("Masukkan nilai r: ");
                scanf("%lf", &r);
                
                q = e * pow(r, 2) / K;
                
                printf("Nilai q adalah: %.2e Coulomb\n", q);
                
            } else if (pilihan == 3) {
                printf("Masukkan nilai q: ");
                scanf("%lf", &q);
                printf("Masukkan nilai E: ");
                scanf("%lf", &e);
                
                r = sqrt(K * q / e);
                
                printf("Nilai r adalah: %.2e meter\n", r);
                
            } else {
                printf("Pilihan tidak valid.\n");
            }
        } else {
            printf("Pilihan tidak tersedia.\n");
        }

        printf("\nApakah Anda ingin melakukan perhitungan lagi? (y/n): ");
        scanf(" %c", &ulang);  

    } while (ulang == 'y' || ulang == 'Y');

    printf("Program selesai. Terima kasih!\n");

    return 0;
}
