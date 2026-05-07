// Function: FUN_007ea750
// Address: 007ea750
// Size: 678 bytes
// Class: MDDetectionElementInsp


void FUN_007ea750(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  longlong *plVar6;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  *(undefined4 *)(unaff_RDI + 0x38) = 0;
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  FUN_007e3560();
  if (*(int *)(*(longlong *)(unaff_RDI + 0x28) + 0xc) == 0) {
    FUN_00172bc0();
    plVar6 = DAT_0270b810;
    if (DAT_0270b810 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38 = plVar6;
    local_30 = '\0';
    cVar4 = FUN_00ca18c0();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02729518;
    if (cVar4 == '\0') {
      if (DAT_02729518 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_02729520;
      local_68 = lVar2;
      local_60 = '\x01';
      if (DAT_02729520 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar3;
      local_50 = '\x01';
      FUN_01f6ca30(param_1,&local_58);
      plVar6 = local_38;
      if (local_38 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        bVar1 = false;
      }
      else if (local_30 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
        bVar1 = true;
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_02729518 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_0272f688;
      if (DAT_0272f688 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar3;
      local_70 = '\x01';
      FUN_01f6ca30(param_1,&local_78);
      plVar6 = local_38;
      if (local_38 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        bVar1 = false;
      }
      else if (local_30 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
        bVar1 = true;
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    local_40 = '\0';
    local_48 = plVar5;
    (**(code **)(*plVar6 + 0x5d8))();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar1) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_007e59d0();
    FUN_007e6670();
    FUN_007e8ac0();
    FUN_00172bc0();
    FUN_00d216c0();
    if (*(longlong *)(unaff_RDI + 0x20) != 0) {
      *(undefined8 *)(unaff_RDI + 0x20) = 0;
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


