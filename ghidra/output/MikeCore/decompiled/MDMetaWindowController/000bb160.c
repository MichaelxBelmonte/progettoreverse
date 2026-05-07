// Function: FUN_000bb160
// Address: 000bb160
// Size: 2214 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bb160(pthread_key_t param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong *unaff_RDI;
  byte bVar10;
  byte bVar11;
  longlong *plVar12;
  byte bVar13;
  byte bVar14;
  longlong **pplVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [7];
  char local_31;
  
  (**(code **)(*(longlong *)unaff_RDI[3] + 0xa00))();
  plVar9 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x3c8))();
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  local_a0 = plVar9;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar17 = FUN_012c9740();
  local_68 = local_48;
  if (((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
     ((uVar17 = FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *)0x0)))) {
    uVar17 = FUN_00d50b20();
  }
  lVar2 = DAT_026dc290;
  if (DAT_026dc290 != 0) {
    uVar17 = FUN_00d50b00();
  }
  local_c0 = lVar2;
  local_b8 = '\x01';
  pplVar15 = &local_48;
  FUN_000175c0(uVar17,&local_c0);
  plVar9 = local_48;
  uVar17 = FUN_00053ac0();
  if (plVar9 == (longlong *)0x0) {
LAB_000bb2a4:
    pplVar15 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar17 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_000bb2a4;
  }
  local_50 = *pplVar15;
  if (local_50 == (longlong *)0x0) {
    bVar13 = 1;
    bVar14 = 1;
    bVar10 = 0;
    bVar11 = 0;
    cVar5 = '\0';
    cVar4 = '\0';
    local_50 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar15 + 1) == '\0') {
      uVar17 = FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar15 + 1) = 0;
    }
    bVar10 = 1;
    bVar11 = 1;
    bVar13 = 0;
    bVar14 = 0;
    cVar5 = '\x01';
    cVar4 = '\x01';
  }
  if ((local_40[0] != '\0') &&
     (bVar11 = bVar10, bVar14 = bVar13, cVar4 = cVar5, local_48 != (longlong *)0x0)) {
    uVar17 = FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    uVar17 = FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    iVar6 = FUN_00d45870();
    if (iVar6 == 0) {
      uVar17 = (**(code **)(*(longlong *)unaff_RDI[3] + 0xd00))();
    }
    else if (iVar6 == 1) {
      uVar17 = (**(code **)(*(longlong *)unaff_RDI[3] + 0xd00))();
    }
    else {
      uVar17 = extraout_XMM0_Da_00;
      if (iVar6 == 2) {
        uVar17 = (**(code **)(*(longlong *)unaff_RDI[3] + 0xd00))();
      }
    }
  }
  lVar2 = DAT_026dc298;
  if (DAT_026dc298 != 0) {
    uVar17 = FUN_00d50b00();
  }
  local_b0 = lVar2;
  local_a8 = '\x01';
  pplVar15 = &local_48;
  FUN_000175c0(uVar17,&local_b0);
  plVar9 = local_48;
  FUN_00053ac0();
  if (plVar9 == (longlong *)0x0) {
LAB_000bb3eb:
    pplVar15 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_000bb3eb;
  }
  plVar9 = *pplVar15;
  if (plVar9 == local_50) {
    local_31 = cVar4;
    if (!(bool)(bVar14 & plVar9 != (longlong *)0x0)) goto joined_r0x000bb48b;
    if (*(char *)(pplVar15 + 1) == '\0') {
      local_31 = '\x01';
      FUN_00d50b00();
      goto joined_r0x000bb48b;
    }
LAB_000bb43c:
    *(undefined1 *)(pplVar15 + 1) = 0;
    plVar9 = local_50;
  }
  else {
    if (*(char *)(pplVar15 + 1) != '\0') {
      bVar16 = local_50 != (longlong *)0x0;
      local_50 = plVar9;
      if ((bool)(bVar11 & bVar16)) {
        FUN_00d50b20();
      }
      goto LAB_000bb43c;
    }
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_31 = '\x01';
    if ((bool)(bVar11 & local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
      local_50 = plVar9;
      goto joined_r0x000bb48b;
    }
  }
  local_31 = '\x01';
  local_50 = plVar9;
joined_r0x000bb48b:
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    iVar6 = FUN_00d45870();
    if (iVar6 == 0) {
      (**(code **)(*(longlong *)unaff_RDI[3] + 0xd18))(local_31);
    }
    else if (iVar6 == 1) {
      (**(code **)(*(longlong *)unaff_RDI[3] + 0xd18))(local_31);
    }
    else if (iVar6 == 2) {
      (**(code **)(*(longlong *)unaff_RDI[3] + 0xd18))(local_31);
    }
  }
  local_98 = (longlong *)unaff_RDI[3];
  local_38[0] = '\0';
  do {
    plVar9 = local_98;
    (**(code **)(*local_98 + 0x370))();
    plVar12 = local_48;
    if (local_48 == plVar9) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        plVar12 = plVar9;
        goto LAB_000bb5c7;
      }
    }
    else {
      local_98 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar8 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar8 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_000bb5c7:
        local_38[0] = '\x01';
        pcVar8 = local_40;
      }
      *pcVar8 = '\0';
      plVar9 = plVar12;
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddb0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      _DAT_026e0ab8 = FUN_00015ff0();
      _DAT_026e0aa0 = "MDMetaWindowController";
      _DAT_026e0aa8 = 0x198;
      _DAT_026e0ab0 = FUN_0006dea0;
      _DAT_026e0ac0 = 0;
      uRam00000000026e0ac8 = 0;
      _DAT_026e0ad0 = 0;
      _DAT_026e0b48 = 0;
      uRam00000000026e0b50 = 0;
      _DAT_026e0b58 = 0;
      DAT_026e0b5a = 1;
      _DAT_026e0ad8 = 0;
      uRam00000000026e0ae0 = 0;
      _DAT_026e0ae8 = 0;
      uRam00000000026e0af0 = 0;
      _DAT_026e0af8 = 0;
      uRam00000000026e0b00 = 0;
      _DAT_026e0b08 = 0;
      uRam00000000026e0b10 = 0;
      _DAT_026e0b18 = 0;
      uRam00000000026e0b20 = 0;
      _DAT_026e0b28 = 0;
      uRam00000000026e0b30 = 0;
      _DAT_026e0b38 = 0;
      uRam00000000026e0b40 = 0;
      DAT_026e0b63 = 0;
      _DAT_026e0b5b = 0;
      ___cxa_guard_release();
    }
    pplVar15 = (longlong **)&DAT_02802688;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar15 = &local_98;
      if (cVar4 == '\0') {
        pplVar15 = (longlong **)&DAT_02802688;
      }
    }
    plVar9 = local_98;
    if (*pplVar15 != (longlong *)0x0) {
      if ((local_38[0] == '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      else if (local_98 == (longlong *)0x0) {
        bVar16 = true;
        bVar1 = false;
        plVar12 = (longlong *)0x0;
        goto LAB_000bb999;
      }
      FUN_00637870();
      plVar12 = local_48;
      if (local_48 == (longlong *)0x0) {
        plVar12 = (longlong *)0x0;
        bVar1 = false;
joined_r0x000bb793:
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar12 == (longlong *)0x0) {
          bVar16 = false;
          plVar12 = (longlong *)0x0;
          goto LAB_000bb999;
        }
      }
      else {
        if (local_40[0] == '\0') {
          FUN_00d50b00();
          bVar1 = true;
          goto joined_r0x000bb793;
        }
        bVar1 = true;
      }
      FUN_006e32b0();
      plVar3 = local_48;
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x5e0))();
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_000bb8dd;
          }
        }
        else if (local_48 != (longlong *)0x0) {
LAB_000bb8dd:
          FUN_00752180();
          uVar17 = FUN_00108380();
          local_78 = local_48;
          local_70 = 0;
          if (local_40[0] == '\0') {
            if (local_48 != (longlong *)0x0) {
              uVar17 = FUN_00d50b00();
            }
          }
          else {
            local_40[0] = '\0';
          }
          local_70 = '\x01';
          FUN_00108e20(uVar17,0);
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      else {
        uVar17 = FUN_006e32b0();
        local_88 = local_48;
        local_80 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            uVar17 = FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_80 = '\x01';
        FUN_00108e20(uVar17,0);
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar16 = false;
      goto LAB_000bb999;
    }
    if (local_98 == (longlong *)0x0) {
      bVar16 = true;
      bVar1 = false;
      plVar12 = (longlong *)0x0;
LAB_000bb999:
      (**(code **)(*unaff_RDI + 0x3d0))();
      if ((bVar1) && (plVar12 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar16) {
        FUN_00d50b20();
      }
      if ((local_31 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
  } while( true );
}


