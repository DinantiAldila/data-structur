#include <iostream>
#include "tubes.h"
using namespace std;

int main()
{
    MixueList L;
    int n,i;
    infotype info;
    adr_mixue P;
    bool Q;

    createListSchedule(L);
    cout<<"how many mixue store do you want to input? ";
    cin>>n;
    i = 0;
    while(i<n){
        cout<<"MIXUE STORE"<<endl;
        cout<<"owner\t\t: ";
        cin>>info.owner;
        cout<<"location\t: ";
        cin>>info.location;
        cout<<"address\t\t: ";
        cin>>info.address;
        cout<<"opening store\t: ";
        cin>>info.date;
        cout<<"capacity\t: ";
        cin>>info.capacity;
        P = createElemenSchedule(info);
        insertlast(L,P);
        i++;
        cout<<endl;
    }

    cout<<"SHOW MIXUE STORE"<<endl;
    ShowStore(L);
    cout<<endl;

    cout<<"SEARCH MIXUE STORE"<<endl;
    Q = searchmixue(L,"jakarta");
    cout<<Q;
    cout<<endl;

    cout<<"----------THANK YOU----------"<<endl;
    return 0;
}
