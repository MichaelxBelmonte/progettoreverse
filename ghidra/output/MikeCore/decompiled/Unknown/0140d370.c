// Function: FUN_0140d370
// Address: 0140d370
// Size: 597 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0140d5ae) */
/* WARNING: Removing unreachable block (ram,0x0140d5bb) */

void FUN_0140d370(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  longlong unaff_RDI;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  lVar3 = DAT_027c0a20;
  if (DAT_027c0a20 != 0) {
    FUN_00d50b00();
  }
  cVar5 = FUN_0140cda0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    FUN_00d95590();
    local_28 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_28 = '\x01';
    local_30 = local_40;
    FUN_00d97f20(param_1,&local_30);
    if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027cc8a0;
    if (DAT_027cc8a0 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*local_50 + 0x50))();
    lVar1 = DAT_02781720;
    cVar6 = '\x01';
    if (cVar5 == '\0') {
      if (DAT_02781720 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*local_50 + 0x50))();
      lVar4 = DAT_027cc890;
      cVar6 = '\x01';
      if (cVar5 == '\0') {
        if (DAT_027cc890 != 0) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*local_50 + 0x50))();
        lVar2 = DAT_02781738;
        cVar6 = '\x01';
        if (cVar5 == '\0') {
          if (DAT_02781738 != 0) {
            FUN_00d50b00();
          }
          cVar6 = (**(code **)(*local_50 + 0x50))();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar6 != '\0') {
      *(undefined1 *)(unaff_RDI + 0x2b) = 1;
    }
    FUN_00d50b20();
  }
  else {
    *(undefined1 *)(unaff_RDI + 0x2b) = 1;
  }
  return;
}


