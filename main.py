import tkinter as tk
import subprocess
from tkinter import messagebox

def error_dialog(errors):
    root = tk.Tk()
    root.withdraw()
    messagebox.showerror("Error", errors)
    
def run_command():
    program = text_field.get("1.0", 'end-1c')

    with open("test.txt", "w") as f:
        f.write(program)

    with open("results.txt", "w") as stdout_file, open("errors.txt", "w") as stderr_file:
        process = subprocess.Popen(
            [".\\a.exe", ".\\test.txt"],
            stdout=stdout_file,
            stderr=stderr_file,
            universal_newlines=True,
        )
        process.wait()

    with open("results.txt", "r") as f:
        result_field.insert(tk.END, f.read())

    with open("errors.txt", "r") as f:
        errors = f.read()
        if errors:
            error_dialog(errors)

root = tk.Tk()
root.title("Mini java Compiler")



# Create the label and text field widgets
text_label = tk.Label(root, text="Enter Program")
text_field = tk.Text(root, width=100, height=20)
result_label = tk.Label(root, text="Results:")
result_field = tk.Text(root)

# Create the button widget
run_button = tk.Button(root, text="COMPILE", command=run_command)

# Add the widgets to the grid
text_label.grid(row=0, column=0, padx=10, pady=10)
text_field.grid(row=1, column=0, padx=10, pady=10)

# Use columnspan to make the result label and field span two columns
run_button.grid(row=2, column=0, columnspan=4, padx=10, pady=10)
result_label.grid(row=2, column=0, columnspan=4, padx=10, pady=10)
result_field.grid(row=3, column=0, columnspan=4, padx=10, pady=10)


# Use sticky options to make the last text field stick to the east
result_field.grid(sticky='e')

root.mainloop()