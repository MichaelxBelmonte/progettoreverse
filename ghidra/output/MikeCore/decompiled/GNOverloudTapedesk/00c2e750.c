// Function: FUN_00c2e750
// Address: 00c2e750
// Size: 731 bytes
// Class: GNOverloudTapedesk


/* WARNING: Removing unreachable block (ram,0x00c2e815) */
/* WARNING: Removing unreachable block (ram,0x00c2e821) */

void FUN_00c2e750(int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Da;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  float local_44;
  longlong *local_40;
  char local_38;
  
  plVar1 = (longlong *)unaff_RSI[3];
  if ((plVar1 == (longlong *)0x0) || (lVar2 = unaff_RSI[2], lVar2 == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_90 = 0;
    local_44 = (float)param_1;
    uVar4 = FUN_00d50b00();
    local_90 = '\x01';
    local_98 = lVar2;
    (**(code **)(*plVar1 + 0x618))(uVar4,&local_98);
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (cVar3 != '\0') {
      plVar1 = (longlong *)unaff_RSI[3];
      local_80 = 0;
      lVar2 = unaff_RSI[2];
      uVar4 = extraout_XMM0_Da;
      if (lVar2 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_80 = '\x01';
      local_88 = lVar2;
      (**(code **)(*plVar1 + 0x88))(uVar4,&local_88);
      local_68 = local_40;
      local_60 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_60 = '\x01';
      uVar4 = FUN_00c71d60();
      *(undefined4 *)(unaff_RSI + 4) = uVar4;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    local_44 = (float)(int)local_44 * DAT_023d4ff8 + *(float *)(unaff_RSI + 4);
    plVar1 = (longlong *)unaff_RSI[3];
    uVar4 = FUN_00d46dc0();
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar4 = FUN_00d50b00();
      }
      lVar2 = unaff_RSI[2];
    }
    else {
      local_38 = '\0';
      lVar2 = unaff_RSI[2];
    }
    local_50 = '\x01';
    if (lVar2 != 0) {
      local_50 = '\x01';
      local_70 = 0;
      uVar4 = FUN_00d50b00();
    }
    local_70 = '\x01';
    local_78 = lVar2;
    (**(code **)(*plVar1 + 0x80))(uVar4,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RSI + 0x378))(local_44);
    FUN_00d50b20();
  }
  return;
}


