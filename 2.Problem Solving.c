#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,id[100],j,ti=0;
    float cg[100],t=0;
    char name[100][100],temp[100];
    printf("Enter no of students:");
    scanf("%d",&n);

    printf("Enter the ID, Name and CGPA of students:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&id[i]);
        scanf("%s",&name[i]);
        scanf("%f",&cg[i]);

    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(cg[j]<cg[j+1])
            {
                t=cg[j];
                cg[j]=cg[j+1];
                cg[j+1]=t;

                ti=id[j];
                id[j]=id[j+1];
                id[j+1]=ti;


                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);

            }
        }
    }

    printf("\n");

    for(i=0; i<n; i++)
    {
        if(cg[i]==cg[i+1] && strcmp(name[i],name[i+1])>0)
        {

            strcpy(temp,name[i]);
            strcpy(name[i],name[i+1]);
            strcpy(name[i+1],temp);

            ti=id[i];
            id[i]=id[i+1];
            id[i+1]=ti;


        }
    }


    for(j=0; j<n; j++)
    {
        if(cg[j]==cg[j+1] && strcmp(name[j],name[j+1])==0)
        {

            if(id[j]>id[j+1])
            {
                t=cg[j];
                cg[j]=cg[j+1];
                cg[j+1]=t;

                ti=id[j];
                id[j]=id[j+1];
                id[j+1]=ti;


                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);

            }

        }

    }

    printf("The sorted names are:\n");

    for(i=0; i<n; i++)
    {
        puts(name[i]);
    }

}
