#include <iostream>
using namespace std;
int main() {

int t=1;
cin>>t;

for(int k=0;k<t;k++)
{
 int r =0;
 int c=0;
 //cout<<"row : ";
 cin >>r;
 //cout<<endl<<"coulmn : ";
 cin>>c;
 //c++;
   char** arr = new char*[r];
	//testing workflow
 
    for (int i = 0; i < r; i++) {
 
        // Declare a memory block
        // of size n
        arr[i] = new char[c];
	    //again testing
    }
 for (int i = 0; i < r; i++) {

            cin>>arr[i];

    }

  int count =0;
    for(int l=0;l<r;l++)
	{

		for(int m=0;m<c ;m++)
		{
		  int temp=0;
          if(arr[l][m]=='#')
		  {
		      temp++;
				for(int j=m+1;j<c;j++ )
				{
					if(arr[l][j]=='#')
					{
						temp++;
					}
					else 
					{
					    break;
					}
					
				
			}
		  }
		  if(temp>count )
		  {
			  count =temp;
		  }
		}
	}

for (int i = 0; i < r; i++) // To delete the inner
       {
		   delete[] arr[i];
	   }                         // arrays
        
    delete[] arr;


cout<<count<<endl;


}
}
