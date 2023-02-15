#include <conio.h>
#include <iostream.h>
#include <process.h>
#include <stdio.h>
#include <fstream.h>
main(){
char rb[20];
cout<<"anak saha:";gets(rb);
ofstream uhuy;
uhuy.open("uhuy.txt");
uhuy<<"anak saha:"<<rb<<endl;;
uhuy.close();
printf("Tekah Enter");
getch();
system("notepad /p uhuy.txt");
printf("\nPrinting...");
getch();
}