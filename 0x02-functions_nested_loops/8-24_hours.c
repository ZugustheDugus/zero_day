#include "main.h"
/**
 * jack_bauer - check the code.
 *
 * Return: of the king
 */
void jack_bauer(void)
{
int ha;
int hb;
int ma;
int mb;
for (ha = '0' ; ha <= '2' ; ha++)
{
for (hb = '0' ; hb <= '3' ; hb++)
{
for (ma = '0' ; ma <= '5' ; ma++)
{
for (mb = '0' ; mb <= '9' ; mb++)
{
_putchar(ha);
_putchar(hb);
_putchar(':');
_putchar(ma);
_putchar(mb);
_putchar('\n');
}
}
}
}
}
