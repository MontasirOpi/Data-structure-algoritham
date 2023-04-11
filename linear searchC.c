#include <stdio.h>
int linear_search(int arr[],int a,int k)
{
     for(int i=0;i<a;i++)
    {
        if(arr[i]==k)
        {
            return i;
        }

    }
    return -1;
}
int main() {

    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int ans=linear_search(arr,a,k);

   printf("%d",ans);
    return 0;
}

/*#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        if (arr[i] == k) {
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
*/
