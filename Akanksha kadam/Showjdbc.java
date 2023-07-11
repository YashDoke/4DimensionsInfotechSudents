
  import java.sql.*;

public class Showjdbc {
  


    public static void showData(Connection connection) throws SQLException {
        String sql = "SELECT * FROM student";
        try (Statement statement = connection.createStatement();
             ResultSet resultSet = statement.executeQuery(sql)) {
            while (resultSet.next()) {
                int stud_id = resultSet.getInt("stud_id");
                String first_name = resultSet.getString("first_name");
                String last_name = resultSet.getString("last_name");
                double age = resultSet.getDouble("age");
                System.out.println("Student_id=" + stud_id + " first_name=" + first_name +
                        " last_name=" + last_name + " Age of student=" + age);
            }
        }
    }

    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");

            String url = "jdbc:mysql://localhost:3306/newdb";
            String username = "root";
            String password = "root";
            Connection connection = DriverManager.getConnection(url, username, password);
            System.out.println("Connection established successfully.");

            showData(connection);

            connection.close();
        } catch (ClassNotFoundException e) {
            System.out.println("JDBC Driver not found.");
            e.printStackTrace();
        } catch (SQLException e) {
            System.out.println("Error in database connection.");
            e.printStackTrace();
        }
    }





}
