float x0,y0,x1,y1;
float xp, yp;
float step = 0.01;
float pct = 0.0;
float R,G,B;
color c;

void setup(){
  size(500,500); 
  x0=random(500);
  y0=random(500);
  x1=random(500);
  y1=random(500);
  xp = x0;
  yp = y0;
  R =random(255);
  G =random(255); 
  B =random(255);
  c = color(R,G,B);
}

void draw(){
  background(0);
  if(pct<1.0){
  xp = x0 + ((x1 - x0)*pct);
  yp = x0 + ((y1 - y0) *pct);
  pct += step;
  }else{
  x0=xp;
  y0=yp;
  R =random(255);
  G =random(255); 
  B =random(255);
  c = color(R,G,B);
  x1=random(500);
  y1=random(500);
  pct = 0.0;
  step = 0.01;
  xp=x0;
  yp=y0;
  }
  fill(c);
  ellipse(xp,yp,50,50);
}
