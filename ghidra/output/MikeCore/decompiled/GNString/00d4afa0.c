// Function: FUN_00d4afa0
// Address: 00d4afa0
// Size: 1117 bytes
// Class: GNString


ulonglong FUN_00d4afa0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  longlong local_f0;
  undefined1 local_e8;
  longlong local_e0;
  undefined1 local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  float local_4c;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  local_38 = (longlong *)((ulonglong)local_38 & 0xffffffff00000000);
  if ((*unaff_RSI == 0) || (iVar6 = FUN_00d8c7a0(), iVar6 == 0)) goto LAB_00d4b3c8;
  cVar4 = FUN_00d495a0();
  if (cVar4 != '\0') {
    local_f0 = *unaff_RSI;
    local_e8 = 0;
    FUN_00d496b0(extraout_XMM0_Da,&local_f0);
    if (local_48 != (longlong *)0x0) {
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      uVar7 = FUN_00d459e0();
      local_38 = (longlong *)CONCAT44(local_38._4_4_,uVar7);
      FUN_00d50b20();
      goto LAB_00d4b3c8;
    }
  }
  lVar2 = DAT_0277dcb8;
  if (DAT_0277dcb8 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  cVar4 = FUN_00d90eb0();
  lVar2 = DAT_0277dcc0;
  cVar5 = '\x01';
  if (cVar4 == '\0') {
    if (DAT_0277dcc0 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar2;
    local_b8 = '\x01';
    cVar5 = FUN_00d90eb0();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_0277dcc8;
  fVar8 = DAT_023b26e8;
  if (cVar5 == '\0') {
    if (DAT_0277dcc8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar2;
    local_a8 = '\x01';
    cVar4 = FUN_00d90eb0();
    lVar2 = DAT_0277dcd0;
    cVar5 = '\x01';
    if (cVar4 == '\0') {
      if (DAT_0277dcd0 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar2;
      local_98 = '\x01';
      cVar5 = FUN_00d90eb0();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_0277dcd8;
    if (cVar5 == '\0') {
      local_e0 = *unaff_RSI;
      local_d8 = 0;
      FUN_00d498d0();
      plVar3 = local_48;
      plVar1 = (longlong *)*unaff_RSI;
      if (plVar1 == local_48) {
        if (((char)unaff_RSI[1] == '\0') && (local_48 != (longlong *)0x0)) {
          local_38 = unaff_RSI + 1;
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_00d4b346;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = unaff_RSI + 1;
        lVar2 = unaff_RSI[1];
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *unaff_RSI = (longlong)plVar3;
          if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          *unaff_RSI = (longlong)local_48;
          if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_00d4b346:
        *(undefined1 *)local_38 = 1;
      }
      local_60 = *unaff_RSI;
      local_58 = '\0';
      FUN_00ddb860();
      cVar4 = (**(code **)(*local_48 + 0x470))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        local_4c = 0.0;
      }
      fVar9 = *(float *)(unaff_RDI + 0x10);
      if (*(float *)(unaff_RDI + 0x10) <= local_4c) {
        fVar9 = local_4c;
      }
      fVar8 = *(float *)(unaff_RDI + 0x14);
      if (fVar9 <= *(float *)(unaff_RDI + 0x14)) {
        fVar8 = fVar9;
      }
    }
    else {
      if (DAT_0277dcd8 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar2;
      local_88 = '\x01';
      cVar4 = FUN_00d90eb0();
      lVar2 = DAT_0277dce0;
      cVar5 = '\x01';
      if (cVar4 == '\0') {
        if (DAT_0277dce0 != 0) {
          FUN_00d50b00();
        }
        local_80 = lVar2;
        local_78 = '\x01';
        cVar4 = FUN_00d90eb0();
        lVar2 = DAT_026fce10;
        cVar5 = '\x01';
        if (cVar4 == '\0') {
          if (DAT_026fce10 != 0) {
            FUN_00d50b00();
          }
          local_70 = lVar2;
          local_68 = '\x01';
          cVar5 = FUN_00d90eb0();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      fVar8 = DAT_02391074;
      if (cVar5 == '\0') {
        fVar8 = DAT_02391078;
      }
    }
  }
  local_38 = (longlong *)(ulonglong)(uint)fVar8;
LAB_00d4b3c8:
  return (ulonglong)local_38 & 0xffffffff;
}


