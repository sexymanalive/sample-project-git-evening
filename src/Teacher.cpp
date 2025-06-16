#include<iostream> 
using namespace std; 

class Teacher{
    private: 
        string name; 
        string age; 
    public: 
        Teacher(string name, int age){
            this-> name = name; 
            this-> age = age; 
        }
};
int main(){
    system("clear"); 

    cout<<"This is teh teacher demo file "<<endl; 
    return 0 ; 
}