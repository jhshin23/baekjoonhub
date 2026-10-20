const fs = require("fs");
let input = fs.readFileSync(0, "utf8").trim();
const [a, b] = input.split(" ").map(Number);

console.log(`${parseInt(a/b)}...${a%b}`);