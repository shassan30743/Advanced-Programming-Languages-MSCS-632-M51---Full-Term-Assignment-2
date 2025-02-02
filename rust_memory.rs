fn main() {
    // A string on the heap - owned by s1
    let s1 = String::from("Hello, Rust!");
    let s2 = s1;  // Move ownership of the data from s1 to s2

    // println!("{}", s1);  // Error: s1 is no longer valid

    let s3 = s2.clone(); // Clone the data so both s2 and s3 own it
    println!("s2 = {}, s3 = {}", s2, s3);

    // Vector allocation and borrowing
    let mut vec = Vec::new();
    vec.push(10);
    vec.push(20);

    print_vector(&vec);        // Immutable borrow
    mutate_vector(&mut vec);   // Mutable borrow
    print_vector(&vec);        // Check that it changed
}

fn print_vector(v: &Vec<i32>) {
    println!("Vector: {:?}", v);
}

fn mutate_vector(v: &mut Vec<i32>) {
    v.push(30);
    println!("Added an element via mutable borrow");
}
