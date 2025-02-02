def outer_function():
    x = 10  # integer type
    def inner_function():
        # Python allows reassigning different types to the same variable
        nonlocal x
        x = "Changed to a string!"
        print("Inner x:", x)

    print("Outer x (before):", x)
    inner_function()
    print("Outer x (after):", x)

outer_function()
