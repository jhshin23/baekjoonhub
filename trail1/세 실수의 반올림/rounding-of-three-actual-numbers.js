const fs = require("fs");
let input = fs.readFileSync(0).toString().split("\n");
let [a, b, c] = [Number(input[0]), Number(input[1]), Number(input[2])];
console.log(a.toFixed(3) + "\n" + b.toFixed(3) + "\n" + c.toFixed(3))