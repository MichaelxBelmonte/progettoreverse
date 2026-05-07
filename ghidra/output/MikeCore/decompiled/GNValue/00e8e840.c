// Function: FUN_00e8e840
// Address: 00e8e840
// Size: 1274 bytes
// Class: GNValue


void FUN_00e8e840(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  float fVar6;
  undefined8 uVar7;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*param_2 == 0) {
LAB_00e8e930:
    FUN_00e7bdb0();
    FUN_00dd67f0();
    lVar4 = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_38 != '\0') goto LAB_00e8ecee;
    if (local_40 != 0) {
      FUN_00d50b00();
      *unaff_RDI = lVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (local_38 == '\0') {
        return;
      }
      if (local_40 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  else {
    uVar7 = FUN_00d95590();
    local_88 = 0;
    local_90 = CONCAT44(uStack_4c,local_50);
    if (local_48 == '\0') {
      if (local_90 != 0) {
        uVar7 = FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_88 = '\x01';
    FUN_00d97f20(uVar7,&local_90);
    iVar3 = FUN_00d8c7a0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 == 0) goto LAB_00e8e930;
    FUN_00d4c220();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    cVar2 = FUN_00d90f10();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar4 = DAT_02704060;
    if (cVar2 == '\0') {
      if (DAT_02704060 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar4;
      local_a0 = '\x01';
      FUN_00d91000(1,&local_a8);
      local_58 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (*(int *)(local_58 + 0xc) == 1) {
        FUN_00d8d560();
        lVar4 = FUN_00e7bcc0();
      }
      else if (*(int *)(local_58 + 0xc) < 2) {
        lVar4 = 0x100000000;
      }
      else {
        plVar5 = *(longlong **)(local_58 + 0x10);
        lVar4 = *plVar5;
        if (lVar4 != 0) {
          FUN_00d50b00();
          plVar5 = *(longlong **)(local_58 + 0x10);
        }
        lVar1 = plVar5[1];
        local_98 = lVar4;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_60 = lVar1;
        uVar7 = FUN_00d95590();
        local_68 = 0;
        local_70 = CONCAT44(uStack_4c,local_50);
        if (local_48 == '\0') {
          if (local_70 != 0) {
            uVar7 = FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_68 = '\x01';
        FUN_00d91bc0(uVar7,&local_70);
        lVar4 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
          FUN_00d50b20();
        }
        if (*(int *)(lVar4 + 0xc) < 2) {
          FUN_00d8d560();
          FUN_00d8d560();
          lVar4 = FUN_00e7bcc0();
        }
        else {
          local_50 = FUN_00d8d560();
          FUN_00d8d560();
          FUN_00d8d560();
          local_40 = FUN_00e7bcc0();
          FUN_00e7c260();
          lVar4 = local_40;
        }
        FUN_00d50b20();
        lVar1 = local_98;
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      if (*(ulonglong *)(unaff_RSI + 0x10) >> 0x20 != 0) {
        local_40 = lVar4;
        FUN_00e7c860();
        FUN_00e7cd00();
      }
      FUN_00d50b20();
    }
    else {
      iVar3 = *(int *)(unaff_RSI + 0x14);
      fVar6 = (float)FUN_00d8d7b0();
      if (iVar3 == 0) {
        FUN_00e7d000((double)fVar6,DAT_023d5f50);
      }
      else {
        FUN_00e7cd00();
      }
    }
    FUN_00dd67f0();
    lVar4 = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_38 != '\0') goto LAB_00e8ecee;
    if (local_40 != 0) {
      FUN_00d50b00();
      *unaff_RDI = lVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (local_38 == '\0') {
        return;
      }
      if (local_40 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  local_40 = 0;
LAB_00e8ecee:
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


