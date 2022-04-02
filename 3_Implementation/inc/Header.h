#ifndef HEADER_H
#define HEADER_H

#ifdef __C
{
#endif
    
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>

int main();


struct user {

    char phone[49];
	char ac[50];
	char password[49];
	float balance;
    };


#ifdef __C
}
#endif

#endif /* HEADER_H */
