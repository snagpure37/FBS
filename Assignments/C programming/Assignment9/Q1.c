#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50] = "Namaste";
//	printf("Enter str1 as input : ");
//	gets(str1);
//	fgets(str1,sizeof(str1),stdin);
	
//	printf("%s",str1);
	
	printf("length of %s = %d\n",str1,strlen(str1));			//1
	
	char str2[50];
	char* cpy = strcpy(str2,str1);								//2
	printf("copied text : %s\n",str2);
	
	char str3[15] = "Namaskar!";
//	printf("Enter str3 as input : ");
//	fflush(stdin);
//	fgets(str3,sizeof(str3),stdin);
	int cmp = strcmp(str3,str1);								//3
	printf("\ncomparison : %d\n",cmp);
	
	char ch = '!';
//	printf("Enter a character to search : ");
//	fflush(stdin);
//	scanf("%c",&ch);
	char* chr = strchr(str3,ch);								//4
	printf("\n%c found at index %d\n",ch,chr-str3);
	printf("position of %c is %d\n",ch,chr-str3+1);
	
//	char str4[15];
//	printf("Enter str4 as input : ");
//	fflush(stdin);
//	fgets(str4,sizeof(str4),stdin);
	printf("reversed string : %s\n",strrev(str3));				//5
	
	char str5[15] = "hello World", str6[15];
	char* ncpy = strncpy(str6,str5,6);							//6
	printf("n copied text : %s\n",str6);
	
	char str7[15] = "hello", str8[15] = "World";
	printf("concatenated string : %s\n",strcat(str7,str8));		//7
	
	char str9[] = "hello";
	printf("Uppercase string : %s\n",strupr(str9));				//8
	printf("Lowecase string : %s\n",strlwr(strupr(str9)));		//9
	
	char str11[] = "Hi, my name is Ashish";
	printf("extracted string : %s\n",strstr(str11,"my"));			//10

	char str12[] = "Anjani", str13[] = "Anjaniputra";
	printf("case comparison : %d\n",strcasecmp(str12,str13));		//11
	
	char str14[] = "sakshi";
	printf("found at index %d\n",strchr(str14,'h')-str14);		//12
	printf("found at position %d\n",strchr(str14,'h')-str14+1);
	
	char str15[] = "sakshi";
	printf("found at index %d\n",strrchr(str15,'s')-str15);		//13
	printf("found at position %d\n",strrchr(str15,'s')-str15+1);

	char str16[] = "apple",str17[] = "applet";
	printf("N comparison : %d\n",strncmp(str16,str17,5));			//14
	
	char str18[] = "How you doing?",str19[] = "string";
	printf("concatenated string = %s\n",strncat(str18,str19,4));	//15
	
	char str20[] = "Anjani", str21[] = "Anjaniputra";
	printf("case n comparison : %d\n",strncasecmp(str20,str21,7)); //16
	
	char str22[10];
	int no = 50;
	sprintf(str22,"the value is %d and size is %d",no,sizeof(str22));	//17 //assigns the given characters into the staring variable 
	printf("string assigned : %s\n",str22);
	
	char str23[] = "Namaste! Bharat..";
	char p[] = "!";
	printf("%d \n",strcspn(str23,p));							//18 returns the location of punctuation mark found
	
	printf("%s \n",strerror(0));			//No error		//19
	printf("%s \n",strerror(1));			//Operation not permitted
	printf("%s \n",strerror(2));			//No such file or directory
	printf("%s \n",strerror(3));			//No such process
	printf("%s \n",strerror(4));			//Interrupted function call
	printf("%s \n",strerror(5));			//Input/output error
	printf("%s \n",strerror(6));			//No such device or address
	printf("%s \n",strerror(7));			//Arg list too long
	printf("%s \n",strerror(30));			//Read-only file system
	printf("%s \n",strerror(40));			//Function not implemented
	printf("%s \n",strerror(42));			//Illegal byte sequence	//last error code

	char str24[] = "oh! my eye, my eye..";
	char cha[] = ",";	
	strtok(str24,cha);						//20 returns the string found until the mark/ character provided as delimiters
	printf("string until %c found : %s\n",cha,str24);
	
	char str25[] = "Hello FRN-02J0125/030, I hope this email find you well";
	char chs[70] = "0123456789";
	char* pos = strpbrk(str25,chs);	//21 returns the string from containng the characters at the first occurance
	printf("string starting from word containing %s : %s\n",chs,pos);
	
	
}
