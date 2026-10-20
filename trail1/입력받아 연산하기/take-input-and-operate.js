const fs = require("fs");
let input = fs.readFileSync(0, "utf8").trim();
let [a, b] = input.split("\n").map(Number);
a = a + 87;
b = b % 10;
console.log(a);
console.log(b);