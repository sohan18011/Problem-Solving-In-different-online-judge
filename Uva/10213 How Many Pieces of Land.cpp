#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 1000
/****************reverse *************/
void reverse(char *from, char *to ){
 int len=strlen(from);
 int l;
 for(l=0;l<len;l++)
   to[l]=from[len-l-1];
 to[len]='\0';
}
/*************** Big Sum **************************/
void call_sum(char *first, char *sec, char *result){
  char F[MAX], S[MAX], Res[MAX];
  int f,s,sum,extra,now;
  f=strlen(first);
  s=strlen(sec);
  reverse(first,F);
  reverse(sec,S);
  for(now=0,extra=0;(now<f && now<s);now++){
                  sum=(F[now]-'0') + (S[now]-'0') + extra;
                  Res[now]=sum%10 +'0';
                  extra= sum/10;
  }
  for(;now<f;now++){
              sum=F[now] + extra-'0';
              Res[now]=sum%10 +'0';
              extra=sum/10;
  }
  for(;now<s;now++){
     sum=S[now] + extra-'0';
     Res[now]=sum%10 +'0';
     extra=sum/10;
  }
  if(extra!=0)
	  Res[now++]=extra+'0';
  Res[now]='\0';
  if(strlen(Res)==0)
	   strcpy(Res,"0");
  reverse(Res,result);
}
/*************** BIG Subs  ****************************/
int call_minus(char *large, char *small, char *result){
  char L[MAX], S[MAX];
  int l,s,now,hold,diff;
  l=strlen(large);
  s=strlen(small);
  bool sign = 0;
  if(l<s){
   strcpy(result,large);
   strcpy(large,small);
   strcpy(small,result);
   now=l; l=s; s=now;
   sign = 1;
  }
  if(l==s){
   if(strcmp(large, small)<0){
    strcpy(result,large);
    strcpy(large,small);
    strcpy(small,result);
    now=l; l=s; s=now;
    sign =1;
   }
 }
 reverse(large,L);
 reverse(small,S);
 for(;s<l;s++)
       S[s]='0';
 S[s]='\0';
 for(now=0,hold=0;now<l;now++){
   diff=L[now]-(S[now]+hold);
   if(diff<0){
        hold=1;
        result[now]=10+diff+'0';
   }
   else{
        result[now]=diff+'0';
        hold=0;
   }
 }
 for(now=l-1;now>0;now--){
   if(result[now]!='0')
   break;
 }
 result[now+1]='\0';
 reverse(result,L);
 strcpy(result,L);
 return sign;
}
/*************** Big mult *************************/
void call_mult(char *first,char *sec,char *result){
 char F[MAX],S[MAX],temp[MAX];
 int f_len,s_len,f,s,r,t_len,hold,res;
 f_len=strlen(first);
 s_len=strlen(sec);
 reverse(first,F);
 reverse(sec,S);
 t_len=f_len+s_len;
 r=-1;
 for(f=0;f<=t_len;f++)
            temp[f]='0';
 temp[f]='\0';
 for(s=0;s<s_len;s++){
   hold=0;
   for(f=0;f<f_len;f++){
        res=(F[f]-'0')*(S[s]-'0') + hold+(temp[f+s]-'0');
        temp[f+s]=res%10+'0';
        hold=res/10;
        if(f+s>r)
			r=f+s;
   }
   while(hold!=0){
       res=hold+temp[f+s]-'0';
       hold=res/10;
       temp[f+s]=res%10+'0';
       if(r<f+s)
		   r=f+s;
       f++;
   }
 }
 for(;r>0 && temp[r]=='0';r--);
 temp[r+1]='\0';
 reverse(temp,result);
}
/******************88 Big Div ******************/
int call_div(char *number,long div,char *result){
 int len=strlen(number);
 int now;
 long extra;
 char Res[MAX];
 for(now=0,extra=0;now<len;now++){
    extra=extra*10 + (number[now]-'0');
    Res[now]=extra / div +'0';
    extra%=div;
 }
 Res[now]='\0';
 for(now=0;Res[now]=='0';now++);
 strcpy(result, &Res[now]);
 if(strlen(result)==0)
   strcpy(result, "0");
 return extra;
}
/************* Main **************/
int main(){
    //freopen ("a.in","r",stdin);
	long int n;
	char N[MAX],t1[MAX],t2[MAX];
	scanf("%ld",&n);
	while(n--){
		scanf("%s",&N);
		if(!strcmp(N,"0")){
			printf("1\n");
			continue;
		}
		call_minus(N,"1",t1);
        call_mult(N,t1,t2);
		call_mult(N,N,t1);
        call_mult(N,"5",N);
		call_sum(t1,"18",t1);
		call_minus(t1,N,t1);
		call_mult(t1,t2,N);
		call_div(N,24,N);
		call_sum(N,"1",N);
		printf("%s\n",N);
	}
	return 0;
}
