// C program to Open a File,
// Write in it, And Close the File

# include <stdio.h>
# include <string.h>

int main( )
{

	FILE *filePtr ;

	char x[50] = "Writing a sample code for question 2";


	filePtr = fopen(".c", "w") ;

	if ( filePtr == NULL )
	{
		printf( "abc.txt file failed to open." ) ;
	}
	else
	{

		printf("The file is now opened.\n") ;
		if ( strlen ( x ) > 0 )
		{

			fputs(x, filePtr) ;
			fputs("\n", filePtr) ;
		}

		fclose(filePtr) ;

		printf("Data successfully written in file abc.txt\n");
		printf("The file is now closed.") ;
	}
	return 0;
}
