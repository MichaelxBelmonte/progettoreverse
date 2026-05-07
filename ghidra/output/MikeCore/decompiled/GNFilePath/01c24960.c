// Function: FUN_01c24960
// Address: 01c24960
// Size: 1691 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"


/* WARNING: Removing unreachable block (ram,0x01c249df) */
/* WARNING: Removing unreachable block (ram,0x01c249eb) */
/* WARNING: Removing unreachable block (ram,0x01c24dea) */
/* WARNING: Removing unreachable block (ram,0x01c24df6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01c24960(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  longlong **pplVar10;
  int iVar11;
  longlong *unaff_RDI;
  longlong *plVar12;
  undefined8 unaff_R14;
  ulonglong uVar13;
  undefined4 uVar14;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  longlong *local_38;
  
  plVar12 = (longlong *)unaff_RDI[0x32];
  if (plVar12 != (longlong *)0x0) {
    FUN_00d50b00();
    cVar6 = (**(code **)(*plVar12 + 0x50))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    uVar13 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    if (cVar6 != '\0') goto LAB_01c24ff2;
  }
  (**(code **)(*unaff_RDI + 0x3f8))();
  plVar12 = local_68;
  if ((((local_60 == '\0') && (local_68 != (longlong *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01c219e0();
  plVar4 = local_68;
  if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar7 = DAT_026fcec0;
  if (DAT_026fcec0 != 0) {
    FUN_00d50b00();
  }
  pcVar3 = DAT_02572370;
  local_40 = lVar7;
  if (plVar12 == (longlong *)0x0) {
    bVar2 = false;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_38 = plVar12;
    local_58 = plVar12;
    local_50 = 0xffffffff;
    local_48 = 0;
    bVar2 = false;
    puVar8 = (undefined8 *)0x0;
    local_50._4_4_ = 0;
LAB_01c24af7:
    if (local_50._4_4_ != 0) {
      if (local_50._4_4_ < 1) {
        iVar11 = -local_50._4_4_;
      }
      else {
        iVar11 = (int)local_50 - local_50._4_4_;
        local_50 = CONCAT44(local_50._4_4_,iVar11);
        FUN_00d23690();
        local_48 = local_48 + local_50._4_4_;
        iVar11 = 0;
      }
      local_50 = CONCAT44(iVar11,(int)local_50);
    }
    lVar7 = (longlong)(int)local_50;
    iVar11 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar11);
    if (iVar11 < *(int *)((longlong)local_58 + 0xc)) {
      plVar12 = *(longlong **)(local_58[2] + 8 + lVar7 * 8);
      local_68 = plVar12;
      local_c0 = plVar12;
      if ((DAT_026fde10 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
        _DAT_026d1818 = FUN_00d4fe50();
        DAT_026d1800 = "GNFilePath";
        _DAT_026d1808 = 0x40;
        _DAT_026d1810 = FUN_00041050;
        _DAT_026d1820 = 0;
        uRam00000000026d1828 = 0;
        _DAT_026d1830 = 0;
        uRam00000000026d1838 = 0;
        _DAT_026d1840 = 0;
        uRam00000000026d1848 = 0;
        _DAT_026d1850 = 0;
        uRam00000000026d1858 = 0;
        _DAT_026d1860 = 0;
        uRam00000000026d1868 = 0;
        _DAT_026d1870 = 0;
        uRam00000000026d1878 = 0;
        _DAT_026d1880 = 0;
        uRam00000000026d1888 = 0;
        _DAT_026d1890 = 0;
        uRam00000000026d1898 = 0;
        _DAT_026d18a0 = 0;
        uRam00000000026d18a8 = 0;
        _DAT_026d18b0 = 0;
        uRam00000000026d18b8 = 0;
        _DAT_026d18c0 = 0;
        ___cxa_guard_release();
      }
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x360))();
        cVar6 = FUN_00e85ea0();
        pplVar10 = &local_c0;
        if (cVar6 == '\0') {
          pplVar10 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar10 == (longlong *)0x0) {
        goto LAB_01c24af7;
      }
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02572358;
        (*pcVar3)();
        bVar2 = true;
      }
      local_c0 = local_68;
      local_b8 = '\0';
      FUN_00d235a0();
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar12 = local_68;
      FUN_00276fd0();
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x360))();
        cVar6 = FUN_00e85ea0();
        pplVar10 = &local_68;
        if (cVar6 == '\0') {
          pplVar10 = (longlong **)&DAT_02802688;
        }
      }
      lVar7 = DAT_027e92b0;
      if (*pplVar10 != (longlong *)0x0) {
        if (DAT_027e92b0 == 0) {
          if (local_40 != 0) goto LAB_01c24c85;
        }
        else {
          FUN_00d50b00();
          if (local_40 != lVar7) {
LAB_01c24c85:
            if (local_40 == 0) {
              local_40 = lVar7;
            }
            else {
              FUN_00d50b20();
              local_40 = lVar7;
            }
            goto LAB_01c24af7;
          }
          FUN_00d50b20();
        }
        goto LAB_01c24af7;
      }
      goto LAB_01c24af7;
    }
    FUN_002d7540();
    plVar12 = local_38;
  }
  uVar14 = FUN_01ca5d90();
  bVar9 = true;
  if ((puVar8 != (undefined8 *)0x0) && (*(int *)((longlong)puVar8 + 0xc) != 0)) {
    local_100 = local_40;
    local_f8 = '\0';
    uVar14 = FUN_01cac7f0(1,&local_100);
    if ((local_f8 != '\0') && (local_100 != 0)) {
      uVar14 = FUN_00d50b20();
    }
    bVar9 = false;
  }
  if ((plVar4 == (longlong *)0x0) || (*(int *)((longlong)plVar4 + 0xc) == 0)) {
    if (!bVar9) goto LAB_01c24f18;
    uVar13 = 0;
  }
  else {
    local_e8 = '\0';
    local_f0 = plVar12;
    uVar14 = FUN_019ba260();
    plVar5 = local_68;
    local_e0 = DAT_027e92b8;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        uVar14 = FUN_00d50b00();
        local_e0 = DAT_027e92b8;
      }
    }
    else {
      local_60 = '\0';
    }
    DAT_027e92b8 = local_e0;
    if (local_e0 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_d8 = '\x01';
    uVar14 = FUN_01caa390(uVar14,&local_e0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      uVar14 = FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      uVar14 = FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
LAB_01c24f18:
    uVar1 = *param_2;
    if (unaff_RDI != (longlong *)0x0) {
      uVar14 = FUN_00d50b00();
    }
    lVar7 = DAT_027e92c0;
    if (DAT_027e92c0 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_d0 = lVar7;
    local_c8 = '\x01';
    FUN_01caa390(uVar14,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    uVar13 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar12 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (puVar8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
LAB_01c24ff2:
  return uVar13 & 0xffffffff;
}


