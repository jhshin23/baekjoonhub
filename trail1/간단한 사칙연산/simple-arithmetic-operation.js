const fs = require("fs");
let input = fs.readFileSync(0, "utf8").trim();
let [a, b] = input.split(" ");
a = Number(a);
b = Number(b);
console.log(a+b);
console.log(a-b);
console.log(parseInt(a/b));
console.log(a%b);