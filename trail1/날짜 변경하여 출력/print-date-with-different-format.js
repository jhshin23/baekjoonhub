const fs = require("fs");
let input = fs.readFileSync(0, "utf8").trim();

const [yyyy, mm, dd] = input.split(".");

console.log(`${mm}-${dd}-${yyyy}`);