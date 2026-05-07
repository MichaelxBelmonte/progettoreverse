// Function: FUN_018f9710
// Address: 018f9710
// Size: 7693 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x018fa4c4) */
/* WARNING: Removing unreachable block (ram,0x018fa4d0) */
/* WARNING: Removing unreachable block (ram,0x018fa042) */
/* WARNING: Removing unreachable block (ram,0x018fa052) */
/* WARNING: Removing unreachable block (ram,0x018fa97c) */
/* WARNING: Removing unreachable block (ram,0x018fa988) */

undefined8 * FUN_018f9710(pthread_key_t param_1)

{
  double dVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  longlong lVar9;
  longlong **pplVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  pthread_key_t pVar16;
  char cVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar20;
  undefined8 *puVar21;
  uint uVar22;
  longlong *unaff_R15;
  undefined7 uVar24;
  longlong *plVar23;
  double dVar25;
  double dVar26;
  longlong *local_118;
  char local_108;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  longlong *local_c0;
  double local_b8;
  longlong *local_b0;
  longlong *local_a8;
  char local_a0;
  undefined8 local_98;
  longlong *local_90;
  double local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  char local_68 [12];
  undefined4 local_5c;
  longlong *local_58;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  local_80 = (longlong *)FUN_01706c40();
  (**(code **)(*local_80 + 0x18))();
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01525bc0();
  local_c0 = local_70;
  if ((((local_68[0] == '\0') && (local_70 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01525c20();
  plVar19 = local_70;
  if (((local_68[0] == '\0') && (local_70 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_68[0] != '\0' && (local_70 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01525bf0();
  plVar23 = local_70;
  if (((local_68[0] == '\0') && (local_70 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_68[0] != '\0' && (local_70 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  local_90 = plVar23;
  local_b0 = plVar19;
  if (*(int *)((longlong)local_c0 + 0xc) == 0) {
    FUN_01907d20();
    FUN_018f9320(DAT_02395720);
    bVar20 = false;
    plVar19 = local_80;
    goto LAB_018fb5d8;
  }
  uVar6 = -*(int *)((longlong)plVar19 + 0xc);
  FUN_00d23340();
  plVar19 = local_70;
  local_a8 = (longlong *)CONCAT71(local_a8._1_7_,local_68[0]);
  pplVar10 = (longlong **)local_68;
  if (local_68[0] == '\0') {
    pplVar10 = &local_a8;
  }
  *(char *)pplVar10 = '\0';
  if ((local_68[0] != '\0') && (plVar19 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_38 = plVar19;
  if (((char)local_a8 == '\0') && (plVar19 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((*(int *)((longlong)local_b0 + 0xc) == 1) && (0 < *(int *)((longlong)local_90 + 0xc))) {
    pvVar8 = _pthread_getspecific(param_1);
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      param_1 = (pthread_key_t)local_38;
    }
    cVar3 = FUN_01524a30();
    if (cVar3 != '\0') {
      pvVar8 = _pthread_getspecific(param_1);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        param_1 = (pthread_key_t)local_38;
      }
      local_58 = (longlong *)FUN_01524a10();
      FUN_00d23310();
      unaff_R15 = local_70;
      local_a8 = (longlong *)CONCAT71(local_a8._1_7_,local_68[0]);
      pplVar10 = (longlong **)local_68;
      if (local_68[0] == '\0') {
        pplVar10 = &local_a8;
      }
      *(char *)pplVar10 = '\0';
      if ((local_68[0] != '\0') && (unaff_R15 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = (double)FUN_01524a10();
      if (((char)local_a8 != '\0') && (unaff_R15 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((double)local_58 == local_88) && (!NAN((double)local_58) && !NAN(local_88))) {
        FUN_00d23310();
        plVar23 = local_38;
        plVar19 = local_70;
        pplVar10 = (longlong **)local_68;
        if (local_68[0] == '\0') {
          pplVar10 = &local_a8;
        }
        local_a8 = (longlong *)CONCAT71(local_a8._1_7_,local_68[0]);
        *(char *)pplVar10 = '\0';
        if ((local_68[0] != '\0') && (plVar19 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar23 == plVar19) {
          plVar11 = plVar23;
          if (((char)local_a8 != '\0') && (plVar19 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar11 = plVar19;
          if ((char)local_a8 == '\0') {
            if (plVar19 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if (plVar23 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          else if (plVar23 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        uVar6 = 0;
        local_38 = plVar11;
      }
    }
  }
  plVar23 = (longlong *)0x0;
  plVar19 = (longlong *)0x0;
  uVar22 = uVar6;
  do {
    uVar2 = uVar22 + 1;
    local_e0 = (longlong *)(ulonglong)uVar2;
    uVar7 = *(uint *)((longlong)local_90 + 0xc);
    plVar11 = local_e0;
    if ((int)uVar7 <= (int)uVar2) goto joined_r0x018f9d05;
    uVar24 = (undefined7)((ulonglong)unaff_R15 >> 8);
    if ((int)uVar22 < -1) {
      plVar11 = *(longlong **)((longlong)(int)(uVar22 + 2) * 8 + local_b0[2]);
      plVar12 = local_b0;
      if (plVar19 != plVar11) goto LAB_018f9bab;
LAB_018f9bf9:
      plVar11 = plVar12;
      unaff_R15 = plVar23;
      plVar12 = plVar19;
      if (((char)plVar23 == '\0') && (plVar19 != (longlong *)0x0)) {
        FUN_00d50b00();
        unaff_R15 = (longlong *)CONCAT71(uVar24,1);
      }
    }
    else {
      plVar11 = *(longlong **)((longlong)local_e0 * 8 + local_90[2]);
      plVar12 = local_90;
      if (plVar19 == plVar11) goto LAB_018f9bf9;
LAB_018f9bab:
      local_58 = plVar11;
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      unaff_R15 = (longlong *)CONCAT71(uVar24,1);
      plVar12 = local_58;
      if (((char)plVar23 != '\0') && (plVar19 != (longlong *)0x0)) {
        FUN_00d50b20();
        plVar12 = local_58;
      }
    }
    local_58 = plVar12;
    pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      plVar11 = local_58;
    }
    local_88 = (double)FUN_01524a10();
    pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      plVar11 = local_38;
    }
    dVar25 = (double)FUN_01524a10();
    plVar23 = (longlong *)((ulonglong)unaff_R15 & 0xffffffff);
    plVar19 = local_58;
  } while ((local_88 == dVar25) && (uVar22 = uVar2, !NAN(local_88) && !NAN(dVar25)));
  uVar7 = *(uint *)((longlong)local_90 + 0xc);
  plVar23 = unaff_R15;
joined_r0x018f9d05:
  local_58 = plVar19;
  if ((uVar7 == uVar2) && (local_58 != (longlong *)0x0)) {
    if ((char)plVar23 != '\0') {
      FUN_00d50b20();
    }
    plVar23 = (longlong *)0x0;
    local_58 = (longlong *)0x0;
  }
  plVar19 = *(longlong **)local_c0[2];
  if (plVar19 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_98 = plVar23;
  local_48 = plVar19;
  if (*(int *)((longlong)local_c0 + 0xc) < 2) {
    local_40 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
LAB_018f9f13:
    local_78 = (longlong *)0x0;
    plVar23 = (longlong *)0x0;
  }
  else {
    local_40 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
    uVar22 = 0;
    plVar19 = (longlong *)0x0;
    do {
      plVar11 = *(longlong **)(local_c0[2] + (longlong)local_40 * 8);
      uVar24 = (undefined7)((ulonglong)plVar23 >> 8);
      if (plVar19 == plVar11) {
        plVar11 = local_c0;
        if (((char)uVar22 == '\0') && (plVar19 != (longlong *)0x0)) {
          plVar23 = (longlong *)CONCAT71(uVar24,1);
          FUN_00d50b00();
          local_78 = plVar19;
        }
        else {
          plVar23 = (longlong *)(ulonglong)uVar22;
          local_78 = plVar19;
        }
      }
      else {
        local_78 = plVar11;
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar23 = (longlong *)CONCAT71(uVar24,1);
        if (((char)uVar22 != '\0') && (plVar19 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pVar16 = (pthread_key_t)plVar11;
      pvVar8 = _pthread_getspecific(pVar16);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        pVar16 = (pthread_key_t)local_78;
      }
      local_70 = (longlong *)FUN_014ff940();
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a8 = (longlong *)FUN_014ff940();
      if (((local_70._4_4_ == 0) || ((ulonglong)local_a8 >> 0x20 == 0)) ||
         (cVar3 = FUN_00e7c000(), cVar3 == '\0')) break;
      local_40 = (longlong *)((longlong)local_40 + 1);
      uVar22 = (uint)plVar23;
      plVar19 = local_78;
    } while ((longlong)local_40 < (longlong)*(int *)((longlong)local_c0 + 0xc));
    plVar11 = local_40;
    if (((int)local_40 == *(int *)((longlong)local_c0 + 0xc)) && (local_78 != (longlong *)0x0)) {
      if ((char)plVar23 != '\0') {
        FUN_00d50b20();
      }
      goto LAB_018f9f13;
    }
  }
  FUN_01907d40();
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar11 = local_38;
  }
  bVar4 = FUN_01524a30();
  plVar19 = local_80;
  plVar11 = (longlong *)CONCAT71((int7)((ulonglong)plVar11 >> 8),(int)uVar6 < 0);
  if ((bVar4 & (int)uVar6 < 0) == 1) {
    pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
    plVar12 = local_38;
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), plVar12 = local_38, lVar9 != 0)) {
      plVar12 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      plVar11 = local_38;
    }
    plVar12 = (longlong *)FUN_00e7cd00(plVar12[7]);
    pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      plVar11 = local_48;
    }
    local_a8 = (longlong *)FUN_014ff940();
    local_70 = plVar12;
    FUN_00e7b970();
    local_118 = local_70;
  }
  else {
    pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015265f0();
    local_118 = (longlong *)FUN_00e7cd00();
  }
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar11 = local_48;
  }
  uVar13 = FUN_014ff9a0();
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar11 = local_48;
  }
  local_c8 = (longlong *)FUN_014ff990();
  local_70 = local_118;
  FUN_00e7b970();
  plVar12 = local_70;
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar11 = local_48;
  }
  local_d8 = FUN_014ff940();
  local_70 = plVar12;
  FUN_00e7bdc0();
  local_a8 = local_70;
  local_70 = (longlong *)uVar13;
  FUN_00e7b820();
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
  plVar12 = local_38;
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), plVar12 = local_38, lVar9 != 0)) {
    plVar12 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    plVar11 = local_38;
  }
  local_b8 = (double)plVar12[8];
  local_88 = (double)FUN_00e7c860();
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
  plVar12 = local_38;
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), plVar12 = local_38, lVar9 != 0)) {
    plVar12 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    plVar11 = local_38;
  }
  local_88 = local_88 - (double)plVar12[7];
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar11 = local_38;
  }
  dVar25 = (double)FUN_01524a10();
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01907b60(local_b8 + local_88 * dVar25);
  plVar12 = local_a8;
  if (local_a0 == '\0') {
    if (local_a8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a0 = '\0';
  }
  local_70 = plVar12;
  local_68[0] = '\0';
  FUN_00d21140();
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar16 = (pthread_key_t)plVar11;
  uVar24 = (undefined7)(((ulonglong)local_78 | (ulonglong)local_58) >> 8);
  if (((ulonglong)local_78 | (ulonglong)local_58) == 0) {
    local_5c = 1;
    local_4c = 1;
  }
  else {
    local_4c = (undefined4)CONCAT71(uVar24,1);
    local_5c = (undefined4)CONCAT71(uVar24,1);
    do {
      bVar20 = local_78 == (longlong *)0x0;
      local_88 = (double)CONCAT44(local_88._4_4_,(int)plVar23);
      plVar19 = (longlong *)((ulonglong)local_98 & 0xffffffff);
      local_c8 = (longlong *)FUN_00e7bdb0();
      if (local_58 == (longlong *)0x0) {
        local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
      }
      else {
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015265f0();
        local_c8 = (longlong *)FUN_00e7cd00();
        local_98 = (longlong *)
                   CONCAT44(local_98._4_4_,(int)CONCAT71((int7)((ulonglong)local_c8 >> 8),1));
      }
      local_d8 = FUN_00e7bdb0();
      if (bVar20) {
LAB_018fa500:
        plVar23 = (longlong *)0x0;
LAB_018fa513:
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          plVar11 = local_48;
        }
        plVar12 = (longlong *)FUN_014ff9a0();
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          plVar11 = local_48;
        }
        FUN_014ff990();
        local_70 = local_c8;
        FUN_00e7b970();
        plVar18 = local_70;
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          plVar11 = local_48;
        }
        FUN_014ff940();
        local_70 = plVar18;
        FUN_00e7bdc0();
        local_a8 = local_70;
        local_70 = plVar12;
        FUN_00e7b820();
        local_108 = (char)plVar23;
        if ((char)local_98 == '\0') goto LAB_018fa76b;
LAB_018fa8ff:
        plVar23 = (longlong *)*unaff_RSI;
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
        if (pvVar8 != (void *)0x0) {
          plVar23 = (longlong *)*unaff_RSI;
          lVar9 = FUN_00e8b990();
          if (lVar9 != 0) {
            plVar23 = (longlong *)plVar23[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
        }
        local_b8 = (double)FUN_01526330();
      }
      else {
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d8 = FUN_014ff990();
        if (local_58 == (longlong *)0x0) {
          plVar23 = (longlong *)CONCAT71((int7)((ulonglong)plVar23 >> 8),1);
          goto LAB_018fa8a0;
        }
        local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
        if (local_c8._4_4_ == 0) goto LAB_018fa500;
        plVar23 = (longlong *)0x0;
        if (local_d8 >> 0x20 == 0) {
LAB_018fa8a0:
          cVar3 = (char)plVar23;
        }
        else {
          uVar5 = FUN_00e7c020();
          local_98 = (longlong *)(CONCAT44(local_98._4_4_,uVar5) ^ 1);
          plVar23 = (longlong *)0x0;
          if ((local_c8._4_4_ == 0) || (local_d8._4_4_ == 0)) goto LAB_018fa8a0;
          uVar6 = FUN_00e7c020();
          plVar23 = (longlong *)((ulonglong)uVar6 ^ 1);
          cVar3 = (char)plVar23;
        }
        if (cVar3 == '\0') goto LAB_018fa513;
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014ff9a0();
        local_108 = (char)plVar23;
        if ((char)local_98 != '\0') goto LAB_018fa8ff;
LAB_018fa76b:
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
        plVar12 = local_38;
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), plVar12 = local_38, lVar9 != 0)) {
          plVar12 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          plVar11 = local_38;
        }
        local_b8 = (double)plVar12[8];
        dVar25 = (double)FUN_00e7c860();
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
        plVar12 = local_38;
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), plVar12 = local_38, lVar9 != 0)) {
          plVar12 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          plVar11 = local_38;
        }
        dVar1 = (double)plVar12[7];
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          plVar11 = local_38;
        }
        dVar26 = (double)FUN_01524a10();
        local_b8 = local_b8 + (dVar25 - dVar1) * dVar26;
      }
      pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        plVar11 = local_80;
      }
      FUN_01907b60(local_b8);
      plVar12 = local_a8;
      if (local_a0 == '\0') {
        if (local_a8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      local_70 = plVar12;
      local_68[0] = '\0';
      FUN_00d21140();
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar12 = local_38;
      if ((char)local_98 != '\0') {
        cVar3 = (char)plVar19;
        if (local_38 == local_58) {
          cVar17 = (char)local_4c;
          if (((cVar3 != '\0') && ((char)local_4c == '\0')) && (local_38 != (longlong *)0x0)) {
            local_4c = 0;
            FUN_00d50b00();
            cVar17 = '\x01';
          }
        }
        else {
          if ((cVar3 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          plVar12 = local_58;
          cVar17 = cVar3;
          if (((char)local_4c != '\0') && (local_38 != (longlong *)0x0)) {
            local_38 = local_58;
            FUN_00d50b20();
          }
        }
        local_b8 = (double)CONCAT71(local_b8._1_7_,cVar17);
        uVar6 = (uint)local_e0;
        do {
          plVar18 = local_58;
          uVar7 = uVar6 + 1;
          local_e0 = (longlong *)(ulonglong)uVar7;
          uVar22 = *(uint *)((longlong)local_90 + 0xc);
          plVar11 = local_e0;
          if ((int)uVar22 <= (int)uVar7) goto joined_r0x018facd1;
          uVar24 = (undefined7)((ulonglong)plVar23 >> 8);
          if ((int)uVar6 < -1) {
            plVar23 = *(longlong **)((longlong)(int)(uVar6 + 2) * 8 + local_b0[2]);
            plVar11 = local_b0;
            if (local_58 != plVar23) goto LAB_018fab6c;
LAB_018fabba:
            pVar16 = (pthread_key_t)plVar11;
            plVar23 = plVar19;
            if (((char)plVar19 == '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b00();
              plVar23 = (longlong *)CONCAT71(uVar24,1);
            }
          }
          else {
            plVar23 = *(longlong **)((ulonglong)uVar7 * 8 + local_90[2]);
            plVar11 = local_90;
            if (local_58 == plVar23) goto LAB_018fabba;
LAB_018fab6c:
            plVar18 = plVar23;
            pVar16 = (pthread_key_t)plVar11;
            if (plVar18 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            plVar23 = (longlong *)CONCAT71(uVar24,1);
            if (((char)plVar19 != '\0') && (local_58 != (longlong *)0x0)) {
              local_58 = plVar18;
              FUN_00d50b20();
            }
          }
          pvVar8 = _pthread_getspecific(pVar16);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_58 = (longlong *)FUN_01524a10();
          pvVar8 = _pthread_getspecific(pVar16);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar25 = (double)FUN_01524a10();
          bVar20 = NAN((double)local_58);
          plVar19 = (longlong *)((ulonglong)plVar23 & 0xffffffff);
        } while (((double)local_58 == dVar25) &&
                (uVar6 = uVar7, local_58 = plVar18, !bVar20 && !NAN(dVar25)));
        uVar22 = *(uint *)((longlong)local_90 + 0xc);
        plVar19 = (longlong *)((ulonglong)plVar23 & 0xffffffff);
        plVar11 = plVar18;
        local_58 = plVar18;
joined_r0x018facd1:
        local_38 = plVar12;
        if ((uVar22 == uVar7) && (local_58 != (longlong *)0x0)) {
          if ((char)plVar19 != '\0') {
            local_4c = CONCAT31((int3)(uVar22 >> 8),local_b8._0_1_);
            FUN_00d50b20();
            local_98 = (longlong *)0x0;
            local_58 = (longlong *)0x0;
            plVar19 = local_98;
            goto LAB_018fad1b;
          }
          local_98 = (longlong *)0x0;
          local_58 = (longlong *)0x0;
          plVar19 = local_98;
        }
        local_98 = plVar19;
        local_4c = (undefined4)CONCAT71((int7)((ulonglong)local_98 >> 8),local_b8._0_1_);
        plVar19 = local_98;
      }
LAB_018fad1b:
      local_98 = plVar19;
      if (local_108 == '\0') {
        plVar23 = (longlong *)((ulonglong)local_88 & 0xffffffff);
      }
      else {
        if (local_48 == local_78) {
          uVar5 = local_5c;
          if (((local_88._0_1_ != '\0') && ((char)local_5c == '\0')) &&
             (local_78 != (longlong *)0x0)) {
            uVar5 = (undefined4)CONCAT71((uint7)(uint3)((uint)local_5c >> 8),1);
            local_5c = 0;
            local_48 = local_78;
            FUN_00d50b00();
          }
        }
        else {
          if ((local_88._0_1_ != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          uVar5 = local_88._0_4_;
          if (((char)local_5c != '\0') && (local_48 != (longlong *)0x0)) {
            local_48 = local_78;
            FUN_00d50b20();
            uVar5 = local_88._0_4_;
          }
        }
        lVar9 = (longlong)(int)local_40;
        plVar11 = (longlong *)(ulonglong)((int)local_40 + 1);
        plVar19 = local_78;
        do {
          lVar9 = lVar9 + 1;
          plVar12 = local_c0;
          local_40 = plVar11;
          if (*(int *)((longlong)local_c0 + 0xc) <= lVar9) {
            plVar23 = (longlong *)((ulonglong)local_88 & 0xffffffff);
LAB_018fafa9:
            plVar11 = plVar12;
            if (*(int *)((longlong)local_c0 + 0xc) == (int)local_40) goto LAB_018fafb9;
            goto LAB_018fafe0;
          }
          plVar11 = *(longlong **)(local_c0[2] + lVar9 * 8);
          uVar24 = (undefined7)((ulonglong)plVar23 >> 8);
          if (plVar19 == plVar11) {
            plVar11 = plVar19;
            if ((local_88._0_1_ == '\0') && (plVar19 != (longlong *)0x0)) {
              plVar23 = (longlong *)CONCAT71(uVar24,1);
              local_88 = (double)((ulonglong)local_88 & 0xffffffff00000000);
              FUN_00d50b00();
            }
            else {
              plVar23 = (longlong *)((ulonglong)local_88 & 0xffffffff);
            }
          }
          else {
            if (plVar11 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            plVar23 = (longlong *)CONCAT71(uVar24,1);
            if ((local_88._0_1_ != '\0') && (plVar19 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar19 = plVar11;
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_70 = (longlong *)FUN_014ff940();
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar12);
          if ((pvVar8 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            plVar12 = local_78;
          }
          local_a8 = (longlong *)FUN_014ff940();
          if ((local_70._4_4_ == 0) || ((ulonglong)local_a8 >> 0x20 == 0)) goto LAB_018fafa9;
          cVar3 = FUN_00e7c000();
          plVar11 = (longlong *)(ulonglong)((int)local_40 + 1);
          local_88 = (double)CONCAT44(local_88._4_4_,(int)plVar23);
        } while (cVar3 != '\0');
        if (*(int *)((longlong)local_c0 + 0xc) == (int)local_40) {
LAB_018fafb9:
          if (plVar19 != (longlong *)0x0) {
            if ((char)plVar23 == '\0') {
              plVar23 = (longlong *)0x0;
              local_48 = local_78;
              local_78 = (longlong *)0x0;
              local_5c = uVar5;
            }
            else {
              local_48 = local_78;
              local_78 = (longlong *)0x0;
              local_88 = (double)CONCAT44(local_88._4_4_,(int)plVar23);
              local_5c = uVar5;
              FUN_00d50b20();
              plVar23 = (longlong *)0x0;
            }
            goto LAB_018fa3f6;
          }
        }
LAB_018fafe0:
        local_48 = local_78;
        local_78 = plVar19;
        local_5c = uVar5;
      }
LAB_018fa3f6:
      pVar16 = (pthread_key_t)plVar11;
      plVar19 = local_80;
    } while (local_78 != (longlong *)0x0 || local_58 != (longlong *)0x0);
  }
  plVar23 = local_38;
  pvVar8 = _pthread_getspecific(pVar16);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_01524a30();
  if (cVar3 == '\0') {
    pvVar8 = _pthread_getspecific(0x2802558);
    plVar11 = plVar23;
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), plVar11 = local_38, lVar9 != 0)) {
      plVar11 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    local_58 = (longlong *)plVar11[7];
    pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
    pVar16 = (pthread_key_t)plVar11;
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar16 = (pthread_key_t)local_38;
    }
    dVar25 = (double)FUN_01524a20();
    local_c8 = (longlong *)FUN_00e7cd00((double)local_58 + dVar25);
  }
  else {
    pvVar8 = _pthread_getspecific(0x2802558);
    plVar11 = plVar23;
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), plVar11 = local_38, lVar9 != 0)) {
      plVar11 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    plVar12 = (longlong *)FUN_00e7cd00(plVar11[7]);
    pVar16 = (pthread_key_t)plVar11;
    pvVar8 = _pthread_getspecific(pVar16);
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar16 = (pthread_key_t)local_48;
    }
    local_a8 = (longlong *)FUN_014ff940();
    local_70 = plVar12;
    FUN_00e7b820();
    local_c8 = local_70;
  }
  pvVar8 = _pthread_getspecific(pVar16);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    pVar16 = (pthread_key_t)local_48;
  }
  uVar15 = FUN_014ff990();
  pvVar8 = _pthread_getspecific(pVar16);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    pVar16 = (pthread_key_t)local_48;
  }
  local_a8 = (longlong *)FUN_014ff940();
  local_70 = (longlong *)uVar15;
  FUN_00e7b820();
  local_d8 = (ulonglong)local_70;
  puVar21 = &local_c8;
  if (((ulonglong)local_70 >> 0x20 != 0) && (local_c8._4_4_ != 0)) {
    cVar3 = FUN_00e7c020();
    puVar21 = &local_c8;
    if (cVar3 != '\0') {
      puVar21 = &local_d8;
    }
  }
  plVar11 = (longlong *)*puVar21;
  pvVar8 = _pthread_getspecific(pVar16);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    pVar16 = (pthread_key_t)local_48;
  }
  uVar13 = FUN_014ff9a0();
  pvVar8 = _pthread_getspecific(pVar16);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    pVar16 = (pthread_key_t)local_48;
  }
  FUN_014ff990();
  local_70 = plVar11;
  FUN_00e7b970();
  plVar11 = local_70;
  pvVar8 = _pthread_getspecific(pVar16);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    pVar16 = (pthread_key_t)local_48;
  }
  FUN_014ff940();
  local_70 = plVar11;
  FUN_00e7bdc0();
  local_a8 = local_70;
  local_70 = (longlong *)uVar13;
  FUN_00e7b820();
  pvVar8 = _pthread_getspecific(pVar16);
  plVar11 = plVar23;
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), plVar11 = local_38, lVar9 != 0)) {
    plVar11 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
  }
  local_88 = (double)plVar11[8];
  local_58 = (longlong *)FUN_00e7c860();
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), plVar23 = local_38, lVar9 != 0)) {
    plVar23 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
  }
  local_58 = (longlong *)((double)local_58 - (double)plVar23[7]);
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar23);
  pVar16 = (pthread_key_t)plVar23;
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    pVar16 = (pthread_key_t)local_38;
  }
  local_78 = (longlong *)FUN_01524a10();
  pvVar8 = _pthread_getspecific(pVar16);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01907b60(local_88 + (double)local_58 * (double)local_78);
  plVar23 = local_a8;
  if (local_a0 == '\0') {
    if (local_a8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a0 = '\0';
  }
  local_70 = plVar23;
  local_68[0] = '\0';
  FUN_00d21140();
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar23 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = plVar19;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)local_5c != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  bVar20 = true;
  if (((char)local_4c != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_018fb5d8:
  if (local_90 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_b0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar20 && plVar19 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


