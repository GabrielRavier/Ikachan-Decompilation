# Ikachan-Decompilation

Decompilation of Ikachan. Can be opened with IDA Pro.

Get IDA Freeware here : https://www.hex-rays.com/products/ida/support/download_freeware.shtml

PS : You do not need the original .exe file to open the idb files.

DISCLAIMER: Any and all content presented in this repository is presented for informational and educational purposes only. Commercial usage is expressly prohibited. I claim no ownership of any code in these repositories. You assume any and all responsibility for using this content responsibly. I claim no responsibiliy or warranty.

File details :

dxlka.idb : This file is the IDA database to open using the 32-bit version of IDA.

All further files were produced by IDA :

dxlka Typeinfo.idc : As indicated, this file contains the typeinfo of the .idb file in the idc scripting language. For some reason, I can't get IDA to produce it, so it's not up to date.

dxlka.idc : This file contains the entire database, dumped to the idc format. If you want, you can manually open the .exe file, then run the idc file in IDA, though the results might not look good.

dxlka.asm : This file contains the disassembly done by IDA, in a possibly re-assemblable format (will have problems)

dxlka.c : This file contains the de-compilation done by the Hex-Rays plugin. It might possibly be re-compilable, but don't get your hopes up.

dxlka.dif : This is a dummy file, to indicate the fact that there is no differences between the assembly contained in the .idb file and the machine code contained in the .exe.

dxlka.h : This is a C header file, which contains structs information.

dxlka.inc : This file contains struct information in a format used by assemblers.

dxlka.lst : This file (a listing file containing the assembly code and offsets) is probably the most useful to people who do not want to bother with installing IDA.

dxlka.map : This file contains information about function offsets.

dxlka.map : This file contains offsets for EVERY LABEL in the program.
