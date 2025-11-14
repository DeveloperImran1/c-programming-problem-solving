

#include <stdio.h>

// Aikhane hello function er moddhe theke hello() ke call kora hosse. Thats mean akta function nijei nijeke call kortese. So hello() holo akta recurtive function. Ar ai function er cholar full process ke recurion bole. Jeheto ai function ke off korar kono condition bolini, tai aita infite loop a pore jabe. Ai infinite exicute ke controll kora sikhbo.
void hello()
{
    printf("Hello\n");
    hello();
}

int main()
{
    printf("Hi\n");
    hello();

    return 0;
}