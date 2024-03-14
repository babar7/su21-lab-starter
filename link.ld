
SECTIONS
{
  . = 0x80000000;               /* Set the current location to the starting address of the code section (0x80000000) */

  .text : { *(.text) }           /* Define a section named .text and place all objects with the section name .text into it */

  . = 0x80001000;                /* Set the current location to the starting address of the data section (0x80001000) */

  .data : { *(.data) }           /* Define a section named .data and place all objects with the section name .data into it */

  _end = .;                      /* Define a symbol named _end with the value of the current location (end of the data segment) */
}
