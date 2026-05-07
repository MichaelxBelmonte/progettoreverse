// Function: FUN_004a4d90
// Address: 004a4d90
// Size: 619 bytes
// Class: MUAudioFileSource


void FUN_004a4d90(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar7;
  longlong local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  undefined8 *local_48;
  char local_40;
  char local_31;
  
  if (*(longlong *)(unaff_RSI + 0x48) == 0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    param_1 = (**(code **)(*plVar5 + 0x18))();
    lVar2 = *(longlong *)(unaff_RSI + 0x48);
    *(longlong **)(unaff_RSI + 0x48) = plVar5;
    if (lVar2 != 0) {
      param_1 = FUN_00d50b20();
    }
  }
  local_80 = *param_2;
  if (local_80 == 0) {
    param_1 = FUN_00247590();
    puVar4 = local_48;
    puVar6 = (undefined8 *)*param_2;
    if (puVar6 == local_48) {
      if (((char)param_2[1] != '\0') || (local_48 == (undefined8 *)0x0)) goto LAB_004a4e86;
      local_50 = param_2 + 1;
      if (local_40 == '\0') {
        param_1 = FUN_00d50b00();
        goto LAB_004a4e7f;
      }
LAB_004a4e46:
      *(undefined1 *)local_50 = 1;
    }
    else {
      local_50 = param_2 + 1;
      cVar1 = (char)param_2[1];
      if (local_40 != '\0') {
        *param_2 = (longlong)local_48;
        if ((cVar1 != '\0') && (puVar6 != (undefined8 *)0x0)) {
          param_1 = FUN_00d50b20();
        }
        goto LAB_004a4e46;
      }
      local_31 = cVar1;
      if (local_48 != (undefined8 *)0x0) {
        param_1 = FUN_00d50b00();
      }
      *param_2 = (longlong)puVar4;
      if ((local_31 != '\0') && (puVar6 != (undefined8 *)0x0)) {
        param_1 = FUN_00d50b20();
      }
LAB_004a4e7f:
      *(undefined1 *)local_50 = 1;
LAB_004a4e86:
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        param_1 = FUN_00d50b20();
      }
    }
    local_80 = *param_2;
  }
  local_78 = '\0';
  FUN_004a50f0(param_1,&local_80);
  puVar6 = local_48;
  if (local_48 == (undefined8 *)0x0) {
    bVar3 = true;
    puVar6 = (undefined8 *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      if ((local_40 == '\0') || (local_48 == (undefined8 *)0x0)) goto LAB_004a4ef5;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    bVar3 = false;
  }
LAB_004a4ef5:
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_024f4960;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    puVar6[0xe] = 0;
    *(undefined4 *)(puVar6 + 0xf) = 0;
    puVar6[0x10] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined1 *)(puVar6 + 4) = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x51) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x59) = 0;
    uVar7 = (*DAT_024f4978)();
    local_68 = '\0';
    local_60 = *param_2;
    local_58 = '\0';
    local_70 = puVar6;
    FUN_004a51a0(uVar7,&local_60);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar3) {
      FUN_00d50b00();
    }
  }
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


