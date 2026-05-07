// Function: FUN_00d6a330
// Address: 00d6a330
// Size: 2323 bytes
// Class: GNObject


/* WARNING: Removing unreachable block (ram,0x00d6a98b) */
/* WARNING: Removing unreachable block (ram,0x00d6a997) */
/* WARNING: Removing unreachable block (ram,0x00d6a775) */
/* WARNING: Removing unreachable block (ram,0x00d6a781) */
/* WARNING: Removing unreachable block (ram,0x00d6aad1) */
/* WARNING: Removing unreachable block (ram,0x00d6aadd) */

longlong * FUN_00d6a330(void)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar14;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  char local_e0;
  longlong local_d8;
  undefined8 local_d0;
  int local_c8;
  longlong local_98;
  char local_90;
  longlong local_88;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  uint local_4c;
  longlong local_48;
  byte local_31;
  
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    cVar1 = (char)unaff_RSI[1];
    lVar14 = 0;
joined_r0x00d6ab28:
    if (cVar1 == '\0') {
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar14;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = lVar14;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(unaff_RSI + 1) = 0;
    }
    return unaff_RDI;
  }
  iVar7 = FUN_00d8c7a0();
  lVar14 = DAT_02773310;
  if (iVar7 == 0) {
    lVar14 = *unaff_RSI;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    cVar1 = (char)unaff_RSI[1];
    goto joined_r0x00d6ab28;
  }
  if (DAT_02773310 != 0) {
    FUN_00d50b00();
  }
  lVar9 = DAT_02773318;
  if (DAT_02773318 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_02773300;
  if (DAT_02773300 != 0) {
    FUN_00d50b00();
  }
  lVar5 = DAT_02773308;
  if (DAT_02773308 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027732f8;
  if (DAT_027732f8 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar9;
  local_110 = lVar4;
  local_108 = lVar5;
  local_100 = lVar3;
  FUN_007f7a00(&local_110,&local_118,&local_108,&local_100);
  FUN_000b6830();
  local_70 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  local_e8 = &DAT_02511780;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_007f76c0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  lVar14 = DAT_027845f0;
  if (DAT_027845f0 != 0) {
    FUN_00d50b00();
  }
  lVar9 = DAT_0277e578;
  if (DAT_0277e578 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_0277e580;
  if (DAT_0277e580 != 0) {
    FUN_00d50b00();
  }
  lVar5 = DAT_0277e588;
  if (DAT_0277e588 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_0277e590;
  if (DAT_0277e590 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar9;
  local_110 = lVar4;
  local_108 = lVar5;
  local_100 = lVar3;
  FUN_007f7a00(&local_110,&local_118,&local_108,&local_100);
  FUN_000b6830();
  local_48 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  local_e8 = &DAT_02511780;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_007f76c0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  pcVar2 = DAT_025795c0;
  local_58 = (undefined8 *)0x0;
  local_f0 = 0;
  while( true ) {
    FUN_00d8c7a0();
    uVar8 = FUN_00e7b4e0();
    iVar7 = FUN_00d8c7a0();
    if ((iVar7 < 1) || (local_70 == 0)) break;
    local_f8 = uVar8 >> 0x20;
    local_e0 = '\0';
    local_e8 = (undefined8 *)0x0;
    local_d8 = local_70;
    local_d0 = 0xffffffff;
    local_c8 = 0;
    local_d0._4_4_ = 0;
    lVar14 = 0;
    local_4c = 0;
    while( true ) {
      iVar7 = (int)uVar8;
      if (local_d0._4_4_ != 0) {
        if (local_d0._4_4_ < 1) {
          iVar13 = -local_d0._4_4_;
        }
        else {
          iVar13 = (int)local_d0 - local_d0._4_4_;
          local_d0 = CONCAT44(local_d0._4_4_,iVar13);
          FUN_00d23690();
          local_c8 = local_c8 + local_d0._4_4_;
          iVar13 = 0;
        }
        local_d0 = CONCAT44(iVar13,(int)local_d0);
      }
      lVar9 = (longlong)(int)local_d0;
      iVar13 = (int)local_d0 + 1;
      local_d0 = CONCAT44(local_d0._4_4_,iVar13);
      if (*(int *)(local_d8 + 0xc) <= iVar13) break;
      local_e8 = *(undefined8 **)(*(longlong *)(local_d8 + 0x10) + 8 + lVar9 * 8);
      uVar10 = FUN_00d90650();
      iVar13 = (int)uVar10;
      if ((iVar13 != -1) && ((lVar14 == 0 || (iVar13 < iVar7)))) {
        lVar9 = *(longlong *)
                 (*(longlong *)(local_48 + 0x10) +
                 ((longlong)local_c8 + (longlong)(int)local_d0) * 8);
        if (lVar14 == lVar9) {
          local_31 = (byte)local_4c;
          if (((byte)local_4c == 0) && (lVar14 != 0)) {
            local_4c = 0;
            FUN_00d50b00();
            lVar9 = lVar14;
            goto LAB_00d6a810;
          }
        }
        else {
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          if (((byte)local_4c != '\0') && (lVar14 != 0)) {
            FUN_00d50b20();
          }
LAB_00d6a810:
          local_31 = 1;
          lVar14 = lVar9;
        }
        if (iVar13 == 0) {
          local_f8 = uVar10 >> 0x20;
          iVar7 = 0;
          goto LAB_00d6a866;
        }
        local_f8 = uVar10 >> 0x20;
        local_4c = (uint)local_31;
        uVar8 = uVar10 & 0xffffffff;
      }
    }
    local_31 = (byte)local_4c;
LAB_00d6a866:
    FUN_00018280();
    local_88 = lVar14;
    if (lVar14 == 0) break;
    if (local_58 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &DAT_025795a8;
      uVar12 = (*pcVar2)();
      local_f0 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
      local_58 = puVar11;
    }
    if (0 < iVar7) {
      FUN_00d97ce0();
      puVar11 = local_e8;
      local_78 = 0;
      if (local_e0 == '\0') {
        if (local_e8 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_e0 = '\0';
      }
      local_78 = '\x01';
      local_80 = puVar11;
      FUN_00d8dbf0();
      if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d8dbf0();
    FUN_00d8f140();
    puVar6 = local_e8;
    puVar11 = (undefined8 *)*unaff_RSI;
    if (puVar11 == local_e8) {
      if (((char)unaff_RSI[1] != '\0') || (local_e8 == (undefined8 *)0x0)) goto LAB_00d6aa48;
      if (local_e0 == '\0') {
        FUN_00d50b00();
        goto LAB_00d6aa40;
      }
LAB_00d6aa04:
      *(undefined1 *)(unaff_RSI + 1) = 1;
    }
    else {
      lVar14 = unaff_RSI[1];
      if (local_e0 != '\0') {
        *unaff_RSI = (longlong)local_e8;
        if (((char)lVar14 != '\0') && (puVar11 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00d6aa04;
      }
      if (local_e8 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)puVar6;
      if (((char)lVar14 != '\0') && (puVar11 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_00d6aa40:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00d6aa48:
      if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (local_31 != 0) {
      FUN_00d50b20();
    }
  }
  lVar9 = local_48;
  lVar14 = local_70;
  if (local_58 == (undefined8 *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    puVar11 = (undefined8 *)*unaff_RSI;
    if ((char)unaff_RSI[1] != '\0') {
      *unaff_RDI = (longlong)puVar11;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(unaff_RSI + 1) = 0;
      goto joined_r0x00d6ac05;
    }
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    iVar7 = FUN_00d8c7a0();
    if (0 < iVar7) {
      FUN_00d8dbf0();
    }
    FUN_00d8c7d0();
    puVar11 = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)local_f0 != '\0') {
      *unaff_RDI = (longlong)local_58;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto joined_r0x00d6ac05;
    }
    FUN_00d50b00();
  }
  *unaff_RDI = (longlong)puVar11;
  *(undefined1 *)(unaff_RDI + 1) = 1;
joined_r0x00d6ac05:
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar14 == 0) {
    return unaff_RDI;
  }
  FUN_00d50b20();
  return unaff_RDI;
}


