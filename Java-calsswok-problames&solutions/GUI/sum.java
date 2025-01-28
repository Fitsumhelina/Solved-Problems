    import javax.swing.*;
    import java.awt.event.ActionEvent;
    import java.awt.event.ActionListener;
    
    public class Sum {
        public static void main(String[] args) {
            JFrame frame = new JFrame("Sum Calculator");
            frame.setSize(300, 200);
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.setLayout(null);

            JLabel label1 = new JLabel("Number 1:");
            label1.setBounds(10, 20, 80, 25);
            frame.add(label1);

            JTextField textField1 = new JTextField();
            textField1.setBounds(100, 20, 165, 25);
            frame.add(textField1);

            JLabel label2 = new JLabel("Number 2:");
            label2.setBounds(10, 50, 80, 25);
            frame.add(label2);

            JTextField textField2 = new JTextField();
            textField2.setBounds(100, 50, 165, 25);
            frame.add(textField2);

            JButton button = new JButton("Calculate");
            button.setBounds(10, 80, 150, 25);
            frame.add(button);

            JLabel resultLabel = new JLabel("Result:");
            resultLabel.setBounds(10, 110, 200, 25);
            frame.add(resultLabel);
            button.addActionListener(e -> {
                try {
                    int num1 = Integer.parseInt(textField1.getText());
                    int num2 = Integer.parseInt(textField2.getText());
                    int sum = num1 + num2;
                    resultLabel.setText("Result: " + sum);
                } catch (NumberFormatException ex) {
                    resultLabel.setText("Please enter valid numbers.");
                }
            });
            });

            frame.setVisible(true);
        }
    }