var smoothX = 0;
var smoothY = 0;

function setup() {
  
  createCanvas(window.innerWidth, window.innerHeight);
  
}


function draw(){
  
  background(23, 185, 239); 
  
  smoothX = .99*smoothX + .01*mouseX;
  smoothY = .99*smoothY + .01*mouseY;

  ellipse(smoothX,smoothY,40,40);
  

}

