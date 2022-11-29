#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
#include<string>
using namespace std;
string alp[26]={"A", "B", "C", "D","E", "F","G", "H","I","J","K","L", "M", "N", "O", 
                "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y","Z"};
string cipher_Value[26]={"00000", "00001", "00010", "00011","00100", "00101","00110", "00111","01000",
                        "01001","01010","01011", "01100", "01101", "01110", "01111", "10000", "10001", 
                        "10010", "10011", "10100", "10101", "10110", "10111", "11000","11001"};
void look_Cipher_Decipher(string ch, string deCh){
    string cip="";  //we use it to store the cipher value
    cout<<"Enter a character to convert it into cipher: "<<endl;
    getline(cin, ch);
    for(int i=0;i<ch.length();i++){
        ch[i]=toupper(ch[i]); //converting lowercase to upper
    }
    for(int i=0;i<toupper(ch.length());i++){
        for(int j=0;j<26;j++){
            if(!(ch.substr(i,i+1)==alp[j])){ //this will compare the indexes of alp and cipher_Value
                cout<<"";
            }else{
                cip+=cipher_Value[j]; //this will concatenate strings
            }
        } 
    }
    cout<<cip<<endl;
    string de_Cip=""; //we use it to store the decipher value
    cout<<"Enter encoded text to decrypt it to character: "<<endl;
    getline(cin, deCh);
    for(int i=0;i<deCh.length();i++){
        for(int j=0;j<26;j++){
            if(!(deCh.substr(i, i+5)==cipher_Value[j])){ //this will compare the indexes of alp and cipher_Value
                cout<<"";
            }else{
                de_Cip+=alp[j]; //this will concatenate strings
            }
        } 
    }
    cout<<de_Cip<<endl;
}
void text_Cipher(string text){
    string C_text=""; //used to store binary conversion
    cout<<"Enter a text to convert to cipher: "<<endl;
    getline(cin, text);
    for(int i=0;i<text.length();i++){
        int asc_Val=static_cast<int>(i); //this converts each char to int
        bool Err(); //calling err func to check if asc_Value is greater than 0
        if(asc_Val%2==1){
            C_text+='1'; 
        }else{
            C_text+='0';
            asc_Val/=2;
        }
        reverse(C_text.begin(), C_text.end()); //reversing org string
        cout<<setprecision(5)<<setfill('0')<<C_text<<"";
    }
    cout<<endl;
}
bool Err(){
    int asc_Val;
    while(asc_Val>0){
        return true;
    }
    while(!asc_Val>0){
        return false;
    }
}
int main(){
    string character;
    string deCh;
    string text;
    look_Cipher_Decipher(character, deCh);
    text_Cipher(text);
}