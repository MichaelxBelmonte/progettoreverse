// Function: FUN_01d17670
// Address: 01d17670
// Size: 5114 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void FUN_01d17670(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  uint64_t uVar9;
  undefined7 uVar10;
  undefined7 extraout_var;
  int64_t **pplVar11;
  int64_t *plVar12;
  int64_t *this_ptr;
  int64_t *plVar13;
  int64_t **pplVar14;
  uint uVar15;
  uint64_t unaff_R14;
  undefined7 uVar16;
  bool bVar17;
  int64_t local_98;
  char local_90;
  char local_78;
  char local_74;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_49;
  int64_t *local_48;
  char local_40;
  uint local_34;
  
  local_60 = '\0';
  local_68 = (int64_t *)0x0;
  FUN_01ccad60();
  plVar12 = local_48;
  cVar5 = local_60;
  plVar13 = local_68;
  if (local_68 == local_48) {
    if ((local_60 != '\0') || (local_48 == (int64_t *)0x0)) goto LAB_01d17717;
    if (local_40 == '\0') {
      FUN_00d50b00();
      goto LAB_01d17713;
    }
LAB_01d176e0:
    local_60 = '\x01';
  }
  else {
    unaff_R14 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),local_60);
    if (local_40 != '\0') {
      local_68 = local_48;
      if ((local_60 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d176e0;
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_68 = plVar12;
    if ((cVar5 != '\0') && (plVar13 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01d17713:
    local_60 = '\x01';
LAB_01d17717:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_027057d0;
  if (local_68 == (int64_t *)0x0) goto LAB_01d18968;
  if (g_027057d0 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar13 = local_48;
  if (local_48 == (int64_t *)0x0) {
    pplVar11 = (int64_t **)CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
    plVar13 = (int64_t *)0x0;
    local_34 = 0;
  }
  else {
    if (local_40 == '\0') {
      uVar9 = FUN_00d50b00();
      pplVar11 = (int64_t **)0x0;
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_01d177bc;
      uVar9 = FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    local_34 = (uint)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
    pplVar11 = (int64_t **)0x0;
  }
LAB_01d177bc:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027057d0;
  if (plVar13 == (int64_t *)0x0) {
    local_74 = '\x01';
    lVar2 = g_027ef7f0;
  }
  else {
    if (g_027057d0 != 0) {
      FUN_00d50b00();
    }
    pplVar14 = &local_48;
    (**(code **)(*this_ptr + 0x4c8))();
    plVar12 = local_48;
    FUN_00053ac0();
    if (plVar12 == (int64_t *)0x0) {
LAB_01d17848:
      pplVar14 = &g_02802688;
    }
    else {
      (**(code **)(*plVar12 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d17848;
    }
    plVar12 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (plVar12 == (int64_t *)0x0) {
      local_74 = '\0';
      lVar2 = g_027ef7f0;
    }
    else {
      local_74 = FUN_00d45ad0();
      FUN_00d50b20();
      lVar2 = g_027ef7f0;
    }
  }
  g_027ef7f0 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar12 = local_48;
  uVar10 = (undefined7)((uint64_t)uVar9 >> 8);
  uVar16 = (undefined7)((uint64_t)pplVar11 >> 8);
  if (local_48 == plVar13) {
    bVar8 = (byte)pplVar11 & local_48 != (int64_t *)0x0;
    pplVar11 = (int64_t **)CONCAT71(uVar16,bVar8);
    plVar12 = plVar13;
    if (bVar8 == 1) {
      if (local_40 != '\0') goto LAB_01d17945;
      pplVar11 = (int64_t **)CONCAT71(uVar16,1);
      FUN_00d50b00();
    }
    else {
      pplVar11 = (int64_t **)(uint64_t)local_34;
    }
LAB_01d179c4:
    uVar15 = (uint)pplVar11;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pplVar11 = (int64_t **)CONCAT71(uVar16,1);
      if (((byte)local_34 & plVar13 != (int64_t *)0x0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_01d179c4;
    }
    bVar17 = plVar13 != (int64_t *)0x0;
    plVar13 = plVar12;
    if (((byte)local_34 & bVar17) == 1) {
      FUN_00d50b20();
      uVar10 = extraout_var;
    }
LAB_01d17945:
    local_40 = '\0';
    plVar12 = plVar13;
    uVar15 = (uint)CONCAT71(uVar10,1);
  }
  local_34 = uVar15;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar13 = local_68;
  lVar2 = g_027ef7f0;
  if (plVar12 == (int64_t *)0x0) {
    FUN_001f8a30();
    if (plVar13 == (int64_t *)0x0) {
LAB_01d17acb:
      if (g_02802688 != (int64_t *)0x0) goto LAB_01d17adc;
LAB_01d17c57:
      pplVar11 = (int64_t **)0x0;
      cVar5 = '\x01';
      lVar2 = g_027ef7f8;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d17acb;
      if (local_68 == (int64_t *)0x0) goto LAB_01d17c57;
LAB_01d17adc:
      pplVar11 = (int64_t **)0x0;
      lVar2 = g_027ef7f8;
      cVar5 = (char)this_ptr[0xb];
    }
  }
  else {
    if (g_027ef7f0 != 0) {
      FUN_00d50b00();
    }
    pplVar14 = &local_48;
    (**(code **)(*this_ptr + 0x4c8))();
    plVar13 = local_48;
    FUN_00053ac0();
    if (plVar13 == (int64_t *)0x0) {
LAB_01d17a72:
      pplVar14 = &g_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d17a72;
    }
    plVar13 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (plVar13 == (int64_t *)0x0) {
      local_78 = '\0';
      lVar2 = g_027ef7f8;
      cVar5 = local_78;
    }
    else {
      cVar5 = FUN_00d45ad0();
      FUN_00d50b20();
      lVar2 = g_027ef7f8;
    }
  }
  g_027ef7f8 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar13 = local_48;
  uVar10 = (undefined7)((uint64_t)pplVar11 >> 8);
  if (local_48 == plVar12) {
    plVar13 = plVar12;
    if (((char)local_34 == '\0') && (local_48 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_01d17bdf;
      pplVar11 = (int64_t **)CONCAT71(uVar10,1);
      FUN_00d50b00();
    }
    else {
      pplVar11 = (int64_t **)(uint64_t)local_34;
    }
LAB_01d17c81:
    uVar15 = (uint)pplVar11;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pplVar11 = (int64_t **)CONCAT71(uVar10,1);
      if (((char)local_34 != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d17c81;
    }
    if (((char)local_34 != '\0') && (plVar12 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
LAB_01d17bdf:
    local_40 = '\0';
    uVar15 = (uint)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
  }
  local_34 = uVar15;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027ef7f8;
  if (plVar13 != (int64_t *)0x0) {
    if (g_027ef7f8 != 0) {
      FUN_00d50b00();
    }
    pplVar14 = &local_48;
    (**(code **)(*this_ptr + 0x4c8))();
    plVar12 = local_48;
    FUN_00053ac0();
    if (plVar12 == (int64_t *)0x0) {
LAB_01d17d2f:
      pplVar14 = &g_02802688;
    }
    else {
      (**(code **)(*plVar12 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') goto LAB_01d17d2f;
    }
    plVar12 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar1 = local_68;
    if (plVar12 != (int64_t *)0x0) {
      FUN_001b37d0();
      if (plVar1 == (int64_t *)0x0) {
LAB_01d17dd0:
        if (g_02802688 != (int64_t *)0x0) goto LAB_01d17ddd;
LAB_01d17e04:
        plVar12 = local_68;
        FUN_001f8a30();
        uVar10 = (undefined7)((uint64_t)pplVar11 >> 8);
        if (plVar12 == (int64_t *)0x0) {
LAB_01d17e30:
          pplVar11 = (int64_t **)CONCAT71(uVar10,g_02802690);
          plVar12 = g_02802688;
          if (g_02802690 == '\0') goto LAB_01d17e64;
LAB_01d17e55:
          if (plVar12 == (int64_t *)0x0) goto LAB_01d17e64;
          FUN_00d50b00();
LAB_01d17e6d:
          local_49 = (char)pplVar11;
          pplVar11 = &local_48;
          local_58 = plVar12;
          FUN_01e05950();
          plVar12 = local_48;
          FUN_00037f20();
          if (plVar12 == (int64_t *)0x0) {
LAB_01d17eb1:
            pplVar11 = &g_02802688;
          }
          else {
            (**(code **)(*plVar12 + 0x360))();
            cVar6 = FUN_00e85ea0();
            if (cVar6 == '\0') goto LAB_01d17eb1;
          }
          plVar12 = *pplVar11;
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar12 != (int64_t *)0x0) {
            FUN_01e05950();
            FUN_00d459e0();
            FUN_00d48ae0();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (local_49 != '\0') {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*plVar12 + 0x360))();
          cVar6 = FUN_00e85ea0();
          if (cVar6 == '\0') goto LAB_01d17e30;
          pplVar11 = (int64_t **)CONCAT71(uVar10,local_60);
          plVar12 = local_68;
          if (local_60 != '\0') goto LAB_01d17e55;
LAB_01d17e64:
          if (plVar12 != (int64_t *)0x0) goto LAB_01d17e6d;
        }
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_01d17dd0;
        if (local_68 == (int64_t *)0x0) goto LAB_01d17e04;
LAB_01d17ddd:
        plVar12 = local_68;
        FUN_00d459e0();
        (**(code **)(*plVar12 + 0xab8))();
      }
      FUN_00d50b20();
    }
  }
  lVar2 = g_027ef800;
  if (g_027ef800 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar12 = local_48;
  uVar10 = (undefined7)((uint64_t)pplVar11 >> 8);
  if (local_48 == plVar13) {
    plVar12 = plVar13;
    if (((char)local_34 == '\0') && (local_48 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_01d17f93;
      pplVar11 = (int64_t **)CONCAT71(uVar10,1);
      FUN_00d50b00();
    }
    else {
      pplVar11 = (int64_t **)(uint64_t)local_34;
    }
LAB_01d17fea:
    uVar15 = (uint)pplVar11;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pplVar11 = (int64_t **)CONCAT71(uVar10,1);
      if (((char)local_34 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d17fea;
    }
    if (((char)local_34 != '\0') && (plVar13 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
LAB_01d17f93:
    local_40 = '\0';
    uVar15 = (int)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
  }
  local_34 = uVar15;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027ef800;
  if (plVar12 != (int64_t *)0x0) {
    if (g_027ef800 != 0) {
      FUN_00d50b00();
    }
    pplVar14 = &local_48;
    (**(code **)(*this_ptr + 0x4c8))();
    plVar13 = local_48;
    FUN_00053ac0();
    if (plVar13 == (int64_t *)0x0) {
LAB_01d18098:
      pplVar14 = &g_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') goto LAB_01d18098;
    }
    plVar13 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar1 = local_68;
    if (plVar13 != (int64_t *)0x0) {
      FUN_001b37d0();
      if (plVar1 == (int64_t *)0x0) {
LAB_01d18139:
        if (g_02802688 != (int64_t *)0x0) goto LAB_01d18146;
LAB_01d1816d:
        plVar13 = local_68;
        FUN_001f8a30();
        uVar10 = (undefined7)((uint64_t)pplVar11 >> 8);
        if (plVar13 == (int64_t *)0x0) {
LAB_01d18199:
          pplVar11 = (int64_t **)CONCAT71(uVar10,g_02802690);
          plVar13 = g_02802688;
          if (g_02802690 == '\0') goto LAB_01d181cd;
LAB_01d181be:
          if (plVar13 == (int64_t *)0x0) goto LAB_01d181cd;
          FUN_00d50b00();
LAB_01d181d6:
          local_49 = (char)pplVar11;
          pplVar11 = &local_48;
          local_58 = plVar13;
          FUN_01e05950();
          plVar13 = local_48;
          FUN_00037f20();
          if (plVar13 == (int64_t *)0x0) {
LAB_01d1821a:
            pplVar11 = &g_02802688;
          }
          else {
            (**(code **)(*plVar13 + 0x360))();
            cVar6 = FUN_00e85ea0();
            if (cVar6 == '\0') goto LAB_01d1821a;
          }
          plVar13 = *pplVar11;
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar13 != (int64_t *)0x0) {
            FUN_01e05950();
            FUN_00d459e0();
            FUN_00d48b00();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (local_49 != '\0') {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*plVar13 + 0x360))();
          cVar6 = FUN_00e85ea0();
          if (cVar6 == '\0') goto LAB_01d18199;
          pplVar11 = (int64_t **)CONCAT71(uVar10,local_60);
          plVar13 = local_68;
          if (local_60 != '\0') goto LAB_01d181be;
LAB_01d181cd:
          if (plVar13 != (int64_t *)0x0) goto LAB_01d181d6;
        }
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_01d18139;
        if (local_68 == (int64_t *)0x0) goto LAB_01d1816d;
LAB_01d18146:
        plVar13 = local_68;
        FUN_00d459e0();
        (**(code **)(*plVar13 + 0xac8))();
      }
      FUN_00d50b20();
    }
  }
  lVar2 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar13 = local_48;
  uVar10 = (undefined7)((uint64_t)pplVar11 >> 8);
  if (local_48 == plVar12) {
    plVar13 = plVar12;
    uVar15 = local_34;
    if (((char)local_34 == '\0') && (local_48 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_01d18301;
      local_34 = 0;
      FUN_00d50b00();
      uVar15 = (int)CONCAT71(uVar10,1);
    }
LAB_01d1836f:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      uVar15 = (uint)CONCAT71(uVar10,1);
      if (((char)local_34 != '\0') && (plVar12 != (int64_t *)0x0)) {
        local_34 = (uint)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
        FUN_00d50b20();
        uVar15 = (int)CONCAT71(uVar10,1);
      }
      goto LAB_01d1836f;
    }
    if (((char)local_34 != '\0') && (plVar12 != (int64_t *)0x0)) {
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      uVar9 = FUN_00d50b20();
    }
LAB_01d18301:
    local_40 = '\0';
    uVar15 = (int)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
  }
  local_34 = uVar15;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_78 = cVar5;
  if (plVar13 == (int64_t *)0x0) {
LAB_01d187ae:
    cVar5 = local_78;
    if (local_74 != '\0') goto LAB_01d187b8;
LAB_01d1889e:
    local_78 = cVar5;
    cVar5 = '\0';
  }
  else {
    cVar7 = FUN_01ccd010();
    cVar6 = local_74;
    if (cVar7 == '\0') {
      cVar7 = FUN_01d26970();
      cVar6 = '\0';
      if (cVar7 == '\0') {
        cVar6 = local_74;
      }
    }
    local_74 = cVar6;
    (**(code **)(*plVar13 + 0x3f8))();
    if (local_48 == (int64_t *)0x0) {
      bVar17 = true;
    }
    else {
      (**(code **)(*plVar13 + 0x3f8))();
      bVar17 = *(int *)(local_98 + 0xc) == 0;
      if (local_90 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027e7c20;
    if (bVar17) {
      (**(code **)(*local_68 + 0x978))();
      local_74 = '\0';
    }
    else {
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x4c8))();
      plVar12 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      plVar1 = local_68;
      FUN_001f8a30();
      if (plVar1 == (int64_t *)0x0) {
LAB_01d1853f:
        if (g_02802688 == (int64_t *)0x0) goto LAB_01d1860b;
LAB_01d18582:
        cVar6 = (**(code **)(*local_68 + 0xac8))();
        if (cVar6 == '\0') goto LAB_01d1860b;
        if ((char)this_ptr[6] != '\0') {
          FUN_01e04c20();
        }
        if (plVar12 == (int64_t *)0x0) {
LAB_01d18a18:
          (**(code **)(*local_68 + 0x978))();
          *(void*)(this_ptr + 6) = 0;
          goto joined_r0x01d18a5f;
        }
        (**(code **)(*local_68 + 0x980))();
        if (local_48 == (int64_t *)0x0) {
          cVar6 = '\0';
        }
        else {
          (**(code **)(*local_68 + 0x980))();
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          cVar6 = (**(code **)(*plVar12 + 0x50))();
          if (local_98 != 0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar6 == '\0') goto LAB_01d18a18;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_01d1853f;
        if (local_68 != (int64_t *)0x0) goto LAB_01d18582;
LAB_01d1860b:
        (**(code **)(*local_68 + 0x980))();
        plVar1 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01d18626;
          }
          bVar17 = true;
LAB_01d186a4:
          local_58 = plVar12;
          (**(code **)(*local_68 + 0x978))();
          plVar4 = local_68;
          FUN_001f8a30();
          plVar12 = local_58;
          plVar1 = g_02802688;
          if (plVar4 != (int64_t *)0x0) {
            (**(code **)(*plVar4 + 0x360))();
            cVar6 = FUN_00e85ea0();
            plVar12 = local_58;
            plVar1 = g_02802688;
            if (cVar6 != '\0') {
              plVar1 = local_68;
            }
          }
          if (plVar1 != (int64_t *)0x0) {
            *(void*)(this_ptr + 6) = 0;
          }
          local_58 = plVar12;
          if (!bVar17) goto LAB_01d18733;
        }
        else {
LAB_01d18626:
          bVar17 = plVar1 == (int64_t *)0x0;
          if ((plVar12 == (int64_t *)0x0) || (plVar1 == (int64_t *)0x0)) goto LAB_01d186a4;
          cVar6 = (**(code **)(*plVar1 + 0x50))();
          if (cVar6 == '\0') {
            bVar17 = false;
            goto LAB_01d186a4;
          }
LAB_01d18733:
          FUN_00d50b20();
        }
joined_r0x01d18a5f:
        if (plVar12 == (int64_t *)0x0) goto LAB_01d18748;
      }
      FUN_00d50b20();
    }
LAB_01d18748:
    lVar2 = g_027e7c20;
    if (cVar5 != '\0') {
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      cVar6 = FUN_01ccca20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      local_78 = '\0';
      if (cVar6 != '\0') {
        local_78 = cVar5;
      }
      goto LAB_01d187ae;
    }
    local_78 = '\0';
    cVar5 = local_78;
    local_78 = '\0';
    if (local_74 == '\0') goto LAB_01d1889e;
LAB_01d187b8:
    lVar2 = g_027edfc8;
    if (g_027edfc8 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    lVar3 = g_027edfc8;
    if (local_48 == (int64_t *)0x0) {
      bVar8 = 0;
    }
    else {
      if (g_027edfc8 != 0) {
        FUN_00d50b00();
      }
      bVar8 = FUN_01cccb90();
      bVar8 = bVar8 ^ 1;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    cVar5 = '\0';
    if (bVar8 == 0) {
      cVar5 = local_74;
    }
  }
  plVar12 = local_68;
  FUN_001f8a30();
  if (plVar12 == (int64_t *)0x0) {
LAB_01d188d6:
    pplVar11 = &g_02802688;
    if (g_02802688 != (int64_t *)0x0) goto LAB_01d188e3;
LAB_01d18913:
    (**(code **)(*local_68 + 0x998))
              (CONCAT71((int7)((uint64_t)pplVar11 >> 8),local_78 != '\0' && cVar5 != '\0'));
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_01d188d6;
    pplVar11 = &local_68;
    if (local_68 == (int64_t *)0x0) goto LAB_01d18913;
LAB_01d188e3:
    (**(code **)(*local_68 + 0x998))();
    FUN_01e058a0();
  }
  cVar5 = (**(code **)(*this_ptr + 0x4a0))();
  if (cVar5 == '\0') {
    FUN_01d13bc0();
  }
  if (((char)local_34 != '\0') && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01d18968:
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

