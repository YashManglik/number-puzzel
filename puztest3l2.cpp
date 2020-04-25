#include<iostream>
#include<conio.h>
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
using namespace std;
int a[3][3]={1,2,3,4,5,6,7,0,8};
class swapn
{ public:
	int temp;
	void move(int check,int&x,int&y)
	   {  if(check==RIGHT)
	      {
		     if(x>=0&&x<3&&y>3)
                  cout<<"invalid move"<<endl;	      
            else 		  
		    {
			  cout<<"right"<<endl;   
              temp = a[x][y];
              a[x][y]=a[x][y+1];
              a[x][y+1] =temp;
            }
		    }
            if(check==LEFT)
			 {
			  if(x>=0&&x<3&&y<=0)
                  cout<<"invalid move"<<endl;	      
               else 		  
		      {
			  cout<<"left"<<endl;   
              temp = a[x][y];
              a[x][y]=a[x][y-1];
              a[x][y-1] =temp;
              }
		     }
		     if(check==UP)
			{
			    if(x<=0&&y>=0&&y<3)
                cout<<"invalid move"<<endl;	      
               else 		  
		       {
			   cout<<"up"<<endl;   
               temp = a[x][y];
               a[x][y]=a[x-1][y];
                 a[x-1][y] =temp;
               }
			   }
	   	       if(check==DOWN)
				 {
				 if(x>3&&y>=0&&y<3)
                  { cout<<"if from 4";
				  cout<<"invalid move"<<endl;
			      }
                  else 		  
		          { cout<<"else from 4";
			      cout<<"down"<<endl;   
                   temp = a[x][y];
                   a[x][y]=a[x+1][y];
                  a[x+1][y] =temp;
                 }
		        }
            } 
		  
	    void print()
		{
	    for(int i = 0 ; i < 3 ; i++)
		{
		cout<<" +---+  +---+  +---+"<<endl;
		for(int j = 0 ; j < 3 ; j++)
		{
		cout<<" | "<<a[i][j]<<" | ";
		}
		cout<<endl;
		cout<<" +---+  +---+  +---+"<<endl;
	    }
	     cout<<"=================="<<endl;
        }
        checkarray()
          {
		  	if(a[0][0]==1&&a[0][1]==2&&a[0][2]==3&&a[1][0]==4&&a[1][1]==5&&a[1][2]==6&&a[2][0]==7&&a[2][1]==8&&a[2][2]==0)
             cout<<"You Won!"<<endl;      	
		  	return true;  
			}  
      
	  };
int main()
{ int temp=0,i,j,n=0;
  swapn s;
       cout<<"before swap"<<endl;
       s.print();
	     while(1)
		 { 
		  //cin>>n; 
		  n = getch();
		  {for(i=0;i<3;i++)
	       {for(j=0;j<3;j++)
	        {
	         if (a[i][j]==0)
	         { //cout<<"loop run"<<i<<j<<endl;
		       s.move(n,i,j);
		       s.print();
			   s.checkarray();	   
		   //    break;
	         }
	        }
	       }
	      }
	     } 
	return 0; 
}
