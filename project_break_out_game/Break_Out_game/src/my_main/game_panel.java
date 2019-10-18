
package my_main;

import java.awt.Graphics2D;
import java.awt.Rectangle;
import java.awt.RenderingHints;
import java.awt.event.MouseEvent;
import java.awt.event.MouseMotionListener;
import java.awt.image.BufferedImage;
import java.io.IOException;
import java.net.URL;
import java.util.ArrayList;
//import java.util.ArrayList;
import java.awt.Color;
import java.awt.Font;

import javax.sound.sampled.AudioInputStream;
import javax.sound.sampled.AudioSystem;
import javax.sound.sampled.Clip;
import javax.sound.sampled.LineUnavailableException;
import javax.sound.sampled.UnsupportedAudioFileException;
import javax.swing.JPanel;

import java.awt.Graphics;
//import java.awt.event.*;


public class game_panel extends JPanel implements Runnable {

	public static void main(String[] args) {
		
	}
	
	private static final long serialVersionUID = 1L;

	//Fields
	private boolean running;
	private boolean ScreenShakeActive;
	private long screenShakeTimer;
	
	private BufferedImage image;
	private Graphics2D g;
	private MyMouseMotionListener theMouseListener;
	
	private int mousex;
	
	//entities
	private Ball theBall;
	private Paddle thePaddle;
	private Map theMap;
	private HUD theHud;
	private ArrayList<PowerUp> powerUps;
		
	//constructor
	public game_panel() {
	
		init();

	}

	@Override
	public void run() {
		// this is the main game loop called by the thread in game_main class over and over
		//Game loop
			
		try {
				Thread.sleep(500);
		}
		catch (Exception e) {
				e.printStackTrace();
		}
		
		while(running == true) {		
			//Thread ThreadObj1 = new Thread();
				
			//update
			update();
			
			// render or draw
			draw();
			
			//display
			repaint();
			
			try {
				Thread.sleep(12);
			} catch (Exception e) {
				e.printStackTrace();
			  }
		}		
	}
	
}
