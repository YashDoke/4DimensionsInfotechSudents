import java.sql.*;
import java.sql.Connection;
import java.sql.SQLException;
import java.sql.PreparedStatement;
import java.sql.DriverManager;
import java.net.SocketPermission;





public class JdbcUpdate {

    private static void updateData(Connection connection, int employee_id, double salary) throws SQLException {
        String sql = "UPDATE employee SET salary = ? WHERE employee_id = ?";
        try (PreparedStatement preparedStatement = connection.prepareStatement(sql)) {
            preparedStatement.setDouble(1, salary);
            preparedStatement.setInt(2, employee_id);

            int rowsUpdated = preparedStatement.executeUpdate();
            if (rowsUpdated > 0) {
                System.out.println("Employee data updated successfully.");
            }
        }
    }

    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");

            String url = "jdbc:mysql://localhost:3306/companydata1";
            String username = "root";
            String password = "root";
            Connection connection = DriverManager.getConnection(url, username, password);
            System.out.println("Connection established successfully.");

            updateData(connection, 101, 100000.0);
            updateData(connection, 102, 200000.0);

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
