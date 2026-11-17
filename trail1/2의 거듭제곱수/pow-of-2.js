const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim();
let n = Number(input);
let cnt = 0;

while (n > 1) {
    cnt++;
    n = n / 2;
}
console.log(cnt);