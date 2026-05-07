// Function: FUN_01bf35c0
// Address: 01bf35c0
// Size: 527 bytes
// Class: MUHorizontalOverviewScroller


undefined4 FUN_01bf35c0(void)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  longlong *unaff_RSI;
  longlong *local_a8;
  char local_a0 [8];
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  FUN_01cae990();
  pcVar5 = local_38;
  if (local_a0[0] != '\0') {
    pcVar5 = local_a0;
  }
  local_38[0] = local_a0[0];
  *pcVar5 = '\0';
  if ((local_a0[0] != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027f2a20;
  if (DAT_027f2a20 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar1;
  local_90 = '\x01';
  cVar2 = (**(code **)(*local_a8 + 0x50))();
  lVar1 = DAT_027e7ca0;
  cVar3 = '\x01';
  if (cVar2 == '\0') {
    if (DAT_027e7ca0 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar1;
    local_80 = '\x01';
    cVar2 = (**(code **)(*local_a8 + 0x50))();
    lVar1 = DAT_026de8c8;
    cVar3 = '\x01';
    if (cVar2 == '\0') {
      if (DAT_026de8c8 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar1;
      local_70 = '\x01';
      cVar2 = (**(code **)(*local_a8 + 0x50))();
      lVar1 = DAT_02725a10;
      cVar3 = '\x01';
      if (cVar2 == '\0') {
        if (DAT_02725a10 != 0) {
          FUN_00d50b00();
        }
        local_68 = lVar1;
        local_60 = '\x01';
        cVar3 = (**(code **)(*local_a8 + 0x50))();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    local_48 = *unaff_RSI;
    local_40 = '\0';
    uVar4 = FUN_01df5490();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = *unaff_RSI;
    local_50 = '\0';
    uVar4 = FUN_01d827c0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  return uVar4;
}


