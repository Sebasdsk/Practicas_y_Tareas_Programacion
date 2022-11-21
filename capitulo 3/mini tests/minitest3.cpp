#include <iostream>
/*
call stack
d() 4:1
b() 
a()
main()
*/
void d()
{
}

void c(){
   
}

void b()
{
    c();
    d();
}

void a()
{
    b();
}

int main()
{
    a();

    return 0;
}