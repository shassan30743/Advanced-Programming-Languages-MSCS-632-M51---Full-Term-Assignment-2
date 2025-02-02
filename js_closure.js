function outerFunction() {
    let x = 10; // integer
    console.log("Outer x (initial):", x);

    function innerFunction() {
        x = "Now I'm a string!";
        console.log("Inner x:", x);
    }

    innerFunction();
    console.log("Outer x (after):", x);

    return function closureFunction() {
        // This closure still has access to 'x'
        console.log("Closure sees x:", x);
    };
}

const closure = outerFunction();
closure(); // Observe that x is "Now I'm a string!"
