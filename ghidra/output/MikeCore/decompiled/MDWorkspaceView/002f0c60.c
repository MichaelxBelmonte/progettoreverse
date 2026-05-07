// Function: FUN_002f0c60
// Address: 002f0c60
// Size: 849 bytes
// Class: MDWorkspaceView


/* WARNING: Removing unreachable block (ram,0x002f0ca0) */
/* WARNING: Removing unreachable block (ram,0x002f0cac) */

void FUN_002f0c60(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar4;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01bf1540();
  uVar4 = (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_60;
  local_a0 = DAT_026fe4b8;
  if (DAT_026fe4b8 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_98 = '\x01';
  (**(code **)(*plVar1 + 0x3b0))(uVar4,&local_a0);
  local_70 = local_40;
  local_68 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_68 = '\x01';
  FUN_01d488d0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_02394298);
  plVar1 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  FUN_00d05530();
  (**(code **)(*plVar1 + 0x3b8))();
  uVar4 = (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_60;
  local_90 = DAT_026e41f0;
  if (DAT_026e41f0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_88 = '\x01';
  (**(code **)(*plVar1 + 0x3b0))(uVar4,&local_90);
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  FUN_01d488d0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_02390124);
  lVar3 = unaff_RDI[0x5a];
  if (lVar3 != 0) goto LAB_002f0f5c;
  FUN_01e3f820();
  FUN_01d39800();
  lVar3 = unaff_RDI[0x5a];
  lVar2 = lVar3;
  if (lVar3 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar2 = 0;
        goto LAB_002f0efa;
      }
      FUN_00d50b00();
      lVar3 = unaff_RDI[0x5a];
      unaff_RDI[0x5a] = local_40;
      lVar2 = local_40;
    }
    else {
      local_38 = '\0';
      lVar2 = local_40;
LAB_002f0efa:
      unaff_RDI[0x5a] = lVar2;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar2 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = unaff_RDI[0x5a];
LAB_002f0f5c:
  plVar1 = (longlong *)*unaff_RSI;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_80 = lVar3;
  (**(code **)(*plVar1 + 0x3a8))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return;
}


