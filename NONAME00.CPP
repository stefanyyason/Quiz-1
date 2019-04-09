#include <stdio.h>
#include <iostream.h>
#include <conio.h>

main()
{
char nama[20],j[40];
float nk,nt1,nt2,nt3,nq,nm,nf,t,a,b,c,d,e,na;

cout<<"Nama\t:"; gets(nama);
cout<<"Jurusan\t:"; gets(j);
cout<<"Nilai Kehadiran\t:"; cin>>nk;
cout<<"Nilai Tugas 1\t:"; cin>>nt1;
cout<<"Nilai Tugas 2\t:"; cin>>nt2;
cout<<"Nilai Tugas 3\t:"; cin>>nt3;
cout<<"Nilai Quiz\t:"; cin>>nq;
cout<<"Nilai Mid\t:"; cin>>nm;
cout<<"Nilai Final\t:"; cin>>nf;

getche();
clrscr();

a=nk*20/100;
b=(nt1+nt2+nt3)/3*20/100;
c=nq*20/100;
d=nm*20/100;
e=nf*20/100;
na=a+b+c+d+e;

cout<<"Nama\t: "<<nama<<endl;
cout<<"Jurusan\t: "<<j<<endl;
cout<<"Nilai Akhir\t: "<<na<<endl;

getche();
}





