import javax.swing.*;
class Main {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Login Form");
        frame.setSize(400, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel nameLabel = new JLabel("Name:");
        nameLabel.setBounds(50, 50, 80, 30);
        
        JLabel passwordLabel = new JLabel("Password:");
        passwordLabel.setBounds(50, 100, 80, 30);
        
        JTextField nameField = new JTextField();
        nameField.setBounds(150, 50, 200, 30);
        
        JPasswordField passwordField = new JPasswordField();
        passwordField.setBounds(150, 100, 200, 30);
        
        JLabel sexLabel = new JLabel("Sex:");
        sexLabel.setBounds(50, 150, 80, 30);
        
        JRadioButton maleButton = new JRadioButton("Male");
        maleButton.setBounds(150, 150, 80, 30);
        
        JRadioButton femaleButton = new JRadioButton("Female");
        femaleButton.setBounds(230, 150, 80, 30);
        
        ButtonGroup sexGroup = new ButtonGroup();
        sexGroup.add(maleButton);
        sexGroup.add(femaleButton);
        
        JCheckBox studentCheckBox = new JCheckBox("Student");
        studentCheckBox.setBounds(150, 200, 200, 30);
        
        JButton submitButton = new JButton("Submit");
        submitButton.setBounds(150, 250, 100, 30);
        
        submitButton.addActionListener(e -> {
            String name = nameField.getText();
            String password = new String(passwordField.getPassword());
            String sex = maleButton.isSelected() ? "Male" : "Female";
            boolean isStudent = studentCheckBox.isSelected();
            
            JOptionPane.showMessageDialog(frame, "Name: " + name + "\nPassword: " + password + "\nSex: " + sex + "\nStudent: " + isStudent);
        });
        
        frame.add(nameLabel);
        frame.add(passwordLabel);
        frame.add(nameField);
        frame.add(passwordField);
        frame.add(sexLabel);
        frame.add(maleButton);
        frame.add(femaleButton);
        frame.add(studentCheckBox);
        frame.add(submitButton);
        
        frame.setLayout(null);
        frame.setVisible(true);
    }
}
