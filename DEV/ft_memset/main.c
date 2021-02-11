#include <memory.h>
#include <stdio.h>
#include "libft.h"

int main( void )
{
   char buffer[] = "This is a test of the memset function";

   printf( "Before: %s\n", buffer );
   memset( buffer, '*', 4 );
   printf( "After:  %s\n", buffer );
   printf("Mine %p\n", ft_memset((char *)buffer, '*', 4));
   return 0;
}
