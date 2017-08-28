var followers = [];

function setup() {
  
  createCanvas(window.innerWidth, window.innerHeight);
  
  for( var i = 0; i < 10; i++){
  	followers[i] = {x:i*20,y:100,pct:random(.85,.99)};
  }

  fill(238, 255, 0);
  stroke(255, 182, 0);
  strokeWeight(4);
}


function draw(){
  
  background(23, 185, 239); 
  
  followers[0].x = .95*followers[0].x + .05*mouseX;
  followers[0].y = .95*followers[0].y + .05*mouseY;
  

  for( var i = 1; i < followers.length; i++){
  	pct = followers[i].pct;
  	followers[i].x = pct*followers[i].x + (1-pct)*(followers[i-1].x-20);
  	followers[i].y = pct*followers[i].y + (1-pct)*followers[i-1].y;
  	ellipse(followers[i].x,followers[i].y,20,20);
  }

  ellipse(followers[0].x,followers[0].y,40,40);

}

