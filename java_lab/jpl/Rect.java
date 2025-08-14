class Rect{
    int length;
    int breadth;
    void get_data(int x, int y)
    {
        length = x;
        breadth = y;
    }
    int rect_area()
    {
        int area;
        area = length*breadth;
        return(area);
    }
}

class RectArea
{
    public static void main(String[] args) {
        Rect r1 = new Rect();
        r1.length =15;
        r1.breadth = 20;
        int area1 = r1.length* r1.breadth;

        Rect r2 = new Rect();
        r2.get_data(20,40);
        int area2 = r2.rect_area();

        System.out.println("The 1st Object area: "+area1+" 2nd object area:"+area2);

    }
}