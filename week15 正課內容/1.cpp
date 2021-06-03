1.倒數計時,先能得到second()秒鐘,用奇偶數調背景色

void setup(){//設定只做1次
  size(400,200);
}
void draw(){//畫圖，每秒60frame
  int s=second();//0..59秒
  if(s%2==0) background(#4C83AF);
  else background(#4FC4AD);
}