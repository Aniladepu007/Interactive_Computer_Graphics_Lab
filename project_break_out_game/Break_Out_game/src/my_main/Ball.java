package my_main;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics2D;
import java.awt.Rectangle;

public class Ball {
	
	//fields
	private double x, y, dx, dy;
	private double ballSize = 16;
	private double initialSize;
	private long ballSizeTimer;
	
	public Ball() {
		
		x = game_main.WIDTH/2;
		y = game_main.HEIGHT/2;
		dx = 2;
		dy = 5;
		initialSize = 16;
	}
	
	public synchronized void update() {
		setPosition();
		
		if((System.nanoTime() - ballSizeTimer) / 1000 > 6000000 ) {
			ballSize = initialSize;
		}

	}
	
	public synchronized void setPosition() {
		
		x += dx;
		y += dy;
	
		if( x < 0 ) {
			
			dx = -dx;
		}

		if( y < 0 ) {
			
			dy = -dy;
		}

		if(x > game_main.WIDTH - ballSize) {
			
			dx = -dx;
		}
		
		if(y > game_main.HEIGHT - ballSize) {
			
			dy = -dy;
		}
	}
	
	public Rectangle getRect() {
		
		return new Rectangle((int) x, (int) y, (int) ballSize, (int) ballSize);
	}
	
	public synchronized double getDY() { return dy;	}	
	
	public synchronized double getBallSize() { return ballSize;	}
	
	public synchronized void setDY(double theDY) {
		dy = theDY;
	}
	
	public synchronized void setY(double theY) {
		y = theY;
	}

	public synchronized double getDX() { return dx;	}
	
	public void setDX(double theDX) {
		dx = theDX;
	}
	
	public synchronized double getX() { return x;	}
	
	public synchronized void draw(Graphics2D g) {

		//g.setColor(Color.DARK_GRAY);
		g.setStroke(new BasicStroke(4));
		//g.drawOval((int) x,(int) y,(int) ballSize,(int) ballSize);
		g.setColor(Color.RED);
		g.fillOval((int) x,(int) y,(int) ballSize,(int) ballSize);
	} 

	public boolean YouLose() {
		boolean loser = false;
		if(y > game_main.HEIGHT - 50)
			loser = true;
	   return loser;
	}

	public synchronized void alterBallSize(double theSize) {
		ballSize = theSize;
		setBallSizeTimer();
	}
	
	public synchronized void setBallSizeTimer() {
		ballSizeTimer = System.nanoTime();
	}

	
}



