#include <iostream>

int main() {
  char op;
  double n1;
  double n2;
  double result; 
  std::cout << " ▄████▄   ▄▄▄       ██▓     ▄████▄   █    ██  ██▓    ▄▄▄     ▄▄▄█████▓ ▒█████   ██▀███  \n"
    "▒██▀ ▀█  ▒████▄    ▓██▒    ▒██▀ ▀█   ██  ▓██▒▓██▒   ▒████▄   ▓  ██▒ ▓▒▒██▒  ██▒▓██ ▒ ██▒\n"
    "▒▓█    ▄ ▒██  ▀█▄  ▒██░    ▒▓█    ▄ ▓██  ▒██░▒██░   ▒██  ▀█▄ ▒ ▓██░ ▒░▒██░  ██▒▓██ ░▄█ ▒\n"
    "▒▓▓▄ ▄██▒░██▄▄▄▄██ ▒██░    ▒▓▓▄ ▄██▒▓▓█  ░██░▒██░   ░██▄▄▄▄██░ ▓██▓ ░ ▒██   ██░▒██▀▀█▄  \n"
    "▒ ▓███▀ ░ ▓█   ▓██▒░██████▒▒ ▓███▀ ░▒▒█████▓ ░██████▒▓█   ▓██▒ ▒██▒ ░ ░ ████▓▒░░██▓ ▒██▒\n"
    "░ ░▒ ▒  ░ ▒▒   ▓▒█░░ ▒░▓  ░░ ░▒ ▒  ░░▒▓▒ ▒ ▒ ░ ▒░▓  ░▒▒   ▓▒█░ ▒ ░░   ░ ▒░▒░▒░ ░ ▒▓ ░▒▓░\n"
    "  ░  ▒     ▒   ▒▒ ░░ ░ ▒  ░  ░  ▒   ░░▒░ ░ ░ ░ ░ ▒  ░ ▒   ▒▒ ░   ░      ░ ▒ ▒░   ░▒ ░ ▒░\n"
    "░          ░   ▒     ░ ░   ░         ░░░ ░ ░   ░ ░    ░   ▒    ░      ░ ░ ░ ▒    ░░   ░ \n"
    "░ ░            ░  ░    ░  ░░ ░         ░         ░  ░     ░  ░            ░ ░     ░     \n"
    "░                          ░                                                            " << '\n';
  std::cout << "Enter an operation (+ - / *) ";
  std::cin >> op;
  std::cout << "Enter the first number: ";
  std::cin >> n1;
  std::cout << "Enter the second number: ";
  std::cin >> n2;

  switch(op){
    case '+':
      result = n1 + n2;
      std::cout << result << std::endl;
      break;
    case '-':
      result = n1 - n2;
      std::cout << result << std::endl;
      break;
    case '/':
      result = n1 / n2;
      std::cout << result << std::endl;
      break;
    case '*':
      result = n1 * n2;
      std::cout << result << std::endl;
      break;
    default:
      std::cout << "you fucking retard 😂😂😂😂😂";
  }

    
  
  return 0;
}
