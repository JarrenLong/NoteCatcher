#include <iostream>
#include "windows.h"

using namespace std;
void setcolor(unsigned int color)
{
     HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hCon,color|FOREGROUND_INTENSITY);
}

int main()
{
    int freqs[10][10]={
    {14,28,55,110,220,440,880,1760,3520,7040},
    {15,31,62,124,247,500,988,1976,3951,7902},
    {8,16,33,65,131,262,523,1047,2093,4186},
    {9,18,37,73,147,294,587,1175,2349,4697},
    {10,21,41,82,165,330,659,1319,2637,5274},
    {11,22,44,87,175,349,699,1397,2794,11175},
    {13,25,49,98,196,392,784,1568,3136,12544}};
    int ck,cn,note,choice;
    system("cls");
    setcolor(103);
    cout<<"\t\t\t\tNOTE CATCHER v1.1\t\t\t\t\t\t\t    Created by Jarren G. Long\t\t\t\t"<<endl;
    setcolor(15);
    cout<<"\n\t\tNOTE:  The average human's range of hearing goes"<<endl;
    cout<<"\t    to about 35-40Hz (Hertz), which is about C# in octave 2"<<endl;
    cout<<"\t\t\t  (Below that you can't hear!)\n"<<endl;
    cout<<"\t\tThe highest frequency note in this program is 12.5mHz!\n\t    (though I can hear up to 16.5mHz...)\n"<<endl;
    setcolor(2);
    cout<<"\t\t\t           Octave"<<endl;
    cout<<"\t\t\t  o #0 A 0 1 2 3 4 5 6 7 8 9 |"<<endl;
    cout<<"\t\t\t  N #1 B 0 1 2 3 4 5 6 7 8 9 |"<<endl;
    cout<<"\t\t\t    #2 C 0 1 2 3 4 5 6 7 8 9 |"<<endl;
    cout<<"\t\t\t  e #3 D 0 1 2 3 4 5 6 7 8 9 |"<<endl;
    cout<<"\t\t\t  t #4 E 0 1 2 3 4 5 6 7 8 9 |"<<endl;
    cout<<"\t\t\t  o #5 F 0 1 2 3 4 5 6 7 8 9 |"<<endl;
    cout<<"\t\t\t  N #6 G 0 1 2 3 4 5 6 7 8 9 \\/\n"<<endl;
    cout<<"\t\t\t         ------------------> Highest Pitch"<<endl;
    cout<<"\t\t\t                                   G9"<<endl;
    setcolor(103);
    cout<<"Enter 1 to play a note\t\t\t\t\t\t\t        Enter 2 to play a frequency\t\t\t\t\t\t        Enter 3 to quit\t\t\t\t\t\t\t\t        "<<endl;
    setcolor(4);
    cin>>choice;
    switch(choice)
    {
    case 1:
    cout<<"Choose A Note(Input as 0-6):"<<endl;
    setcolor(4);
    cin>>ck;
    setcolor(15);
    cout<<"Choose Octave(0-9):"<<endl;
    setcolor(4);
    cin>>cn;
    setcolor(15);
    note=freqs[ck][cn];
    setcolor(2);
    cout<<"Frequency: " << note <<endl;
    Beep(note,1000);
    setcolor(15);
    system("pause");
    main();
    break;
    case 2:
    int freq;
    setcolor(2);
    cout<<"Enter frequency:"<<endl;
    setcolor(4);
    cin>>freq;
    Beep(freq,1000);
    setcolor(15);
    system("pause");
    main();
    break;
    case 3:
    system("cls");
    return 0;
    break;
}
return 0;
}
