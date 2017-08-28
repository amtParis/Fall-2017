var t = 0;  // time used to animate circle along the line
var dir = 1;  // direction moving
var gSize = 150;  // size of the graph


function setup() {
  
  createCanvas(window.innerWidth, window.innerHeight);
  
}


function draw(){
  
  background(23, 185, 239); 
  
  // increase t in current direction
  t += .01 * dir;

  // reverse t if it becomes greater than 1 or less than 0
  if( t >= 1 || t <= 0){ dir *= -1; }
  
  
  push();

    translate(10,10);

    // draw the graph and animation passing in the function we want to use to ease as a parameter
    drawGraph(linear);
    drawAnimatedPoint(t,linear);

    // draw a nice label underneath
    drawLabel("Linear");

  pop();
  
  

}


function drawAnimatedPoint(t,easeFunction,options=null){
  
  var pct = easeFunction(t,options);
  var lerpPos = pct*gSize; // point A is 0 so only need to multily by point B which is at max graph size
  
  var xPos = t * gSize;   // move in linear steps alon x axis
  var yPos = gSize - lerpPos; // beacause coord inverted

  fill(255);
  ellipse(xPos,yPos,10,10);
}



function drawGraph(easeFunction,options=null){
  
  noFill();
  stroke(255);
  
  // draw lines for graph on left and bottom
  line(0,0,0,gSize);
  line(0,gSize,gSize,gSize);

  beginShape();

  for(var i = 0; i < gSize; i+=2){
    
    var pct =(1 / gSize) * i;
    
    pct = easeFunction(pct,options);
    
    var lerpPos = pct*gSize;
    
    vertex(i,gSize-lerpPos);
    
  }
  
  endShape();

}



function drawLabel(mytext){
  noStroke();
  textSize(14);
  text(mytext, 0, gSize+16);
}



function linear(t,options=null){ 
  return t; 
}

 