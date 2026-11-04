const fs = require("fs");
let input = fs.readFileSync(0, "utf8").trim();
let [a, b, c] = input.split(" ").map(Number);
let sum = a+b+c;
let avg = parseInt((a+b+c)/3);
console.log(sum)
console.log(avg)
console.log(sum-avg)