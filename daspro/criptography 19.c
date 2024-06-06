#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
	char a;
	char b;
	char teks[200];
	
	printf("====================================================================\n");
	printf("====================================================================");
	printf("\t\t\t\t\t\t\t\t\t Selamat Datang \n");
	printf("\t\t Program Kriptografi Kelompok 19 \n");
	printf("====================================================================\n");
	printf("====================================================================");
	
	//Input enkripsi
	printf("\n\n Proses Enkripsi \n");
	int i,geser;
	
	//Masukkan teks yang akan dirahasiakan
	fflush(stdin);
	printf("\n\t Plaintext : ");
	gets(teks);
	
	//Masukkan kunci dalam proses mengubah kata
	printf("\n\t Kunci : ");
	scanf("%d",&geser);
	a=strlen(teks);
	printf("\n\t\a Ciphertext : ");
	for(i=0;i<a;i++)
	{
		printf("%d ",(teks[i])/geser);
	}
	printf("\n\n\t Kunci: ");
	for(i=0;i<a;i++)
	{
		printf("%d ",(teks[i]%geser));
	} printf("%d",geser);
	//Input deskripsi
	printf("\n\nProses Deskripsi \n");
	int j,gser;
	
	//Masukkan teks yang akan dikembalikan
	fflush(stdin);
	char text[200];
	char buff[200];
	FILE *fptr;
	fptr = fopen("criptography.txt","w");
	//Masukkan teks yang akan dikembalikan
	printf("\n\t Criptography: ");
	fgets(text, sizeof(text), stdin);
	//Menulis ke text ke file
	fputs(text, fptr);
	//Masukkan kunci dalam proses mengubah kata
	printf("\n\t Kunci: ");
	fgets(text, sizeof(text), stdin);
	//Menulis ke text ke file
	fputs(text, fptr);
	//Tutup file
	fclose(fptr);

	b=strlen(teks);
	printf("\n\t\a Plaintext : ");
	for(j=0;j<b;j++)
	{
		printf("%c",(teks[j])+gser);
	}
	getch();
}
