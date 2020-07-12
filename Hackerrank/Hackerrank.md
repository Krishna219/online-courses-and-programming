# Hackerrank Problems solved
![](https://hrcdn.net/hackerrank/assets/styleguide/logo_wordmark-13074b67abceb42ce8fd38bdeaac6926.svg)

S.No|Challenge|Contest|Language
----|---------|-------|--------
1|Pairwise Sum and Divide|Ad Infinitum 8 - Math Programming Contest|c
2|Tell the Average|Ad Infinitum 8 - Math Programming Contest|c
3|2D Array - DS|Master|c
4|ACM ICPC Team|Master|c
5|Angry Professor|Master|c
6|Arrays - DS|Master|c
7|Bigger is Greater|Master|c
8|Chocolate Feast|Master|c
9|Closest Numbers|Master|c
10|Connecting Towns|Master|c
11|Correctness and the Loop Invariant|Master|c
12|Counting Sort 1|Master|c
13|Counting Sort 2|Master|c
14|Counting Sort 3|Master|c
15|Cut the sticks|Master|c
16|Diagonal Difference|Master|c
17|Filling Jars|Master|c
18|Find Digits|Master|c
19|Flipping bits|Master|c
20|Gemstones|Master|c
21|Halloween party|Master|c
22|Handshake|Master|c
23|Insertion Sort - Part 1|Master|c
24|Insertion Sort - Part 2|Master|c
25|Manasa and Stones|Master|c
26|Max Min|Master|c
27|Maximizing XOR|Master|c
28|Maximum Draws|Master|c
29|Mini-Max Sum|Master|c
30|Plus Minus|Master|c
31|Quicksort 1 - Partition|Master|c
32|Quicksort 2 - Sorting|Master|c
33|Quicksort In-Place|Master|c
34|Red John is Back|Master|c
35|Restaurant|Master|c
36|Reverse Game|Master|c
37|Running Time of Algorithms|Master|c
38|Running Time of Quicksort|Master|c
39|Service Lane|Master|c
40|Sherlock and Divisors|Master|c
41|Sherlock and GCD|Master|c
42|Sherlock and Squares|Master|c
43|Sherlock and The Beast|Master|c
44|Solve Me First|Master|c
45|Staircase|Master|c
46|The Full Counting Sort|Master|c
47|The Love-Letter Mystery|Master|c
48|Utopian Tree|Master|c
49|Intro to Tutorial Challenges|Master|cpp
50|"Day 0: Hello| World."|Master|java
51|Day 1: Data Types|Master|java
52|Average Population|Master|mysql
53|Employee Names|Master|mysql
54|Employee Salaries|Master|mysql
55|Higher Than 75 Marks|Master|mysql
56|Japan Population|Master|mysql
57|Japanese Cities' Attributes|Master|mysql
58|Japanese Cities' Names|Master|mysql
59|Population Density Difference|Master|mysql
60|Revising the Select Query II|Master|mysql
61|The Blunder|Master|mysql
62|Weather Observation Station 10|Master|mysql
63|Weather Observation Station 11|Master|mysql
64|Weather Observation Station 12|Master|mysql
65|Weather Observation Station 14|Master|mysql
66|Weather Observation Station 15|Master|mysql
67|Weather Observation Station 16|Master|mysql
68|Weather Observation Station 17|Master|mysql
69|Weather Observation Station 18|Master|mysql
70|Weather Observation Station 19|Master|mysql
71|Weather Observation Station 3|Master|mysql
72|Weather Observation Station 4|Master|mysql
73|Weather Observation Station 5|Master|mysql
74|Weather Observation Station 6|Master|mysql
75|Weather Observation Station 7|Master|mysql
76|Weather Observation Station 8|Master|mysql
77|Weather Observation Station 9|Master|mysql
78|Revising the Select Query I|Master|oracle
79|Select All|Master|oracle
80|Select By ID|Master|oracle
81|Weather Observation Station 1|Master|oracle
82|Sequence Equation|101 Hack 45|python
83|A Very Big Sum|Master|python
84|CamelCase|Master|python
85|Compare the Triplets|Master|python
86|Journey to the Moon|Master|python
87|Simple Array Sum|Master|python
88|Sock Merchant|Master|python
89|The Hurdle Race|Master|python
90|Project Euler #1: Multiples of 3 and 5|ProjectEuler+|python
91|Project Euler #2: Even Fibonacci numbers|ProjectEuler+|python
92|Candy Replenishing Robot|Week of Code 30|python
93|Find the Minimum Number|Week of Code 30|python
94|Melodious password|Week of Code 30|python
95|Range Modular Queries|Week of Code 30|python

___

## Challenge 1: Pairwise Sum and Divide 
#### Contest : Ad Infinitum 8 - Math Programming Contest  
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int T, k;
scanf( "%d" ,&T);
for( k = 0 ; k < T ; k++ )
{
    long long N, i, j;
    scanf("%lld", & N);
    long long a[N], sum = 0;
    for ( i = 0; i < N ; i++ )
        scanf("%lld", &a[i]);
    for( i = 0 ; i < N ; i++ )
        {
        for( j = i+1 ; j < N ; j++ )
            sum += ( a[i] + a[j] ) / ( a[i] * a[j] );
    }
    printf ( "%lld\n", sum);
}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 2: Tell the Average 
#### Contest : Ad Infinitum 8 - Math Programming Contest  
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long N, i;
    scanf("%ld", &N);
    long list[N], sum = 0, a, b, ave;
    for (i = 0;i < N;i++)
        {
        scanf("%ld", &list[i]);
        if(i > 0)
            {
            a = list[0];
            b = list[i];
            list[0] = a + b + a * b;
            sum += list[0] % 1000000007; 
            }
        
    }
    ave = sum / (N - 1);
    printf("%ld", ave);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 3: 2D Array - DS 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[6][6];
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    int largest_sum =0;
    for(int i=1;i<5;i++)
        {
        for(int j=1;j<5;j++)
            {
            int sum = arr[i][j] + arr[i-1][j-1] + arr[i+1][j+1] + arr[i-1][j] + arr[i-1][j+1] + arr[i+1][j-1] + arr[i+1][j];
            if(sum > largest_sum) largest_sum =sum;
        }
    }
    printf("%d",largest_sum);
    return 0;
}

``` 
## Challenge 4: ACM ICPC Team 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int i,j,k,no_of_persons,no_of_subjects,count=0,max_sub_known=0;
    scanf("%d %d",&no_of_persons,&no_of_subjects);
    char a[no_of_persons][no_of_subjects];
    int sub_known[no_of_persons][no_of_subjects];
    for(i=0;i<no_of_persons;i++)
        scanf("%s",a[i]);
    for(i=0;i<no_of_persons;i++)
        {
        for(j=no_of_persons-1;j>i;j--)
            {
            sub_known[i][j]=0;
            for(k=0;k<no_of_subjects;k++)
                {
                if(a[i][k]=='1'||a[j][k]=='1')
                    sub_known[i][j]+=1;
                if(sub_known[i][j]>max_sub_known)
                    max_sub_known=sub_known[i][j];
                }
            }
        }
    for(i=0;i<no_of_persons;i++)
        {
        for(j=no_of_persons-1;j>i;j--)
            {
            if(sub_known[i][j]==max_sub_known)
                count+=1;
            }
        }
    
        printf("%d\n%d",max_sub_known,count);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 5: Angry Professor 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k; 
        scanf("%d %d",&n,&k);
        int a[n];
        for(int a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
        }
        int students_present = 0;
        for(int i = 0; i < n; i++)
            if(a[i]<=0)students_present+=1;
        if(students_present < k) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

``` 
## Challenge 6: Arrays - DS 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *arr = malloc(sizeof(int) * n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i = n-1;arr_i>=0;arr_i--)
        printf("%d ",arr[arr_i]);
    return 0;
}

``` 
## Challenge 7: Bigger is Greater 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long long T;
    scanf("%lld",&T);
    while(T>0)
        {
        char a[100],*b,c[100]="\0";
        int i,if_not=0;
        scanf("%s",a);
        for(i=strlen(a)-2;i>=0;i--)
            {
            if(a[i]<a[i+1])
                {
                char local;
                int j,k,diff,large=25;
                if_not+=1;
                b=strrchr(a,a[i]);
                strncpy(c,a,strlen(a)-strlen(b));
                printf("%s",c);
                for(j=1;j<strlen(b);j++)
                    {
                    diff=*b-*(b+j);
                    if(abs(diff)<large)
                        {large=abs(diff);local=*(b+j);}
                    }
                printf("%c",local);
                for(j=0;j<strlen(b);j++)
                    {
                    for(k=strlen(b)-1;k>j;k--)
                        {
                        if(*(b+j)>*(b+k))
                            {
                            char swap;
                            swap=*(b+j);
                            *(b+j)=*(b+k);
                            *(b+k)=swap;
                            }  
                        }
                    }
                for(j=0;j<strlen(b);j++)
                    {
                    if(*(b+j)!=local)
                        printf("%c",*(b+j));
                    }
                break;
                }
        }
        if(if_not==0)
            printf("no answer");
        printf("\n");
        T-=1;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 8: Chocolate Feast  
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m;
    scanf("%d", &t);
    while (t>0)
    {
        scanf("%d%d%d",&n,&c,&m);
        int answer = 0,d=0,rem=0,w;
        answer=n/c;
        d=answer;
        while(d/m)
        {answer+=d/m;
         d=d/m+d%m;}
        
        /** Write the code to compute the answer here. **/
        
        printf("%d\n",answer);
        t--;
    }
    return 0;
}

``` 
## Challenge 9: Closest Numbers 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int T;
    scanf("%d", &T);
    long int array[T], a[T-1], b[T-1], i, j, k;
    unsigned long diff;
    for(i=0;i<T;i++)
        scanf("%ld",&array[i]);
    k=0;
    diff = ~0;
    for(i=0;i<T;i++)
        {
        for(j=i+1;j<T;j++)
            {
            long int temp = abs(array[i] - array[j]);
            if(temp < diff)
                {
                diff = temp;
                k = 0;
                a[k] = array[i];
                b[k] = array[j];
                k++;
            }
            else if (temp == diff)
                {
                a[k] = array[i];
                b[k] = array[j];
                k++;
            }
        }
    }
    for(i=0;i<k;i++)
        a[k+i]=b[i];
    for(i=0;i<2*k;i++)
        {
        for(j=i;j<2*k;j++)
            {
            if(a[i] > a[j])
                {
                long temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
        
    for(i=0;i<2*k;i++)
        printf("%ld ", a[i]);
    return 0;
}

``` 
## Challenge 10: Connecting Towns 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int num = 0; num < t; num++)
        {
        int towns;
        scanf("%d", &towns);
        int routes;
        long long int total_routes = 1;
        for(int i = 1; i < towns; i++)
            {
            scanf("%d", &routes);
            total_routes = (total_routes % 1234567 * routes % 1234567);
            }
        printf("%lld\n", total_routes );
            
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 11: Correctness and the Loop Invariant 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>


void insertionSort(int N, int arr[]) {
    int i,j;
    int value;
    for(i=1;i<N;i++)
    {
        value=arr[i];
        /*printf("\n%d, %d", i, value);*/
        j=i-1;
        /*printf("%d", j);*/
        while(j>=0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j + 1]=value;
    }
    for(j=0;j<N;j++)
    {
        printf("%d",arr[j]);
        printf(" ");
    }
}
int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);

    return 0;
}

``` 
## Challenge 12: Counting Sort 1 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int array_size;
    scanf("%d", &array_size);
    int array[array_size], i,j;
    int count[100]= {0};
    for(i=0;i<array_size;i++)
        scanf("%d",&array[i]);
    for(i=0;i<100;i++)
        {
        for(j=0;j<array_size;j++)
            {
            if(array[j]==i)
                count[i]+=1;
        }
    }
    for(i=0;i<100;i++)
        printf("%d ", count[i]);
    return 0;
}

``` 
## Challenge 13: Counting Sort 2 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int array_size;
    scanf("%d", &array_size);
    int array[array_size], i,j;
    int count[100]= {0};
    for(i=0;i<array_size;i++)
        scanf("%d",&array[i]);
    for(i=0;i<100;i++)
        {
        for(j=0;j<array_size;j++)
            {
            if(array[j]==i)
                count[i]+=1;
        }
    }
    for(i=0;i<100;i++)
        {
        for(j=0;j<count[i];j++)
        printf("%d ", i); 
    }
    return 0;
}

``` 
## Challenge 14: Counting Sort 3 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int array_size;
    scanf("%d", &array_size);
    int array[array_size], i,j;
    int count[100]= {0};
    char s[array_size][10];
    for(i=0;i<array_size;i++)
        {
        scanf("%d",&array[i]);
        scanf("%s", s[i]);
    }
    for(i=0;i<100;i++)
        {
        for(j=0;j<array_size;j++)
            {
            if(array[j]<=i)
                count[i]+=1;
        }
    }
    /*for(i=0;i<100;i++)
        printf("%d ", array[i]);
    printf("\n");*/
    for(i=0;i<100;i++)
        printf("%d ", count[i]);
    return 0;
}

``` 
## Challenge 15: Cut the sticks 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N;
    scanf("%d",&N);
    int a[N],b,i;
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    b=N;
    while(b>0)
        {
        int c=0,j,x=0;
        for(j=0;j<N;j++)
            c+=a[j];
        if(c==0)
            break;
        for(j=0;j<N;j++)
            {if(a[j]<c&&a[j]>0)
                c=a[j];
            if(a[j]==0)
            x+=1;}
        b=N-x;
        printf("%d\n",b);
        for(j=0;j<N;j++)
        {if(a[j]!=0)
            a[j]-=c;
         }
        
        
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 16: Diagonal Difference 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int a[n][n];
    int sum_main = 0;
    int sum_trail = 0;
    int abs_dif = 0;
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
           
          if (a_i == a_j)
          {
              sum_main += a[a_i][a_j];
              //printf("\n%d \t %d", a[a_i][a_j], sum_main);
          }
           
          //printf("\n%d %d ", a_i + a_j, n-1);
           
          if((a_i + a_j) == (n - 1))
          {
              sum_trail += a[a_i][a_j];
              //printf("\n%d \t %d", a[a_i][a_j], sum_trail);
          }
          
       }
    }
    
    //printf("%d\n", sum_main);
    //printf("%d\n", sum_trail);
    
    abs_dif = sum_main - sum_trail;
    
    if (abs_dif < 0)
        abs_dif = -abs_dif;
    
    printf("%d\n", abs_dif);
    
    /*for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          printf("%d ",a[a_i][a_j]);
       }
       printf("\n");
    }*/
    
    return 0;
}

``` 
## Challenge 17: Filling Jars 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long long N,M,i,j;
    scanf("%lld %lld",&N,&M);
    long double a[M],b[M],k[M],t[N],total=0,average;
    for(i=0;i<N;i++)
        t[i]=0;
    for(i=0;i<M;i++)
        {
        scanf("%llf %llf %llf",&a[i],&b[i],&k[i]);
        for(j=a[i]-1;j<=b[i]-1;j++)
            t[j]+=k[i];
    }
    for(i=0;i<N;i++)
        total+=t[i];
    average=total/N;
    printf("%.0llf",average);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 18: Find Digits 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        int number = n;
        int divisors = 0;
        while(n>0)
            {
            int digit = n%10;
            if(digit)
                if(number%digit == 0)divisors+=1;
            n=n/10;
        }
        printf("%d\n",divisors);
    }
    return 0;
}

``` 
## Challenge 19: Flipping bits 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T, i;
    scanf("%d", &T);
    unsigned int a;
    for(i=0;i<T;i++)
        {
        scanf("%u",&a);
        a=~a;
        printf("%u\n",a);
    }
    return 0;
}

``` 
## Challenge 20: Gemstones 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
 int count=0;
    char b;
    int i,j,l,N,k;
    scanf("%d",&N);
    char a[N][100];
    for(i=0;i<N;i++)
    scanf("%s",a[i]);
for(l=0;a[0][l]!='\0';l++)
{
    k=0;
    b=a[0][l];
    for(i=0;i<10;i++)
        {j=0;
    if(strchr(a[i],b)!='\0')
    {j+=1;k+=1;
    }
        }
   if(k==N)
       count+=1;
}
    printf("%d\n",count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 21: Halloween party 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
unsigned long long max_cuts(unsigned long long a)
    {
    unsigned long long n,c;
    c=a%2;
    n=a/2;
    if(c==0)
        return (n*n);
    else
        return (n*(n+1));
}
int main() {
int T;
    scanf("%d",&T);
    int i;
    unsigned long long cuts[T],K[T];
    for(i=0;i<T;i++)
        {
        scanf("%llu",&K[i]);
        cuts[i]=max_cuts(K[i]);
    }
    for(i=0;i<T;i++)
        printf("%llu\n",cuts[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 22: Handshake 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fact(int num)
{
    int prod = 1;
    if(num == 0 || num == 1)
        return 1;
    for(int i = 1; i <= num; i++)
        prod *= i;
    return prod;
}
int main() {
    int t;
    scanf("%d", &t);
    for(int num = 0; num < t; num++ )
        {
        int n;
        int hand_shakes = 0;
        scanf("%d", &n);
        if(n == 1)
            {
            printf("%d\n", hand_shakes);
            continue;
            }
        hand_shakes = fact(n) /( fact(2) * fact(n - 2) );
        printf("%d\n", hand_shakes);
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 23: Insertion Sort - Part 1 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int size, int *arr)
{
    /*printf("%d %d", size, *(arr + 3));*/
    
    /*variables that store the value of the right most element in the array and its position which is one less than size note array always stores from (0, size - 1)*/
    
    int right_most_element, element_pos;
    element_pos = size - 1;
    right_most_element = *(arr + element_pos);
        
    /*printf("%d %d\n", element_pos, right_most_element);*/
    while (element_pos >= 0)
    {   
        /*printf("\n%d %d\n", element_pos, *(arr + element_pos));*/
        
        if(*(arr + element_pos) > right_most_element)
        {
            /*shifting the elemnent that is greater than the right most element by one position to the right*/
            *(arr + element_pos + 1) = *(arr + element_pos);
            if( element_pos == 0)
            {
            /*This case arises when no element is lesser than the right most element. In that case shift the element to the next right position and place the right most element in that position*/

            *(arr + element_pos) = right_most_element; 
            }
            for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");
            
        }
        else if(*(arr + element_pos) < right_most_element)
        {
            /*placing the right most element in the position next to the current element position*/
            *(arr + element_pos + 1) = right_most_element;
             for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");
        }
        
        element_pos -= 1;
    }
}

int main(void) 
{
    int array_size;
    scanf("%d", &array_size);
    /*printf("%d", array_size);*/
    int num, array[array_size];
    for(num = 0; num < array_size; num++ )
        scanf("%d", &array[num]);
    /*for(num = 0; num < array_size; num++ )
        printf("%d", array[num]);*/
    insertionSort(array_size, array);
    return 0;
}

``` 
## Challenge 24: Insertion Sort - Part 2 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int size, int *arr, int pos)
{
    /*printf("%d %d", size, *(arr + 3));*/
    
    /*variables that store the value of the right most element in the array and its position which is one less than size note array always stores from (0, size - 1)*/
    
    int right_most_element, element_pos;
    element_pos = pos;
    right_most_element = *(arr + pos);
        
    /*printf("%d %d\n", element_pos, right_most_element);*/
   for (element_pos = pos - 1; element_pos >= 0; element_pos-- )
    {   
        /*printf("\n%d %d\n", element_pos, *(arr + element_pos));*/
        
        if(*(arr + element_pos) > right_most_element)
        {
            /*shifting the elemnent that is greater than the right most element by one position to the right*/
            *(arr + element_pos + 1) = *(arr + element_pos);
            /*for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");*/
            
            
            if( element_pos == 0)
            {
            /*This case arises when no element is lesser than the right most element. In that case shift the element to the next right position and place the right most element in that position*/

            *(arr + element_pos) = right_most_element;
                for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");
            }
            
        }
        else if(*(arr + element_pos) < right_most_element)
        {
            /*placing the right most element in the position next to the current element position*/
            *(arr + element_pos + 1) = right_most_element;
             for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");
            break;
        }
        
        
    }
}

int main(void) 
{
    int array_size;
    scanf("%d", &array_size);
    /*printf("%d", array_size);*/
    int num, array[array_size];
    for(num = 0; num < array_size; num++ )
        scanf("%d", &array[num]);
    /*for(num = 0; num < array_size; num++ )
        printf("%d", array[num]);*/
    for(num = 1; num < array_size; num++ )
        insertionSort(array_size, array, num);
    return 0;
}

``` 
## Challenge 25: Manasa and Stones 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int T;
    scanf("%d",&T);
    long long n[T],a[T],b[T],p[T][1000],i,j;
    for(i=0;i<T;i++)
        {
        scanf("%lld %lld %lld",&n[i],&a[i],&b[i]);
        long long k;
        for(j=0,k=n[i]-1;j<n[i];j++,k--)
            {
            if(a[i]<b[i])
                p[i][j]=k*a[i]+j*b[i];
            if(a[i]==b[i])
            {p[i][j]=k*a[i]+j*b[i];break;}
            else
                p[i][j]=k*b[i]+j*a[i];
        }
    }
    for(i=0;i<T;i++)
        {
        for(j=0;j<n[i];j++)
        {
            if(a[i]==b[i])
            {printf("%lld ",p[i][j]);break;}
            else
            printf("%lld ",p[i][j]);
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 26: Max Min 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000
#define MAX_VAL 1000000001

long long candies[MAX],arranged[MAX];

/** The code to read from STDIN and output to STDOUT has been provided by us, for convenience. You may or may not use this. **/
 
int main() {
    
    long long N,K;
    long long i,j,l,unfairness=0;
    
    scanf("%lld %lld",&N,&K);
    long long c[K],m=0;
    c[0]=0;
    for(i=0;i<N;i++)
        {
        scanf("%lld",&candies[i]);
        arranged[i]=candies[i];
    }
    for(i=0;i<N;i++)
        {
        for(j=N-1;j>i;j--)
            {
            if(arranged[i]>=arranged[j])
                {l=arranged[i];
                 arranged[i]=arranged[j];
                 arranged[j]=l;
                }
        }
    }
    for(i=0;i<N;i++)
        {
        if(m<K)
            {
            if(arranged[i]>c[m])
                {
                c[m]=arranged[i];
                c[m+1]=0;
                m+=1;
                }
           }
        }
    
 // Compute the min unfairness over here, using N,K,candies
   unfairness=c[K-1]-c[0];
    printf("%lld\n",unfairness);
    return 0;
}

``` 
## Challenge 27: Maximizing XOR 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int main() {
    unsigned long long res,l,r,i,j,maxxor=0;
    scanf("%llu %llu",&l,&r);
    for(i=l;i<=r;i++)
        {
        for(j=l;j<=r;j++)   
            {
            res=i^j;
            if(res>maxxor)
            maxxor=res;
        }
    }    
    printf("%llu",maxxor);
    return 0;
}

``` 
## Challenge 28: Maximum Draws 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int num = 0; num < t; num++)
        {
        int n;
        scanf("%d", &n);
        printf("%d\n", n + 1);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 29: Mini-Max Sum 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long sum[5];
    long max, min;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       sum[arr_i] = 0;
       //printf("%d", sum[arr_i]);
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5 ; j++)
        {
            if(i != j)
            {
                sum[i] += arr[j];
                //printf("%d %d\n", arr[j], sum[i]);
            }
        }
        if(i == 0)
        {
            max = sum[i];
            min = sum[i];
        }
        else
        {
            if(sum[i] > max)
                max = sum[i];
            if(sum[i] < min)
                min = sum[i];
        }
        //printf("%d %d\n", max, min);
        //printf("%d\n", sum[i]);
    }
    printf("%ld %ld\n", min, max);
    return 0;
}

``` 
## Challenge 30: Plus Minus 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    int npos, nneg, nzero;
    float pos, neg, zero;
    npos = 0;
    nneg = 0;
    nzero = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
       if(arr[arr_i] == 0)
       {
           nzero += 1;
           zero = nzero/(float)n;
           //printf("nzero = %d, frac_zero = %8.5f", nzero, zero);
       }
       else if(arr[arr_i] > 0)
       {
           npos += 1;
           pos = npos/(float)n;
           //printf("npos = %d, frac_pos = %8.5f", npos, pos);
       }
       else
       {
           nneg += 1;
           neg = nneg/(float)n;
           //printf("nneg = %d, frac_neg = %8.5f", nneg, neg);
       }
             
       //printf("\n");
    }
    printf("%.6f\n", pos);
    printf("%.6f\n", neg);
    printf("%.6f", zero);
    return 0;
}

``` 
## Challenge 31: Quicksort 1 - Partition 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int partition(int size, int *arr)
{
    /*printf("\n%d", size);*/
    int partition_element;
    partition_element = *arr;
    int num;
    
    /*Varibales that store the sub array according to their respective criteria and keep track of element position of individual arrays*/
    int small_nums[size], small_num_pos, large_nums[size], large_num_pos;
    small_num_pos = 0;
    large_num_pos = 0;
    
    int sep_array[size];
    /*The following code seperates the array into two array. One contains all the elements that are lesser than the partion element and the other contains all the elements that are larger*/
    for(num = 1; num < size; num++ )
    {
        if(*(arr + num) < partition_element)
            {
            small_nums[small_num_pos] = *(arr + num);
            /*printf("%d ", small_nums[small_num_pos]);*/
            small_num_pos += 1;
            }
        if(*(arr + num) > partition_element)
            {
            large_nums[large_num_pos] = *(arr + num);
            /*printf("%d ", large_nums[large_num_pos]);*/
            large_num_pos += 1;
            }
    }
    
    int sep_array_pos;
    /*The following code combines the two seperate arrays*/
    
    /*First stores the elements from the small elements array*/
    for (sep_array_pos = 0; sep_array_pos < small_num_pos; sep_array_pos++ )
        {
        sep_array[sep_array_pos] = small_nums[sep_array_pos];
        /*printf("%d %d\n", sep_array_pos, sep_array[sep_array_pos]);*/
        }
    
    /*Inserting the partition element after it*/
    sep_array[sep_array_pos] = partition_element;
    /*printf("%d %d\n", sep_array_pos, sep_array[sep_array_pos]);*/
    
    /*Finally adding the large elements list to sep_array*/
    for (sep_array_pos = small_num_pos + 1; sep_array_pos < size; sep_array_pos++ )
        {
        sep_array[sep_array_pos] = large_nums[sep_array_pos - (small_num_pos + 1)];
        /*printf("%d %d\n", sep_array_pos, sep_array[sep_array_pos]);*/
        }
    for(num = 0; num < size; num++ )
        printf("%d ", sep_array[num]);
    
    return 0;
}
int main(void) 
{
    int array_size;
    scanf("%d", &array_size);
    /*printf("%d", array_size);*/
    int array[array_size], num;
    for(num = 0; num < array_size; num++ )
        scanf("%d", &array[num]);
    /*for(num = 0; num < array_size; num++ )
        printf("%d, ", array[num]);*/
    partition(array_size, array);
    return 0;
}

``` 
## Challenge 32: Quicksort 2 - Sorting 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int partition(int size, int *arr)
{
    /*printf("\n%d", size);*/
    int num;
    
    if(size <= 1)
        return 0;
    else if(size == 2)
        {
        if(*(arr + 1) < *arr)
            {
            int temp;
            temp = *(arr + 1);
            *(arr + 1) = *arr;
            *arr = temp;
            }
        for(num = 0; num < size; num++ )
            printf("%d ", *(arr + num));
        printf("\n");
        return 0;
        }
    
    int partition_element;
    partition_element = *arr;
    
    /*Varibales that store the sub array according to their respective criteria and keep track of element position of individual arrays*/
    int small_nums[size], small_num_pos, large_nums[size], large_num_pos;
    small_num_pos = 0;
    large_num_pos = 0;
    
    int sep_array[size];
    /*The following code seperates the array into two array. One contains all the elements that are lesser than the partion element and the other contains all the elements that are larger*/
    for(num = 1; num < size; num++ )
    {
        if(*(arr + num) < partition_element)
            {
            small_nums[small_num_pos] = *(arr + num);
            /*printf("%d ", small_nums[small_num_pos]);*/
            small_num_pos += 1;
            }
        if(*(arr + num) > partition_element)
            {
            large_nums[large_num_pos] = *(arr + num);
            /*printf("%d ", large_nums[large_num_pos]);*/
            large_num_pos += 1;
            }
    }

    
    int sep_array_pos;
    
    /*sorting the sub arrays using quick sort*/
    /*printf("%d %d\n", small_num_pos, large_num_pos);*/
    partition(small_num_pos, small_nums);
    partition(large_num_pos, large_nums);
    
    
    /*The following code combines the two seperate arrays*/
    
    /*First stores the elements from the small elements array*/
    for (sep_array_pos = 0; sep_array_pos < small_num_pos; sep_array_pos++ )
        {
        sep_array[sep_array_pos] = small_nums[sep_array_pos];
        /*printf("%d %d\n", sep_array_pos, sep_array[sep_array_pos]);*/
        }
    
       
    
    /*Inserting the partition element after it*/
    sep_array[sep_array_pos] = partition_element;
    /*printf("%d %d\n", sep_array_pos, sep_array[sep_array_pos]);*/
    
    /*Finally adding the large elements list to sep_array*/
    for (sep_array_pos = small_num_pos + 1; sep_array_pos < size; sep_array_pos++ )
        {
        sep_array[sep_array_pos] = large_nums[sep_array_pos - (small_num_pos + 1)];
        /*printf("%d %d\n", sep_array_pos, sep_array[sep_array_pos]);*/
        }
    
    for(num = 0; num < size; num++ )
        {
        *(arr + num) = sep_array[num];
        printf("%d ", *(arr + num));
        }
    printf("\n");
    
    return 0;
}
int main(void) 
{
    int array_size;
    scanf("%d", &array_size);
    /*printf("%d", array_size);*/
    int array[array_size], num;
    for(num = 0; num < array_size; num++ )
        scanf("%d", &array[num]);
    /*for(num = 0; num < array_size; num++ )
        printf("%d, ", array[num]);*/
    partition(array_size, array);
    return 0;
}


``` 
## Challenge 33: Quicksort In-Place 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ARRAY_SIZE;

int ARRAY[5000];

int print_array(int array_size, int *arr)
{
    for(int num = 0; num < array_size; num++)
        printf("%d ", *(arr + num));
    printf("\n");
    
    return 0;
}

int swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return 0;
}

int partition(int size, int *arr)
{
    int pivot_element, num;
    int small_elements = 0;
    
    if(size <= 1)
        return 0;
    else if(size == 2)
        {
        if(*(arr + 1) < *arr)
            swap(arr, (arr + 1));
        return 0;
        }
    
    pivot_element = *(arr + size - 1);
    /*printf("%d\n", pivot_element);*/
    
    /*partitioning elements before the pivot element*/
    for( num = 0; num < size; num++)
        {
        if(*(arr + num) < pivot_element)
            {
            swap((arr + num), (arr + small_elements));
            small_elements += 1;
            }
        
        }
    
    *(arr + size - 1) = *(arr + small_elements);
    *(arr + small_elements) = pivot_element;
    
    print_array(ARRAY_SIZE, ARRAY);
    /*printf("\t%d\n", small_elements);*/   
    
    /*partition left side elements*/
    partition(small_elements, arr);
        
    /*partition right side elements*/
    /*printf("\n%d", size - 1);*/
    partition(size - small_elements - 1, &(*(arr + small_elements + 1)));
    return 0;    
}
int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    /*printf("%d\n", array_size);*/
    scanf("%d", &ARRAY_SIZE);
    int num;
    for( num = 0; num < ARRAY_SIZE; num++ )
        scanf("%d", &ARRAY[num]);
    
    /*print_array(array_size, array);*/
   
    partition(ARRAY_SIZE, ARRAY);
         
    return 0;
}

``` 
## Challenge 34: Red John is Back 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
unsigned nCr( int n, int k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    unsigned result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}
int main() {
    int test_cases;
    scanf("%d",&test_cases);
    for(int i=0; i<test_cases;i++)
        {
        int num_of_bricks;
        scanf("%d",&num_of_bricks);
        unsigned num_of_ways = 1;
        int fours = num_of_bricks / 4;
        for(int j=1;j<=fours;j++)
            {
            num_of_ways += nCr(num_of_bricks-j*4+j,j);
            //printf("%u ", num_of_ways);
        }
        //printf("%u \n", num_of_ways);
        int prime[num_of_ways+1];
        unsigned num_of_primes = 0;
        for(int j=0;j<=num_of_ways;j++)prime[j]=1;
        
        for (int p=2; p<=sqrt(num_of_ways); p++)
        {
            // If prime[p] is not changed, then it is a prime
            if (prime[p])
            {
                // Update all multiples of p
                for (int j=p*2; j<=num_of_ways; j += p)
                    prime[j] = 0;
                }
        }
        for(int j=2;j<=num_of_ways;j++)
            if(prime[j])num_of_primes+=1;
        printf("%u\n",num_of_primes);
    }
        
    return 0;
}

``` 
## Challenge 35: Restaurant 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int test_cases, i;
    scanf("%d", &test_cases);
    for(i = 0;i < test_cases; i++)
        {
        long cake_length, cake_width;
        scanf("%ld %ld", &cake_length, &cake_width);
        long long area, j, square, max_square = 0, loop, rem;
        area = cake_length * cake_width;
        loop = sqrt(area);
        for(j = 1; j <= loop; j++)
            {
            square = pow(j,2);
            rem = area % square;
            if(area % square == 0 && cake_length % j == 0 && cake_width % j == 0)
                max_square = square;
            }
        long number_of_squares;
        number_of_squares = area / max_square;
        printf("%ld\n", number_of_squares);
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 36: Reverse Game 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int k,test_case;
    scanf("%d",&test_case);
    for(k = 1; k <= test_case ; k++)
    {
        long long length,i,j,count = 1, character;
        int rev[1000000], balls[1000000];
        scanf("%lld %lld", &length, &character);
        for(i = 0;i < length; i++)
        {balls[i] = i; rev[i] = i;}
        for(count = 0; count < length; count++)
        {
            for(i = count, j = length - 1; i < length; i++, j--)
                {rev[i] = balls[j];}
            for(i = 0;i < length; i++)
                balls[i] = rev[i];
        }
        for(i = 0;i < length; i++)
            {
            if(rev[i] == character)
                {printf("%lld",i);break;}
        }
        printf("\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 37: Running Time of Algorithms 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int NUMBER_OF_SHIFTS = 0;
void insertionSort(int size, int *arr, int pos)
{
    /*printf("%d %d", size, *(arr + 3));*/
    
    /*variables that store the value of the right most element in the array and its position which is one less than size note array always stores from (0, size - 1)*/
    
    int right_most_element, element_pos;
    element_pos = pos;
    right_most_element = *(arr + element_pos);
        
    /*printf("%d %d\n", element_pos, right_most_element);*/
    for(element_pos = pos - 1; element_pos >= 0; element_pos--)
    {   
        /*printf("\n%d %d\n", element_pos, *(arr + element_pos));*/
        
        if(*(arr + element_pos) > right_most_element)
        {
            /*shifting the elemnent that is greater than the right most element by one position to the right*/
            *(arr + element_pos + 1) = *(arr + element_pos);
            NUMBER_OF_SHIFTS += 1;
            /*for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");*/
            
            
            if( element_pos == 0)
            {
            /*This case arises when no element is lesser than the right most element. In that case shift the element to the next right position and place the right most element in that position*/

            *(arr + element_pos) = right_most_element;
                /*for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");*/
            }
            
        }
        else if(*(arr + element_pos) < right_most_element)
        {
            /*placing the right most element in the position next to the current element position*/
            *(arr + element_pos + 1) = right_most_element;
             /*for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");*/
            break;
        }
    }
}

int main(void) 
{
    int array_size;
    scanf("%d", &array_size);
    /*printf("%d", array_size);*/
    int num, array[array_size];
    for(num = 0; num < array_size; num++ )
        scanf("%d", &array[num]);
    /*for(num = 0; num < array_size; num++ )
        printf("%d", array[num]);*/
    for(num = 1; num < array_size; num++ )
        insertionSort(array_size, array, num);
    printf("%d", NUMBER_OF_SHIFTS);
    return 0;
}

``` 
## Challenge 38: Running Time of Quicksort 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int NUMBER_OF_SHIFTS = 0;
int ARRAY_SIZE;
int QUICK_SORT_COUNT = 0;
int ARRAY[5000];

void insertionSort(int size, int *arr)
{
    /*printf("%d %d", size, *(arr + 3));*/
    
    /*variables that store the value of the right most element in the array and its position which is one less than size note array always stores from (0, size - 1)*/
    for(int pos = 1; pos < ARRAY_SIZE; pos++)
        {
    int right_most_element, element_pos;
    element_pos = pos;
    right_most_element = *(arr + element_pos);
        
    /*printf("%d %d\n", element_pos, right_most_element);*/
    for(element_pos = pos - 1; element_pos >= 0; element_pos--)
    {   
        /*printf("\n%d %d\n", element_pos, *(arr + element_pos));*/
        
        if(*(arr + element_pos) > right_most_element)
        {
            /*shifting the elemnent that is greater than the right most element by one position to the right*/
            *(arr + element_pos + 1) = *(arr + element_pos);
            NUMBER_OF_SHIFTS += 1;
            /*for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");*/
            
            
            if( element_pos == 0)
            {
            /*This case arises when no element is lesser than the right most element. In that case shift the element to the next right position and place the right most element in that position*/

            *(arr + element_pos) = right_most_element;
                /*for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");*/
            }
            
        }
        else if(*(arr + element_pos) < right_most_element)
        {
            /*placing the right most element in the position next to the current element position*/
            *(arr + element_pos + 1) = right_most_element;
             /*for(int num = 0; num < size; num++ )
                printf("%d ", *(arr + num));
            printf("\n");*/
            break;
        }
    }
}
}
int print_array(int array_size, int *arr)
{
    for(int num = 0; num < array_size; num++)
        printf("%d ", *(arr + num));
    printf("\n");
    
    return 0;
}

int swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return 0;
}

int partition(int size, int *arr)
{
    int pivot_element, num;
    int small_elements = 0;
    
    if(size <= 1)
        return 0;
    /*else if(size == 2)
        {
        if(*(arr + 1) < *arr)
            swap(arr, (arr + 1));
        return 0;
        }*/
    
    pivot_element = *(arr + size - 1);
    /*printf("%d\n", pivot_element);*/
    
    /*partitioning elements before the pivot element*/
    for( num = 0; num < size; num++)
        {
        if(*(arr + num) < pivot_element)
            {
            swap((arr + num), (arr + small_elements));
            QUICK_SORT_COUNT += 1;
            small_elements += 1;
            }
        
        }
    
    *(arr + size - 1) = *(arr + small_elements);
    *(arr + small_elements) = pivot_element;
    QUICK_SORT_COUNT += 1;
    
    /*print_array(ARRAY_SIZE, ARRAY);*/
    /*printf("\t%d\n", small_elements);*/   
    
    /*partition left side elements*/
    partition(small_elements, arr);
        
    /*partition right side elements*/
    /*printf("\n%d", size - 1);*/
    partition(size - small_elements - 1, &(*(arr + small_elements + 1)));
    return 0;    
}
int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    /*printf("%d\n", array_size);*/
    scanf("%d", &ARRAY_SIZE);
    int num, array[ARRAY_SIZE];
    for( num = 0; num < ARRAY_SIZE; num++ )
        {
        scanf("%d", &ARRAY[num]);
        array[num] = ARRAY[num];
    }
    /*print_array(array_size, array);*/
   
    partition(ARRAY_SIZE, ARRAY);
    /*printf("\n%d", QUICK_SORT_COUNT);*/
    insertionSort(ARRAY_SIZE, array);
    /*printf("\n%d", NUMBER_OF_SHIFTS);*/
    
    printf("%d", NUMBER_OF_SHIFTS - QUICK_SORT_COUNT);
    return 0;
}

``` 
## Challenge 39: Service Lane 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a[100000];
int max(int x,int y)
    {
    int i,less=3;
    for(i=x;i<=y;i++)
        {
        if(a[i]<less)
            less=a[i];
    }
    return less;
}
int main() {
    int l,T;
    scanf("%d%d",&l,&T);
int i,en[T],ex[T],m[T];
    for(i=0;i<l;i++)
        scanf("%d",&a[i]);
    for(i=0;i<T;i++)
        {
    scanf("%d%d",&en[i],&ex[i]);
        m[i]=max(en[i],ex[i]);
    }
    for(i=0;i<T;i++)
        printf("%d\n",m[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 40: Sherlock and Divisors 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    scanf("%d", &T);
    for(int i = 0; i<T;i++)
        {
        int N;
        scanf("%d", &N);
        int even_divisors = 0;
        if(N%2!=0)
            {
            printf("%d\n",even_divisors);
            continue;
        }
        even_divisors = 1;
        for(int j = 2; j<=N/2;j+=2)
            if(N%j==0)even_divisors+=1;
        printf("%d\n",even_divisors);
    }
    return 0;
}

``` 
## Challenge 41: Sherlock and GCD 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long s,t,n,c[100];
    scanf("%ld",&t);
    s=t;
    while(t>0)
        {
        scanf("%ld",&n);
        long i,j,a[n],x=0;
        for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
        for(i=0;i<n;i++)
            {
            for(j=0;j<n;j++)
                {
                if(a[i]!=a[j])
                    {int rem,num,den;
                     if(a[i]>a[j])
                     {num=a[i];den=a[j];rem=a[i]%a[j];}
                     if(a[j]>a[i])
                     {num=a[j];den=a[i];rem=a[j]%a[i];}
                     while(rem!=0)
                         {
                         num=den;
                         den=rem;
                         rem=num%den;
                        }
                     if(den==1)
                         c[t-1]=1;
                     }
                }
            }
        t-=1;
        }
      while(s>0)
        {
        if(c[s-1]==1)
            printf("YES\n");
        else
            printf("NO\n");
          s--;
    }  
   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 42: Sherlock and Squares 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
   int t;
    scanf("%d",&t);
    int c[t],i;
    long long a[t],b[t],j,rem=0;
    for(i=0;i<t;i++)
        {
        c[i]=0;
        scanf("%lld %lld",&a[i],&b[i]);
        for(j=a[i];j<=b[i];j++)
            {
            rem=(long long)(sqrt(j)*1000000);
            if(rem%1000000==0)
            c[i]+=1;
        }
        
    }
    for(i=0;i<t;i++)
        printf("%d\n",c[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 43: Sherlock and The Beast 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int T,i;
    scanf("%d",&T);
for(i=0;i<T;i++)
    {
    int N,j,new_number=2;
    scanf("%d",&N);
    int a[N];
    if(N%3==0)
        {
        for(j=0;j<N;j++)
            a[j]=5;
        }
    else if(N%5==0)
        {
        if(N>15)
            {
            int rem=0;
            rem=N%15;
            new_number=N-rem;
            for(j=0;j<new_number;j++)
                a[j]=5;
            for(j=new_number;j<N;j++)
                a[j]=3;
            }
        else
            {
            for(j=0;j<N;j++)
                a[j]=3;
            }
        }
    else
        {
        int rem=0;
        new_number=N-5;
        while(new_number>0)
            {
            if(new_number%3==0)
                {
                for(j=0;j<new_number;j++)
                    a[j]=5;
                for(j=new_number;j<N;j++)
                    a[j]=3;
                break;
                }
            new_number-=5;
            }
        if(new_number<0)
        {printf("-1");new_number=1;}
        }
    if(new_number!=1)
        {
        for(j=0;j<N;j++)
            printf("%d",a[j]);
        }
    printf("\n");
    }
        
        

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 44: Solve Me First 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int add(int x, int y) {
    int z;
    z=x+y;
  return z;
}
int main() {
  int a,b;
  scanf("%d %d",&a,&b); 
  printf("%d",add(a,b));
  return 0;
}

``` 
## Challenge 45: Staircase 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n-1; j++)
            printf(" ");
        for(int j = n - i; j <= n; j++)
            printf("#");
        printf("\n");
    }
    return 0;
}

``` 
## Challenge 46: The Full Counting Sort 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int array_size;
    scanf("%d", &array_size);
    int array[array_size], i,j,k;
    int count[100]= {0};
    char s[array_size][10], c[array_size][10];
    for(i=0;i<array_size;i++)
        scanf("%d %s",&array[i], s[i]);
    for(i=0;i<array_size;i++)
        if(i<array_size/2)strcpy(s[i],"-");
    k=0;
    for(i=0;i<100;i++)
        {
        for(j=0;j<array_size;j++)
            {
            if(array[j]==i)
                {
                count[i]+=1;
                strcpy(c[k],s[j]);
                k++;
            }
        }
    }
    for(i=0;i<array_size;i++)
        printf("%s ", c[i]);
    return 0;
}

``` 
## Challenge 47: The Love-Letter Mystery 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
char S[10][10000];
int plain(int X)
    {
    int l=0,i,a,count=0;
    while(S[X][l]!='\0')
        l++;
    a=l;
    for(i=0;i<a;i++)
        {
        AGAIN:
        if(S[X][i]<S[X][a-i-1])
            {
            if(S[X][a-i-1]>97)
            {S[X][a-i-1]-=1;count+=1;goto AGAIN;}
            else continue;
    }
}
    return count;
}
int main() {
int T,i;
    scanf("%d",&T);
    int c[T];
    for(i=0;i<T;i++)
        {
        scanf("%s",S[i]);
        c[i]=plain(i);
    }
    for(i=0;i<T;i++)
   printf("%d\n",c[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 48: Utopian Tree 
#### Contest : Master 
#### Language : c 
___ 
```C 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int Growth()
    {
    int N,G=1,i;
        scanf("%d",&N);
        for(i=1;i<=N;i++)
            {
            if(i%2==0)
            G+=1;
            else
            G*=2;
 
        }
    return G;
}
int main() {
int T,G[11],X;
    scanf("%d",&T);
    X=T;
    while(T>0)
        {
        G[T]=Growth();
        T--;
    }
    while(X>0)
        {
        printf("%d\n",G[X]);
        X--;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

``` 
## Challenge 49: Intro to Tutorial Challenges 
#### Contest : Master 
#### Language : cpp 
___ 
```C++ 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, c;
    int i;
    
    scanf("%d",&c);
    
    scanf("%d",&a);

    int array[a];
    
    for(i = 0;i < a;i++)
        scanf("%d",&array[i]);
    for(i = 0;i < a;i++)
        {
        if(c == array[i])
            printf("%d", i);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

``` 
## Challenge 50: Day 0: Hello, World. 
#### Contest : Master 
#### Language : java 
___ 
```Java 

public class Solution {
	public static void main(String[] args) {
        // Create a Scanner object to read input from stdin.
		Scanner scan = new Scanner(System.in); 
		
		// Read a full line of input from stdin and save it to our variable, inputString.
		String inputString = scan.nextLine(); 

		// Close the scanner object, because we've finished reading 
        // all of the input from stdin needed for this challenge.
		scan.close(); 
      
		// Print a string literal saying "Hello, World." to stdout.
		System.out.println("Hello, World.");
        System.out.println(inputString);
      
	    // TODO: Write a line of code here that prints the contents of inputString to stdout.
	}
}
``` 
## Challenge 51: Day 1: Data Types 
#### Contest : Master 
#### Language : java 
___ 
```Java 
        /* Declare second integer, double, and String variables. */
        int i1;
        double d1;
        String s1;

        /* Read and save an integer, double, and String to your variables.*/
        // Note: If you have trouble reading the entire String, please go back and review the Tutorial closely.
        i1 = scan.nextInt();
        d1 = scan.nextDouble();
        s1 = scan.nextLine();
        s1 = scan.nextLine();
        /* Print the sum of both integer variables on a new line. */
        System.out.println(i + i1);
        /* Print the sum of the double variables on a new line. */
		System.out.println(d + d1);
        /* Concatenate and print the String variables on a new line; 
        	the 's' variable above should be printed first. */
        System.out.println(s + s1);
``` 
## Challenge 52: Average Population 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
select round(avg(population)) from city
``` 
## Challenge 53: Employee Names 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select name from employee order by name asc
``` 
## Challenge 54: Employee Salaries 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select name from employee where salary > 2000 and months < 10 order by employee_id asc
``` 
## Challenge 55: Higher Than 75 Marks 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select name from students where marks > 75 order by right(name, 3) asc, id asc
``` 
## Challenge 56: Japan Population 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
select sum(population) from city where countrycode = 'JPN'
``` 
## Challenge 57: Japanese Cities' Attributes 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
select *
from city
where countrycode = 'JPN'
``` 
## Challenge 58: Japanese Cities' Names 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
select name from city where countrycode = 'JPN'
``` 
## Challenge 59: Population Density Difference 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
select max(population) - min(population) from city
``` 
## Challenge 60: Revising the Select Query II 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
select name
from city
where population > 120000 and countrycode = 'USA'
``` 
## Challenge 61: The Blunder 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
/*SELECT CONVERT(REPLACE(STR(salary),'0',''),INTEGER) FROM employees;*/
select ceil(avg(salary) - avg(replace(salary, 0, ''))) from employees
``` 
## Challenge 62: Weather Observation Station 10 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select distinct city from station
where (CITY not LIKE '%a' 
    and CITY not LIKE '%e' 
    and CITY not LIKE '%i' 
    and CITY not LIKE '%o'
    and CITY not LIKE '%u'
) 
``` 
## Challenge 63: Weather Observation Station 11 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select distinct city from station
where (CITY not LIKE 'a%' 
    and CITY not LIKE 'e%' 
    and CITY not LIKE 'i%' 
    and CITY not LIKE 'o%'
    and CITY not LIKE 'u%'
) or (CITY not LIKE '%a' 
    and CITY not LIKE '%e' 
    and CITY not LIKE '%i' 
    and CITY not LIKE '%o'
    and CITY not LIKE '%u'
)
``` 
## Challenge 64: Weather Observation Station 12 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select distinct city from station
where (CITY not LIKE 'a%' 
    and CITY not LIKE 'e%' 
    and CITY not LIKE 'i%' 
    and CITY not LIKE 'o%'
    and CITY not LIKE 'u%'
) and (CITY not LIKE '%a' 
    and CITY not LIKE '%e' 
    and CITY not LIKE '%i' 
    and CITY not LIKE '%o'
    and CITY not LIKE '%u'
)
``` 
## Challenge 65: Weather Observation Station 14 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select truncate(max(lat_n), 4) from station
where lat_n in (select lat_n from station where lat_n < 137.2345)
``` 
## Challenge 66: Weather Observation Station 15 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select round(long_w, 4) from station
where lat_n in (select max(lat_n) from station where lat_n < 137.2345)
``` 
## Challenge 67: Weather Observation Station 16 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select round(min(lat_n), 4) from station
where lat_n > 38.7780
``` 
## Challenge 68: Weather Observation Station 17 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select round(long_w, 4) from station
where lat_n in (select min(lat_n) from station where lat_n > 38.7780) 
``` 
## Challenge 69: Weather Observation Station 18 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select round(max(lat_n) - min(lat_n) + max(long_w) - min(long_w), 4) from station 
``` 
## Challenge 70: Weather Observation Station 19 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select truncate(sqrt(power(max(lat_n) - min(lat_n),2) + power(max(long_w) - min(long_w),2)) , 4) from station
``` 
## Challenge 71: Weather Observation Station 3 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select distinct city
from station
where id % 2 = 0
``` 
## Challenge 72: Weather Observation Station 4 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select count(city) - count(distinct city) from station
``` 
## Challenge 73: Weather Observation Station 5 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select city, length(city) from station order by length(city) asc, city asc limit 1;
select city, length(city) from station order by length(city) desc, city asc limit 1;
``` 
## Challenge 74: Weather Observation Station 6 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select distinct city from station 
where city like 'a%' or city like 'e%' or city like 'i%' or city like 'o%' or city like 'u%'
``` 
## Challenge 75: Weather Observation Station 7 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select distinct city from station
where city like '%a' or city like '%e' or city like '%i' or city like '%o' or city like '%u'
``` 
## Challenge 76: Weather Observation Station 8 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
SELECT distinct CITY 
FROM STATION 
where (CITY LIKE 'a%' 
    OR CITY LIKE 'e%' 
    OR CITY LIKE 'i%' 
    OR CITY LIKE 'o%'
    OR CITY LIKE 'u%'
) AND (CITY LIKE '%a' 
    OR CITY LIKE '%e'
    OR CITY LIKE '%i'
    OR CITY LIKE '%o'
    OR CITY LIKE '%u'
)
``` 
## Challenge 77: Weather Observation Station 9 
#### Contest : Master 
#### Language : mysql 
___ 
```MySQL 
/*
Enter your query here.
*/
select distinct city from station
where (CITY not LIKE 'a%' 
    and CITY not LIKE 'e%' 
    and CITY not LIKE 'i%' 
    and CITY not LIKE 'o%'
    and CITY not LIKE 'u%'
) 


``` 
## Challenge 78: Revising the Select Query I 
#### Contest : Master 
#### Language : oracle 
___ 
```MySQL 
SELECT *
FROM CITY
WHERE
    COUNTRYCODE = 'USA'
    AND POPULATION > 100000;
``` 
## Challenge 79: Select All 
#### Contest : Master 
#### Language : oracle 
___ 
```MySQL 
SELECT *
FROM CITY
``` 
## Challenge 80: Select By ID 
#### Contest : Master 
#### Language : oracle 
___ 
```MySQL 
SELECT *
FROM CITY
WHERE
    ID = 1661;
``` 
## Challenge 81: Weather Observation Station 1 
#### Contest : Master 
#### Language : oracle 
___ 
```MySQL 
/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SELECT CITY, STATE FROM STATION
``` 
## Challenge 82: Sequence Equation 
#### Contest : 101 Hack 45 
#### Language : python 
___ 
```Python 
# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys

[n] = map(int, raw_input().strip().split(' '))

p = map(int, raw_input().strip().split(' '))

#print n
#print p
y = 0
for i in xrange(n):
    #print i+1, p[i]
    print p.index(p.index(i+1)+1)+1
        
#print y
``` 
## Challenge 83: A Very Big Sum 
#### Contest : Master 
#### Language : python 
___ 
```Python 
#!/bin/python

import sys


n = int(raw_input().strip())
arr = map(int,raw_input().strip().split(' '))
print sum(arr)
``` 
## Challenge 84: CamelCase 
#### Contest : Master 
#### Language : python 
___ 
```Python 
#!/bin/python

import sys


s = raw_input().strip()

count = 1
for i in range(len(s)):
    if s[i].isupper():
        count += 1
        
print count

``` 
## Challenge 85: Compare the Triplets 
#### Contest : Master 
#### Language : python 
___ 
```Python 
#!/bin/python

import sys


a0,a1,a2 = raw_input().strip().split(' ')
a0,a1,a2 = [int(a0),int(a1),int(a2)]
b0,b1,b2 = raw_input().strip().split(' ')
b0,b1,b2 = [int(b0),int(b1),int(b2)]

print sum([a0 > b0, a1 > b1, a2 > b2]), sum([b0 > a0, b1 > a1, b2 > a2])



``` 
## Challenge 86: Journey to the Moon 
#### Contest : Master 
#### Language : python 
___ 
```Python 
import math
# Enter your code here. Read input from STDIN. Print output to STDOUT
N,l = map(int,raw_input().split())

pairs = []
teams = []

for i in xrange(l):
    a,b = map(int,raw_input().split())
    # Store a and b in an appropriate data structure
    pair = [a, b]
    pairs.append(pair)
    if len(teams) == 0:
        teams.append(pair)
    else:
        team_index = 0
        pair_in_teams = False
        for team in list(teams):
            pair_in_teams = pair_in_teams or (pair[0] in team) or (pair[1] in team)
            #print (pair[0] in team) or (pair[1] in team)
            #print teams.index(team)
            if (pair[0] in team) or (pair[1] in team):
                team_index = teams.index(team)
                #print pair[0] in team
                if (pair[0] in team):
                    teams[team_index].append(pair[1])
                elif (pair[1] in team):
                    teams[team_index].append(pair[0])
                break
        #print pair_in_teams
        #print
        if not pair_in_teams:
            teams.append(pair)

#print pairs, teams
result = 0
# Compute the final result using the inputs from above
product = 1
s = 0
for team in teams:
    s = s + len(team)
    product = product * len(team)
#print s
if s == N:
    result = product
else:
    diff = N - s
    result = product * diff + math.factorial(diff)/(math.factorial(2)*math.factorial(diff - 2))

print result

``` 
## Challenge 87: Simple Array Sum 
#### Contest : Master 
#### Language : python 
___ 
```Python 
#!/bin/python

import sys


n = int(raw_input().strip())
arr = map(int,raw_input().strip().split(' '))
print sum(arr)
``` 
## Challenge 88: Sock Merchant 
#### Contest : Master 
#### Language : python 
___ 
```Python 
#!/bin/python

import sys


n = int(raw_input().strip())
c = map(int,raw_input().strip().split(' '))
count = [0 for i in set(c)]
c1 = list(set(c))

for i in range(len(c1)):
    count[i] = c.count(c1[i])
    count[i] = count[i]//2
print sum(count)
``` 
## Challenge 89: The Hurdle Race 
#### Contest : Master 
#### Language : python 
___ 
```Python 
#!/bin/python

import sys


n,k = raw_input().strip().split(' ')
n,k = [int(n),int(k)]
height = map(int, raw_input().strip().split(' '))
# your code goes here
if max(height) - k >= 0:
    print max(height) - k
else:
    print 0
``` 
## Challenge 90: Project Euler #1: Multiples of 3 and 5 
#### Contest : ProjectEuler+ 
#### Language : python 
___ 
```Python 
#!/bin/python

import sys


t = int(raw_input().strip())
for a0 in xrange(t):
    n = int(raw_input().strip())
    threes = n // 3
    fives = n // 5
    tf = n//15
    if n%3 == 0:
        threes -= 1
    if n%5 == 0:
        fives -= 1
    if n%15 == 0:
        tf -= 1
    sum_threes = 3 * threes * (threes + 1)/2
    sum_fives = 5 * fives * (fives + 1)/2
    sum_tf = 15 * tf * (tf + 1)/2
    #print threes, fives, sum_threes, sum_fives, sum_tf
    print sum_threes + sum_fives - sum_tf

``` 
## Challenge 91: Project Euler #2: Even Fibonacci numbers 
#### Contest : ProjectEuler+ 
#### Language : python 
___ 
```Python 
#!/bin/python

import sys

def fib(n):
    a = 1
    b = 2
    ser = []
    if n > 2:
        ser.append(2)
    while 1:
        c = a + b
        if c > n:
            break
        #print c
        if c % 2 == 0:
            ser.append(c)
        a = b
        b = c
        
    return sum(ser)


t = int(raw_input().strip())
for a0 in xrange(t):
    n = long(raw_input().strip())
    print fib(n)
        

``` 
## Challenge 92: Candy Replenishing Robot 
#### Contest : Week of Code 30 
#### Language : python 
___ 
```Python 
#!/bin/python

import sys


n,t = raw_input().strip().split(' ')
n,t = [int(n),int(t)]
c = map(int, raw_input().strip().split(' '))
# your code goes here
candies_added = 0
b = n
#print "Time                 = " + str(0)
#print "Candies-remaining    = " + str(b)
#print 
for i in range(t):
    b = b - c[i]
    #print "Time                 = " + str(i + 1)
    #print "Candies-removed      = " + str(c[i])
    if b < 5 and i < t -1:
        candy_increment = n - b
        #print "Candies-added        = " + str(candy_increment)
        b = b + candy_increment
        candies_added = candies_added + candy_increment
        #print "Total-added-candies  = " + str(candies_added)
    #print "Candies-remaining    = " + str(b)
    #print

print candies_added
        
``` 
## Challenge 93: Find the Minimum Number 
#### Contest : Week of Code 30 
#### Language : python 
___ 
```Python 
#!/bin/python

import sys


n = int(raw_input().strip())

string = "min(int, int)"

for i in range(3, n+1):
    string = "min(int, " + string + ")"
print string

``` 
## Challenge 94: Melodious password 
#### Contest : Week of Code 30 
#### Language : python 
___ 
```Python 
#!/bin/python

import sys

n = int(raw_input().strip())
vow = "aeiou"
cons ="bcdfghjklmnpqrstvwxz"

def pwds(len_pass):
    passwords = []
    if len_pass == 1:
        passwords.extend([ i for i in vow])
        passwords.extend([ i for i in cons])
        return passwords
    if len_pass > 1:
        p = pwds(len_pass - 1)
        for i in p:
            if i[0] not in vow:
                passwords.extend([ "".join([k, i]) for k in vow ])
            else:
                passwords.extend([ "".join([k, i]) for k in cons] )
        
    return passwords

def num_of_pass(l):
    num = 0
    for i in range(2):
        p = 1
        if i % 2 == 0:
            for j in range(l):
                if j % 2 == 0:
                    p *= len(vow)
                else:
                    p *= len(cons)

        else:
            for j in range(l):
                if j % 2 == 0:
                    p *= len(cons)
                else:
                    p *= len(vow)
        num += p
    return num

#print len(vowels), len(cons)


#for i in range(1,7):
#    print num_of_pass(i)

for i in range(1, 7):
    if i == n:
        p = pwds(n)
        for k in p:
            print k
``` 
## Challenge 95: Range Modular Queries 
#### Contest : Week of Code 30 
#### Language : python 
___ 
```Python 
#!/bin/python

import sys


n,q = raw_input().strip().split(' ')
n,q = [int(n),int(q)]
a = map(int, raw_input().strip().split(' '))
for a0 in xrange(q):
    left,right,x,y = raw_input().strip().split(' ')
    left,right,x,y = [int(left),int(right),int(x),int(y)]
    # your code goes here
    count = 0
    for i in range(left, right+1):
        if a[i]%x == y:
            count += 1
    print count

``` 
