// Function: FUN_006472f0
// Address: 006472f0
// Size: 550 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x006473e1) */
/* WARNING: Removing unreachable block (ram,0x006473ea) */

void FUN_006472f0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *unaff_RDI;
  longlong local_a0;
  char local_98;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_30;
  char local_28;
  
  if (unaff_RDI[0x16] != 0) {
    if (unaff_RDI[0x1d] != 0) {
      FUN_01e40eb0();
      lVar1 = unaff_RDI[0x2e];
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (local_30 == lVar1) {
        return;
      }
    }
    if (*(int *)(unaff_RDI[0x20] + 0xc) == 0) {
      (**(code **)(*unaff_RDI + 0x5e0))();
      if ((local_28 == '\0') && (local_30 != 0)) {
        FUN_00d50b00();
      }
      FUN_00645c10();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (local_30 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar2 = (longlong *)unaff_RDI[0x2e];
      local_48 = 0;
      lVar1 = unaff_RDI[0x1d];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\x01';
      local_50 = lVar1;
      (**(code **)(*plVar2 + 0x9e0))();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d403d0();
    lVar1 = DAT_02725940;
    if (DAT_02725940 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_60 = 0;
    local_58 = '\0';
    FUN_00d40470(&local_60,&stack0xffffffffffffffc0,1,1);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_0063f660();
  }
  return;
}


