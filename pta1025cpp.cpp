#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
const int maxn = 100005;
struct node
{
    int key, before, next;
}a[maxn];
struct snode
{
    int address, key, next;
}b[maxn];
int main(void)
{
    //freopen("1025.txt", "r", stdin);
    memset(a, -1, sizeof(a));
    int head, k, n;
    scanf("%d %d %d", &head, &n, &k);
    for(int i = 0; i < n; i++)
    {
        int address, data, next;
        scanf("%d %d %d", &address, &data, &next);
        a[address].key = data;
        a[address].next = next;
    }
    //primary list
    int num = 0;
    while(head != -1)
    {
        //printf("%05d %d %05d %d \n", head, a[head].key, a[head].next, j);
        b[num].address = head;
        b[num].key = a[head].key;
        b[num++].next = a[head].next;
        head = a[head].next;
    }
    n = num;
    if(b[num-1].key == -1) n--;   //last test point: some nodes not in the list
    //for(int i = 0; i < j; i++) printf("%05d %d %05d\n", b[i].address, b[i].key, b[i].next);
    for(int i = 0; i < n/k; i++)
    {
        if(i) printf("%05d\n", b[k-1+i*k].address);
        for(int j = k-1; j > -1; j--)
        {
            printf("%05d %d ", b[j+i*k].address, b[j+i*k].key);
            if(j) printf("%05d\n", b[j-1+i*k].address);
        }
        if(i == n/k-1)
        {
            if(b[k-1+i*k].next == -1) printf("-1\n");
            else printf("%05d\n", b[k-1+i*k].next);
        }
    }
    for(int i = n-n%k; i < n; i++)
    {
        printf("%05d %d ", b[i].address, b[i].key);
        if(b[i].next == -1) printf("-1\n");
        else printf("%05d\n", b[i].next);
    }

    return 0;
}
