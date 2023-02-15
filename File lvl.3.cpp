#include <string.h>
#include <ctype.h>
#include <iostream.h>
#include <conio.h>
main(){
char ty[20];
char hy[20];
clrscr();
cout<<"Masukan nama depan anda    : ";cin>>ty;
cout<<"Masukan nama belakang anda : ";cin>>hy;
strcat(ty,hy);
cout<<"Nama Anda : "<<ty;
getch();
}