#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char A[9];
    char key='X';
    while(true){
        for(int i=0;i<9;i++){
            A[i]='1'+i;
        }
        bool Win=false;
        bool Draw=false;
        while(true){
            for(int i=0;i<9;i++){
                cout<<A[i];
                if(i%3!=2){
                    cout<<"|";
                }
                if(i%3==2 && i!=8){
                    cout<<"\n------\n";
                }
            }
            cout<<endl;
            int input;
            while(true){
                cout<<"Player "<<key<<" please enter ";
                cin>>input;
                input--;
                if(input>=0 && input<9 && A[input]!='X' && A[input]!='0'){
                    A[input]=key;
                    break;
                }
                else{
                    cout<<"Invalid Input"<<endl;
                }
            }
            if(A[0]==A[1] && A[1]==A[2]){
                Win=true;
            }
            if(A[3]==A[4] && A[4]==A[5]){
                Win=true;
            }
            if(A[6]==A[7] && A[7]==A[8]){
                Win=true;
            }
            if(A[0]==A[3] && A[3]==A[6]){
                Win=true;
            }
            if(A[1]==A[4] && A[4]==A[7]){
                Win=true;
            }
            if(A[2]==A[5] && A[5]==A[8]){
                Win=true;
            }
            if(A[0]==A[4] && A[4]==A[8]){
                Win=true;
            }
            if(A[2]==A[4] && A[4]==A[6]){
                Win=true;
            }
            Draw=true;
            for(int i=0;i<9;i++){
                if(A[i]!='X' && A[i]!='0'){
                    Draw=false;
                    break;
                }
            }
            if(Win||Draw){
                for(int i=0;i<9;i++){
                    cout<<A[i];
                    if(i%3!=2){
                        cout<<"|";
                    }
                    if(i%3==2 && i!=8){
                        cout<<"\n------\n";
                    }
                }
                cout<<endl;
                if(Win){
                    cout<<"Player "<<key<<" Wins"<<endl;
                }
                else{
                    cout<<"Draw"<<endl;
                }
                break;
            }
            if(key=='X'){
                key='0';
            }
            else{
                key='X';
            }
        }
        char again;
        cout<<"Enter y or Y to play again"<<endl;
        cout<<"Enter n or N to end"<<endl;
        cin>>again;
        if(again!='y' && again!='Y'){
            break;
        }
    }
    cout<<"Thank You"<<endl;
}