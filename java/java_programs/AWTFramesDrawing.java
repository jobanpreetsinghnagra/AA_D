import java.awt.*;
public class AWTFramesDrawing extends Frame {
    public AWTFramesDrawing() {
        setSize(300, 200);
        setTitle("AWT Drawing");
        setVisible(true);
    }
    public void paint(Graphics g) {
        g.drawRect(50, 50, 100, 50);
        g.drawString("AWT Frame Drawing", 60, 80);
    }
    public static void main(String[] args) {
        new AWTFramesDrawing();
    }
} 