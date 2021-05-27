5.利用mousePressed互動,決定要秀幾顆球

int []a=new int[47];//Java的陣列
//int []a={1,2,3,4,5,6,...45,46};
void setup(){
  size(500,200);//大一點
  textSize(30);
  for(int i=0;i<47;i++) a[i]=i;
//讓a[i]的陣列裡，會先放整齊的對應的數字
for(int i=0;i<1000;i++){
  int i1= (int)random(47);
  int i2= (int)random(47);
  int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
}//作弊，要洗好牌，先知道得獎號碼，等下在掉下來
}
int N=0;
void draw(){
  background(#35C193);
  for(int i=0;i<N;i++){
    text(a[i],i*80,100);
  }
}
void mousePressed(){
  N++;
  }