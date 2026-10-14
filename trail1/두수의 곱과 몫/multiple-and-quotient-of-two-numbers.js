const fs = require("fs");
let input = fs.readFileSync(0, "utf8").trim();
const [a, b] = input.split(" ").map(Number);

console.log(`${a} * ${b} = ${a * b}`);
console.log(`${a} / ${b} = ${parseInt(a / b)}`);