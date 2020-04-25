#include<iostream>
#include<conio.h>
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
using namespace std;
int a[2][2]={1,2,0,3};
class swapn
{ public:
	int temp;
	void move(int check,int&x,int&y)
 	   {   if(check== RIGHT )
	       {
		       if(x>=0&&x<2&&y>=1)
                  cout<<"invalid move"<<endl;	      
            else 		  
		    {
			  cout<<"right"<<endl;   
              temp = a[x][y];
              a[x][y]=a[x][y+1];
              a[x][y+1] =temp;
            }
			}
			 if(check== LEFT )
               { 
			     if(x>=0&&x<2&&y<=0)
                  cout<<"invalid move"<<endl;	      
            else 		  
		    {
			  cout<<"left"<<endl;   
              temp = a[x][y];
              a[x][y]=a[x][y-1];
              a[x][y-1] =temp;
              }
            }
		     if(check== UP )  
			   {
			    if(x<=0&&y>=0&&y<2)
                  cout<<"invalid move"<<endl;	      
            else 		  
		    {
			  cout<<"up"<<endl;   
              temp = a[x][y];
              a[x][y]=a[x-1][y];
              a[x-1][y] =temp;
            }
            }
	   	      if(check== DOWN )
				 {
				   if(x>=1&&y>=0&&y<2)
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
	    for(int i = 0 ; i < 2 ; i++)
		{
		cout<<" +---+  +---+"<<endl;
		for(int j = 0 ; j < 2 ; j++)
		{
		cout<<" | "<<a[i][j]<<" | ";
		}
		cout<<endl;
		cout<<" +---+  +---+"<<endl;
	    }
	     cout<<"=================="<<endl;
        }
        checkarray()
          {
		  	if(a[0][1]==1&&a[0][1]==2&&a[1][0]==3&&a[1][1]==0)
      		return true;  
		    }
  };
int main()
{ int temp=0,i,j,n=0;
  swapn s;
       cout<<"before swap"<<endl;
         while(1)
		 { 
		  s.print();
		  cin>>n; 
		  //n = getch();
		  {for(i=0;i<2;i++)
	       {for(j=0;j<2;j++)
	        {
	         if (a[i][j]==0)
	         { //cout<<"loop run"<<i<<j<<endl;
		       s.move(n,i,j);
		       s.checkarray();	   
		   //    break;
	         }
	        }
	       }
	      }
	      cout<<"You Won!"<<endl;;
	     } 
	return 0; 
}
