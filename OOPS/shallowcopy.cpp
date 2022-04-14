#include <iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level='S';
    char *name;
    Hero(){
        cout<<"SIMPLE CONSTRUCTOR CALLED"<<endl;
        name= new char[100];
    }
    void setname(char name[]){
        this->name=name;

    }
    void print(){
        cout<<name<<endl;
    }
     

};
int main(){
Hero hero1;
char name[7]="Babbar";
hero1.setname(name);
 hero1.print();
name[0]='G';
 hero1.print();
 Hero hero2(hero1);
   hero1.print();

}