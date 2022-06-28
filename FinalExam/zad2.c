#include <stdio.h>
 #include <string.h>

//everything is working in the main proccess



int main()
 {
    FILE *fp;
    char fileName[10];
    char fileData[10];
    int count=0;
    int sum=0;
    printf("type name of a file to read from: \n");

    scanf("%s", fileName);
    printf("The file you chose is: %s\n", fileName);
    // int size = ftell(fp);
    for(int i=0; i<strlen(fileName);i++){
    if(strcmp(fileName[i],"file1"))
    {
        fp = fopen("file1.bin","r");
        if(fp = fopen("file1.bin","r"))
        {
            printf("File 1 exists!\n");
           for(int i=0;i<strlen(fileData);i++){
            fscanf(fp,"%d", fileData[i]);
            if(strcmp(fileData[i], "1"))
            {
                count++;
                printf("+1 ");
            }
           }
           for (int i = 0; i < count; i++)
           {
            sum+=fileData[i];
           }
           
        }
        fclose(fp);
        fprintf(stdout,"\nThe sum of file1's 1's is: %d\n", sum);
    }

    //
    else if(strcmp(fileName[i],"file2"))
    {
        fp = fopen("file2.bin","r");
       if(fp = fopen("file2.bin","r"))
        {
            printf("File 2 exists!\n");
           for(int i=0;i<strlen(fileData);i++){
           fscanf(fp,"%d", fileData[i]);
        if(strcmp(fileData[i], "1"))
            {
                count++;
                printf("+1 ");
            }
           }
           for (int i = 0; i < count; i++)
           {
            sum+=fileData[i];
           }
           
        }
        fclose(fp);
        fprintf(stdout,"\nThe sum of file2's 1's is: %d", sum);

    }
 else if(strcmp(fileName[i],"file1"))
    {
        fp = fopen("file3.bin","r");

       if(fp = fopen("file3.bin","r"))
        {
            printf("File 3 exists!\n");
           for(int i=0;i<strlen(fileData);i++){
            fscanf(fp,"%d", fileData[i]);
            if(strcmp(fileData[i], "1"))
            {
                count++;
               printf("+1 ");
            }
           }
           for (int i = 0; i < count; i++)
           {
            sum+=fileData[i];
           }
           
        }
        fclose(fp);
        fprintf(stdout,"\nThe sum of file3's 1's is: %d", sum);

    }

    // fprintf(stdout,"file%d - %d", i, file[i]);
 }
    return 0;
 }