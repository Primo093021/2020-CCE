6.把文字對齊textAlign(中,中) 白色的球,黑色的字,用fill(灰階色彩)改色彩

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
  textAlign(CENTER,CENTER);//文字對齊:中、中
  for(int i=0;i<N;i++){
    fill(255); ellipse(i*80+40,100,55,55);
    fill(0); text(a[i],i*80+40,100);
  }
}
void mousePressed(){
  N++;
  }