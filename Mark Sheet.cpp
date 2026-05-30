#include<iostream>
#include <string>
using namespace std;
int main(){
//------------------
//    variables
//------------------
int ID;
string name;
string fname;
int grade;
float maths;
float  eng;
float urdu;
float comppr;
float compth;
float phypr;
float phyth;
float comptot;
float phytot;
float per;
float obt;
float tot;
//------------------
//  taking input
//------------------
cout<<"-----------------------------------"<<endl;
cout<<"         ENTER YOUR DATA           "<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"ENTER YOUR ROLL NUMBER:";
cin>>ID;
cout<<"ENTER YOUR NAME:";
cin>>name;
cout<<"ENTER YOUR FATHER NAME:";
cin>>fname;
cout<<"ENTER YOUR CLASS:";
cin>>grade;
cout<<"-----------------------------------"<<endl;
cout<<"         ENTER YOUR MARKS          "<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"ENG:";
cin>>eng;
cout<<"MATHS:";
cin>>maths;
cout<<"URDU:";
cin>>urdu;
cout<<"COMP TH:";
cin>>compth;
cout<<"COMP PR:";
cin>>comppr;
cout<<"PHY TH:";
cin>>phyth;
cout<<"PHY PR:";
cin>>phypr;
//------------------
//  calculations
//------------------
tot=500;
phytot=phyth+phypr;
comptot=compth+comppr;
obt=eng+maths+urdu+phytot+comptot;
per=obt/tot*100;

//------------------
//    printing
//------------------
cout<< "-----------------------------------"<<endl;
cout<< "           MARKS REPORT            "<<endl;
cout<< "-----------------------------------"<<endl;
cout<< "ENG:"<<eng<<endl;
cout<< "MATHS:"<<maths<<endl;
cout<< "URDU:"<<urdu<<endl;
cout<< "COMP TH"<<compth<<endl;
cout<< "COMP PR:"<<comppr<<endl;
cout<< "PHY TH:"<<phyth<<endl;
cout<< "PHY PR:"<<phypr<<endl;
cout<< "TOTAL MARKS:"<<tot<<endl;
cout<< "OBTAINED MARKS:"<<obt<<endl;
cout<< "PERCENTAGE:"<<per<<endl;
//code for the grades
if(per>=90){
cout<<"GRADE=A+";
}
else if(per>=85 && per<=89){
cout<<"\n GRADE=A";
}
else if(per>=80 && per<=84){
cout<<"\n GRADE=B+";
}
else if(per>=75 && per<=79){
cout<<"\n GRADE=B";
}
else if(per>=70 && per<=74){
cout<<"\n GRADE=C+";
}
else if(per>=65 && per<=69){
cout<<"\n GRADE=C";
}
else if(per>=60 && per<=64){
cout<<"\n GRADE=D+";
}
else if(per>=55 && per<=59){
cout<<"\n GRADE=D";
}
else if(per>=50 && per<=54){
cout<<"\n GRADE=E";
}
else if(per<50){
cout<<"\n GRADE=F";
}
if(eng<50){
cout<<"STATUS=FAIL";
}
else if(urdu<50){
cout<<"STATUS=FAIL";
}
else if(maths<50){
cout<<"STATUS=FAIL";
}
else if(comptot<50){
cout<<"STATUS=FAIL";
}
else if(phytot<50){
cout<<"STATUS=FAIL";
}
}

