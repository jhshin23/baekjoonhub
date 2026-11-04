const fs = require("fs");
let input = fs.readFileSync(0, "utf8").trim();
let [a, b] = input.split(" ").map(Number);
console.log(`${a+b} ${((a+b)/2).toFixed(1)}`);