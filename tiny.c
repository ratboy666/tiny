/* tiny.c
 *
 * Test "raw" hi-tech c. Do not optimize this.
 *
 * Tektonics:
 *
 * zxc -c tiny.c                   compile t.c to t.obj
 * objtomac tiny.obj >tiny.mac     convert t.obj to t.mac
 * m80 =tiny/i                     assemble t.mac to t.rel
 * l80 tiny,csup/s,tiny/n/y/e      link with csup.rel (c support library)
 *
 * l80 will enter first function, as there is no "END START".
 * This is function start(). start() calls function print()
 * which transfers parameter to DE, and uses BDOS function 9
 * to print the string. Return to start() and then return
 * to CCP!
 *
 * Note that tiny.com is only 128 bytes long! This is as
 * small as we can get.
 *
 */

void print(char *);

/* there is no main... */
void start(void) {
    print("hello\r\n$");
}

void print(char *s) {
#asm
    ld e,(ix+6)
    ld d,(ix+1+6)
    ld c,9
    call 5
#endasm
}
