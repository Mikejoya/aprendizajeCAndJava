const readLine = require("readline");

const arrayDeterminantes = [];
const arrayIguales = [];

function question(prompt) {
  const rl = readLine.createInterface({
    input: process.stdin,
    output: process.stdout,
  });

  return new Promise((resolve, reject) => {
    rl.question(prompt, (res) => {
      rl.close();
      resolve(res);
    });
  });
}

async function assignsValue() {
  console.log("Iniciemos con la primera formula.");
  const num1 = await question("Escriba el numero de x.");
  const num2 = await question("Escriba el numero de y.");
  const num3 = await question("Escriba el numero de z.");
  arrayDeterminantes.push([num1, num2, num3]);
  console.log("Ahora iniciemos con la segunda formula.");
  const num4 = await question("Escriba el numero de x.");
  const num5 = await question("Escriba el numero de y.");
  const num6 = await question("Escriba el numero de z.");
  arrayDeterminantes.push([num4, num5, num6]);
  console.log("Ahora iniciemos con la tercera formula.");
  const num7 = await question("Escriba el numero de x.");
  const num8 = await question("Escriba el numero de y.");
  const num9 = await question("Escriba el numero de z.");
  arrayDeterminantes.push([num7, num8, num9]);

  return arrayDeterminantes;
}

async function determinants(array) {
  const myArrayDeterminantes = array;

  for (let i = 0; i < myArrayDeterminantes.length; i++) {
    for (let j = 0; j < myArrayDeterminantes[i].length; j++) {
      console.log(myArrayDeterminantes[i][j]);
    }
  }
}

async function main() {
  await assignsValue();
  determinants(arrayDeterminantes);
}

main();
