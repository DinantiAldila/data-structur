#include "tubes.h"

void createListSchedule (MixueList &L){
    L.first = NULL;
}

adr_mixue createElemenSchedule (infotype x){
    adr_mixue P = new element;
    P->info = x;
    P->next = NULL;
    return P;
}

void insertlast (MixueList &L, adr_mixue P){
    adr_mixue Q;
    Q = L.first;
    if(Q == NULL){
        L.first = P;
    }else{
        Q = L.first;
        while(Q->next != NULL){
            Q = Q->next;
        }
        Q->next = P;
    }
}

void ShowStore (MixueList L){
    adr_mixue P;
    if(L.first != NULL){
        P = L.first;
        while(P != NULL){
            cout<<"----------MIXUE STORE----------"<<endl;
            cout<<"owner\t\t: "<<P->info.owner<<endl;
            cout<<"location\t: "<<P->info.location<<endl;
            cout<<"address\t\t: "<<P->info.address<<endl;
            cout<<"opening store\t: "<<P->info.date<<endl;
            cout<<"capacity\t: "<<P->info.capacity<<endl;
            P = P->next;
        }
    }else{
        cout<<"-----EMPTY-----"<<endl;
    }
}


bool searchmixue (MixueList L, string location){
    adr_mixue P = L.first;
    while(P != NULL){
        if(P->info.location == location){
            return P;
        }
        P = P->next;
    }
    return NULL;
}
