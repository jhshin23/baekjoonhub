const fs = require("fs");
let input = fs.readFileSync(0, "utf8").trim();
let [a, b] = input.split(" ").map(Number);
a = a + b;
b = a + b;
console.log(`${a} ${b}`);