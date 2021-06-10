8. step03-2_為了讓每次轉動都有變化,我們在mousePressed()裡,利用random()亂數來決定一開始的速度,速度不同,轉動的結果就會不同

void setup(){//設定，只做1次
  size(400,200);
}
float start=0,v=0.07;//v是旋轉的速度
void mousePressed(){
  v=random(1);
}
void draw(){//畫，每秒畫60次
  background(#99E3C2);
  if(v>0.001){//速度很慢時，就不要再轉動了
  start+=v;//位置、速度、加速度(位置會加上速度)
  v*=0.99;//位置、速度、加速度(速度會加上加速度)
  }//if(start<10) start+=0.01;//float start=mouseX/50.0;
  if(start<10) start+=0.01;
  fill(255); text(start,200,150); text(v,200,170);
  for(int i=0;i<24;i++){
    float shift=i*PI/12;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#99C1E3);
    if(i%3==2) fill(255);
    if(i==0)  fill(#FF8243);
    arc(100,100, 180,180,   shift+0+start,shift+PI/12+start);//畫出 圓弧
  //     圓心        寬高      開始            結束
  }
}