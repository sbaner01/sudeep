#include <stdio.h> // testing
int main(int argc, char** argv) // testing
{
char* ipString = argc > 1? argv[1] : "172.24.18.240"; // testing
char* ip = ipString;
unsigned int hex;

for( int i = 0; i < 4; i++ ){
unsigned int n = 0;
for( char c; (c = *ip) >= '0' && c <= '9'; ip++ )
n = 10 * n + c - '0';
hex = (hex << 8) + n;

if( *ip == '.' ) ip++;

}

printf("%08X\n", hex); // testing
return 0; // testing
