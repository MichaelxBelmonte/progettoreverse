// Function: FUN_00b439c0
// Address: 00b439c0
// Size: 1786 bytes
// Class: GNDate


void FUN_00b439c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 local_10c [4];
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
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
  int local_48;
  int local_44;
  longlong local_40;
  char local_38;
  int local_2c;
  
  local_108 = *unaff_RSI;
  local_100 = '\0';
  FUN_00b75710();
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccce80();
  FUN_00ccd6d0(&local_2c,local_10c);
  bVar9 = local_40 != 0;
  bVar10 = local_2c != 4;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = DAT_02764880;
  if (bVar9 || bVar10) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar4;
    local_f0 = '\x01';
    FUN_00cc78b0();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd6d0(&local_2c,&local_48);
  bVar9 = local_40 != 0;
  bVar10 = local_2c != 4;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = DAT_02764880;
  if (bVar9 || bVar10) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_e8 = lVar4;
    local_e0 = '\x01';
    FUN_00cc78b0();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar11 = FUN_00ccd6d0(&local_2c,&local_44);
  bVar9 = local_40 != 0;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  lVar4 = DAT_02764880;
  if (bVar9 || local_2c != 4) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar4;
    local_d0 = '\x01';
    uVar11 = FUN_00cc78b0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      uVar11 = FUN_00d50b20();
    }
  }
  lVar4 = DAT_02764880;
  if ((local_48 != 0x66747970) || (local_44 != 0x4d344120)) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar4;
    local_c0 = '\x01';
    uVar11 = FUN_00cc78b0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      uVar11 = FUN_00d50b20();
    }
  }
  lVar4 = FUN_00b429e0(uVar11,0x6d6f6f76);
  if (0 < lVar4) {
    lVar4 = FUN_00b429e0(extraout_XMM0_Da,0x6d766864);
    if (0 < lVar4) goto LAB_00b43c79;
  }
  lVar4 = DAT_02764880;
  if (DAT_02764880 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar4;
  local_b0 = '\x01';
  FUN_00cc78b0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
LAB_00b43c79:
  FUN_00b430e0();
  lVar5 = FUN_00b43800(0x7472616b,0x6d6f6f76,0x6d646961,0x6d696e66);
  lVar4 = DAT_02764880;
  if (lVar5 < 1) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar4;
    local_a0 = '\x01';
    FUN_00cc78b0();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar11 = FUN_00b41dc0();
  lVar5 = FUN_00b429e0(uVar11,0x6d646174);
  lVar4 = DAT_02764880;
  if (lVar5 < 1) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar4;
    local_90 = '\x01';
    FUN_00cc78b0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00b416c0();
  pvVar8 = (void *)0x7472616b;
  lVar5 = FUN_00b43800(0x7472616b,0x6d6f6f76,0x6d646961,0x6d696e66);
  lVar4 = DAT_02764880;
  if (lVar5 < 1) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar4;
    local_80 = '\x01';
    FUN_00cc78b0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00b41870();
  puVar6 = operator_new((ulong)pvVar8);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *(undefined8 **)(unaff_RDI + 0x38) = puVar6;
  pvVar7 = operator_new((ulong)pvVar8);
  uVar11 = FUN_00c66860();
  *(void **)(unaff_RDI + 0x30) = pvVar7;
  iVar3 = FUN_00c668e0(uVar11,*(undefined4 *)(*(longlong *)(unaff_RDI + 0xa8) + 0x18));
  if (iVar3 != 0) {
    if (*(longlong *)(unaff_RDI + 0x30) != 0) {
      FUN_00c66880();
      operator_delete(pvVar8);
    }
    *(undefined8 *)(unaff_RDI + 0x30) = 0;
    lVar4 = DAT_02764880;
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar4;
    local_70 = '\x01';
    FUN_00cc78b0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0xa8) != 0) {
    *(undefined8 *)(unaff_RDI + 0xa8) = 0;
    FUN_00d50b20();
  }
  lVar4 = DAT_02764880;
  if (0x10 < *(int *)(unaff_RDI + 0x50) - 0x10U) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar4;
    local_60 = '\x01';
    FUN_00cc78b0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar4 = DAT_02764880;
  if (1 < (byte)(*(char *)(*(longlong *)(unaff_RDI + 0x30) + 9) - 1U)) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar4;
    local_50 = '\x01';
    FUN_00cc78b0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  iVar3 = *(int *)(unaff_RDI + 0x50);
  iVar1 = *(int *)(unaff_RDI + 0x68);
  iVar2 = *(int *)(unaff_RDI + 0x54);
  FUN_00c8e690();
  lVar4 = local_40;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  lVar5 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar5 == lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x88) = lVar4;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  lVar4 = local_40;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar11 = FUN_00c92170();
  lVar5 = *(longlong *)(unaff_RDI + 0x90);
  if (lVar5 == lVar4) {
    if (lVar4 != 0) {
      uVar11 = FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x90) = lVar4;
    if (lVar5 != 0) {
      uVar11 = FUN_00d50b20();
    }
  }
  FUN_00c66620(uVar11,iVar1 * iVar2 * (iVar3 + 4U >> 3) + 8);
  *(undefined8 *)(unaff_RDI + 0x78) = 0xffffffffffffffff;
  FUN_00b438b0();
  return;
}


