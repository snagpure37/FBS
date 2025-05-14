#include<stdio.h>
#include<string.h>

typedef struct Movie
{
	char title[30];
	char director[30];
	int releaseYear;
	char genre[15];
}Movie;

void addMovie(Movie*,int);
void displayMovie(Movie*, int);
int searchMovie(Movie*, int, char*);
void updateMovie(Movie*,int,Movie*);

void main()
{
	int size;
	printf("Enter number of movies you want to add : ");
	scanf("%d",&size);
	
	Movie movie[size];
	addMovie(movie,size);
	
	displayMovie(movie,size);
	
	char movieName[30];
	printf("\nWhat are you searching for? : ");
	fflush(stdin);
	gets(movieName);
	
	int movIndex = searchMovie(movie,size,movieName);
	printf("\nmovie title : %s\n",movie[movIndex].title);
	printf("movie Director : %s\n",movie[movIndex].director);
	printf("movie releasing year : %d\n",movie[movIndex].releaseYear);
	printf("movie genre : %s\n",movie[movIndex].genre);
	
//	char m[30];
//	printf("\nEnter the movie you want to update? : ");
//	fflush(stdin);
//	gets(m);
//	Movie up = searchMovie(movie,size,m);
//	updateMovie(movie,size,&up);
//	
//	printf("\nUpdated Movie : \n");
//	printf("movie title : %s\n",up.title);
//	printf("movie Director : %s\n",up.director);
//	printf("movie releasing year : %d\n",up.releaseYear);
//	printf("movie genre : %s\n",up.genre);
//
//	displayMovie(movie,size);
}

void updateMovie(Movie* mov,int size,Movie* up)
{
	Movie newMovie;
	printf("\nEnter new movie details\n");
	printf("title : ");
	fflush(stdin);
	gets(newMovie.title);
	
	printf("Director: ");
	fflush(stdin);
	gets(newMovie.director);
	
	printf("Releasing year : ");
	scanf("%d",&newMovie.releaseYear);
	
	printf("Genre : ");
	fflush(stdin);
	gets(newMovie.genre);
	
	strcpy(up->title,newMovie.title);
	strcpy(up->director, newMovie.director);
	up->releaseYear = newMovie.releaseYear;
	strcpy(up->genre, newMovie.genre);
	
//	return up;
}

int searchMovie(Movie* mov, int size, char* mName)
{
	int i;
	for(i=0; i<size; i++)
	{
		if(strcmp(mName,mov[i].title) == 0)
		{
			return i;
		}
	}
}

void displayMovie(Movie* mov, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("\nMovie %d\n",i+1);
		printf("Title = %s\nDirector = %s\nReleasing year = %d\nGenre = %s\n",mov[i].title,mov[i].director,mov[i].releaseYear,mov[i].genre);
	}
}

void addMovie(Movie* mov, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("\nEnter %d movie\n",i+1);
		
		printf("Enter Title :");
		fflush(stdin);
		gets(mov[i].title);
		
		printf("Enter Director's Name : ");
		fflush(stdin);
		gets(mov[i].director);
		
		printf("Enter the releasing year : ");
		scanf("%d",&mov[i].releaseYear);
		
		printf("Enter the genre : ");
		fflush(stdin);
		gets(mov[i].genre);
	}
}
