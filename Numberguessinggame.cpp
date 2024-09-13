#include<iostream>
using namespace std;
int main(){
    int num;
    int guessnum=54,count=0;
    cout<<"~~~~~~~Number Guessing Game~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~Have Fun!~~~~~~~~~~~~~~"<<endl;
    cout<<"Guess A Number Between 1 And 99:"<<endl;
    for (int i=1;i<=10;i++){
         cin>>num;
         count=i;
         if (num<guessnum)cout<<"Guess A Greater Number Than This"<<endl;
         else if (num>guessnum)cout<<"Guess A Smaller Number Than This"<<endl;
         else cout<<"You Have Guessed Correct Number!"<<endl;
         if (num==guessnum) break;
    }
    cout<<"You took "<<count<<" Chance";
}
