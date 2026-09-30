#include<iostream>
#include<cString>
// #include"hero.cpp"  
using namespace std;
class Hero{
    //properties
    //char name[100];
    private:
    int health;
    public:        //--> Can be acess anywhere inside or outside the class
    char *name;
    char level;
    static int TimeToComplete;

    //CONSTRUCTOR->called after object creation / same comnstructor for static as well as for dynamic object creation
    //Default constructor
    Hero(){
        cout<<"simple Construstor called"<<endl;
        name=new char[100];
    }
    
    //Paramaterized constructor
    Hero(int health){
        cout<<"this ->"<<this<<endl;
        this->health=health;
    }
    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }
    //Copy constructor
    Hero(Hero&temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    
    void print(){
        cout<<endl;
        cout<<"name: "<<this->name<<" , ";
        cout << "health: " << this->health <<" , ";
        cout <<"level: " << this->level <<" ";
        cout<<endl;
    }

    //-->using getter
    int gethealth(){
        return health;
    }

    //-->using setter
    void sethealth(int h){
        health=h;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }
    //STATIC FUNCTION can access only static members
    static int random(){
        return TimeToComplete;
    }
    //DESTRUCTOR
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};
//static keyword intialize
int Hero::TimeToComplete=10;

int main(){
    //STATIC FUNCTION calling
    cout<<Hero::random()<<endl;

    /*
    //STATIC KEYWORD calling
    cout<<Hero::TimeToComplete<<endl;
    //not recommended
    Hero a;      
    cout<<a.TimeToComplete<<endl;
    */

    /*
    //static 
    Hero a;
    //dynamic
    Hero *b=new Hero();
    //manually destructor call
    delete b;
    */

    /*
    //DEEP COPY-->your own copy constructor
    Hero hero1;
    hero1.sethealth(20);
    hero1.level='A';
    char name[8]="GURLEEN";
    hero1.setname(name);
    hero1.print();

    Hero hero2(hero1);

    //change name in hero1
    hero1.name[0]='S';
    hero1.print();
    hero2.print();

    //copy assingment operator
    hero1=hero2;
    hero1.print();
    hero2.print();
    */

    /*
    //SHALLOW COPY-->default copy constructor only
    Hero hero1;
    hero1.sethealth(20);
    hero1.level='A';
    char name[8]="GURLEEN";
    hero1.setname(name);
    hero1.print();

    // Use default copy constructor  
    //then you have to comment out your own copy constructor
    Hero hero2(hero1);
    //Hero hero2=hero1;
    hero2.print();

    //change name in hero1
    hero1.name[0]='S';
    hero1.print();
    hero2.print();
    */

    /*
    //COPY CONSTRUCTOR
    Hero s(70,'A');
    s.print();
    //-->copying s values in object r
    Hero r(s);
    r.print();
    */

    /*
    //-->CONSTRUCTOR
    cout<<"Hi"<<endl;
    //object creation statically
    Hero ramesh(10);
    cout<<"Address is: "<<&ramesh<<endl;
    cout<<"Hello"<<endl;

    //object creation dynamically
    Hero *h= new Hero(11);
    cout<<"Address is: "<<&*h<<endl;
    */

    /*
    //STATIC ALLOCATION
    Hero a;
    a.sethealth(80);
    a.level='A';
    cout<<"Health is: "<<a.gethealth()<<endl;
    cout<<"Level is: "<<a.level<<endl;

    //DYNAMIC ALLOCATION   -->  Memory allocated in heap
    Hero*b = new Hero;
    b->sethealth(90);
    b->level='B';
    cout<<"Health is: "<<(*b).gethealth()<<endl;
    cout<<"Level is: "<<(*b).level<<endl;
    //or
    cout<<"Health is: "<<b->gethealth()<<endl;
    cout<<"Level is: "<<b->level<<endl;
    */

   /*
   //-->creation of object
    Hero ramesh;
    cout<<"Health is: "<<ramesh.gethealth()<<endl;

    //-->intialize properties
    ramesh.sethealth(70);  //-->when private using setter & getter access the  value
    //ramesh.health=70;      -->when public
    ramesh.level='A';

    //-->Acessing the properties
    cout<<"Health is: "<<ramesh.gethealth()<<endl;
    //cout<<"Health is: "<<ramesh.health<<endl;
    cout<<"Level is: "<<ramesh.level<<endl;
    //cout<<"size: "<<sizeof(h1);
    */
}
