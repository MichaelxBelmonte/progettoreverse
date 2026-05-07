// Function: FUN_00cdb0d0
// Address: 00cdb0d0
// Size: 955 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00cdb0d0(undefined8 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_278;
  char local_270;
  longlong local_268;
  char local_260;
  uint local_258;
  uint local_254;
  ulonglong local_250;
  ulonglong local_248;
  uint local_240;
  uint local_23c;
  uint local_238;
  undefined1 local_234 [16];
  undefined1 local_224 [16];
  undefined1 local_214 [16];
  undefined1 local_204 [16];
  undefined1 local_1f4 [16];
  undefined1 local_1e4 [16];
  undefined1 local_1d4 [16];
  undefined1 local_1c4 [16];
  undefined1 local_1b4 [16];
  undefined1 local_1a4 [16];
  undefined1 local_194 [16];
  undefined1 local_184 [16];
  undefined1 local_174 [16];
  undefined1 local_164 [16];
  undefined1 local_154 [16];
  undefined1 local_144 [16];
  undefined1 local_134 [16];
  undefined1 local_124 [16];
  undefined1 local_114 [16];
  undefined1 local_104 [16];
  undefined1 local_f4 [16];
  undefined1 local_e4 [16];
  undefined1 local_d4 [16];
  undefined1 local_c4 [16];
  undefined1 local_b4 [16];
  undefined1 local_a4 [16];
  undefined1 local_94 [16];
  undefined1 local_84 [16];
  undefined1 local_74 [16];
  undefined1 local_64 [16];
  undefined1 local_54 [16];
  undefined1 local_44 [16];
  ulonglong local_34;
  longlong local_20;
  
  local_20 = *(longlong *)PTR____stack_chk_guard_024a9898;
  (**(code **)(**(longlong **)(*unaff_RDI + 0x38) + 0x3a0))
            (param_1,*(undefined8 *)(unaff_RSI + 0x8b));
  if ((local_270 != '\0') && (local_278 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = *unaff_RSI;
  local_258 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = unaff_RSI[1];
  local_254 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar2 = *(ulonglong *)(unaff_RSI + 2);
  local_250 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
              | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18
              | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  uVar2 = *(ulonglong *)(unaff_RSI + 4);
  local_248 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18
              | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18
              | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  uVar1 = unaff_RSI[6];
  local_240 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = unaff_RSI[7];
  local_23c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = unaff_RSI[8];
  local_238 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  local_234 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 9),_DAT_023de250);
  local_224 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0xd),_DAT_023de250);
  local_214 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x11),_DAT_023de250);
  local_204 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x15),_DAT_023de250);
  local_1f4 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x19),_DAT_023de250);
  local_1e4 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x1d),_DAT_023de250);
  local_1d4 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x21),_DAT_023de250);
  local_1c4 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x25),_DAT_023de250);
  local_1b4 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x29),_DAT_023de250);
  local_1a4 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x2d),_DAT_023de250);
  local_194 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x31),_DAT_023de250);
  local_184 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x35),_DAT_023de250);
  local_174 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x39),_DAT_023de250);
  local_164 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x3d),_DAT_023de250);
  local_154 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x41),_DAT_023de250);
  local_144 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x45),_DAT_023de250);
  local_134 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x49),_DAT_023de250);
  local_124 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x4d),_DAT_023de250);
  local_114 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x51),_DAT_023de250);
  local_104 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x55),_DAT_023de250);
  local_f4 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x59),_DAT_023de250);
  local_e4 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x5d),_DAT_023de250);
  local_d4 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x61),_DAT_023de250);
  local_c4 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x65),_DAT_023de250);
  local_b4 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x69),_DAT_023de250);
  local_a4 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x6d),_DAT_023de250);
  local_94 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x71),_DAT_023de250);
  local_84 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x75),_DAT_023de250);
  local_74 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x79),_DAT_023de250);
  local_64 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x7d),_DAT_023de250);
  local_54 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x81),_DAT_023de250);
  local_44 = pshufb(*(undefined1 (*) [16])(unaff_RSI + 0x85),_DAT_023de250);
  uVar2 = *(ulonglong *)(unaff_RSI + 0x89);
  local_34 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
             (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
             (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  *(longlong *)(unaff_RSI + 0x8d) = *(longlong *)(unaff_RSI + 0x8b) + 0x22c;
  (**(code **)(**(longlong **)(*unaff_RDI + 0x38) + 0x388))(0x22c,&local_258);
  if ((local_260 != '\0') && (local_268 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_20) {
    return local_268 == 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


