#include <bits/types/__FILE.h>
#include <stdio.h>
void main() {
    FILE *fp;
    char ch;
   
    // open the current input file
    fp = fopen(__FILE__,"r");

    do {
         ch = getc(fp);   // read character 
         putchar(ch);     // display character
    }
    while(ch != EOF);  // loop until the end of file is reached
    
    fclose(fp);
}