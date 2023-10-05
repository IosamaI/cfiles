# include <stdio.h>

int main()
{




 // Gregorian months
    char gregorianMonths[][20] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    
    // Hijri months
    char hijriMonths[][20] = {
        "Muharram", "Safar", "Rabi al-awwal", "Rabi al-Thani", "Jumada al-awwal", "Jumada al-Thani",
        "Rajab", "Sha'ban", "Ramadan", "Shawwal", "Dhu al-Qi'dah", "Dhu al-Hijjah"
    };
       
    printf("Gregorian Months\n");

for (int i=0; i < sizeof( gregorianMonths)/sizeof( gregorianMonths[0]); i+=1){

	printf("%s\n",gregorianMonths[i]);
}


   printf(" Hijri Months");
for (int j=0;j < sizeof(hijriMonths)/sizeof(hijriMonths[0]) ;j++)
{
	printf("%s\n",hijriMonths[j]);
}




return 0;
}
