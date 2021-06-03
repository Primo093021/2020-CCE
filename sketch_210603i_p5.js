//請用Ctrl-N開新的Processing PDE介面
//再按右上角，把Java換成p5.js
//會得到空白的function setup(){...}
//再利用 processing to p5.js converter來轉
//如下，小心，if後面 一定要加大括號
//再按三角形 執行Ctrl-R
function setup(){//設定只做1次
  createCanvas(400,200);
}
function draw(){//畫圖，每秒60frame
  let s=second();//0..59秒
  if(s%2==0){
    background(76,131,175);
  }else{ 
    background(79,196,173);
  }
}
