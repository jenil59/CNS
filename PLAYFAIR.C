#include <stdio.h>
#include <string.h>

int* find(char *a,char *b,char mtx[5][5])
{
	 int index[4];
	 int i,j;
	for(i=0;i<5;i++)
	{
	  for(j=0;j<5;j++)
	  {
        if(a==mtx[i][j])
	    {
			index[0]=i;
			index[1]=j;
		}
		if(b==mtx[i][j])
		{
			index[2]=i;
			index[3]=j;
		}
	  }
	}

	  return index;
	   
}

int main()
{
	int i, n, j, k, c, r = 0;
	char main_str[200], key[100];
	int ref[26];
	char mtx[5][5];
	int len,slen;
	char *nstr;

	printf("Enter The text  String : ");
	gets(main_str);
	fflush(stdin);
	printf("Enter the key : ");
	gets(key);


		

	//step 1

	for (i = 0; i < 26; i++)
	{
		ref[i] = 0;
	}
	
	k = 0;
	i = 0;
	j = 0;
	len = strlen(key);

	for (k = 0; k < len; k++)
	{
		if (!ref[key[k] - 97] && key[k]!='j')
		{
			printf(" k ");

			ref[key[k] - 97] = 2;
			mtx[i][j] = key[k];

			j++;

			if (j == 5)
			{
				i++;
				j = 0;
			}
		}
	}
    
	 ref['j'-97]=1;
     

	for(k=0;k<26;k++)
	{
		if(ref[k]==0)
		{
			mtx[i][j]=k+97;
			j++;
			if(j==5)
			{
				j=0;
				i++;
			}
		}
	}

		c=0;	

	// step 2   split the string 


 			for(i=0;i<strlen(main_str);i+=2)
			{
                 if(main_str[i]!=main_str[i+1])
				 {
					printf("\n%d\n",i);
					nstr[c++]=main_str[i];
					nstr[c++]=main_str[i+1];
				 }
				 else
				 {
					nstr[c++]=main_str[i];
					nstr[c++]='x';
					printf("\n at i+1 %d : %c",i,nstr[i+1]);
					i--;
				 } 
			}
			  

         for(i=0;i<strlen(nstr);i+=2)
		 {

		 }

			  

			

	//----------------------------------output--------------------------------------

	printf("\nThe main String Is :%s", main_str);
	printf("\nthe key is : %s\n", key);
	printf("\n the ref is  : \n");
	for (i = 0; i < 26; i++)
	{
		printf("%d ,", ref[i]);
	}
	printf("\n the metrinx is  : \n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%c ", mtx[i][j]);
		}
		printf("\n");
	}
	printf("\n------------------------------------------------\n");
	for(i=0;i<strlen(nstr);i++)
	    printf("%c",nstr[i]);
}
