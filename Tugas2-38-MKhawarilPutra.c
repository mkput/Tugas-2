#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void utama();
void menu();
int count();

int main(){

    int i, j, k;
    int total, bayar, kembali;
    char ulangi = 'y';

        printf("Selamat Datang di Phataya\n");
        utama();
        printf("Pilihan Anda : ");
        scanf(" %d", &i);

        while (ulangi == 'y')
        {   
            if (i == 1){
                menu();
                printf("Tekan Enter untuk lanjut...");
                getch();

                utama();
                printf("Pilihan Anda : ");
                scanf(" %d", &i);
                continue;
            }

            //program belanja
            else if(i == 2){
                printf("Input nomor menu : ");
                scanf(" %d", &j);

                while (j >= 0){
                    if (j == 1){
                        printf("Input banyak menu ini yang diinginkan : ");
                        scanf(" %d", &k);

                        total += count(j, k);
                        break;
                       
                    }

                    else if (j == 2){
                        printf("Input banyak menu ini yang diinginkan : ");
                        scanf(" %d", &k);

                        total += count(j, k);
                        break;
                        
                    }

                    else if (j == 3){
                        printf("Input banyak menu ini yang diinginkan : ");
                        scanf(" %d", &k);

                        total += count(j, k);
                        break;
                    }

                    else if (j == 4){
                        printf("Input banyak menu ini yang diinginkan : ");
                        scanf(" %d", &k);

                        total += count(j, k);
                        break;
                    }

                    else if (j == 5){
                        printf("Input banyak menu ini yang diinginkan : ");
                        scanf(" %d", &k);

                        total += count(j, k);
                        break;
                    }

                    else{
                        printf("Maaf, input anda tidak sesuai !\n");
                        printf("Input nomor menu : ");
                        scanf(" %d", &j);
                    }
                    
                }

                
                
            }

            else if (i == 3){
            printf("Terima kasih sudah mampir :)");
            EXIT_SUCCESS;
            break;
            }
        
            else {
            printf("Maaf, input anda tidak sesuai !\n");
            printf("Pilihan anda : ");
            scanf("%d", &i);
            }

            printf("Apakah Anda ingin belanja yang lain (y/n) ? ");
            scanf(" %c", &ulangi);
            continue;

            while (ulangi !='n'){
                printf("Maaf, input anda tidak sesuai !");
                printf("Apakah Anda ini belanja yang lain (y/n) ? ");
                scanf(" %c", &ulangi);
            }
            
                       
        }

        printf("Total belanjaan     : Rp. %d\n", total);
        printf("Masukkan uang Anda  : Rp. ");
        scanf(" %d", &bayar);
        kembali = total - bayar;

        while (kembali > 0)
        {
            printf("Uang Anda kurang        : Rp. %d\n", kembali);
            printf("Masukkan Uang tambahan  : Rp. ");
            scanf(" %d", &bayar);
            kembali = kembali - bayar;

        }

        printf("kembalian Anda : Rp. %d", kembali);
        printf("\nTerima kasih sudah belanja di toko kami");
        

    return 0;
}

//fungsi printf halaman utama
void utama(){

    printf("\n");
    printf("1. Daftar Menu\n2. Belanja\n3. Keluar\n");
    printf("\n");

    
}

//fungsi printf menu
void menu(){

    printf("\n");
    printf(" _______________________________________________________ \n");
    printf("+      |                                                +\n");
    printf("|  No  |   Menu                            Harga        |\n");
    printf("|______|________________________________________________|\n");
    printf("|      |                                                |\n");
    printf("|  1   |   Mie Goreng                       8K          |\n");
    printf("|  2   |   Mie Goreng Basah                 8K          |\n");
    printf("|  3   |   Nasi Goreng                     10K          |\n");
    printf("|  4   |   Nasi Goreng Kampung             15K          |\n");
    printf("|  5   |   Martabak Telor                   6K          |\n");
    printf("|______|________________________________________________|\n");
    printf("\n");

}

//fungsi menghitung total belanja
int count(int pilih, int value){
    int total;
    int a[10] = {8000, 8000, 10000, 15000, 6000};
    

    if (pilih == 1){
       total = a[0] * value;
    }

    else if (pilih == 2){
        total = a[1] * value;
    }

    else if (pilih == 3){
        total = a[2] * value;
    }

    else if (pilih == 4){
        total = a[3] * value;
    }

    else{
        total = a[4] * value;
    }

    return total;  
}
