//
// Created by lunde on 2020/11/1.
//

#include "evenement.h"

using namespace TIME;
using namespace std;

ostream& operator<<(ostream& f, const Evt& e){
    e.afficher(f);
    return f;
}

void Agenda::afficher(std::ostream& f) const {
    /*
    for(unsigned int i = 0 ; i < events.size() ; i++) {
        events[i]->afficher(f);
    } */


    for(vector<Evt *>::const_iterator it = events.begin() ;
        it != events.end() ;
        it++) {
        (*it)->afficher(f);
    }

}

Evt1j* Evt1j::clone() const
{
    return new Evt1j(*this);
}


Evt1jDur* Evt1jDur::clone() const { return new Evt1jDur(*this); }
Rdv* Rdv::clone() const { return new Rdv(*this); }
EvtPj* EvtPj::clone() const { return new EvtPj(*this); }

//Agenda& Agenda::operator<<(Evt& e) {
//    events.push_back(&e);
//    return *this;
//}

Agenda& Agenda::operator<<(Evt& e) {
    events.push_back(e.clone());
    return *this;
}

Agenda::~Agenda() {
    for (unsigned int i = 0; i < events.size(); i++) delete events[i];
}
