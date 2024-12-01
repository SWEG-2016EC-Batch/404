#include <iostream>
using namespace std;
int main() {
   double file_size,seconds,s1,m1,m2,h1,h2,d1;
   int character_per_second=960;
   cout<<"This program calculates how long it takes to transfer files at a speed of 960 bytes per second."<<endl;
   while(true) {
       cout<<"please enter your file size in bytes: "<<endl;
       cin>>file_size;
       if(cin.fail() || file_size<0) {
        cout<<"Invalid input!"<<endl;
        cin.clear();
        cin.ignore();
        continue;
    }else{
        break;
        }
    }
   seconds=file_size/character_per_second;
   m1=(int)seconds/60;
   s1=(int)seconds%60;
   h1=(int)m1/60;
   m2=(int)m1%60;
   d1=(int)h1/24;
   h2=(int)h1%24;
    if(seconds<60){
        cout<<"The time it will take approximately is "<<seconds<<" seconds."<<endl;
    }else if(m1<60){
        cout<<"The time it will take approximately is "<<m1<<" minutes and "<<s1<<" seconds"<<endl;
    }else if(h1<24){
       cout<<"The time it will take approximately is "<<h1<<" hours and "<<m2<<" minutes"<<endl;
    }else if(d1<7){
           cout<<"The time it will take approximately is "<<d1<<" days and "<<h2<<" hours"<<endl;
    } 
       return 0;
    
}
    
    
    
   
