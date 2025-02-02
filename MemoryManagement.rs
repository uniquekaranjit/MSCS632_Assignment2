// Filename: MemoryManagement.rs
// Author: Unique Karanjit
// Date: Feb 2, 2025
// Description: A simple example in Rust showing memory management using ownership and borrowing.

fn main() {
    let data = vec![1, 2, 3, 4, 5]; // Heap allocation (Vec manages memory automatically)
    process_data(&data); // Borrowing data instead of transferring ownership
    println!("Data in main after function call: {:?}", data);
} // Memory is automatically freed when `data` goes out of scope

fn process_data(data: &Vec<i32>) {
    println!("Processing data: {:?}", data);
} // Borrowing ensures no ownership transfer
