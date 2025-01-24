import javax.swing.*; // Import the Swing library for GUI components

class Main {
    public static void main(String[] args) {
        // Create a JFrame instance
        JFrame frame = new JFrame("Login Form");
        
        // Set the size of the frame
        frame.setSize(400, 300);
        
        // Specify what happens when the frame is closed
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        // Create labels for Name and Password
        JLabel nameLabel = new JLabel("Name:");
        nameLabel.setBounds(50, 50, 80, 30); // x, y, width, height
        
        JLabel passwordLabel = new JLabel("Password:");
        passwordLabel.setBounds(50, 100, 80, 30);
        
        // Create text fields for Name and Password
        JTextField nameField = new JTextField();
        nameField.setBounds(150, 50, 200, 30);
        
        JPasswordField passwordField = new JPasswordField();
        passwordField.setBounds(150, 100, 200, 30);
        
        // Create a button for form submission
        JButton submitButton = new JButton("Submit");
        submitButton.setBounds(150, 150, 100, 30);
        
        // Add an action listener to the button
        submitButton.addActionListener(e -> {
            // Retrieve entered data
            String name = nameField.getText();
            String password = new String(passwordField.getPassword());
            
            // Show the entered data in a message dialog
            JOptionPane.showMessageDialog(frame, "Name: " + name + "\nPassword: " + password);
        });
        
        // Add components to the frame
        frame.add(nameLabel);
        frame.add(passwordLabel);
        frame.add(nameField);
        frame.add(passwordField);
        frame.add(submitButton);
        
        // Set the layout to null to use absolute positioning
        frame.setLayout(null);
        
        // Make the frame visible
        frame.setVisible(true);
    }
}
