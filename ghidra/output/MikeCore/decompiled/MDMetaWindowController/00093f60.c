// Function: FUN_00093f60
// Address: 00093f60
// Size: 1069 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x00093fa0) */
/* WARNING: Removing unreachable block (ram,0x00093fac) */

void FUN_00093f60(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *unaff_RSI;
  ulonglong uVar7;
  longlong unaff_RDI;
  int iVar8;
  undefined4 uVar9;
  longlong local_f8;
  char local_f0;
  longlong local_d8;
  char local_d0;
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
  uint local_5c;
  longlong local_58;
  char local_50;
  longlong local_48;
  int local_40;
  longlong local_3c;
  
  FUN_01d83f60();
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar1 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_3c = 0;
    uVar5 = 0;
    uVar7 = (ulonglong)*(uint *)(lVar1 + 0xc);
    if ((int)*(uint *)(lVar1 + 0xc) < 1) {
      uVar7 = uVar5;
    }
    do {
      if (uVar7 == uVar5) {
        local_40 = (int)uVar5;
        goto LAB_0009400d;
      }
      local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      uVar5 = uVar5 + 1;
    } while (*(longlong *)(local_58 + 0x10) != *unaff_RSI);
    local_40 = (int)uVar5 + -1;
    local_3c = 0xffffffff;
LAB_0009400d:
    local_48 = lVar1;
    FUN_00097ba0();
  }
  FUN_00094580();
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar1 == 0) {
LAB_000940b9:
    uVar9 = FUN_00d50130();
    iVar8 = *(int *)(*(longlong *)(unaff_RDI + 0x18) + 0xc);
  }
  else {
    local_50 = '\0';
    local_58 = 0;
    local_3c = 0;
    uVar5 = 0;
    uVar7 = (ulonglong)*(uint *)(lVar1 + 0xc);
    if ((int)*(uint *)(lVar1 + 0xc) < 1) {
      uVar7 = uVar5;
    }
    do {
      local_48 = lVar1;
      if (uVar7 == uVar5) {
        local_40 = (int)uVar5;
        FUN_00097ba0();
        goto LAB_000940b9;
      }
      local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      uVar5 = uVar5 + 1;
    } while (*(longlong *)(local_58 + 0x10) != *unaff_RSI);
    local_40 = (int)uVar5 + -1;
    uVar9 = FUN_00097ba0();
    iVar8 = *(int *)(*(longlong *)(unaff_RDI + 0x18) + 0xc);
  }
  if (iVar8 != 0) {
    return;
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar1 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_3c = 0;
    iVar8 = -1;
    local_5c = 0;
    uVar6 = 0;
    local_48 = lVar1;
    do {
      if (uVar6 == 0) {
        uVar6 = 0;
        iVar8 = iVar8 + 1;
        local_40 = iVar8;
        if (*(int *)(lVar1 + 0xc) <= iVar8) goto LAB_0009430d;
      }
      else {
        if ((int)uVar6 < 1) {
          uVar6 = -uVar6;
        }
        else {
          iVar8 = iVar8 - uVar6;
          local_40 = iVar8;
          FUN_00d23690(uVar9,uVar6);
          local_5c = local_5c + uVar6;
          local_3c = (ulonglong)local_5c << 0x20;
          uVar6 = 0;
        }
        local_3c = CONCAT44(local_3c._4_4_,uVar6);
        iVar8 = iVar8 + 1;
        local_40 = iVar8;
        if (*(int *)(lVar1 + 0xc) <= iVar8) goto LAB_0009430d;
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar8 * 8);
      local_58 = lVar2;
      local_40 = iVar8;
      FUN_00d403d0();
      local_78 = 0;
      FUN_00d50b00();
      lVar3 = DAT_027ebc70;
      local_78 = '\x01';
      local_80 = unaff_RDI;
      if (DAT_027ebc70 != 0) {
        FUN_00d50b00();
      }
      local_b0 = lVar3;
      local_a8 = '\x01';
      local_98 = '\0';
      local_a0 = lVar2;
      FUN_00d41430(&local_a0,&local_b0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_01f27fe0();
      FUN_00281390();
      local_88 = '\0';
      local_90 = lVar2;
      uVar9 = FUN_00e6d5a0();
      if ((local_88 != '\0') && (local_90 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      uVar6 = ~uVar6;
      local_3c = CONCAT44(local_3c._4_4_,uVar6);
    } while( true );
  }
LAB_00094316:
  *(undefined8 *)(unaff_RDI + 0x10) = 0;
  FUN_01f27fe0();
  puVar4 = (undefined8 *)FUN_00e83010();
  *puVar4 = FUN_00097ce0;
  puVar4[1] = FUN_00291410;
  puVar4[2] = 0;
  FUN_01e1ec30(0,puVar4);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
LAB_0009430d:
  FUN_00097c40();
  goto LAB_00094316;
}


