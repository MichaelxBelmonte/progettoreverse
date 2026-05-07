// Function: FUN_00762a70
// Address: 00762a70
// Size: 1289 bytes
// Class: MUAudioFileSource


undefined4 FUN_00762a70(void)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_100;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  char local_88;
  undefined8 local_80;
  longlong *local_78;
  char local_70 [8];
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
  plVar4 = local_78;
  FUN_017a52b0();
  local_90 = local_40;
  local_88 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  cVar6 = (**(code **)(*plVar4 + 0x50))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    return 0;
  }
  (**(code **)(*unaff_RDI + 0x628))();
  plVar4 = local_78;
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*unaff_RDI + 0x610))();
  FUN_00d23310();
  plVar4 = local_78;
  plVar9 = &local_98;
  if (local_70[0] != '\0') {
    plVar9 = (longlong *)local_70;
  }
  local_98 = CONCAT71(local_98._1_7_,local_70[0]);
  *(char *)plVar9 = '\0';
  if ((local_70[0] != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 == '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  bVar2 = true;
  local_a0 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    FUN_01e561b0();
    local_48 = local_78;
    if (local_78 != (longlong *)0x0) {
      if (((local_70[0] == '\0') && (FUN_00d50b00(), local_70[0] != '\0')) &&
         (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = unaff_RDI[0xd];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_02729550;
      if (DAT_02729550 != 0) {
        FUN_00d50b00();
      }
      local_100 = lVar3;
      local_98 = lVar1;
      FUN_00083ea0(2,&local_100);
      FUN_000b4da0();
      lVar5 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = (longlong *)&DAT_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_78 = &DAT_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_026f6f70;
      if (DAT_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_02729558;
      if (DAT_02729558 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar3;
      local_d8 = '\x01';
      local_d0 = lVar5;
      local_c8 = '\0';
      FUN_00d31230(&local_d0,&local_e0);
      plVar4 = local_78;
      if (local_70[0] == '\0') {
        if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
           (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70[0] = '\0';
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      local_c0 = plVar4;
      local_b8 = '\0';
      local_b0 = local_48;
      local_a8 = '\0';
      uVar8 = FUN_00172950();
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        uVar8 = FUN_00d50b20();
      }
      local_80 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      bVar2 = false;
      goto LAB_00762e85;
    }
  }
  local_48 = (longlong *)0x0;
  local_80 = 0;
LAB_00762e85:
  FUN_00763390();
  uVar7 = FUN_00760600();
  lVar1 = unaff_RDI[0xe];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00324fe0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00172bc0();
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
    return uVar7;
  }
  return uVar7;
}


