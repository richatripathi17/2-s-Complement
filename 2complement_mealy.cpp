#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	int i,length;
	char inputstring[20],outputstring[20],state='x';
	printf("2's Complement\n");
	printf("Enter Input String :-");
	scanf("%s",inputstring);
	length=strlen(inputstring);
    	printf("Current state :- %c\t read right to left\n",state);
	for(i=(length-1);i>=0;i--){
		if(inputstring[i]=='1'){
			if(state=='x'){
				state='y';
				outputstring[i]='1';
				printf("state :- %c \t input :-%c\t output:-%c\n ",state,inputstring[i],outputstring[i]);
			
			}
			else if(state=='y'){
				state='y';
				outputstring[i]='0';
				printf("state :- %c \t input :-%c\t output:-%c\n ",state,inputstring[i],outputstring[i]);
			
			}
		
			
		}
		else if(inputstring[i]=='0'){
				if(state=='x'){
				state='x';
				outputstring[i]='0';
				printf("state :- %c \t input :-%c\t output:-%c\n ",state,inputstring[i],outputstring[i]);
			
			}
			else if(state=='y'){
				state='y';
				outputstring[i]='1';
				printf("state :- %c \t input :-%c\t output:-%c\n ",state,inputstring[i],outputstring[i]);
				
		}
		else{
			state='h';
			printf("Input string is not in Binary\t HAlT");
			break;
		}
		
	}
}
	outputstring[length]='\0';
	
	if(state=='y'){
			printf("\nOutput :-\t");
		printf("%s",outputstring);
	}
	getch();
}

