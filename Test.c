#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>


void bulan_nama(int x)
{
    switch(x)
    {
        case 1 : printf("Januari");
                break;
        case 2 : printf("Februari");
                break;
        case 3 : printf("Maret");
                break;
        case 4 : printf("April");
                break;
        case 5 : printf("Mei");
                break;
        case 6 : printf("Juni");
                break;
        case 7 : printf("Juli");
                break;
        case 8 : printf("Agustus");
                break;
        case 9 : printf("September");
                break;
        case 10 : printf("Oktober");
                break;
        case 11 : printf("November");
                break;
        case 12 : printf("Desember");
                break;
    }
}

int main()
{
    int bulan,faktor=0,total,input,angka,tambah_kurang;
    char namabulan[20];

    do{
    fflush(stdin);
    system("cls");
    printf("\tPENGHITUNG BULAN\n");
    printf("Bulan Sekarang:\n");
    printf("1.Januari\n");
    printf("2.Februari\n");
    printf("3.Maret\n");
    printf("4.April\n");
    printf("5.Mei\n");
    printf("6.Juni\n");
    printf("7.July\n");
    printf("8.Agustus\n");
    printf("9.September\n");
    printf("10.Oktober\n");
    printf("11.November\n");
    printf("12.Desember\n");
    if(faktor==1){
        printf("Salah Input, Input Kembali..\n");
    }
    faktor = 0;
    printf("Input(Masukkan Angka):");
    scanf("%d",&bulan);
    if(bulan>12 || bulan<1){
        faktor = 1;
    }
    }while(faktor == 1);
    system("cls");

    printf("Bulan yang dipilih: ");
    bulan_nama(bulan);
    printf("\nOperasi yang Diinginkan:\n1.Tambah Bulan\n2.Kurang Bulan\nInput: ");
    scanf("%d",&input);

    switch(input)
    {
        case 1: printf("Tambah Berapa Bulan ? : ");scanf("%d",&angka);
                tambah_kurang = angka % 12;
                total = bulan + tambah_kurang;
                printf("Bulan yang dipilih ditambah %d Bulan sama dengan Bulan ",angka);
                bulan_nama(total);
                printf("\n\n\tTerima Kasih");
                break;
        case 2: printf("Kurang Berapa Bulan ? : ");scanf("%d",&angka);
                tambah_kurang = angka % 12;
                total = bulan - tambah_kurang;
                if(total <= 0)
                    total = 12 + total;
                printf("Bulan yang dipilih ditambah %d Bulan sama dengan Bulan ",angka);
                bulan_nama(total);
                printf("\n\n\tTerima Kasih");
                break;
        default:printf("Tambah Berapa Bulan ? : ");scanf("%d",&angka);
                tambah_kurang = angka % 12;
                total = bulan + tambah_kurang;
                printf("Bulan yang dipilih ditambah %d Bulan sama dengan Bulan ",angka);
                bulan_nama(total);
                printf("\n\n\tTerima Kasih");
                break;
    }
    getch();
    return 0;

}
