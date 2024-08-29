static const char *api_source =
"//--------------------\n"
"// Graphics\n"
"//--------------------\n"
"\n"
"class Graphics {\n"
"    foreign static clip(x, y, w, h)\n"
"    foreign static clear(color)\n"
"    foreign static get(x, y)\n"
"    foreign static set(x, y, color)\n"
"    foreign static line(x0, y0, x1, y1, color)\n"
"    foreign static fill(x, y, w, h, color)\n"
"    foreign static rectangle(x, y, w, h, color)\n"
"    foreign static fillRectangle(x, y, w, h, color)\n"
"    foreign static circle(x, y, r, color)\n"
"    foreign static fillCircle(x, y, r, color)\n"
"    foreign static blit(image, dx, dy, sx, sy, w, h)\n"
"    foreign static blitAlpha(image, dx, dy, sx, sy, w, h, alpha)\n"
"    foreign static blitTint(image, dx, dy, sx, sy, w, h, tint)\n"
"    foreign static print(text, x, y, color)\n"
"    foreign static print(font, text, x, y, color)\n"
"    foreign static screenshot()\n"
"    foreign static measure(text)\n"
"\n"
"    static clip() {\n"
"        clip(0, 0, -1, -1)\n"
"    }\n"
"\n"
"    static blit(image, x, y) {\n"
"        blit(image, x, y, 0, 0, image.width, image.height)\n"
"    }\n"
"\n"
"    static blitAlpha(image, x, y) {\n"
"        blitAlpha(image, x, y, 0, 0, image.width, image.height, 1)\n"
"    }\n"
"\n"
"    static blitAlpha(image, x, y, alpha) {\n"
"        blitAlpha(image, x, y, 0, 0, image.width, image.height, alpha)\n"
"    }\n"
"\n"
"    static blitTint(image, x, y, tint) {\n"
"        blitTint(image, x, y, 0, 0, image.width, image.height, tint)\n"
"    }\n"
"\n"
"    foreign static width\n"
"    foreign static height\n"
"    foreign static clearColor=(v)\n"
"}\n"
"\n"
"foreign class Color {\n"
"    foreign construct new(r, g, b, a)\n"
"    foreign construct new(r, g, b)\n"
"\n"
"    foreign [index]\n"
"    foreign [index]=(v)\n"
"\n"
"    r { this[2] }\n"
"    g { this[1] }\n"
"    b { this[0] }\n"
"    a { this[3] }\n"
"\n"
"    r=(v) { this[2] = v }\n"
"    g=(v) { this[1] = v }\n"
"    b=(v) { this[0] = v }\n"
"    a=(v) { this[3] = v }\n"
"\n"
"    toString { \"Color (r: %(r), g: %(g), b: %(b), a: %(a))\" }\n"
"\n"
"    static none { new(0, 0, 0, 0) }\n"
"    static black { new(0, 0, 0) }\n"
"    static darkBlue { new(29, 43, 83) }\n"
"    static darkPurple { new(126, 37, 83) }\n"
"    static darkGreen { new(0, 135, 81) }\n"
"    static brown { new(171, 82, 54) }\n"
"    static darkGray { new(95, 87, 79) }\n"
"    static lightGray { new(194, 195, 199) }\n"
"    static white { new(255, 241, 232) }\n"
"    static red { new(255, 0, 77) }\n"
"    static orange { new(255, 163, 0) }\n"
"    static yellow { new(255, 236, 39) }\n"
"    static green { new(0, 228, 54) }\n"
"    static blue { new(41, 173, 255) }\n"
"    static indigo { new(131, 118, 156) }\n"
"    static pink { new(255, 119, 168) }\n"
"    static peach { new(255, 204, 170) }\n"
"}\n"
"\n"
"foreign class Image {\n"
"    foreign construct new(w, h)\n"
"    foreign construct new(filename)\n"
"    foreign construct fromMemory(data)\n"
"\n"
"    foreign clip(x, y, w, h)\n"
"    foreign clear(color)\n"
"    foreign get(x, y)\n"
"    foreign set(x, y, color)\n"
"    foreign line(x0, y0, x1, y1, color)\n"
"    foreign fill(x, y, w, h, color)\n"
"    foreign rectangle(x, y, w, h, color)\n"
"    foreign fillRectangle(x, y, w, h, color)\n"
"    foreign circle(x, y, r, color)\n"
"    foreign fillCircle(x, y, r, color)\n"
"    foreign blit(image, dx, dy, sx, sy, w, h)\n"
"    foreign blitAlpha(image, dx, dy, sx, sy, w, h, alpha)\n"
"    foreign blitTint(image, dx, dy, sx, sy, w, h, tint)\n"
"    foreign print(text, x, y, color)\n"
"    foreign print(font, text, x, y, color)\n"
"    foreign resize(w, h)\n"
"    foreign save(type, filename)\n"
"    foreign saveToMemory()\n"
"\n"
"    clip() {\n"
"        clip(0, 0, -1, -1)\n"
"    }\n"
"\n"
"    blit(image, x, y) {\n"
"        blit(image, x, y, 0, 0, image.width, image.height)\n"
"    }\n"
"\n"
"    blitAlpha(image, x, y) {\n"
"        blitAlpha(image, x, y, 0, 0, image.width, image.height, 1)\n"
"    }\n"
"\n"
"    blitAlpha(image, x, y, alpha) {\n"
"        blitAlpha(image, x, y, 0, 0, image.width, image.height, alpha)\n"
"    }\n"
"\n"
"    blitTint(image, x, y, tint) {\n"
"        blitTint(image, x, y, 0, 0, image.width, image.height, tint)\n"
"    }\n"
"\n"
"    foreign width\n"
"    foreign height\n"
"}\n"
"\n"
"foreign class Font {\n"
"    foreign construct new(filename)\n"
"    foreign construct fromMemory(data)\n"
"\n"
"    foreign measure(text)\n"
"}\n"
"\n"
"//--------------------\n"
"// Audio\n"
"//--------------------\n"
"\n"
"foreign class Source {\n"
"    foreign construct new(filename)\n"
"    foreign construct fromSound(sound)\n"
"\n"
"    foreign play()\n"
"    foreign pause()\n"
"    foreign stop()\n"
"\n"
"    foreign length\n"
"    foreign position\n"
"    foreign state\n"
"    foreign gain=(v)\n"
"    foreign pan=(v)\n"
"    foreign pitch=(v)\n"
"    foreign loop=(v)\n"
"}\n"
"\n"
"foreign class Sound {\n"
"    foreign construct new(samples, sampleRate, bitDepth, channels)\n"
"    foreign construct new(filename)\n"
"    foreign construct fromMemory(data)\n"
"\n"
"    foreign getSample(index)\n"
"    foreign setSample(index, sample)\n"
"    foreign save(filename)\n"
"    foreign saveToMemory()\n"
"\n"
"    getSample(index, channel) {\n"
"        getSample(index * channels + (channel - 1))\n"
"    }\n"
"\n"
"    setSample(index, channel, sample) {\n"
"        setSample(index * channels + (channel - 1), sample)\n"
"    }\n"
"\n"
"    foreign bitDepth\n"
"    foreign sampleRate\n"
"    foreign channels\n"
"    foreign length\n"
"}\n"
"\n"
"//--------------------\n"
"// Input\n"
"//--------------------\n"
"\n"
"class Keyboard {\n"
"    foreign static down(key)\n"
"    foreign static pressed(key)\n"
"}\n"
"\n"
"class Mouse {\n"
"    foreign static down(button)\n"
"    foreign static pressed(button)\n"
"\n"
"    foreign static x\n"
"    foreign static y\n"
"    foreign static scrollX\n"
"    foreign static scrollY\n"
"}\n"
"\n"
"//--------------------\n"
"// System\n"
"//--------------------\n"
"\n"
"class Window {\n"
"    foreign static close()\n"
"\n"
"    foreign static active\n"
"    foreign static width\n"
"    foreign static height\n"
"}\n"
"\n"
"class OS {\n"
"    foreign static name\n"
"    foreign static blinkVersion\n"
"    foreign static args\n"
"    foreign static clipboard\n"
"    foreign static clipboard=(v)\n"
"}\n"
"\n"
"class Directory {\n"
"    foreign static exists(path)\n"
"    foreign static list(path)\n"
"}\n"
"\n"
"class File {\n"
"    foreign static exists(path)\n"
"    foreign static size(path)\n"
"    foreign static modTime(path)\n"
"    foreign static read(path)\n"
"    foreign static write(path, data)\n"
"}\n"
"\n"
"foreign class Request {\n"
"    foreign construct new(url)\n"
"\n"
"    foreign make()\n"
"\n"
"    foreign complete\n"
"    foreign status\n"
"    foreign body\n"
"}\n"
"\n"
"//--------------------\n"
"// Base Game\n"
"//--------------------\n"
"\n"
"class BaseGame {\n"
"    config(t) {}\n"
"    init() {}\n"
"    update(dt) {}\n"
"    draw() {}\n"
"    active(active) {}\n"
"    resize(width, height) {}\n"
"    close() {}\n"
"    keyboard(key, pressed) {}\n"
"    input(char) {}\n"
"    mouseButton(button, pressed) {}\n"
"    mouseMove(x, y) {}\n"
"    mouseScroll(dx, dy) {}\n"
"    drop(paths) {}\n"
"}\n";