const fs = require("fs");
let input = fs.readFileSync(0, "utf8").trim();
let [a, b, c] = input.split(" ").map(Number);
console.log(a+b+c);
console.log(parseInt((a+b+c)/3));
