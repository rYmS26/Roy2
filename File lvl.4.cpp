#include <iostream.h>
#include <conio.h>
#include <stdio.h>
main(){
char pilih;
cout<<"        Menu           "<<endl;
cout<<" "<<endl;
cout<<"1. Masbro"<<endl;
cout<<"2. aselole"<<endl;
cout<<" "<<endl;
cout<<"Masukan pilihan anda : ";cin>>pilih;
if (pilih == '1'){
cout<<"anda teman MASBRO"<<endl;
}else if(pilih == '2'){
cout<<"anda musuh MASBRO!!!"<<endl;
}else{
cout<<"menu tidak tersedia"<<endl;
}
getch();
}