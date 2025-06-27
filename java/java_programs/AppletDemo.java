import java.applet.Applet;
import java.awt.Graphics;
// <applet code="AppletDemo" width=200 height=100></applet>
public class AppletDemo extends Applet {
    public void paint(Graphics g) {
        g.drawString("Hello Applet!", 50, 50);
    }
} 