#include"stack.h"

stack mystack;

void clear();

int main()
{   
    while(1)
    {
        clear();
        int operation,data;

        cout<<string(100,'#')<<endl;
        cout<<string(44,'#')<<"    STACK    "<<string(45,'#')<<endl;
        cout<<string(100,'#')<<endl;

        cout<<string(1,'\n');
        cout<<"CHOSSE OPERATION:"<<endl;
        cout<<"\t\t 1 ---------- PUSH"<<endl;
        cout<<"\t\t 2 ---------- POP"<<endl;
        cout<<"\t\t 3 ---------- DISPLAY"<<endl;
        cout<<"\t\t 4 ---------- FIND DATA "<<endl;
        cout<<"\t\t 5 ---------- SHOW SIZE"<<endl;
        cout<<"\t\t 6 ---------- EXIT PROGRAM"<<endl;
        cin>>operation;

        switch (operation)
        {
        case 1: cout<<string(1,'\n');
                cout<<string(50,'#')<<"    PUSH    "<<string(50,'#')<<endl;
                cout<<string(1,'\n');
                cout<<"enter data to be pushed"<<endl;
                cin>>data;
                mystack.push(data);
            break;

        case 2: cout<<string(1,'\n');
                cout<<string(50,'#')<<"    POP    "<<string(50,'#')<<endl;
                cout<<string(1,'\n');
                mystack.pop();
            break;
        case 3: cout<<string(1,'\n');
                cout<<string(50,'#')<<"   DISPLAY     "<<string(50,'#')<<endl;
                cout<<string(1,'\n');
                mystack.displaystack();
            break;
        case 4: cout<<string(1,'\n');
                cout<<string(50,'#')<<"   FIND DATA     "<<string(50,'#')<<endl;
                cout<<string(1,'\n');
                cout<<"enter data to be searched"<<endl;
                cin>>data;
                mystack.finddata(data);
            break;
        case 5: cout<<string(1,'\n');
                cout<<string(50,'#')<<"   SHOW SIZE    "<<string(50,'#')<<endl;
                cout<<string(1,'\n');
                cout<<" SIZE IS "<<mystack.getsize();
            break;
        case 6: return 0;
            break;
        
        default: cout<<"wrong Operation choosen -------> exit program"<<endl;
            return 0;
            break;
        }
    }

    return 0;
}

void clear()
{
    cout<<string(3,'\n');
}