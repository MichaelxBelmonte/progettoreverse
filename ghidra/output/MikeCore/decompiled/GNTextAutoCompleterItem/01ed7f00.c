// Function: FUN_01ed7f00
// Address: 01ed7f00
// Size: 2299 bytes
// Class: GNTextAutoCompleterItem


undefined4 FUN_01ed7f00(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  undefined8 *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  char local_70;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  longlong local_38;
  float fVar14;
  
  uVar16 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar15 = (undefined4)param_2;
  FUN_01d384c0();
  local_120 = 0;
  local_118 = '\0';
  local_88 = FUN_01e437f0();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  uVar11 = FUN_01d384d0();
  local_110 = DAT_026e1380;
  if (DAT_026e1380 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_108 = '\x01';
  FUN_01cacbe0(uVar11,&local_110);
  lVar10 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT44(uStack_74,local_78) != 0)) {
    FUN_00d50b20();
  }
  uVar4 = (**(code **)(*unaff_RDI + 0x9d8))((undefined4)local_88);
  if (*(int *)(lVar10 + 0xc) == 0) {
    local_88._0_4_ = 0;
    FUN_01dd3ae0();
    uVar12 = CONCAT44(uVar16,uVar15);
    iVar9 = *(int *)((longlong)unaff_RDI + 0x2cc);
joined_r0x01ed80d9:
    bVar1 = true;
    iVar8 = -1;
    bVar2 = true;
    if (iVar9 != -1) {
LAB_01ed829e:
      bVar1 = bVar2;
      if (iVar9 != -1) {
        uVar13 = (**(code **)(*unaff_RDI + 0xa68))();
        fVar17 = (float)((ulonglong)uVar12 >> 0x20);
        fVar14 = (float)((ulonglong)uVar13 >> 0x20);
        if ((((((float)uVar13 != (float)DAT_023dccec) ||
              (NAN((float)uVar13) || NAN((float)DAT_023dccec))) || (fVar14 != DAT_023dccec._4_4_))
            || ((NAN(fVar14) || NAN(DAT_023dccec._4_4_) || ((float)uVar12 != (float)DAT_023dccf4))))
           || (NAN((float)uVar12) || NAN((float)DAT_023dccf4))) {
LAB_01ed82de:
          FUN_00d05530();
        }
        else if ((fVar17 != DAT_023dccf4._4_4_) || (NAN(fVar17) || NAN(DAT_023dccf4._4_4_)))
        goto LAB_01ed82de;
        (**(code **)(*unaff_RDI + 0x618))();
      }
      *(int *)((longlong)unaff_RDI + 0x2cc) = iVar8;
      if (iVar8 != -1) {
        if (unaff_RDI[0x5b] != 0) {
          FUN_01e1e360();
          if (unaff_RDI[0x5b] != 0) {
            unaff_RDI[0x5b] = 0;
            FUN_00d50b20();
          }
        }
        uVar13 = (**(code **)(*unaff_RDI + 0xa68))();
        fVar17 = (float)((ulonglong)uVar12 >> 0x20);
        fVar14 = (float)((ulonglong)uVar13 >> 0x20);
        if (((((float)uVar13 != (float)DAT_023dccec) ||
             (NAN((float)uVar13) || NAN((float)DAT_023dccec))) || (fVar14 != DAT_023dccec._4_4_)) ||
           (((NAN(fVar14) || NAN(DAT_023dccec._4_4_) || ((float)uVar12 != (float)DAT_023dccf4)) ||
            (NAN((float)uVar12) || NAN((float)DAT_023dccf4))))) {
LAB_01ed837c:
          FUN_00d05530();
        }
        else if ((fVar17 != DAT_023dccf4._4_4_) || (NAN(fVar17) || NAN(DAT_023dccf4._4_4_)))
        goto LAB_01ed837c;
        (**(code **)(*unaff_RDI + 0x618))();
        local_f0 = DAT_027fe7b8;
        if (DAT_027fe7b8 != 0) {
          FUN_00d50b00();
        }
        local_e8 = '\x01';
        local_a0 = 0;
        FUN_00d50b00();
        local_a0 = '\x01';
        local_a8 = unaff_RDI;
        FUN_01e1ea80((int)DAT_02422870,&local_a8);
        lVar5 = unaff_RDI[0x5b];
        lVar7 = lVar5;
        if (lVar5 != local_60) {
          if (local_58 == '\0') {
            if (local_60 == 0) {
              lVar7 = 0;
              goto LAB_01ed8415;
            }
            FUN_00d50b00();
            lVar5 = unaff_RDI[0x5b];
            unaff_RDI[0x5b] = local_60;
            lVar7 = local_60;
          }
          else {
            local_58 = '\0';
            lVar7 = local_60;
LAB_01ed8415:
            unaff_RDI[0x5b] = lVar7;
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
            lVar7 = local_60;
          }
        }
        if ((local_58 != '\0') && (lVar7 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    local_38 = lVar10;
    lVar5 = FUN_00dd6dc0();
    local_138._0_4_ = CONCAT31(local_138._1_3_,lVar5 == 0);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    lVar10 = 0;
    cVar3 = '\x01';
    if (((int)uVar4 < 0) || (*(int *)(unaff_RDI[0x57] + 0xc) <= (int)uVar4)) {
      bVar1 = true;
      bVar2 = bVar1;
      if (lVar5 != 0) goto LAB_01ed80ec;
LAB_01ed8143:
      bVar1 = (bool)(bVar2 | lVar10 == 0);
joined_r0x01ed814c:
      uVar12 = local_88;
      if (!bVar1) {
LAB_01ed814e:
        FUN_00d50b20();
        uVar12 = local_88;
      }
    }
    else {
      lVar10 = *(longlong *)(*(longlong *)(unaff_RDI[0x57] + 0x10) + (ulonglong)uVar4 * 8);
      if (lVar10 != 0) {
        FUN_00d50b00();
        bVar1 = false;
        bVar2 = bVar1;
        if (lVar5 != lVar10) goto LAB_01ed80ec;
        goto LAB_01ed8143;
      }
      bVar1 = false;
      lVar10 = 0;
      bVar2 = false;
      if (lVar5 == 0) goto LAB_01ed8143;
LAB_01ed80ec:
      cVar3 = (char)local_138;
      if ((int)uVar4 < 1) {
        bVar1 = (bool)(bVar1 | lVar10 == 0);
        goto joined_r0x01ed814c;
      }
      bVar2 = bVar1;
      if (*(int *)(unaff_RDI[0x57] + 0xc) < (int)uVar4) goto LAB_01ed8143;
      lVar7 = *(longlong *)(*(longlong *)(unaff_RDI[0x57] + 0x10) + (ulonglong)(uVar4 - 1) * 8);
      if (lVar7 != 0) {
        FUN_00d50b00();
        cVar3 = lVar5 == lVar7;
        FUN_00d50b20();
        goto LAB_01ed8143;
      }
      cVar3 = lVar5 == 0;
      uVar12 = local_88;
      if (!bVar1 && lVar10 != 0) goto LAB_01ed814e;
    }
    lVar10 = local_38;
    local_88._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
    if (cVar3 == '\0') {
      *(undefined8 *)((longlong)unaff_RDI + 0x224) = uVar12;
      local_88 = uVar12;
      FUN_01dd3ae0();
      *(undefined4 *)(unaff_RDI + 0x48) = 3;
      local_88._0_4_ = 0x10;
      (**(code **)(*unaff_RDI + 0x620))();
    }
    else {
      local_88._0_4_ = 0;
      FUN_01dd3ae0();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    uVar12 = CONCAT44(uVar16,uVar15);
    if (cVar3 != '\0') {
      local_88._0_4_ = 0;
      iVar9 = *(int *)((longlong)unaff_RDI + 0x2cc);
      goto joined_r0x01ed80d9;
    }
    FUN_01d384c0();
    local_f8 = '\0';
    local_100 = 0;
    local_138 = FUN_01e437f0();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    iVar9 = FUN_01dcea90((undefined4)local_138);
    uVar12 = CONCAT44(uVar16,uVar15);
    iVar8 = -1;
    if (iVar9 != -1) {
      uVar12 = (**(code **)(*unaff_RDI + 0xa68))();
      cVar3 = FUN_00d05410((undefined4)local_138,(int)uVar12,uVar15);
      iVar8 = -1;
      if (cVar3 != '\0') {
        iVar8 = iVar9;
      }
    }
    bVar1 = false;
    iVar9 = *(int *)((longlong)unaff_RDI + 0x2cc);
    bVar2 = false;
    if (iVar9 != iVar8) goto LAB_01ed829e;
  }
  uVar15 = 0;
  if (bVar1) goto LAB_01ed87b8;
  FUN_01d384d0();
  local_e0 = DAT_026e1380;
  if (DAT_026e1380 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  FUN_01cacbe0();
  lVar5 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT44(uStack_74,local_78) != 0)) {
    FUN_00d50b20();
  }
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0xc) == 0)) {
LAB_01ed8791:
    local_88._0_4_ = 0;
    FUN_01dd3ae0();
  }
  else {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    (*DAT_02572370)();
    local_58 = 0;
    local_60 = 0;
    local_50 = lVar5;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar9 = -local_48._4_4_;
        }
        else {
          iVar9 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar9 = 0;
        }
        local_48 = CONCAT44(iVar9,(int)local_48);
      }
      lVar7 = (longlong)(int)local_48;
      iVar9 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar9);
      if (*(int *)(local_50 + 0xc) <= iVar9) break;
      local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar7 * 8);
      lVar7 = FUN_00dd6dc0();
      local_90 = 0;
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      local_98 = lVar7;
      FUN_00d21140();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00115a50();
    local_58 = '\0';
    local_60 = 0;
    local_78 = 0;
    local_148 = *unaff_RSI;
    local_140 = 0;
    FUN_01ed8cb0(&local_60,&local_148,&local_78);
    local_c8 = '\0';
    local_c0 = local_60;
    local_b8 = '\0';
    local_d0 = puVar6;
    cVar3 = (**(code **)(*(longlong *)unaff_RDI[0x54] + 0x38))(local_78,&local_c0,0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_01ed8791;
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  uVar15 = (undefined4)local_88;
  if (lVar10 == 0) {
    return (undefined4)local_88;
  }
LAB_01ed87b8:
  FUN_00d50b20();
  return uVar15;
}


