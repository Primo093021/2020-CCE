5.用你的 C Tutor, 跑字串排序的範例 https://hackmd.io/@jsyeh/ctutor 可剪貼


char *p1, *p2;
char line[4][10]={"jkl", "ghi", "def", "abc"};
char temp[10];
int main() {
  int n=4;
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      p1=line[i]; p2=line[j];
      if( strcmp(line[i],line[j]) > 0 ){
        strcpy(temp, line[i]);
        strcpy(line[i], line[j]);
        strcpy(line[j], temp);
      }
    }
  }
  
  for(int i=0; i<n; i++){
    printf("%s\n", line[i]);
  }
  
  return 0;
}