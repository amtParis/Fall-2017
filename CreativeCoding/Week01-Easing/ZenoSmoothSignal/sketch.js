var smoothVal = 0;
var xp = 0;

function setup() {
  
  createCanvas(window.innerWidth, window.innerHeight);
  background(23, 185, 239); 
  fill(255);
  noStroke();
}


function draw(){
  
  var randVal = random(-10,10);
  
  smoothVal = .9*smoothVal + .1*randVal;

  ellipse(xp,randVal + 100,4,4);
  ellipse(xp,smoothVal + 200,4,4);
  
  xp += 1;

  if(xp > width){
  	xp = 0;
  	background(23, 185, 239); 
  }

}

