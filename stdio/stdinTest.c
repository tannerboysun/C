#include <stdio.h>
	

	int main(void){
		
	char input;
	int line = 1;
	
	while((input = getchar()) != EOF && input != '\n'){
		printf("%d: ",line++);
		
		while(input != '\n'){

			printf("%c", input);
			input = getchar();
		}
		printf("\n");		
	}

}
