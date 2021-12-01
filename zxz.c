#include<stdio.h>
#include<string.h>


void main(){
	int i,n,j,k,c;
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
	for(i=0;i<strlen(key);i++){
	  c=key[i];
	  printf("%d ,",c);
	  ref[c-97]=1;

	}
	k=0;

	// for(i=0;i<5;i++){
	//   for(j=0;j<5;j++){


	//        if(k<strlen(key) && ref[key[i]-97]!=1)
	//        {
	// 	  ref[key[k]-97]=1;
	// 	  mtx[i][j];


	//        }


	//   }
	// }


	//--------------------------output--------
	printf("\nThe main String Is :%s",main_str);
	printf("\nthe key is : %s\n",key);
	for(i=0;i<26;i++){
	  printf("%d ,",ref[i]);
	}



	
}
