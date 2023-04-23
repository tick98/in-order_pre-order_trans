#include<stdio.h>
#include<string.h>
   
int istack=0;
char mystack[200000]={};
char result[200000]={};
void push(char k) {
       mystack[istack]=k;
       istack++;
}
int pop() {
       istack--;
       return mystack[istack];
}
int main()
{
  
    char alpha[200000]={};
 scanf("%s",alpha);
  int l=0;
 for(int i=(int)strlen(alpha)-1;i>=0;i--){
        
    switch(alpha[i]){
        case')':
          push(alpha[i]);
          break;
        case '(':
              
             result[l]=pop();
              l++;
              
              if(mystack[istack-1]==')'){

                 int a=pop();
                 
              }
           // printf("%c",pop());
          
           break;
        case'+':
        case'-':
        case'*':
        case'/':
            push(alpha[i]);
            break;
        default:
           result[l]=alpha[i];
           l++;
           break;
           //printf("%c",alpha[i]);
    }
   // printf("%s\n",mystack2);
 }
  for(int i=(int)strlen(result)-1;i>=0;i--){
    printf("%c",result[i]);
  }
}
