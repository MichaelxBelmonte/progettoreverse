// Function: FUN_01de5660
// Address: 01de5660
// Size: 577 bytes
// Class: GNDictionary
// String references:
//   "%@%I"


/* WARNING: Removing unreachable block (ram,0x01de5841) */
/* WARNING: Removing unreachable block (ram,0x01de584a) */

void FUN_01de5660(void)

{
  uint uVar1;
  longlong lVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_58;
  char local_50;
  
  uVar1 = *(uint *)(*(longlong *)(unaff_RDI + 0x160) + 0xc);
  if (0 < (int)uVar1) {
    uVar3 = 1;
    lVar2 = **(longlong **)(*(longlong *)(unaff_RDI + 0x160) + 0x10);
    while( true ) {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00d4efa0();
      FUN_00c82bb0();
      if (local_98 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00e3f850();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_98 != 0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(longlong **)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x160) + 0x10) + -8 + uVar3 * 8) +
                  0x370))();
      FUN_00e3faa0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (uVar1 == uVar3) break;
      uVar3 = uVar3 + 1;
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x160) + 0x10) + -8 + uVar3 * 8)
      ;
    }
  }
  return;
}


