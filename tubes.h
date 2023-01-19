#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>
using namespace std;


struct CabangMixue {
    string owner,location,address,date;
    int capacity;
};

typedef CabangMixue infotype;
typedef struct element *adr_mixue;

struct element{
    infotype info;
    adr_mixue next;
};

struct MixueList{
    adr_mixue first;
};

void createListSchedule(MixueList &L);
adr_mixue createElemenSchedule(infotype x);
void insertlast(MixueList &L, adr_mixue P);
void ShowStore(MixueList L);
bool searchmixue(MixueList L, string location);
#endif // FLIGHT_H_INCLUDED
