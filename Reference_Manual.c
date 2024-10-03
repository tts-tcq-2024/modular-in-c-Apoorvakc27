#include <stdio.h>



typedef struct
{
  int cable_num;
  char cable_major[10];
  char cable_minor[10];
}map;

void cable_pair_mapping_manual(map *map_manual)
{
  ColorPair colorPair;
  for(int i = 0 ; i<25 ;i++)
  {
    colorPair = GetColorFromPairNumber(i+1);
     map_manual[i].cable_num = i+1;
     sprintf(map_manual[i].cable_major,"%s",MajorColorNames[colorPair.majorColor]);
     sprintf(map_manual[i].cable_minor,"%s",MinorColorNames[colorPair.minorColor]);
  }
}

void cable_pair_manual_print(map *map_manual)
{
    for(int i=0;i<25;i++)
    {
        printf("%d  %s  %s\n",map_manual[i].cable_num,map_manual[i].cable_major,map_manual[i].cable_minor);
    }
}


