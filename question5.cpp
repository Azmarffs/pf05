#include<iostream>  //Name:Azmar kashif Section:B roll no:22i-2716
#include<unistd.h>
#include<ctime>
#include<stdlib.h>
using namespace std;
int counter;
int i=1,j=1;
const int row_NUM = 9;   
const int col_NUM = 16; 
int mouse_Shape=80 , mouse_Shape_Cheese=90;
int y= 0;
int mazeFormouse_Shape[row_NUM][col_NUM]={
	{69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69},
    {69, 80, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 69},
    {69, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 69},
    {69, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 69},
    {69, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 69},
    {69, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 69},
    {69, 90, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 69},
    {69, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 69},
    {69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69},
	};
void mouseMaze(int mazeFormouse_Shape[row_NUM][col_NUM]) //function to display mouse maze
{
	for(int posX = 0;posX<row_NUM;posX++)
	{
		for(int posY = 0;posY<col_NUM;posY++)
		{
			cout<<mazeFormouse_Shape[posX][posY]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}
void pathFormouse_Shape(int mazeFormouse_Shape[row_NUM][col_NUM]){ //shows mouse movement
	while(!(mazeFormouse_Shape[i][j-1]==mouse_Shape_Cheese)){	 //it means this loop continues until cheese is found
	srand(time(NULL));
	sleep(0.3);
	counter = rand() % 4;//to take value from 0 to 3
	if(counter==0){  //path for mouse movement
		if(mazeFormouse_Shape[i][j+1]==0){
			mazeFormouse_Shape[i][j]=y;
			mazeFormouse_Shape[i][j+1]=mouse_Shape;
			mouseMaze(mazeFormouse_Shape);
			j++;					
		}else{
            cout<<"Searching for Cheese"<<endl;
        }
	}else if(counter==2){ //path for mouse movement
		if(mazeFormouse_Shape[i+1][j]==0){
			mazeFormouse_Shape[i][j]=y;
			mazeFormouse_Shape[i+1][j]=mouse_Shape;
			mouseMaze(mazeFormouse_Shape);
			i++;
		}else{
            cout<<"Searching for Cheese"<<endl;
        }	
	}else if(counter==1){  //path for mouse movement
		if(mazeFormouse_Shape[i][j-1]==0){
			mazeFormouse_Shape[i][j]=y;
			mazeFormouse_Shape[i][j-1]=mouse_Shape;
			mouseMaze(mazeFormouse_Shape);
			j--;
		}else if (mazeFormouse_Shape[i][j-1]==mouse_Shape_Cheese){
			mazeFormouse_Shape[i][j]=y;
			mazeFormouse_Shape[i][j-1]=mouse_Shape;
			mouseMaze(mazeFormouse_Shape);
			j--;
		}else{
            cout<<"Searching for Cheese"<<endl;
        }	
	}
	sleep(1);
	system("cls");
	}
	cout<<"Finally! Cheese is found!"<<endl;
}
int main()
{	
    cout<<"*************MOUSE MAZE GAME***************"<<endl;
    char choice;
    cout<<"Do you want to start the game (y/n): ";  //path for mouse movement 
    cin>>choice;
    if(choice=='y'){ 
    	pathFormouse_Shape(mazeFormouse_Shape);
    }else{
        return false;  
    }
	return true;
}