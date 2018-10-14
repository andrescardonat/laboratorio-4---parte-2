#include <iostream>

using namespace std;

class mamifero;

class alado;

class acuatico;

class mamifero{
public:
    mamifero(int peso, int altura): peso(peso), altura(altura){}
    int peso;
    int altura;
    bool pelaje = true;
    string pelos;
    string color;

    void setpeso(int pes);
    void setaltura(int alt);
    void setpelaje(bool pel);
    void setpelaje(string pel);
    void setcolor(string col);
    int getpeso();
    int getaltura();
    bool getpelaje();
    string getcolor();

};

void mamifero::setaltura(int alt){
    altura = alt;
}
void mamifero::setpelaje(bool pel){
    pelaje = pel;
}
void mamifero::setpelaje(string pel){
    pelos = pel;
}
void mamifero::setpeso(int pes){
    peso = pes;
}
void mamifero::setcolor(string col){
    color = col;
}
int mamifero::getaltura(){
    return altura;
}
int mamifero::getpeso(){
    return peso;
}
bool mamifero::getpelaje(){
    return pelaje;
}
string mamifero::getcolor(){
    return color;
}


class alado{
public:
    alado(int peso, int altura, bool plum): peso(peso),altura(altura), plum(plum){}
    int peso;
    int altura;
    string plumaje;
    bool plum = true;

    void setpeso(int pes);
    void setaltura(int alt);
    void setplumaje(bool pluma);
    void setplumaje(string pluma);
    int getpeso();
    int getaltura();
};

void alado::setaltura(int alt){
    altura = alt;
}
void alado::setplumaje(bool pluma){
    plum = pluma;
}
void alado::setplumaje(string pluma){
    plumaje = pluma;
}
void alado::setpeso(int pes){
    peso = pes;
}
int alado::getaltura(){
    return altura;
}
int alado::getpeso(){
    return peso;
}


class acuatico{
public:
    acuatico(int peso, int altura, bool escam): peso(peso),altura(altura), escam(escam){}
    int peso;
    int altura;
    string escamas;
    bool escam = true;
    string color;

    void setpeso(int pes);
    void setaltura(int alt);
    void setescamas(bool escama);
    void setescamas(string escama);
    int getpeso();
    int getaltura();
    void setcolor(string col);
    string getcolor();
};

void acuatico::setaltura(int alt){
    altura = alt;
}
void acuatico::setescamas(bool escama){
    escam = escama;
}
void acuatico::setescamas(string escama){
    escamas = escama;
}
void acuatico::setpeso(int pes){
    peso = pes;
}
void acuatico::setcolor(string col){
    color = col;
}
int acuatico::getaltura(){
    return altura;
}
int acuatico::getpeso(){
    return peso;
}
string acuatico::getcolor(){
    return color;
}



class murcielago: public mamifero, public alado{
public:
    bool plum = false;
    void setplumaje(char pluma);
    murcielago(): mamifero(2, 3), alado(2, 5, false){}

};
void murcielago::setplumaje(char pluma){
    plumaje = pluma;
}



class ornitorrinco: public mamifero, public acuatico{
public:
    bool escam = false;
    void setescamas(char escama);
    ornitorrinco(): mamifero(2, 5), acuatico(2, 5, false){}

};
void ornitorrinco::setescamas(char escama){
    escamas = escama;
}


class manati: public mamifero, public acuatico{
public:
    bool escam = false;
    void setescamas(char escama);
    manati(): mamifero(2, 5), acuatico(2, 5, false){}

};
void manati::setescamas(char escama){
    escamas = escama;
}


int main()
{
    murcielago mur;
    cout<<mur.plum;
    cout<<"\n";
    mur.setplumaje('C');
    cout<<mur.plumaje;
    cout<<"\n";

    ornitorrinco ornito;
    cout<<ornito.escam;
    cout<<"\n";
    ornito.setescamas('C');
    cout<<ornito.escamas<<endl;
    cout<<"\n";

    manati mana;
    cout<<mana.escam;
    cout<<"\n";
    mana.setescamas('C');
    cout<<mana.escamas;
    cout<<"\n";

}
