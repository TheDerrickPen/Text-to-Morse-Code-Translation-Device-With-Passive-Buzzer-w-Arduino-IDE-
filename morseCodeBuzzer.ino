//global variables
char ch;
int dashDelay = 900;
int dotDelay = 250;
int pinBuzzer = 8;
char string[] = "SOS"; // string to be outputted. Can be replaced with whatever you desire
int size = sizeof(string) / sizeof(string[0]) - 1;

void setup() {
    pinMode(pinBuzzer, OUTPUT);
    for (int i = 0; i < size; i++) {
        ch = string[i];
        morseCode(ch);
    }
}

void dot() {
    tone(pinBuzzer, 1000);         // play tone at 1000 Hz
    delay(dotDelay);
    noTone(pinBuzzer);             // stop tone
    delay(dotDelay);
}

void dash() {
    tone(pinBuzzer, 1000);
    delay(dashDelay);
    noTone(pinBuzzer);
    delay(dotDelay);
}

void spaceBetweenLetters() {
    delay(dotDelay * 3);
}

void morseCode(char ch) {
    switch(ch) {
        case 'a':
        case 'A':
            dot();
            dash();
            spaceBetweenLetters();
            break;
        case 'b':
        case 'B':
            dash();
            dot();
            dot();
            dot();
            spaceBetweenLetters();
            break;
        case 'c':
        case 'C':
            dash();
            dot();
            dash();
            dot();
            spaceBetweenLetters();
            break;
        case 'd':
        case 'D':
            dash();
            dot();
            dot();
            spaceBetweenLetters();
            break;
        case 'e':
        case 'E':
            dot();
            spaceBetweenLetters();
            break;
        case 'f':
        case 'F':
            dot();
            dot();
            dash();
            dot();
            spaceBetweenLetters();
            break;
        case 'g':
        case 'G':
            dash();
            dash();
            dot();
            spaceBetweenLetters();
            break;
        case 'h':
        case 'H':
            dot();
            dot();
            dot();
            dot();
            spaceBetweenLetters();
            break;
        case 'i':
        case 'I':
            dot();
            dot();
            spaceBetweenLetters();
            break;
        case 'j':
        case 'J':
            dot();
            dash();
            dash();
            dash();
            spaceBetweenLetters();
            break;
        case 'k':
        case 'K':
            dash();
            dot();
            dash();
            spaceBetweenLetters();
            break;
        case 'l':
        case 'L':
            dot();
            dash();
            dot();
            dot();
            spaceBetweenLetters();
            break;
        case 'm':
        case 'M':
            dash();
            dash();
            spaceBetweenLetters();
            break;
        case 'n':
        case 'N':
            dash();
            dot();
            spaceBetweenLetters();
            break;
        case 'o':
        case 'O':
            dash();
            dash();
            dash();
            spaceBetweenLetters();
            break;
        case 'p':
        case 'P':
            dot();
            dash();
            dash();
            dot();
            spaceBetweenLetters();
            break;
        case 'q':
        case 'Q':
            dash();
            dash();
            dot();
            dash();
            spaceBetweenLetters();
            break;
        case 'r':
        case 'R':
            dot();
            dash();
            dot();
            spaceBetweenLetters();
            break;
        case 's':
        case 'S':
            dot();
            dot();
            dot();
            spaceBetweenLetters();
            break;
        case 't':
        case 'T':
            dash();
            spaceBetweenLetters();
            break;
        case 'u':
        case 'U':
            dot();
            dot();
            dash();
            spaceBetweenLetters();
            break;
        case 'v':
        case 'V':
            dot();
            dot();
            dot();
            dash();
            spaceBetweenLetters();
            break;
        case 'w':
        case 'W':
            dot();
            dash();
            dash();
            spaceBetweenLetters();
            break;
        case 'x':
        case 'X':
            dash();
            dot();
            dot();
            dash();
            spaceBetweenLetters();
            break;
        case 'y':
        case 'Y':
            dash();
            dot();
            dash();
            dash();
            spaceBetweenLetters();
            break;
        case 'z':
        case 'Z':
            dash();
            dash();
            dot();
            dot();
            spaceBetweenLetters();
            break;
        case '1':
            dot();
            dash();
            dash();
            dash();
            dash();
            spaceBetweenLetters();
            break;
        case '2':
            dot();
            dot();
            dash();
            dash();
            dash();
            spaceBetweenLetters();
            break;
        case '3':
            dot();
            dot();
            dot();
            dash();
            dash();
            spaceBetweenLetters();
            break;
        case '4':
            dot();
            dot();
            dot();
            dot();
            dash();
            spaceBetweenLetters();
            break;
        case '5':
            dot();
            dot();
            dot();
            dot();
            dot();
            spaceBetweenLetters();
            break;
        case '6':
            dash();
            dot();
            dot();
            dot();
            dot();
            spaceBetweenLetters();
            break;
        case '7':
            dash();
            dash();
            dot();
            dot();
            dot();
            spaceBetweenLetters();
            break;
        case '8':
            dash();
            dash();
            dash();
            dot();
            dot();
            spaceBetweenLetters();
            break;
        case '9':
            dash();
            dash();
            dash();
            dash();
            dot();
            spaceBetweenLetters();
            break;
        case '0':
            dash();
            dash();
            dash();
            dash();
            dash();
            spaceBetweenLetters();
            break;
        case '?':
            dot();
            dot();
            dash();
            dash();
            dot();
            dot();
            spaceBetweenLetters();
            break;
        case '!':
            dash();
            dot();
            dash();
            dot();
            dash();
            dash();
            spaceBetweenLetters();
            break;
        case '.':
            dot();
            dash();
            dot();
            dash();
            dot();
            dash();
            spaceBetweenLetters();
            break;
        case ',':
            dash();
            dash();
            dot();
            dot();
            dash();
            dash();
            spaceBetweenLetters();
            break;
        case ';':
            dash();
            dot();
            dash();
            dot();
            dash();
            dot();
            spaceBetweenLetters();
            break;
        case ':':
            dash();
            dash();
            dash();
            dot();
            dot();
            dot();
            spaceBetweenLetters();
            break;
        case '+':
            dot();
            dash();
            dot();
            dash();
            dot();
            spaceBetweenLetters();
            break;
        case '-':
            dash();
            dot();
            dot();
            dot();
            dot();
            dash();
            spaceBetweenLetters();
            break;
        case '/':
            dash();
            dot();
            dot();
            dash();
            dot();
            spaceBetweenLetters();
            break;
        case '=':
            dash();
            dot();
            dot();
            dot();
            dash();
            spaceBetweenLetters();
            break;
        case ' ':
            delay(dotDelay * 4);
            break;
        default: //unknown character - pausing for letter spacing
            break;
    }
}

void loop() {
    // put your main code here, to run repeatedly:
}