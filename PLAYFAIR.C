#include<stdio.h>
#include<string.h>


int main(){
	int i,n,j,k,c,r=0;
	char main_str[200],key[100];
	int ref[26];
    char mtx[5][5];

	printf("Enter The text  String : ");
	gets(main_str);
	fflush(stdin);
	printf("Enter the key : ");
	gets(key);

	for(i=0;i<26;i++){
	  ref[i]=0;
	}
	// for(i=0;i<strlen(key);i++){
	//   c=key[i];
	//   printf("%d ,",c);
	//   ref[c-97]=1;

	// }
	k=0;

	for(i=0;i<5;i++){
	  for(j=0;j<5;j++){


	       if(k<strlen(key) && ref[key[k]-97]!=1)
	       {
			    printf("%d",k);
		  		ref[key[k]-97]=1;
		  		mtx[i][j]=key[k];
				k++;
	       }	
		   if(ref[r]!=1 && r<26)
		   {
			   mtx[i][j]=97+r;
			   r++;
		   }
		   else{
			   r++;
			   continue;

			   
		   }
		   



	  }
	}


	//--------------------------output--------
	printf("\nThe main String Is :%s",main_str);
	printf("\nthe key is : %s\n",key);
	printf("\n the ref is  : \n");
	for(i=0;i<26;i++){
	  printf("%d ,",ref[i]);
	}
	printf("\n the metrinx is  : \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%c ",mtx[i][j]);
		}
		printf("\n");
	}




	
}
