#include <iostream>
using namespace std;
int main(){
    long double byte;
    long int days,hours,seconds,characters,minutes;
    cout<<"enter the file size in bytes: ";
    cin>>byte;
    characters=byte*256;
    seconds=characters/960;
    days=(long int)seconds/86400;
    seconds=(long int)seconds%86400;
    hours=(long int)seconds/3600;
    seconds=(long int)seconds%3600;
    minutes=(long int)seconds/60;
    seconds=(long int)seconds%60;
    cout<<"characters: "<<characters<<endl;
    cout<<"days: "<<days <<" days"<<endl;
    cout<<"hours: "<<hours<<" hours"<<endl;
    cout<<"minutes: "<<minutes<<" minutes"<<endl;
    cout<<"seconds: "<<seconds<<" seconds"<<endl;
    return 0;
}
