User
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    const int size = 60;
    cout<<"Enter a letter to begin \n";
    char x;
    cin>>x;
    int position = size/2;
    while(true){
        cout<<"|START|";
        for(int i = 0;i<size;i++){  
            if (i==position){
                cout<<x;}
            else{
                cout<<" ";
            }
            }
        cout<<"|FINISH|"<<endl;
        int move = rand()%3 - 1;  // 0-2 beech mei chunega - 1 = {-1,0,+1}
        //cout<<move<<endl;
        position = position + move;
        if(position<1){
            cout<<"You could not finish the race"<<endl;break;}
        if (position>size-1){
            cout<<"CONGO !!, You finished the RACE"<<endl;break;}
        
        
    }
    return 0;
}
