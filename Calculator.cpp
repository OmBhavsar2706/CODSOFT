#include<iostream>
using namespace std;
    int main(){
    int firstnum,secondnum,answer,choice;
    cout<<"Enter Two Numbers:"<<endl;
    cin>>firstnum>>secondnum;
    cout<<endl<<"Choose Arithmetic Operation You Wanna Perform:"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cin>>choice;
    switch(choice){
    case 1:
        answer=firstnum+secondnum;
    cout<<endl<<"Addition Of Both Numbers Is:"<<answer<<endl;
    break;
    case 2:
        answer=firstnum-secondnum;
    cout<<endl<<"Subtraction Of Both Numbers Is:"<<answer<<endl;
    break;
    case 3:
        answer=firstnum*secondnum;
    cout<<endl<<"Multiplication Of Both Numbers Is:"<<answer<<endl;
    break;
    case 4:
        if (secondnum !=0)
        {
            answer=firstnum / secondnum;
    cout<<endl<<"Division Of Both Numbers Is:"<<answer<<endl;
        }
        else
            cout<<endl<<"Error! The Number Cannot Be Divided By Zero"<<endl;
    break;

    default:cout<<endl<<"Invalid Choice!,Please Select Proper Choice"<<endl;
    }
    }
