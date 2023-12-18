import tkinter as tk
from tkinter import ttk
from tqdm import tqdm
import time

def run_progressbar():
    progress_bar = ttk.Progressbar(root, orient="horizontal", length=200, mode="determinate")
    progress_bar.pack(pady=10)
    
    # Function that simulates a process with tqdm
    def simulate_process():
        for _ in tqdm(range(10), desc="Progress"):
            time.sleep(0.1)
            progress_bar["value"] += 10
            root.update_idletasks()

    # Start the process simulation
    simulate_process()

# Create Tkinter window
root = tk.Tk()
root.title("Tkinter Progressbar with tqdm")
root.geometry("300x150")

# Button to start the progress bar
start_button = tk.Button(root, text="Start Progress", command=run_progressbar)
start_button.pack(pady=20)

# Run Tkinter main loop
root.mainloop()
