class Temperature {
    constructor(temp, u) {
        this.temperature = temp;
        this.unit = u.toUpperCase();
    }

    convertToCelsius() {
        if (this.unit === 'F') {
            return (this.temperature - 32) * 5 / 9;
        } else if (this.unit === 'C') {
            return this.temperature;
        } else {
            return 0;
        }
    }

    convertToFahrenheit() {
        if (this.unit === 'C') {
            return (this.temperature * 9 / 5) + 32;
        } else if (this.unit === 'F') {
            return this.temperature;
        } else {
            return 0;
        }
    }

    displayConversion() {
        if (this.unit === 'F') {
            console.log(`${this.temperature} F is ${this.convertToCelsius()} C.`);
        } else if (this.unit === 'C') {
            console.log(`${this.temperature} C is ${this.convertToFahrenheit()} F.`);
        } else {
            console.log("Invalid temperature unit. Please enter 'F' or 'C'.");
        }
    }
}

let temperature;
let unit;
let cont = true;
let ask;

while (cont) {
    temperature = parseFloat(prompt("Enter temperature (followed by 'F' for Fahrenheit or 'C' for Celsius): "));
    unit = prompt("Enter temperature unit (F/C): ").toUpperCase();
    let temp = new Temperature(temperature, unit);
    temp.displayConversion();
    ask = prompt("Do you want to quit the program? (Y/N): ").toUpperCase();
    if (ask === 'Y') {
        cont = false;
    }
}
