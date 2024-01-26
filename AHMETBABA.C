    //CÜMLEDEKİ HER HARFİN KAÇ TANE OLDUĞUNU YAZDIRAN KOD
    #include <stdio.h>
    #include <stdlib.h> 
    #include <time.h>
    void countCharacters(char sentence[],int x[]);
    int main()
    {   
        //HANGİ HARFTEN KAÇAR TANE VAR
        int i , x[26];
        char sentence[100];
        printf("Write the sentence: ");
        gets(sentence);
        countCharacters(sentence,x);
        for(i=0;i<26;i++)
        {
            printf("%c/%c : %d \n",'A'+i,'a'+i,x[i]);
        }

    }
   

    void countCharacters(char sentence[],int x[])
        {
            int i ;
            for(i=0;i<26;i++)
            {
                x[i]=0;
            }
            for(i=0;sentence[i] != '.';i++)
            {
                if(sentence[i]>='A' && sentence[i]<='Z')
                {
                    x[(int)sentence[i]-(int)'A']++;
                }

                if(sentence[i]>='a' && sentence[i]<='z')
                {
                    x[(int)sentence[i]-(int)'a']++;
                }
            }
        
        }