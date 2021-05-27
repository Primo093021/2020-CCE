#第14週 程式課上課內容

## 1.亂數random()抽個浮點數的數字,並畫出來

```C
//你可以再有色彩的字，mouse按右鍵
void setup(){//設定只做一次
  size(300,300);
  float ans=random(60);//亂數，會是<60的浮點數
  textSize(30);
  text(ans,20,20);//畫出ans
}
void draw(){//畫圖每秒60次

}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week14%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/1.png?raw=true)

## 2.如何用mousePressed互動方式，來產生整數的亂數

```C
void setup(){//設定只做一次
  size(300,300);
  textSize(30);
}
void draw(){//畫圖每秒60次
  background(#F2CA73);
  text(ans,20,30);
}
void mousePressed(){//按下去就互動一次
  ans=(int)random(60);//浮點數不能直接變整數
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week14%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/2.png?raw=true)

## 3.洗牌,亂數1,亂數2,交換對應位置,重覆做很多次

```C
//int a[]={1,2,3,4,5,6,7,8,9,10};//C
int [] a={1,2,3,4,5,6,7,8,9,10};//Java
int i1,i2;
void setup(){
  size(400,100);
  textSize(30);
}
void draw(){
  background(#F2CA73);
  for(int i=0;i<10;i++){
    text(a[i],i*40,50);
  }
  rect(i1*40,50,30,30);
  rect(i2*40,50,30,30);
}
void mousePressed(){
  i1= (int)random(10);
  i2= (int)random(10);
  int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week14%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/3.png?raw=true)

## 4.講解大樂透抽球,其實就是洗牌1000次,再粗暴印出前面5個數字, step04-1大樂透抽球, 試著開Java陣列int []a=new int[47] 再整齊放 a[i]=i; 再洗牌1000次, 再印前5個 (一張圖就好)

```C
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
void draw(){
  background(#35C193);
  for(int i=0;i<5;i++){
    text(a[i],i*80,100);
  }
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week14%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/4.png?raw=true)

## 5.利用mousePressed互動,決定要秀幾顆球

```C
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
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week14%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/5.png?raw=true)

## 6.把文字對齊textAlign(中,中) 白色的球,黑色的字,用fill(灰階色彩)改色彩

```C
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
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week14%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/6.png?raw=true)
