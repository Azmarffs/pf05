#include<iostream> //Name: AzmarKashif Section: B Roll no: 22i-2716
using namespace std;
int n, m, n1, m1;
void verify_order(){
    int arr1[10][10];
    int arr2[10][10];
    cout<<"Enter Rows and columns for matrix 1: "<<endl;
    cin>>n>>m;
    while((n < 0 || m < 0) || (n < 0 && m < 0)){ //loop to check if user enter -ve n, m
        cout<<"Enter Rows and columns again for matrix 1: "<<endl;
        cin>>n>>m;
    }
    cout<<"Enter rows and columns for matrix 2:"<<endl;
    cin>>n1>>m1;
    while((n1 < 0 || m1 < 0) || (n1 < 0 && m1 < 0)){ //checking if user enters -ve n1, m1
        cout<<"Enter rows and columns again for matrix 2:"<<endl;
        cin>>n1>>m1;
    }
    if(n!=m1){
        cout<<"Multiplication is not possible"<<endl;
    }else{
        cout<<"Enter elements for matrix 1: "<<endl;
        for(int i=0;i<n;i++){ //loop for taking elements of matrix 1
            for(int j=0;j<m;j++){
                cin>>arr1[i][j];
            }
        }
        cout<<"First matrix is: "<<endl;
        for(int i=0;i<n;i++){ //loop to output matrix 1
            for(int j=0;j<m;j++){
                cout<<arr1[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"Enter elements for matrix 2:"<<endl;
        for(int i=0;i<n1;i++){ //loop for taking elements of matrix 2
            for(int j=0;j<m1;j++){
                cin>>arr2[i][j];
            }
        }
        cout<<"Second matrix is: "<<endl;
        for(int i=0;i<n1;i++){ //loop to output elements of matrix 2
            for(int j=0;j<m1;j++){
                cout<<arr2[i][j]<<" ";
            }
            cout<<endl;
        }
        /*
        Making new matrix to store 
        matrix1 and matrix 2
        */
        int i, j;
        int newArr[n][m1];
            for(int i=0;i<n;i++){
                for(int j=0;j<m1;j++){
                    newArr[i][j]=0; //initializing its elements equal to 0
            }
        }
        /*
        loop to multiply 
        matrix1*matrix2 and adding them
        */
        for(int i=0;i<n;i++){
            for(int j=0;j<m1;j++){
                for(int k=0;k<m;k++){
                    newArr[i][j]= newArr[i][j]+arr1[i][k]*arr2[k][j];
                }
            }
        }
        cout<<"New matrix after multiplication is: "<<endl;
        for(int i=0;i<n;i++){ //loop to output new matrix
            for(int j=0;j<m1;j++)
            {
            cout<<newArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    verify_order();
}