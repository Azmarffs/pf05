#include<iostream> //Name:Azmar kashif Roll no:22i-2716 Section: B
#include<cstdlib>
using namespace std;
int main()
{
	cout<<"::::::::::::::::::::::::::::::::::::::::---SPACESHIP---:::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"||                                                                                                  ||\n";
	const int h =20;
	char arr[h][h] = {{'\0'}}; //making 20 by 20 grid and storing the terminator(\0) of string in it
	//deploying 20 by 20 grid
	for(int i =0; i<20; i++)
	for(int j =0; j<20; j++)
		arr[i][j]='.';
    int horizontal=0; 
	int n; 
	int l; 
	string checker; 
	cout<<"Enter The Number of Spaceships "; 
	cin>>n;
	cout<<"Enter The Length of Spaceships "; 
	cin>>l;
	cout<<"Want to Enter Spaceships Horizontally or Vertically : ";
	cin>>checker;
	/*checking if user
	wants horizontal 
	or vertical string
	*/
	if((checker == "H") || (checker == "h")|| (checker == "Horizontally") || (checker == "horizontally"))
	{
		for(int i =0; i<n; i++)
		{
			int x; 
			int y;
			cout<<"Enter the location for "<<i+1<<" Spaceship"<<endl; 
			cout<<"Enter i : " ; 
			cin>>x;
			cout<<"Enter j : " ; 
			cin>>y;
		for(int j=x; j==x; j++)
		{
			for(int k=y; k<y+l; k++)
			{
				arr[j][k]='A';
		    }
		}
	}
	horizontal++;
	}
	//if user enters v for vertical
    else if((checker == "V") || (checker == "v")|| (checker == "vertically") || (checker == "Vertically"))
	{
	for(int i =0; i<n; i++)
	{
		int x;
		int y; 
		cout<<"Enter the location for "<<i+1<<" Spaceship"<<endl;
		cout<<"Enter i : " ;
		cin>>x;
		cout<<"Enter j : " ; 
		cin>>y;
		for(int j =x; j<x+l; j++ )
		{
			for(int k =y; k==y; k++)
				{
				arr[j][k]='A';
		    	}
			}
		}
	} 
    cout<<"\n:::::::::::::::::::::::::::Your Spaceships placed In :::::::::::::::::::::::::::::::: \n";
    cout<<"||                                                                                 ||   \n";
    for(int i=0; i<h; i++)
    {
    	for(int j=0; j<h; j++)
    		{
    			cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
    	if(horizontal!=0)
    	{
    	int bonus =0;
    	cout<<"Do You Want to Start Battle Round (y or n ): ";
    	char st; 
		cin>>st;
    	if((st == 'Y')|| (st =='y'))
		{
		system("CLS");
		cout<<"::::::::::::::::::::::::::::::::::Battle Round :::::::::::::::::::::::::::::::::::::::: \n";
		char arr1[h][h];
		/*during fight round 
		we will display it as 0
		*/
		for(int i =0; i<h; i++){
		for(int j =0; j<h; j++){
			arr1[i][j]='0';
		cout<<arr1[i][j]<<" ";
		} 
		cout<<endl;
		}
		int fj;
		int fi;
		cout<<"\n You Got five missile fire\n";
		cout<<"Enter the location 1 for fire \n";
		cout<<"Enter i "; 
		cin>>fi;
		cout<<"Enter j "; 
		cin>>fj;
		
		   if ((arr[fi][fj]== 'A'))
		   {
		   		bonus++; //if missile hits the target we inc bonus
		   	   	arr1[fi][fj]='H';
		   	   	while(arr[fi][fj] != '.')
		   	   	{
		   	     	fi--;	
			   	}
			   
			   	for(int k =fi+1; k==fi+1; k++)
			   	{
			   	 	for(int b =fj; b<fj+l; b++)
			   	  	{
			   	  		arr1[k][b]='H';
				  	}
			   	}
			   
			   	for(int m =0; m<h; m++)
			   	{
			   		for(int n =0; n<h; n++)
			   	 	{
			   	 		cout<<arr1[m][n]<<" ";
				 	}
				 	cout<<endl;
			   	}  
		   	}
		   	else
		   		cout<<"\nOOps!\n";
				cout<<"Enter the location 2 for fire \n";
				cout<<"Enter i ";  
				cin>>fi;
				cout<<"Enter j ";  
				cin>>fj;
		
		   	if ((arr[fi][fj]== 'A'))
		   	{
		   	   	bonus++;
		   	   	arr1[fi][fj]='H';
		   	   	while(arr[fi][fj] != '.')
		   	   	{
		   	     	fi--;	
			   	}
			   
			   	for(int k =fi+1; k==fi+1; k++)
			   	{
			   		for(int b =fj; b<fj+l; b++)
			   	  	{
			   	  		arr1[k][b]='H';
				  	}
			   	}
			   
			   	for(int m =0;m<h; m++)
			   	{
			   	 	for(int n=0;n<h; n++)
			   		{
			   	 		cout<<arr1[m][n]<<" ";
				 	}
				 	cout<<endl;
			   	}  
		   	}
		   	else
		   		cout<<"\nOOps!\n";
				cout<<"Enter the location 3 for fire \n";
				cout<<"Enter i ";  
				cin>>fi;
				cout<<"Enter j ";  
				cin>>fj;
		
		   	if ((arr[fi][fj]== 'A'))
		   	{
		   		bonus++;
		   	   	arr1[fi][fj]='H';
		   	   	while(arr[fi][fj] != '.')
		   	   	{
		   	    	fi--;	
			   	}
			   
			   	for(int k =fi+1; k==fi+1; k++)
			   	{
			   	  	for(int b =fj; b<fj+l; b++)
			   	  	{
			   	  		arr1[k][b]='H';
				  	}
			   	}
			   
			   	for(int m =0; m<h; m++)
			   	{
			   		for(int n =0; n<h; n++)
			   	 	{
			   	 		cout<<arr1[m][n]<<" ";
				 	}
				 	cout<<endl;
			   	}
		   	  
		   	}
		   	else
		   	cout<<"\nOOps!\n";
			cout<<"Enter the location 4 for fire \n"; //cant attack only 4 missiles
			cout<<"Enter i ";  
			cin>>fi;  //asking for location of missiles
			cout<<"Enter j ";  
			cin>>fj;
		
		   	if ((arr[fi][fj]== 'A'))
		   	{
		   		bonus++;
		   	   	arr1[fi][fj]='H';
		   	   	while(arr[fi][fj] != '.')
		   	   	{
		   	    	fi--;	
			   	}
			   
			   	for(int k =fi+1; k==fi+1; k++)
			   	{
			   		for(int b =fj; b<fj+l; b++)
			   	  	{
			   	  		arr1[k][b]='H';
				  	}
			   	}
			   
			   	for(int m =0; m<h; m++)
			   	{
			   		for(int n =0; n<h; n++)
			   	 	{
			   	 		cout<<arr1[m][n]<<" ";
				 	}
				 	cout<<endl;
			   	}
		   	  
		   	}
		   	else
		   	cout<<"\nOOps!\n";
			cout<<"Enter the location 5 for fire \n";
			cout<<"Enter i ";  
			cin>>fi;
			cout<<"Enter j ";  
			cin>>fj;
		
			if ((arr[fi][fj]== 'A'))
			{
		   		bonus++;
		   	   	arr1[fi][fj]='H';
		   	   	while(arr[fi][fj] != '.')
		   	   	{
		   	     	fi--;	
			   	}
			   
			   	for(int k =fi+1; k==fi+1; k++)
			   	{
			   		for(int b =fj; b<fj+l; b++)
			   	  	{
			   	  		arr1[k][b]='H';
				  	}
			   	}
			   
			   	for(int m =0; m<h; m++)
			   	{
			   		for(int n =0; n<h; n++)
			   	 	{
			   	 		cout<<arr1[m][n]<<" ";
				 	}	
				 	cout<<endl;
			   	}  
		   }   
		}
	 	cout<<"YOUR TRUE ATTEMPTS ARE : "<<bonus<<endl; //shows number of missiles attacked
	 	cout<<"Your Points are : "<<bonus*20;  //1 missiles = 20 score
    	}
    
    	if(horizontal==0)
    	{
    	int bonus=0;
    	char st; 
    	cout<<"Do You Want to Start Battle Round (y or n ): ";
		cin>>st;
    	if((st == 'Y')|| (st =='y'))
		{
		
		system("CLS");
		cout<<":::::::::::::::::::::::::::: Battle Round :::::::::::::::::::::::::::::: \n";
		char arr1[h][h];
		for(int i =0; i<h; i++){
		for(int j =0; j<h; j++){
				arr1[i][j]='0';
		cout<<arr1[i][j]<<" "; 
		}cout<<endl;
		}
		int fi;
		int fj;
		cout<<"\n You Got five missile fire\n";
		cout<<"Enter the location 1 for fire \n";
		cout<<"Enter i "; 
		cin>>fi;
		cout<<"Enter j "; 
		cin>>fj;
		
		   	if ((arr[fi][fj]== 'A'))
		   	{
		   		bonus++;
		   	   	arr1[fi][fj]='H';
		   	   	while(arr[fi][fj] != '.')
		   	   	{
		   	     	fj--;	
			   	}
			   
			   	for(int k =fi; k<fi+l; k++)
			   	{
			   	  	for(int b =fj+1; b==fj+1; b++)
			   	  	{
			   	  		arr1[k][b]='H';
				  	}
			   	}
			   
			   	for(int m =0; m<h; m++)
			   	{
			   	 	for(int n =0; n<h; n++)
			   	 	{
			   	 		cout<<arr1[m][n]<<" ";
				 	}
				 	cout<<endl;
			   	}	  
		   	}
		   	else
		   	cout<<"\nOOps!\n";
		   
			cout<<"Enter the location 2 for fire \n";
			cout<<"Enter i "; 
			cin>>fi;
			cout<<"Enter j "; 
			cin>>fj;		
		   	if ((arr[fi][fj]== 'A'))
		   	{
		   	   	bonus++;
		   	   	arr1[fi][fj]='H';
		   	   	while(arr[fi][fj] != '.')
		   	   	{
		   	     	fj--;	
			   	}
			   
			   	 for(int k =fi; k<fi+l; k++)
			   	{
			   	  	for(int b =fj+1; b==fj+1; b++)
			   	  	{
			   	  		arr1[k][b]='H';
				  	}
			   	} 
			   	for(int m =0; m<h; m++)
			   	{
			   	 	for(int n =0; n<h; n++)
			   	 	{
			   	 		cout<<arr1[m][n]<<" ";
				 	}
				 	cout<<endl;
			   	}	  
		   	}
		   	else
		   	cout<<"\nOOps!\n";  
			cout<<"Enter the location 3 for fire \n";
			cout<<"Enter i "; 
			cin>>fi;
			cout<<"Enter j "; 
			cin>>fj;
		   	if ((arr[fi][fj]== 'A'))
		   	{
		   		bonus++;
		   	    arr1[fi][fj]='H';
		   	   	while(arr[fi][fj] != '.')
		   	   	{
		   	     	fj--;	
			   	}
			   
			   	for(int k =fi; k<fi+l; k++)
			   	{
			   		for(int b =fj+1; b==fj+1; b++)
			   	  	{
			   	  		arr1[k][b]='H';
				  	}
			   	}
			   
			   	for(int m =0; m<h; m++)
			   	{
			   	 	for(int n =0; n<h; n++)
			   	 	{
			   	 		cout<<arr1[m][n]<<" ";
				 	}
				  	cout<<endl;
			   	}	  
		  	}
		   	 else
		   	cout<<"\nOOps!\n";
			 cout<<"Enter the location 4 for fire \n";
			cout<<"Enter i "; 
			cin>>fi;
			cout<<"Enter j "; 
			cin>>fj;

		   	if ((arr[fi][fj]== 'A'))
		   	{
		   		bonus++;
		   	   	arr1[fi][fj]='H';
		   	   	while(arr[fi][fj] != '.')
		   	   	{
		   	     	fj--;	
			   	}
			   
			   	for(int k =fi; k<fi+l; k++)
			   	{
			   	  	for(int b =fj+1; b==fj+1; b++)
			   	  	{
			   	  		arr1[k][b]='H';
				  	}
			   	}
			   
			   	for(int m =0; m<h; m++)
			   	{
			   	 	for(int n =0; n<h; n++)
			   	 	{
			   	 		cout<<arr1[m][n]<<" ";
				 	}
				 	cout<<endl;
			   	}   	  
		   	}
		   	else
		   	cout<<"\nOOps!\n";
		   
			cout<<"Enter the location 5 for fire \n";
			cout<<"Enter i "; 
			cin>>fi;
			cout<<"Enter j "; 
			cin>>fj;
		
		   	if ((arr[fi][fj]== 'A'))
		   	{
		   	    bonus++;
		   	   	arr1[fi][fj]='H';
		   	   	while(arr[fi][fj] != '.')
		   	   	{
		   	     	fj--;	
			   	}
			   
			   	for(int k =fi; k<fi+l; k++)
			   	{
			   	  	for(int b =fj+1; b==fj+1; b++)
			   	 	{
			   	  		arr1[k][b]='H';
				  	}
			   	}
			   
			   	for(int m =0; m<h; m++)
			   	{
			   	 	for(int n =0; n<h; n++)
			   	 	{
			   	 		cout<<arr1[m][n]<<" ";
				 	}
				 	cout<<endl;
			   	}
		   	}
		   	else
		   	cout<<"\nOOps!\n"; 
			cout<<"YOUR TRUE ATTEMPTS ARE : "<<bonus<<endl;
	 		cout<<"Your Points are : "<<bonus*20;          
		}
	}
} 