const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim();
const a = Number(input);
if (a >= 113) {
    console.log(1);
}
else{
    console.log(0);
}