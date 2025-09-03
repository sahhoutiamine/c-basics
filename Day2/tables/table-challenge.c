#include <stdio.h>

void main () {
    int nmbrElem;
    int nmbr; 
    printf("entre le nombre des elements de tableau :"); 
    scanf("%d", &nmbrElem);
    int nmbrsTable [nmbrElem];
    for (int i = 0 ; i < nmbrElem ; i++) {
        printf("entrer l'element %d :", i+1);
        scanf("%d", &nmbr);
        nmbrsTable[i] = nmbr;
    } 
    for (int i = 0 ; i < nmbrElem ; i++) {
        printf("%d; ", nmbrsTable[i]);
    }
    int chooseNmbr;
    printf("\n1: max\n2: min\n3: delete\n4: trier\n5: trier des\n->");
    scanf("%d", &chooseNmbr);
    if (chooseNmbr == 1)
     {
        int initMax = nmbrsTable[0] ;
        for (int i = 1 ; i <= nmbrElem ; i++) 
        {
            if (initMax < nmbrsTable[i])
            {
                initMax = nmbrsTable[i];
            }
        }
        printf("Max : %d", initMax);
    }
    else if (chooseNmbr == 2)
    {
        int initMin = nmbrsTable[0] ;
        for (int i = 1 ; i < nmbrElem ; i++) 
        {
            if (initMin > nmbrsTable[i]) {
                initMin = nmbrsTable[i];
            }
        }
        printf("Min : %d", initMin);
    }
    else if (chooseNmbr == 3)
    {
        int index;
        printf("entrer l'index du nombre :");
        scanf("%d", &index);
        nmbrsTable[index-1] = 0;
        for (int i = index - 2 ; i >= 0 ; i--) 
        {
            int num = nmbrsTable[i];
            nmbrsTable[i + 1] = num;
        }
        // nmbrsTable[0] = 0;
        for (int i = 1 ; i < nmbrElem ; i++) 
        {
        printf("%d; ", nmbrsTable[i]);
        }
    }
    else if (chooseNmbr == 4)
    {
        for (int i = 0 ; i< nmbrElem ; i++)
        {
            for (int j = 0 ; j < nmbrElem ; j++)
            {
                if (nmbrsTable [i] < nmbrsTable[j]) 
                {
                    int rep = nmbrsTable [i];
                    nmbrsTable [i] = nmbrsTable [j];
                    nmbrsTable [j] = rep;
                }
            }
           

        }
         for (int i = 0 ; i < nmbrElem ; i++) 
        {
                printf("%d; ", nmbrsTable[i]);
        }
        
    


    }
    else if (chooseNmbr == 5)
    {
        for (int i = 0 ; i< nmbrElem ; i++)
        {
            for (int j = 0 ; j < nmbrElem ; j++)
            {
                if (nmbrsTable [i] > nmbrsTable[j]) 
                {
                    int rep = nmbrsTable [i];
                    nmbrsTable [i] = nmbrsTable [j];
                    nmbrsTable [j] = rep;
                }
            }
           

        }
         for (int i = 0 ; i < nmbrElem ; i++) 
        {
                printf("%d; ", nmbrsTable[i]);
        }
    }
    









    // else
    // {
    //     do
    //     {
    //         for (int i = 0 ; i < nmbrElem ; i++) 
    //         {
    //         printf("%d; ", nmbrsTable[i]);
    //         }
    //         printf("1 :max\n2: min\n3: delete\n");
    //         scanf("%d", &chooseNmbr);
    //         if (chooseNmbr == 1)
    //         {
    //             int initMax = nmbrsTable[0] ;
    //             for (int i = 1 ; i < nmbrElem ; i++) 
    //             {
    //                 if (initMax < i)
    //                 {
    //                     initMax = i;
    //                 }
    //             }
    //             printf("Max : %d", initMax);
    //         }
    //         else if (chooseNmbr == 2)
    //         {
    //             int initMin = nmbrsTable[0] ;
    //             for (int i = 1 ; i < nmbrElem ; i++) 
    //             {
    //                 if (initMin > i) {
    //                     initMin = i;
    //                 }
    //             }
    //             printf("Min : %d", initMin);
    //         }
    //         else if (chooseNmbr == 3)
    //         {
    //             int index;
    //             printf("entrer l'index du nombre :");
    //             scanf("%d", &index);
    //             for (int i = 0 ; i < index; i++) 
    //             {
    //                nmbrsTable[i+1] = nmbrsTable[i];
    //             }
    //             for (int i = 0 ; i < nmbrElem ; i++) 
    //             {
    //             printf("%d; ", nmbrsTable[i]);
    //             }
    // }
    //     } while (chooseNmbr != 1 || chooseNmbr != 2 || chooseNmbr != 3);
        
    // }
    
    
    
}