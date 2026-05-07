// Function: FUN_006fcaf0
// Address: 006fcaf0
// Size: 827 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x006fcd0d) */
/* WARNING: Removing unreachable block (ram,0x006fcd16) */
/* WARNING: Removing unreachable block (ram,0x006fcb35) */
/* WARNING: Removing unreachable block (ram,0x006fcb3e) */
/* WARNING: Removing unreachable block (ram,0x006fcd4f) */
/* WARNING: Removing unreachable block (ram,0x006fcd58) */
/* WARNING: Removing unreachable block (ram,0x006fcda6) */
/* WARNING: Removing unreachable block (ram,0x006fcdb3) */
/* WARNING: Removing unreachable block (ram,0x006fcc37) */
/* WARNING: Removing unreachable block (ram,0x006fcc40) */
/* WARNING: Removing unreachable block (ram,0x006fcbfc) */
/* WARNING: Removing unreachable block (ram,0x006fcc05) */
/* WARNING: Removing unreachable block (ram,0x006fcc7a) */
/* WARNING: Removing unreachable block (ram,0x006fcc83) */
/* WARNING: Removing unreachable block (ram,0x006fcdd8) */
/* WARNING: Removing unreachable block (ram,0x006fcde5) */

void FUN_006fcaf0(void)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  lVar1 = unaff_RDI[2];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_002ea230();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_006f3f00();
  cVar4 = FUN_00751ba0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && ((int)unaff_RDI[0x1d] != 0)) {
    FUN_006f3f00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      (**(code **)(*unaff_RDI + 0x5d8))();
      if (local_38 == '\0') {
        if (local_40 == 0) goto LAB_006fce11;
        FUN_00d50b00();
      }
      else if (local_40 == 0) goto LAB_006fce11;
      FUN_0062abf0();
      if (local_40 != 0) {
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        FUN_0051be00();
        if (local_40 == 0) {
          bVar3 = true;
        }
        else {
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          plVar2 = (longlong *)unaff_RDI[2];
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar2 + 0x9a0))();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d50b20();
          lVar1 = unaff_RDI[2];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_002f1240();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != 0) && (local_40 != 0)) {
            FUN_01ed9930();
          }
          if (local_40 != 0) {
            FUN_00d50b20();
            FUN_00d50b20();
          }
          bVar3 = false;
        }
        FUN_00d50b20();
        if (!bVar3) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
LAB_006fce11:
  *(undefined4 *)(unaff_RDI + 0x1d) = 0;
  return;
}


