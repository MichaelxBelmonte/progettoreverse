// Function: FUN_01a8cc40
// Address: 01a8cc40
// Size: 6835 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01a8cdbe) */
/* WARNING: Removing unreachable block (ram,0x01a8cdca) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_01a8cc40(float param_1,float param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong **pplVar9;
  void *pvVar10;
  longlong lVar11;
  ulonglong uVar12;
  int extraout_var;
  longlong *plVar13;
  pthread_key_t pVar14;
  undefined8 in_RCX;
  undefined1 *puVar15;
  uint uVar16;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  ulonglong local_1a0;
  longlong *local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  undefined4 local_d4;
  double local_c8;
  int local_9c;
  undefined1 local_98 [8];
  undefined8 *local_90;
  double local_88;
  undefined4 local_80;
  uint local_7c;
  uint local_78;
  float local_74;
  double local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  undefined8 local_48;
  char local_40 [8];
  longlong *local_38;
  
  if ((1 < *(int *)((longlong)unaff_RSI + 0x3c)) &&
     (*(int *)((longlong)unaff_RSI + 0x3c) == (int)unaff_RSI[7])) {
    FUN_01a8c340(in_RCX,param_2);
    return unaff_RDI;
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*DAT_02572370)();
  local_38 = (longlong *)unaff_RSI[6];
  if (local_38 == (longlong *)0x0) {
    *unaff_RDI = puVar8;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  local_90 = puVar8;
  FUN_00d50b00();
  local_88 = (double)(**(code **)(*unaff_RSI + 0x3c8))(param_1 + DAT_02394210);
  param_2 = param_2 + DAT_023908d8;
  uVar21 = (**(code **)(*unaff_RSI + 0x3c8))();
  local_e8 = 0;
  local_f0 = unaff_RSI[9];
  if (local_f0 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  (**(code **)(*unaff_RSI + 0x3a8))(local_88,(int)uVar21);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  puVar8 = local_90;
  while (*(int *)((longlong)puVar8 + 0xc) != 0) {
    FUN_00d23340();
    plVar13 = local_48;
    local_58 = (longlong *)CONCAT71(local_58._1_7_,local_40[0]);
    pplVar9 = (longlong **)local_40;
    if (local_40[0] == '\0') {
      pplVar9 = &local_58;
    }
    *(char *)pplVar9 = '\0';
    if ((local_40[0] != '\0') && (plVar13 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar7 = (**(code **)(*plVar13 + 0x380))();
    if (((char)local_58 != '\0') && (plVar13 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    puVar8 = local_90;
    if (iVar7 == 0) {
      iVar7 = *(int *)((longlong)local_90 + 0xc);
      goto LAB_01a8ce8a;
    }
    FUN_00d23740();
  }
  iVar7 = 0;
LAB_01a8ce8a:
  local_80 = 0xffffffff;
  local_98._0_4_ = 0xffffffff;
  if (iVar7 == 0) {
    pvVar10 = _pthread_getspecific(0x2802558);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123fd00();
    pVar14 = (pthread_key_t)&local_80;
    local_68 = (longlong *)FUN_016cb9d0(local_88,1);
    pvVar10 = _pthread_getspecific(pVar14);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar15 = local_98;
    local_68 = (longlong *)FUN_016cac90(puVar15,1);
    pVar14 = (pthread_key_t)puVar15;
  }
  else {
    pvVar10 = _pthread_getspecific(0x2802558);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d23340();
    plVar13 = local_48;
    pplVar9 = (longlong **)local_40;
    if (local_40[0] == '\0') {
      pplVar9 = &local_58;
    }
    local_58 = (longlong *)CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)pplVar9 = '\0';
    if ((local_40[0] != '\0') && (plVar13 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_88 = (double)(**(code **)(*plVar13 + 0x370))();
    FUN_0123fd00();
    pVar14 = (pthread_key_t)&local_80;
    local_68 = (longlong *)FUN_016cb9d0(local_88,4);
    if ((char)local_58 != '\0') {
      FUN_00d50b20();
    }
    FUN_00d23740();
  }
  pvVar10 = _pthread_getspecific(pVar14);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar15 = local_98;
  local_9c = FUN_016c09d0(puVar15,0);
  local_98._4_4_ = local_80;
  pVar14 = (pthread_key_t)puVar15;
  pvVar10 = _pthread_getspecific(pVar14);
  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    pVar14 = (pthread_key_t)local_38;
  }
  FUN_017049c0();
  pvVar10 = _pthread_getspecific(pVar14);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar15 = local_98 + 4;
  FUN_018fea90(puVar15,local_68);
  plVar13 = local_48;
  pVar14 = (pthread_key_t)puVar15;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar13 == (longlong *)0x0) {
    pvVar10 = _pthread_getspecific(pVar14);
    if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      pVar14 = (pthread_key_t)local_38;
    }
    FUN_017049c0();
    pvVar10 = _pthread_getspecific(pVar14);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    plVar19 = plVar13;
    if (local_48 != (longlong *)0x0) {
      plVar19 = local_48;
      if (local_40[0] == '\0') {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar10 = _pthread_getspecific(pVar14);
    if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      pVar14 = (pthread_key_t)local_38;
    }
    pvVar10 = _pthread_getspecific(pVar14);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar22 = FUN_019079b0();
    uVar12 = FUN_01705d00(uVar22,1);
    if (uVar12 >> 0x20 == 0) {
      pvVar10 = _pthread_getspecific(pVar14);
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        pVar14 = (pthread_key_t)local_38;
      }
      FUN_017049c0();
      pvVar10 = _pthread_getspecific(pVar14);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019012b0();
      plVar19 = local_48;
      plVar18 = plVar13;
      if (plVar13 == local_48) {
joined_r0x01a8d433:
        plVar19 = plVar18;
        if ((local_40[0] != '\0') && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar18 = plVar19;
          plVar13 = local_48;
          goto joined_r0x01a8d433;
        }
        FUN_00d50b20();
        local_40[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar10 = _pthread_getspecific(pVar14);
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        pVar14 = (pthread_key_t)local_38;
      }
      FUN_017049c0();
      pvVar10 = _pthread_getspecific(pVar14);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar15 = local_98 + 4;
      FUN_018fea90(puVar15,uVar12);
      plVar19 = local_48;
      pVar14 = (pthread_key_t)puVar15;
      plVar18 = plVar13;
      if (plVar13 == local_48) {
joined_r0x01a8d425:
        plVar19 = plVar18;
        if ((local_40[0] != '\0') && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar18 = plVar19;
          plVar13 = local_48;
          goto joined_r0x01a8d425;
        }
        FUN_00d50b20();
        local_40[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  pvVar10 = _pthread_getspecific(pVar14);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar15 = local_1c0;
  FUN_016ca840(puVar15,local_68,&local_100,local_98);
  pVar14 = (pthread_key_t)puVar15;
  local_60 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_1a8 = (double)(**(code **)(*(longlong *)unaff_RSI[2] + 0x398))();
  uVar16 = *(uint *)((longlong)unaff_RSI + 0x3c);
  if ((int)unaff_RSI[7] == 3) {
    if (uVar16 != 3) {
      uVar16 = (int)(uVar16 * 3) / 2;
      goto joined_r0x01a8d5d3;
    }
    local_1a0 = 3;
  }
  else {
joined_r0x01a8d5d3:
    local_1a0 = (ulonglong)uVar16;
    if (uVar16 == 0) {
      local_1b8 = (longlong *)FUN_00e7bcc0();
      local_1a0 = 0;
      pVar14 = 1;
      local_d4 = 1;
      goto LAB_01a8d622;
    }
  }
  local_1b8 = (longlong *)FUN_00e7bcc0();
  local_d4 = 0;
LAB_01a8d622:
  pvVar10 = _pthread_getspecific(pVar14);
  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    pVar14 = (pthread_key_t)local_38;
  }
  pvVar10 = _pthread_getspecific(pVar14);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123fd00();
  FUN_016cb9d0(uVar21,2);
  plVar13 = (longlong *)0x0;
  local_1b0 = FUN_016cac90(0,2);
  if (local_68._4_4_ == 0) {
    bVar3 = true;
LAB_01a8e716:
    puVar8 = local_90;
    if ((*(int *)((longlong)local_90 + 0xc) != 0) &&
       (puVar1 = (undefined8 *)unaff_RSI[9], puVar1 != local_90)) {
      FUN_00d50b00();
      unaff_RSI[9] = (longlong)puVar8;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    *unaff_RDI = puVar8;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((bVar3) && (plVar19 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
  local_78 = (uint)CONCAT71((int7)((ulonglong)local_1b0 >> 8),1);
  local_c8 = 0.0;
  bVar3 = true;
LAB_01a8d71c:
  if ((local_1b0._4_4_ != 0) && (cVar5 = FUN_00e7c020(), cVar5 != '\0')) {
    if ((local_100._4_4_ == 0) || ((local_68._4_4_ == 0 || (cVar5 = FUN_00e7c020(), cVar5 != '\0')))
       ) goto LAB_01a8d835;
    pvVar10 = _pthread_getspecific((pthread_key_t)plVar13);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar13 = &local_100;
    uVar21 = FUN_016ca9d0(plVar13,local_1c0,local_98);
    plVar18 = local_48;
    if (local_48 == local_60) {
LAB_01a8d80f:
      if (local_40[0] != '\0') {
LAB_01a8d815:
        if (local_48 != (longlong *)0x0) {
          uVar21 = FUN_00d50b20();
        }
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          uVar21 = FUN_00d50b00();
        }
        if (local_60 != (longlong *)0x0) {
          uVar21 = FUN_00d50b20();
          local_60 = plVar18;
          goto LAB_01a8d80f;
        }
        local_60 = plVar18;
        if (local_40[0] == '\0') goto LAB_01a8d830;
        goto LAB_01a8d815;
      }
      if (local_60 == (longlong *)0x0) {
        local_60 = local_48;
      }
      else {
        uVar21 = FUN_00d50b20();
        local_60 = plVar18;
      }
    }
LAB_01a8d830:
    local_78 = (uint)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
LAB_01a8d835:
    local_58 = (longlong *)FUN_0123fff0();
    local_48 = local_68;
    FUN_00e7b820();
    local_f8 = local_48;
    local_74 = 0.0;
    local_70 = local_c8;
    do {
      pVar14 = (pthread_key_t)plVar13;
      if (plVar19 == (longlong *)0x0) {
        if ((local_c8 != DAT_02390448) || (dVar23 = local_70, NAN(local_c8) || NAN(DAT_02390448)))
        goto LAB_01a8df90;
      }
      else {
        pvVar10 = _pthread_getspecific(pVar14);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48 = (longlong *)FUN_019079b0();
        if ((((local_f8._4_4_ == 0) || ((ulonglong)local_48 >> 0x20 == 0)) ||
            (cVar5 = FUN_00e7c020(), cVar5 == '\0')) &&
           ((local_c8 != DAT_02390448 || (NAN(local_c8) || NAN(DAT_02390448))))) goto LAB_01a8df90;
        pvVar10 = _pthread_getspecific(pVar14);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48 = (longlong *)FUN_019079b0();
        dVar23 = local_70;
        if ((local_68._4_4_ != 0) && ((ulonglong)local_48 >> 0x20 != 0)) {
          cVar5 = FUN_00e7c000();
          dVar23 = 0.0;
          if (cVar5 == '\0') {
            dVar23 = local_70;
          }
        }
      }
      local_70 = dVar23;
      pvVar10 = _pthread_getspecific(pVar14);
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        pVar14 = (pthread_key_t)local_38;
      }
      FUN_017049c0();
      pvVar10 = _pthread_getspecific(pVar14);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_178 = '\0';
      plVar13 = (longlong *)(local_98 + 4);
      local_180 = plVar19;
      FUN_01900ec0(plVar13,&local_180);
      plVar18 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 == (longlong *)0x0) {
        if (plVar19 != (longlong *)0x0) {
          if (bVar3) {
            FUN_00d50b20();
          }
          bVar3 = false;
        }
        local_c8 = (double)(~-(ulonglong)(local_c8 == DAT_02390448) & (ulonglong)local_c8 |
                           -(ulonglong)(local_c8 == DAT_02390448) & DAT_02395720);
        local_74 = (float)((uint)local_74 & 0xff);
        if (local_c8 <= local_70) {
          local_74 = 1.4013e-45;
        }
        bVar2 = local_70 < local_c8;
        dVar23 = local_c8;
        if (local_c8 <= local_70) {
          dVar23 = local_70;
        }
        plVar19 = (longlong *)0x0;
      }
      else {
        local_170 = plVar18;
        local_168 = '\0';
        local_158 = '\0';
        local_160 = plVar19;
        dVar23 = (double)FUN_019079d0();
        if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar10 = _pthread_getspecific((pthread_key_t)plVar13);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          plVar13 = local_38;
        }
        pvVar10 = _pthread_getspecific((pthread_key_t)plVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar21 = FUN_019079b0();
        FUN_017048a0(uVar21,0);
LAB_01a8dba5:
        local_c8 = dVar23;
        pVar14 = (pthread_key_t)plVar13;
        if (plVar19 == plVar18) {
          if (!bVar3) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          FUN_00d50b00();
          if ((bVar3) && (plVar19 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar3 = true;
            plVar19 = plVar18;
          }
          else {
            bVar3 = true;
            plVar19 = plVar18;
          }
        }
        if (extraout_var != 0) {
          pvVar10 = _pthread_getspecific(pVar14);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_48 = (longlong *)FUN_019079b0();
          if ((((ulonglong)local_48 >> 0x20 != 0) && (extraout_var != 0)) &&
             (cVar5 = FUN_00e7c020(), cVar5 == '\0')) goto LAB_01a8df36;
        }
        pvVar10 = _pthread_getspecific(pVar14);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          pVar14 = (pthread_key_t)local_38;
        }
        FUN_017049c0();
        pvVar10 = _pthread_getspecific(pVar14);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_148 = '\0';
        plVar13 = (longlong *)(local_98 + 4);
        local_150 = plVar19;
        FUN_01900ec0(plVar13,&local_150);
        plVar17 = local_48;
        plVar4 = plVar18;
        if (local_48 == plVar18) {
joined_r0x01a8dd67:
          plVar17 = plVar4;
          if ((local_40[0] != '\0') && (plVar18 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_40[0] == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            plVar4 = plVar17;
            plVar18 = local_48;
            goto joined_r0x01a8dd67;
          }
          FUN_00d50b20();
          local_40[0] = '\0';
        }
        if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar17 != (longlong *)0x0) {
          local_138 = '\0';
          local_128 = '\0';
          local_140 = plVar17;
          local_130 = plVar19;
          local_88 = (double)FUN_019079d0();
          if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar18 = plVar17;
          dVar23 = local_88;
          if (local_88 <= local_c8) {
            dVar23 = local_c8;
          }
          goto LAB_01a8dba5;
        }
        if (plVar19 != (longlong *)0x0) {
          FUN_00d50b20();
          bVar3 = false;
        }
        plVar19 = (longlong *)0x0;
        plVar18 = (longlong *)0x0;
LAB_01a8df36:
        bVar2 = local_70 < local_c8;
        local_74 = (float)((uint)local_74 & 0xff);
        dVar23 = local_c8;
        if (local_c8 <= local_70) {
          local_74 = 1.4013e-45;
          dVar23 = local_70;
        }
      }
      local_70 = dVar23;
      plVar13 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
      local_78 = local_78 & 0xff;
      if (bVar2) {
        local_78 = 1;
      }
      if (plVar18 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    } while( true );
  }
  goto LAB_01a8e716;
LAB_01a8df90:
  if ((local_78 & 1) == 0) {
    local_78 = (uint)local_74 & 0xffffff01;
  }
  else {
    local_48 = (longlong *)FUN_0123fff0();
    dVar23 = (double)FUN_00e7c860();
    local_88 = ((dVar23 * DAT_023b4df8) / local_70) * local_1a8;
    local_7c = (uint)(DAT_0241c3f0 < local_88);
    local_e0 = (longlong *)FUN_0123fff0();
    local_78 = 0;
    if ((DAT_0241c3f0 < local_88) && ((int)local_1a0 != 1)) {
      plVar13 = local_1b8;
      if ((char)local_d4 != '\0') {
        plVar13 = (longlong *)FUN_0123ffd0();
      }
      local_e0 = plVar13;
      local_48 = (longlong *)FUN_0123fff0();
      FUN_00e7bdc0();
      plVar13 = local_48;
      if ((int)((ulonglong)local_48 >> 0x20) == 1) {
        local_7c = (uint)local_48;
        local_58 = local_e0;
      }
      else {
        local_7c = FUN_00e7cea0();
        local_48 = plVar13;
        FUN_00e7c280();
        local_58 = local_48;
      }
      dVar23 = (double)FUN_00e7c860();
      if (((dVar23 * DAT_023b4df8) / local_70) * local_1a8 <= DAT_0241c3f0) {
        local_7c = 1;
        local_e0 = (longlong *)FUN_0123fff0();
        if ((char)local_d4 == '\0') {
          local_48 = (longlong *)FUN_0123ffd0();
          FUN_00e7bdc0();
          uVar12 = (ulonglong)local_48;
          iVar7 = local_48._4_4_;
          local_48 = (longlong *)CONCAT44(local_48._4_4_,1);
          if ((uVar12 >> 0x20 != 0) && (bVar6 = FUN_00e7c650(), (bVar6 & iVar7 == 1) == 1)) {
            local_48 = (longlong *)FUN_0123ffd0();
            dVar23 = (double)FUN_00e7c860();
            if (DAT_0241c3f0 < (dVar23 * DAT_023b4df8) / local_70) {
              local_7c = FUN_0123ffa0();
              local_e0 = (longlong *)FUN_0123ffd0();
            }
          }
        }
      }
      local_78 = 0;
    }
  }
  if (local_7c == 0) {
    plVar13 = (longlong *)local_98;
    cVar5 = FUN_01a8bff0(plVar13,&local_80);
    if (cVar5 != '\0') {
      pvVar10 = _pthread_getspecific((pthread_key_t)plVar13);
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        plVar13 = local_38;
      }
      local_88 = (double)FUN_016c98e0();
      fVar20 = (float)(**(code **)(*unaff_RSI + 0x3c0))();
      local_70 = (double)CONCAT44(local_70._4_4_,fVar20 + DAT_0239011c);
      FUN_018c3210();
      (**(code **)(*local_58 + 0x378))((float)local_9c);
      plVar18 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      auVar25 = roundss(ZEXT416(local_70._0_4_),ZEXT416(local_70._0_4_),9);
      local_110 = plVar18;
      local_108 = '\0';
      FUN_01a8b9f0(auVar25._0_8_,SUB84(local_88,0));
      plVar17 = local_58;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_48 = plVar17;
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar17 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    plVar13 = local_68;
    if (0 < (int)local_7c) {
      local_74 = (float)local_9c;
      iVar7 = 0;
      do {
        pvVar10 = _pthread_getspecific((pthread_key_t)plVar13);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          plVar13 = local_38;
        }
        local_88 = (double)FUN_016c98e0();
        auVar25._0_8_ = (**(code **)(*unaff_RSI + 0x3c0))();
        auVar25._8_8_ = extraout_XMM0_Qb;
        auVar24._4_12_ = auVar25._4_12_;
        auVar24._0_4_ = (float)auVar25._0_8_ + DAT_0239011c;
        auVar25 = roundss(auVar24,auVar24,9);
        local_70 = (double)CONCAT44(local_70._4_4_,auVar25._0_4_);
        if (param_2 <= auVar25._0_4_) break;
        if (iVar7 == 0) {
          plVar13 = (longlong *)local_98;
          cVar5 = FUN_01a8bff0(plVar13,&local_80);
          if (cVar5 == '\0') {
            FUN_01a8b960();
            plVar18 = local_58;
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_48 = plVar18;
            local_40[0] = '\0';
            FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar18 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_018c3210();
            (**(code **)(*local_58 + 0x378))();
            plVar18 = local_48;
            if (local_40[0] == '\0') {
              if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                 (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_120 = plVar18;
            local_118 = '\0';
            FUN_01a8b9f0();
            plVar17 = local_58;
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_48 = plVar17;
            local_40[0] = '\0';
            FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar17 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar18 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_01a8b960();
          plVar18 = local_58;
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_48 = plVar18;
          local_40[0] = '\0';
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar18 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00e7b820();
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)local_7c);
    }
  }
  local_68 = local_f8;
  local_9c = local_9c + 1;
  if ((ulonglong)local_f8 >> 0x20 == 0) goto LAB_01a8e716;
  goto LAB_01a8d71c;
}


