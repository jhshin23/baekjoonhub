const fs = require("fs");
let input = fs.readFileSync(0, "utf8").trim();

const [front, middle, back] = input.split("-");

console.log(`${front}-${back}-${middle}`);