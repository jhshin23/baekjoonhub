const fs = require("fs");
let input = fs.readFileSync(0).toString().split("\n");
let [a, b] = input[0].split(" ");
let c = input[1];
[a, b, c] = [Number(a), Number(b), Number(c)];
console.log(a, b, c);