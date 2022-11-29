#include<iostream> //Name:AznarKashif Section:B Roll no:22i-2716
#include<cstring>
using namespace std;
int subString(int, int, string);
void error_Check(int start, int end, string text){ //func to check if user enters -ve values
        cout<<"Please enter postive values "
            <<"\nValue of start or end cant be negative";
}
int subString(int start, int end, string text){ //func to extract substring from a string
    cout<<"\n*****************SUBSTRING EXTRACTION******************"<<endl;
    cout<<"\nEnter from where to extract substring : ";
    cin>>start;
    cout<<"Enter from where to end it: ";
    cin>>end;
    if((start < 0 || end < 0) || (start < 0 && end < 0)){ //calling error func here 
        error_Check(start, end, text);
    }else{
        for(int i=start;i<=end;i++){
            cout<<text[i];
        }
        return text[100];
    }   
    cout<<endl<<endl;
}
void find(char patt[50], string text){ //func to check the index of a pattern
    cout<<"*****************INDEX OF PATTERN******************"<<endl;
    int i, j, le;
    cout<<"\nEnter the substring to check for index: "<<endl;
    cin>>patt;
    le=strlen(patt);
    for(i=0;i<text.length();i++){
        for(j=0;j<patt[j]!='\0';j++){
            if(!(text[i+j]==patt[j])){
                break;
            }else{
                cout<<"";
            }
        }
        if(j==le){
            cout<<i<<" is the index number";
        }
    }
    cout<<endl<<endl;
}
void replace(string patt, string text, int start, int end){
    cout<<"*****************REPLACED TEXT******************"<<endl;
    string re_Orgtext; //to store new replaced text
    int i= sizeof(text); //converting text to int
    cout<<"\nEnter pattern to replace: "<<endl;
    cin>>patt;
    cout<<"Enter the starting position for it: "<<endl;
    cin>>start;
    cout<<"Enter the ending position for it: "<<endl;
    cin>>end;
    if(patt>text || start < 0 || start > i || end < 0 || end > i){ //validation
        cout<<"ERROR! Please enter valid information or rerun the program "<<endl;
    }else{
        for (int i=0;i<text.length();i++ ){
            re_Orgtext+=text[i];  //replacing pattern with orgtext 
        }
        int re_Counter = 0;
        for (int j=start;j<=end;j ++){
            re_Orgtext[j] = patt[re_Counter]; //displaying new text
            re_Counter++; 
        }
    }
    cout<<re_Orgtext<<endl;
    cout<<"****************EXIT**************************"<<endl;
}
string invert(string text){ //func to invert a string
cout<<"\n*****************INVERTED TEXT******************"<<endl;
    cout<<"\nInverted string is: ";
    for(int i=text.length();i>=0;i--){ //starting loop from the last index of string to 0
        cout<<text[i];
    }
    cout<<endl<<endl;
}
int main(){
    int start, end, st, en;
    char patt1[50];
    string patt2;
    string text;
    cout<<"***************STRING MANUPUALTION**************"<<endl<<endl;
    cout<<"Enter any sentence: ";
    getline(cin, text);
    subString(start, end, text);
    invert(text);
    find(patt1, text);
    replace(patt2, text, st, en);
}