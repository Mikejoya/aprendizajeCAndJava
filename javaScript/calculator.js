const readline = require("readline");

function question(prompt) {
  const rl = readline.createInterface({
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

async function resOperation() {
  const operation = await question(
    "Escriba el tipo de operacion que desea realizar (+, -, *, /): "
  );
  const num1 = parseFloat(await question("Escriba el primer numero: "));
  const num2 = parseFloat(await question("Escriba el segundo numero: "));

  let result;
  switch (operation) {
    case "+":
      result = num1 + num2;
      break;
    case "-":
      result = num1 - num2;
      break;
    case "*":
      result = num1 * num2;
      break;
    case "/":
      if (num2 === 0) {
        console.log("Error: No se puede dividir por cero.");
        return;
      }
      result = num1 / num2;
      break;
    default:
      console.log("Error: Operacion no valida.");
      return;
  }
  console.log(`El resultado de ${num1} ${operation} ${num2} es: ${result}`);
}

resOperation();
