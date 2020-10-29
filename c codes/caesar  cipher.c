#include<stdio.h>

int main()
{
	int i,c,sp;
	char str[100];

	printf("\nEnter string:\t");
	scanf("%s",str);
	
	printf("Enter shift pattern value: ");
	scanf("%d",&sp);
	
	printf("\n 1=Encrypt \n 2=Decrypt\n");
	scanf("%d",&c);

	switch(c)
	{
	case 1:
			for(i=0;(i<100 && str[i]!='\0');i++)
			str[i]=str[i]+sp;
			
			printf("\n Encrypted string:%s",str);
			break;
	case 2:
			for(i=0;(i<100 && str[i]!='\0');i++)
				str[i]=str[i]-sp;
			
			printf("\n Decrypted string:%s",str);
			break;		
			
			default:
			printf("Enter either 1 or 2, else Ctrl+C!");
	}
	return 0;
}