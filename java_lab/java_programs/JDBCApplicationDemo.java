import java.sql.*;
public class JDBCApplicationDemo {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/test", "root", "password");
            Statement stmt = con.createStatement();
            ResultSet rs = stmt.executeQuery("SELECT 1");
            while (rs.next()) {
                System.out.println("DB Result: " + rs.getInt(1));
            }
            con.close();
        } catch (Exception e) {
            System.out.println("DB Error: " + e.getMessage());
        }
    }
} 