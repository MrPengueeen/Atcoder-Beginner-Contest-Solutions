#include <stdio.h>
#include <string.h>


int main()
{
    long int n;
    scanf("%ld", &n);
    char str2[n];
    char str[n];
    scanf("%s", str);
    long int j=0;
    
    for(int i=0; i<n; i++) {
        if(str[i] == str[i+1]) {
            continue;               
        }
        else {
            char c = str[i];     // You could just add a counter here that keeps track of the number of unmatched adjacent elements and print the result
            str2[j] = c;
            str2[j+1]= '\0';     // I did this just to find the resultant string with to matching adjacent elements. The problem DOES NOT require this
            j++ ;
            
        }
    }
    
    size_t len = strlen(str2);
    printf("%lu", len); 

    return 0;
}
