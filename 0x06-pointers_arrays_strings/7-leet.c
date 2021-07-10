/**
 * leet -  converts string to LEET
 * @c: pointer to start of string
 *
 * Return: pointer to start of converted string
 */
char *leet(char *c)
{
char caps[] = "AEOTL";
char lows[] = "aeotl";
char leet[] = "43071";
int i;
char *k = c;
while (*k != 0)
{
for (i = 0; i < 5; i++)
{
if (*k == caps[i] || *k == lows[i])
{
*k = leet[i];
}
}
k++;
}
return (c);
}
