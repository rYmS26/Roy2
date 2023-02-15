#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
main(){
char user[20],pass[20] = "yutubmasbro",die;
int a,b = 0;
cout<<"       L   O   G   I   N"<<endl;
cout<<"==============================="<<endl;
cout<<"Usernama  :";gets(user);
cout<<"Password  :";
for(a = 0;a<=10;a++)
{ die = getch();
  cout<<"*";
  if (die == pass [a])
{
b = b + 1;
}
}
if ((strcmp(user,"masbrocuy") == 0) && b == 11)
{
clrscr();
cout<<"     "<<user<<" anda berhasil login "<<endl;
}else{
cout<<"PASS ATAU USER ANDA SALAH"<<endl;
b = 0;
}
getch();
}
