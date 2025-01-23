#include<stdio.h>

main()
{
int i=3;
char day[20],monday,tuesday,wednesday,thursday,friday,saturday;


printf("\n====================");
printf("\nCollage Time-Table");
printf("\n====================");
printf("\nEnter the day=");
scanf("%s",&day);
if(strcmp(day,"monday")==0)
{
printf("\nMONDAY\n");
printf("\nTime=8:00 to 8:50       Sub Name=CS,HT             Sir Name=Mmr sir");
printf("\n     8:50 to 9:40                Fundamental                Vk sir");
printf("\n     9:40 to 10:30               Office auto                 Purvaben");
printf("\n");
printf("\n     10:30 to 11:00_ _ _ _ _ _ _ BREAK _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printf("\n");
printf("\n     11:30 to 11:50              C lan(lab)                 Manojsir");
printf("\n     11:50 to 12:40              Web dev(th)                Kevalsir");
}

else if(strcmp(day,"tuesday")==0)
{
printf("\nTUESDAY\n");
printf("\nTime=8:00 to 8:50       Sub Name=CS,HT             Sir Name=Mmr sir");
printf("\n     8:50 to 9:40                Fundamental                Vk sir");
printf("\n     9:40 to 10:30               Ofice auto                 Purvaben");
printf("\n");
printf("\n     10:30 to 11:00_ _ _ _ _ _ _ BREAK _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printf("\n");
printf("\n     11:30 to 11:50              C lan(lab)                 Manojsir");
printf("\n     11:50 to 12:40              Web dev(th)                Kevalsir");
}

else if(strcmp(day,"wednesday")==0)
{
printf("\nWEDNESDAY\n");
printf("\nTime=8:00 to 8:50       Sub Name=CS,HT             Sir Name=Mmr sir");
printf("\n     8:50 to 9:40                Fundamental                Vk sir");
printf("\n     9:40 to 10:30               Ofice auto                 Purvaben");
printf("\n");
printf("\n     10:30 to 11:00_ _ _ _ _ _ _ BREAK _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printf("\n");
printf("\n     11:30 to 11:50              C lan(lab)                 Manojsir");
printf("\n     11:50 to 12:40              Web dev(th)                Kevalsir");
}

else if(strcmp(day,"thursday")==0)
{
printf("\nTHURSDAY\n");
printf("\nTime=8:00 to 8:50       Sub Name=C(lab)                     Sir Name=Manoj sir");
printf("\n     8:50 to 9:40                Fundamental                Vk sir");
printf("\n     9:40 to 10:30               Ofice auto                 Purvaben");
printf("\n");
printf("\n     10:30 to 11:00_ _ _ _ _ _ _ BREAK _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printf("\n");
printf("\n     11:30 to 11:50              C lan(th)                  Manojsir");
printf("\n     11:50 to 12:40              Web dev(lab)               Kevalsir");
}

else if(strcmp(day,"friday")==0)
{
printf("\nFRISDAY\n");
printf("\nTime=8:00 to 8:50       Sub Name=C(lab)                     Sir Name=Manoj sir");
printf("\n     8:50 to 9:40                Fundamental                Vk sir");
printf("\n     9:40 to 10:30               Ofice auto                 Purvaben");
printf("\n");
printf("\n     10:30 to 11:00_ _ _ _ _ _ _ BREAK _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printf("\n");
printf("\n     11:30 to 11:50              C lan(th)                  Manojsir");
printf("\n     11:50 to 12:40              Web dev(lab)               Kevalsir");
}

else if(strcmp(day,"saturday")==0)
{
printf("\nSATURDAY\n");
printf("\nTime=8:00 to 8:50       Sub Name=C(lab)                     Sir Name=Manoj sir");
printf("\n     8:50 to 9:40                Fundamental                Vk sir");
printf("\n     9:40 to 10:30               Ofice auto                 Purvaben");
printf("\n");
printf("\n     10:30 to 11:00_ _ _ _ _ _ _ BREAK _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printf("\n");
printf("\n     11:30 to 11:50              C lan(th)                  Manojsir");
printf("\n     11:50 to 12:40              Web dev(lab)               Kevalsir");
}
else if(strcmp(day,"sunday")==0)
{
printf("\n==========================HOLIDAY==============================");
}
else
{
printf("rong");
}
return 0;
}
