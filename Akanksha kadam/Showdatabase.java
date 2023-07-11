import java.sql.*;


class Showdatabase {
    public static void showData(Connection connection) throws SQLException {
        String sql = "SELECT * FROM employee";
        try (Statement statement = connection.createStatement();
             ResultSet resultSet = statement.executeQuery(sql)) {
            while (resultSet.next()) {
                int employee_id = resultSet.getInt("employee_id");
                String first_name = resultSet.getString("first_name");
                String last_name = resultSet.getString("last_name");
                double salary = resultSet.getDouble("salary");
                System.out.println("employee_id=" + employee_id + " first_name=" + first_name +
                        " last_name=" + last_name + " salary=" + salary);
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
