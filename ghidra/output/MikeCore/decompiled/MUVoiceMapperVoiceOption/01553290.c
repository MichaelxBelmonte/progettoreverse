// Function: FUN_01553290
// Address: 01553290
// Size: 1225 bytes
// Class: MUVoiceMapperVoiceOption


void FUN_01553290(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *unaff_RDI;
  bool bVar7;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if ((DAT_028ad180 == (undefined8 *)0x0) || (DAT_028ad189 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ad180 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028ad180 == puVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar7 = DAT_028ad180 != (undefined8 *)0x0;
        DAT_028ad180 = puVar5;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if (DAT_028ad188 == '\0') {
        DAT_028ad188 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f60;
      if (DAT_027c6f60 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0277cf70;
      if (DAT_0277cf70 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f68;
      if (DAT_027c6f68 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027815c0;
      if (DAT_027815c0 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f70;
      if (DAT_027c6f70 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02775668;
      if (DAT_02775668 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c6f78;
      if (DAT_027c6f78 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028ad189 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ad189 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00c7e7b0();
  lVar3 = local_50;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_40 = (longlong *)lVar3;
  local_38 = '\0';
  cVar4 = FUN_00d23d70();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    lVar3 = DAT_027c6f80;
    local_60 = *param_2;
    local_58 = '\0';
    if (DAT_027c6f80 != 0) {
      FUN_00d50b00();
    }
    local_40 = (longlong *)lVar3;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    local_40 = plVar6;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *unaff_RDI = plVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    local_80 = *param_2;
    local_78 = '\0';
    local_70 = *param_1;
    local_68 = '\0';
    FUN_00dacb30(&local_70,&local_80);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


