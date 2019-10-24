#include <stdio.h>
 
int main(int argc, char* argv[])
{
        int counter;
        if(argc==1){
                printf("No arg passed\n");
}
        else{
                for(counter=1; counter<argc; counter++)
                        printf("\nargv[%d]: %s", counter, argv[counter]);
}
}
