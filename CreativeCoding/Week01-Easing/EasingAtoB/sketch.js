var ptA = {x:20,y:100};
var ptB = {x:400,y:100};
var movePt = ptA;
var t = 0;

function setup() {
  
  createCanvas(window.innerWidth, window.innerHeight);
  stroke(255);
  fill(255);
}


function draw(){
  

  background((229, 72, 4); 
  
  if( t < 1 ) t += .01;


  line(ptA.x,ptA.y,ptB.x,ptB.y);
  ellipse(ptA.x,ptA.y,4,4);
  ellipse(ptB.x,ptB.y,4,4);
  
  var pct = t;
  var newX = (1-pct)*ptA.x + pct*ptB.x;
  var newY = (1-pct)*ptA.y + pct*ptB.y;

  ellipse(newX,newY,8,8);

}



function mousePressed(){
    ptB = { x:mouseX, y:mouseY };
    t = 0;
}

function linear(t,options=null){ 
  return t; 
}

 