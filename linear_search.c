#include<stdio.h>
void main()
{
int n;
printf("enter the number of elements");
scanf("%d",&n);
int i,a[n],flag=0,key;
printf("enter the elements in the array");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
printf("enter the element to be found");
scanf("%d",&key);
for(i=0;i<n;i++)
{

    if(key==a[i])
    {

        flag=1;
        break;
    }

}
if(flag==1)
printf("element %d is found at %d",key,i);
else
    printf("not found");
}
