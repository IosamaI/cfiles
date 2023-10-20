//Write C program that listing Gregorian/Hijri months in a year using Array.

#include <stdio.h>

int main(){
char *Gregorian[] = { "January", "February", "March", "April", "May", "June",
  "July", "August", "September", "October", "November", "December"
};


char *hijri[] = {
  "Muharram", "Safar", "Rabi' al-Awwal", "Rabi' al-Thani", "Jumada al-Awwal", "Jumada al-Thaniyah",
  "Rajab", "Sha'ban", "Ramadan", "Shawwal", "Dhu al-Qi'dah", "Dhu al-Hijjah"
};

printf("(Gregorian)\n");
for(int i =0; i  < sizeof(Gregorian)/sizeof(Gregorian[0]) ;i++) {

    printf("%s\n", Gregorian[i]);
}

printf("\n(hijri)\n");
for(int i =0; i  < sizeof(hijri)/sizeof(hijri[0]) ;i++) {

    printf("%s\n", hijri[i]);
}


    return 0;
}