#include<iostream>
using namespace std;
void A()
{
    int i,j;
    char a[10][10];
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=0,j=4;i<5;i++,j--)
    {
        {
            a[i][j]='a';
            a[i][9-j]='a';
        }
    }
    for(;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==5&&j%2==0)
            {
                a[i][j]='a';
            }
            else
            {
                if(!(j>0&&j<9))
                a[i][j]='a';
            }
        }
    }
    for(i=0;i<10;i++)
    {
        cout<<" ";
        for(j=0;j<10;j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
        cout<<"\n";
}

void B()
{
     char a[4][4],s[5][6];
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]=' ';
            s[i][j]=' ';
        }
    }
    a[0][1]='b';
    a[3][1]='b';
    for(i=0;i<4;i++)
    {
        a[i][0]='b';
    }
    for(j=2,i=0;j<3,i<3;j++,i++)
    {
        a[i][j]='b';
        a[5-j][j]='b';
    }
    
    for(i=0;i<4;i++)
    {
        cout<<" ";
        for(j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=1;i<4;i++)
    {
        cout<<" ";
        for(j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void C()
{
    int i,j;
    char a[10][7];
    for(i=0;i<10;i++)
    {
        for(j=0;j<7;j++)
        {
            a[i][j]=' ';
        }
    }
    a[0][6]='c';
    a[9][6]='c';
    for(i=4;i<6;i++)
    {
        a[i][0]='c';
        a[0][i]='c';
        a[9][i]='c';
    }
    for(int c=0,i=1,j=2;c<2;c++,i++,j--)
    {
        a[i][j]='c';
        a[9-i][j]='c';
    }
    for(i=0;i<10;i++)
    {cout<<" ";
        for(j=0;j<7;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void D()
{
     int i,j;
    char a[10][7];
    for(i=0;i<10;i++)
    {
        for(j=0;j<7;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=0;i<10;i++)
    {
        a[i][0]='d';
    }
    for(i=3;i<7;i++)
    {
        a[i][6]='d';
        a[0][i-3]='d';
        a[9][i-3]='d';
    }
    for(int c=0,i=1,j=4;c<2;c++,i++,j++)
    {
        a[i][j]='d';
        a[9-i][j]='d';
    }
    for(i=0;i<10;i++)
    {
        cout<<" ";
        for(j=0;j<7;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void E()
{
     int i,j;
    char a[9][6];
    for(i=0;i<9;i++)
    {
        for(j=0;j<6;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=0;i<9;i++)
    {
        a[i][0]='e';
    }
    for(i=0;i<9;i=i+4)
    {
        for(j=0;j<6;j++)
        {
            a[i][j]='e';
        }
    }
    
    for(i=0;i<9;i++)
    {
        cout<<" ";
        for(j=0;j<6;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void F()
{
     int i,j;
    char a[9][6];
    for(i=0;i<9;i++)
    {
        for(j=0;j<6;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=0;i<9;i++)
    {
        a[i][0]='f';
    }
    for(i=0;i<8;i=i+4)
    {
        for(j=0;j<6;j++)
        {
            a[i][j]='f';
        }
    }
    
    for(i=0;i<9;i++)
    {
        cout<<" ";
        for(j=0;j<6;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void G()
{
     int i,j,c;
    char a[10][7];
    for(i=0;i<10;i++)
    {
        for(j=0;j<7;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=3,c=0;i<7;i++,c+2)
    {
        a[i][0]='g';
        a[0][i]='g';
        a[9][i]='g';
        a[5][i]='g';
        a[9-i+3][6]='g';
    }
    for(c=0,i=1,j=2;c<2;c++,i++,j--)
    {
        a[i][j]='g';
        a[9-i][j]='g';
    }
    for(i=0;i<10;i++)
    {
        cout<<" ";
        for(j=0;j<7;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void H()
{
    int i,j;
    char a[9][6];
    for(i=0;i<9;i++)
    {
        for(j=0;j<6;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=0;i<9;i++)
    {
        a[i][0]='h';
        a[i][5]='h';
        if(i==4)
        {
            for(j=0;j<6;j++)
            {
                a[i][j]='h';
            }
        }
    }
    
    for(i=0;i<9;i++)
    {
        cout<<" ";
        for(j=0;j<6;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void I()
{
     int i,j;
    char a[9][5];
    for(i=0;i<9;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=0;i<5;i++)
    {
        a[0][i]='i';
        a[8][i]='i';
    }
    for(i=0;i<9;i++)
    {
        a[i][2]='i';
    }
    
    for(i=0;i<9;i++)
    {
        cout<<" ";
        for(j=0;j<5;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void J()
{
     int i,j;
    char a[8][7];
    for(i=0;i<8;i++)
    {
        for(j=0;j<7;j++)
        {
            a[i][j]=' ';
        }
    }
    a[7][1]='j';
    a[7][2]='j';
    a[6][0]='j';
    a[5][0]='j';
    for(i=0;i<7;i++)
    {
        a[0][i]='j';
    }
    for(i=0;i<7;i++)
    a[i][3]='j';
    for(i=0;i<8;i++)
    {
        cout<<" ";
        for(j=0;j<7;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void K()
{
    int i,j;
    char a[9][7];
    for(i=0;i<9;i++)
    {
        for(j=0;j<7;j++)
        {
            a[i][j]=' ';
        }
    }
    
    for(i=0;i<5;i++)
    {
        a[i][0]='k';
        a[i+5][0]='k';
        a[i][5-i]='k';
        a[8-i][5-i]='k';
    }
    for(i=0;i<9;i++)
    {
        cout<<" ";
        for(j=0;j<7;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void L()
{
     int i,j;
    char a[9][5];
    for(i=0;i<9;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=0;i<5;i++)
    {
        a[8][i]='l';
    }
    for(i=0;i<9;i++)
    a[i][0]='l';
    
    
    for(i=0;i<9;i++)
    {
        cout<<" ";
        for(j=0;j<5;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}
#define code_by_SRIKANTH_VANAMALA_for_all_alphabets main
void M()
{
    int i,j;
    char a[7][7];
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            a[i][j]=' ';
        }
    }
    
    for(i=0;i<7;i++)
    {
        a[i][0]='m';
        a[i][6]='m';
    }
    
    for(i=0;i<4;i++)
    {
        a[i][i]='m';
        a[i][6-i]='m';
    }
    
    for(i=0;i<7;i++)
    {
        cout<<" ";
        for(j=0;j<7;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void N()
{
    int i,j;
    char a[8][8];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(i==j)
            a[i][j]='n';
        }
        a[i][0]='n';
        a[i][7]='n';
    }
    
    for(i=0;i<8;i++)
    {
        cout<<" ";
        for(j=0;j<8;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void O()
{
    char a[10][10];
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=1,j=2;i<3;i++,j--)
    {
        a[i][j]='o';
        a[i][9-j]='o';
        a[9-i][j]='o';
        a[9-i][9-j]='o';
    }
    for(i=4;i<6;i++)
    {
        a[0][i]='o';
        a[9][i]='o';
        a[i][0]='o';
        a[i][9]='o';
    }
    
    for(i=0;i<10;i++)
    {
        cout<<" ";
        for(j=0;j<10;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n";
}

void P()
{
    char a[4][4];
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]=' ';
        }
    }
    a[0][1]='p';
    a[3][1]='p';
    for(i=0;i<4;i++)
        a[i][0]='p';
    for(j=2,i=0;j<3,i<3;j++,i++)
    {
        a[i][j]='p';
        a[5-j][j]='p';
    }
    
    for(i=0;i<4;i++)
    {cout<<" ";
        for(j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=1;i<4;i++)
    {
        cout<<" ";
            cout<<a[i][0]<<" ";
        cout<<"\n";
    }
    cout<<"\n";
}

void Q()
{
    char a[11][11];
    int i,j;
    for(i=0;i<11;i++)
    {
        for(j=0;j<11;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=1,j=2;i<3;i++,j--)
    {
        a[i][j]='q';
        a[i][9-j]='q';
        a[9-i][j]='q';
        a[9-i][9-j]='q';
    }
    for(i=4;i<6;i++)
    {
        a[0][i]='q';
        a[9][i]='q';
        a[i][0]='q';
        a[i][9]='q';
    }
    for(i=6;i<11;i++)
    a[i][i-1]='q';
    for(i=0;i<11;i++)
    {cout<<" ";
        for(j=0;j<11;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n";
}

void R()
{
    char a[5][6],s[5][6];
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            a[i][j]=' ';
            s[i][j]=' ';
        }
    }
    a[0][1]='r';
    a[4][1]='r';
    for(i=0;i<5;i++)
        a[i][0]='r';
    for(j=2,i=0;j<5,i<3;j++,i++)
    {
        a[i][j]='r';
        a[5-j][j]='r';
    }
    for(i=0;i<3;i++)
    {
        s[i][0]='r';
        s[i][i+2]='r';
    }
    for(i=0;i<5;i++)
    {
        cout<<" ";
        for(j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++)
    {
        cout<<" ";
        for(j=0;j<6;j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void S()
{
     int i,j,k,c;
    char a[7][6];
    for(i=0;i<7;i++)
    {
        for(j=0;j<6;j++)
        {
            a[i][j]=' ';
        }
    }
    a[0][1]='s';
    a[6][4]='s';
    for(i=0,j=2;i<7;i=i+3,j--)
    {
        for(k=j,c=0;c<4;c++,k++)
        {
            a[i][k]='s';
        }
    }
    for(i=1;i<3;i++)
    {
        a[i][0]='s';
        a[i+3][5]='s';
    }
    for(i=0;i<7;i++)
    {
        cout<<" ";
        for(j=0;j<6;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void T()
{
     int i,j;
    char a[8][7];
    for(i=0;i<8;i++)
    {
        for(j=0;j<7;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=0;i<7;i++)
    {
        a[0][i]='t';
    }
    for(i=0;i<8;i++)
    a[i][3]='t';
    
    
    for(i=0;i<8;i++)
    { 
        cout<<" ";
        for(j=0;j<7;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void U()
{
     int i,j;
    char a[7][6];
    for(i=0;i<7;i++)
    {
        for(j=0;j<6;j++)
        {
            a[i][j]=' ';
        }
    }
    for(i=5,j=1;j<3;i++,j++)
    {
        a[i][j]='u';
        a[i][5-j]='u';
    }
    for(i=0;i<5;i++)
    {
        a[i][5]='u';
        a[i][0]='u';
    }
    
    for(i=0;i<7;i++)
    { 
        cout<<" ";
        for(j=0;j<6;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void V()
{
    int i,j;
    char a[5][10];
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            a[i][j]=' ';
        }
    }

    for(i=0;i<5;i++)
    {
        
        a[i][i]='v';
        a[i][9-i]='v';
    }
    
    for(i=0;i<5;i++)
    { 
        cout<<" ";
        for(j=0;j<10;j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
cout<<"\n";
}

void W()
{
      int i,j;
    char a[7][7];
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            a[i][j]=' ';
        }
    }
    
    for(i=0,j=0;j<7;j++,i++)
    {
        a[j][0]='w';
        a[j][6]='w';
        if(i>2)
        {
            a[i][6-j]='w';
            a[i][j]='w';
        }
        
    }
        
    for(i=0;i<7;i++)
    { 
        cout<<" ";
        for(j=0;j<7;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void X()
{
    int i,j;
    char a[7][7];
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            a[i][j]=' ';
        }
    }
    
    for(i=0,j=0;j<7;j++,i++)
    {
        a[6-i][j]='x';
        a[i][j]='x';
    }
    
    
    for(i=0;i<7;i++)
    { 
        cout<<" ";
        for(j=0;j<7;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void Y()
{
     int i,j;
    char a[7][7];
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            a[i][j]=' ';
        }
    }
    
    for(i=0;i<4;i++)
    {
        a[i][i]='y';
        a[i][6-i]='y';
    }
    for(;i<7;i++)
    a[i][3]='y';
    
    
    for(i=0;i<7;i++)
    { 
        cout<<" ";
        for(j=0;j<7;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

void Z()
{
    int i,j;
    char a[7][7];
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            a[i][j]=' ';
        }
    }
    
    for(i=0,j=0;j<7;j++,i++)
    {
        a[0][j]='z';
        a[i][6-j]='z';
        a[6][j]='z';
    }
    
    
    for(i=0;i<7;i++)
    {
        cout<<" ";
        for(j=0;j<7;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";
}

int code_by_SRIKANTH_VANAMALA_for_all_alphabets()
{
    int i;
    string name;
    cout<<"enter message :..."<<endl;
    getline(cin,name);
    for(i=0;name[i]!='\0';i++)
    {
        switch(name[i])
        {
            case ' ':cout<<endl<<endl<<endl<<endl;
                break;
            case 'a':
            case 'A':A();
                break;
            case 'b':
            case 'B':B();
                break;
            case 'c':
            case 'C':C();
                break;
            case 'd':
            case 'D':D();
                break;
            case 'e':
            case 'E':E();
                break;
            case 'f':
            case 'F':F();
                break;
            case 'g':
            case 'G':G();
                break;
            case 'h':
            case 'H':H();
                break;
            case 'i':
            case 'I':I();
                break;
            case 'j':
            case 'J':J();
                break;
            case 'k':
            case 'K':K();
                break;
            case 'l':
            case 'L':L();
                break;
            case 'm':
            case 'M':M();
                break;
            case 'n':
            case 'N':N();
                break;
            case 'o':
            case 'O':O();
                break;
            case 'p':
            case 'P':P();
                break;
            case 'q':
            case 'Q':Q();
                break;
            case 'r':
            case 'R':R();
                break;
            case 's':
            case 'S':S();
                break;
            case 't':
            case 'T':T();
                break;
            case 'u':
            case 'U':U();
                break;
            case 'v':
            case 'V':V();
                break;
            case 'w':
            case 'W':W();
                break;
            case 'x':
            case 'X':X();
                break;
            case 'y':
            case 'Y':Y();
                break;
            case 'z':
            case 'Z':Z();
                break;
        }
    }
    cout<<" **code by SRIKANTH VANAMALA**"<<endl;
    return 0;
}