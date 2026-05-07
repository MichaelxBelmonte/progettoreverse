// Function: FUN_0137c3f0
// Address: 0137c3f0
// Size: 3527 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0137c7e7) */
/* WARNING: Removing unreachable block (ram,0x0137c7f0) */
/* WARNING: Removing unreachable block (ram,0x0137cf2c) */
/* WARNING: Removing unreachable block (ram,0x0137cf35) */
/* WARNING: Removing unreachable block (ram,0x0137c59d) */
/* WARNING: Removing unreachable block (ram,0x0137c5a6) */
/* WARNING: Removing unreachable block (ram,0x0137d0b5) */
/* WARNING: Removing unreachable block (ram,0x0137d0be) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0137c3f0(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  pthread_key_t pVar10;
  ulonglong uVar11;
  double dVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  longlong local_180;
  undefined1 local_178;
  undefined8 local_170;
  undefined1 local_168;
  ulonglong local_160;
  undefined1 local_158;
  longlong local_150;
  undefined1 local_148;
  ulonglong local_140;
  undefined1 local_138;
  ulonglong local_130;
  undefined1 local_128;
  undefined8 *local_120;
  undefined1 local_118;
  undefined1 local_110 [8];
  longlong local_108;
  char local_100;
  ulonglong local_f8;
  char local_f0;
  double local_e8;
  longlong local_e0;
  ulonglong local_d0;
  undefined1 local_c8;
  undefined8 *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined8 *local_98;
  char local_90;
  undefined8 local_88;
  undefined8 *local_80;
  ulonglong local_78;
  undefined8 *local_70;
  longlong *local_68;
  double local_60;
  undefined8 *local_58;
  ulonglong local_48;
  char local_40;
  ulonglong local_38;
  
  local_c0 = param_1;
  local_68 = param_2;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  local_70 = puVar4;
  FUN_00c92160();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar10 = 0x2572358;
  local_b0 = &DAT_02572358;
  *puVar4 = &DAT_02572358;
  local_b8 = DAT_02572370;
  (*DAT_02572370)();
  plVar14 = *(longlong **)(unaff_RSI + 0x38);
  local_80 = puVar4;
  pvVar5 = _pthread_getspecific(pVar10);
  if (pvVar5 != (void *)0x0) {
    plVar14 = *(longlong **)(unaff_RSI + 0x38);
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  local_e8 = (double)(**(code **)(*plVar14 + 0x370))();
  *(undefined1 *)(unaff_RSI + 0x1a9) = 1;
  local_180 = *local_68;
  uVar16 = *(uint *)(local_180 + 0xc);
  dVar12 = (double)(ulonglong)uVar16;
  if (0 < (int)uVar16) {
    do {
      uVar16 = uVar16 - 1;
      lVar6 = *(longlong *)(*(longlong *)(local_180 + 0x10) + (ulonglong)uVar16 * 8);
      uVar8 = uVar16;
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(uVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      local_60 = dVar12;
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(uVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_014bc070();
      if (cVar3 == '\0') {
LAB_0137c639:
        if ((local_48 == *(ulonglong *)(unaff_RSI + 0x118)) ||
           (local_48 == *(ulonglong *)(unaff_RSI + 0x128))) {
          bVar18 = true;
          if (cVar3 != '\0') goto joined_r0x0137c67e;
          goto LAB_0137c6a2;
        }
        bVar18 = local_48 == *(ulonglong *)(unaff_RSI + 0x120);
        if (cVar3 != '\0') goto joined_r0x0137c67e;
        if (local_48 == *(ulonglong *)(unaff_RSI + 0x120)) goto LAB_0137c6a2;
      }
      else {
        pvVar5 = _pthread_getspecific(uVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc340();
        if (local_108 != 0) goto LAB_0137c639;
        bVar18 = true;
joined_r0x0137c67e:
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if (bVar18) {
LAB_0137c6a2:
          FUN_00d23620();
        }
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      dVar12 = local_60;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((longlong)dVar12 < 2) goto LAB_0137c6e9;
      dVar12 = (double)((longlong)dVar12 - 1);
      local_180 = *local_68;
    } while( true );
  }
LAB_0137c6f0:
  local_178 = 0;
  local_170 = *local_c0;
  local_168 = 0;
  FUN_0136e4c0(&local_170,&local_180,1);
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_78 = local_48;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = local_b0;
  uVar21 = (*local_b8)();
  lVar6 = *(longlong *)(unaff_RSI + 0xd0);
  local_58 = puVar4;
  if (0 < *(int *)(lVar6 + 0xc)) {
    lVar13 = 0;
    do {
      local_48 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + lVar13 * 8);
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\0';
      uVar21 = FUN_00d21140();
      if (local_48 != 0) {
        uVar21 = FUN_00d50b20();
      }
      lVar13 = lVar13 + 1;
      lVar6 = *(longlong *)(unaff_RSI + 0xd0);
    } while (lVar13 < *(int *)(lVar6 + 0xc));
  }
  FUN_00d242c0(uVar21,0);
  uVar11 = (ulonglong)*(uint *)((longlong)local_58 + 0xc);
  if (0 < (int)*(uint *)((longlong)local_58 + 0xc)) {
    iVar15 = 0;
    do {
      iVar9 = (int)uVar11;
      lVar6 = *(longlong *)(local_58[2] + (longlong)iVar15 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
        iVar9 = *(int *)((longlong)local_58 + 0xc);
      }
      pVar10 = iVar9 - 1;
      bVar2 = 1;
      if ((iVar15 < (int)pVar10) &&
         (lVar13 = *(longlong *)(local_58[2] + 8 + (longlong)iVar15 * 8), lVar13 != 0)) {
        FUN_00d50b00();
        bVar2 = 0;
      }
      else {
        lVar13 = 0;
      }
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = (double)FUN_014bacf0();
      if (lVar13 == 0) {
        plVar14 = *(longlong **)(unaff_RSI + 0x38);
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          plVar14 = *(longlong **)(unaff_RSI + 0x38);
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
        }
        dVar12 = (double)(**(code **)(*plVar14 + 0x398))();
        if (dVar12 - local_60 < DAT_0241b6a8) {
LAB_0137ca43:
          FUN_00d23620();
          goto LAB_0137ca5e;
        }
      }
      else {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_014bacf0();
        if (dVar12 - local_60 < DAT_0241b6a8) {
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar19 = FUN_014bae60();
          local_60 = (double)CONCAT44(local_60._4_4_,uVar19);
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar20 = (float)FUN_014bae60();
          if (fVar20 < local_60._0_4_) goto LAB_0137ca43;
          FUN_00d23620();
LAB_0137ca5e:
          iVar15 = iVar15 + -1;
        }
        if (!(bool)(bVar2 | lVar13 == 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      iVar15 = iVar15 + 1;
      uVar11 = (ulonglong)*(uint *)((longlong)local_58 + 0xc);
    } while (iVar15 < (int)*(uint *)((longlong)local_58 + 0xc));
  }
  if (*(int *)(local_78 + 0xc) < 1) {
    uVar21 = 0;
    local_38 = 0;
  }
  else {
    lVar6 = 0;
    local_38 = 0;
    uVar21 = 0;
    do {
      uVar1 = *(ulonglong *)(*(longlong *)(local_78 + 0x10) + lVar6 * 8);
      uVar11 = local_78;
      if (uVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific((pthread_key_t)uVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfdd0();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        local_158 = 0;
        uVar11 = 0;
        local_160 = uVar1;
        uVar22 = FUN_0135d2e0(0,&local_160);
        local_48 = local_f8;
        if (local_f0 == '\0') {
          if (local_f8 != 0) {
            uVar22 = FUN_00d50b00();
          }
        }
        else {
          local_f0 = '\0';
        }
        local_40 = '\0';
        local_c8 = 0;
        local_d0 = uVar1;
        FUN_01346520(uVar22,1);
        if (local_48 != 0) {
          FUN_00d50b20();
        }
      }
      uVar17 = (ulonglong)*(uint *)((longlong)local_58 + 0xc);
      local_e0 = lVar6;
      do {
        pVar10 = (pthread_key_t)uVar11;
        if ((int)uVar17 < 1) break;
        lVar6 = *(longlong *)(local_58[2] + -8 + uVar17 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = (double)FUN_014bacf0();
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_013dea30();
        if (local_60 < dVar12 + DAT_0241b6b0) {
          pvVar5 = _pthread_getspecific((pthread_key_t)uVar11);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar12 = (double)FUN_013df0a0();
          if (dVar12 + DAT_0241b6a8 <= local_60) {
            local_68 = (longlong *)(local_60 + _DAT_0240d400);
            pvVar5 = _pthread_getspecific((pthread_key_t)uVar11);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar12 = (double)FUN_013dea30();
            local_148 = 0;
            local_150 = lVar6;
            cVar3 = FUN_013676b0(local_68,dVar12 - (double)local_68);
            if (cVar3 != '\0') {
              local_d0 = local_d0 & 0xffffffffffffff00;
              local_138 = 0;
              local_140 = uVar1;
              FUN_0135f200((longlong)((double)local_68 * local_e8),&local_140,local_110,&local_d0);
              if (local_48 == local_38) {
                uVar11 = local_38;
                if (((char)uVar21 == '\0') && (local_48 != 0)) {
                  uVar21 = 1;
                  if (local_40 == '\0') {
                    FUN_00d50b00();
                  }
                }
                else if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_88 = uVar21;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                  uVar21 = 1;
                  uVar11 = local_48;
                  if ((char)local_88 != '\0') {
                    if (local_38 == 0) goto LAB_0137ce5e;
                    FUN_00d50b20();
                    uVar11 = local_48;
                  }
                }
                else if (((char)uVar21 == '\0') || (local_38 == 0)) {
LAB_0137ce5e:
                  uVar21 = 1;
                  uVar11 = local_48;
                }
                else {
                  FUN_00d50b20();
                  uVar21 = 1;
                  uVar11 = local_48;
                }
              }
              local_38 = uVar11;
              uVar11 = local_38;
              if (local_38 != 0) {
                local_128 = 0;
                local_130 = local_38;
                FUN_01326e80();
                local_a8 = local_70;
                local_a0 = '\0';
                FUN_015b4ee0();
                if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                local_40 = '\0';
                FUN_00d21140();
                local_48 = local_38;
              }
            }
          }
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_013de8d0();
        local_68 = (longlong *)(dVar12 + DAT_0241b6a8);
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        pVar10 = (pthread_key_t)uVar11;
        uVar17 = uVar17 - 1;
      } while ((double)local_68 <= local_60);
      local_98 = local_70;
      local_90 = '\0';
      pvVar5 = _pthread_getspecific(pVar10);
      lVar6 = local_e0;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de650();
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de790();
      FUN_00e7b4e0();
      FUN_015b4ee0();
      if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_40 = '\0';
      FUN_00d235a0();
      if (uVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      uVar11 = local_78;
      local_48 = uVar1;
    } while (lVar6 < *(int *)(local_78 + 0xc));
  }
  *(undefined1 *)(unaff_RSI + 0x1a9) = 0;
  if (((*(longlong *)(unaff_RSI + 0x1f8) == 0) && (*(longlong *)(unaff_RSI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RSI + 0x148) != 0)) {
    pvVar5 = _pthread_getspecific((pthread_key_t)uVar11);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar15 = FUN_0141bab0();
    uVar22 = extraout_XMM0_Qa_00;
    if (iVar15 != 3) goto LAB_0137d109;
  }
  else {
LAB_0137d109:
    cVar3 = FUN_01334f30();
    uVar22 = extraout_XMM0_Qa;
    if (cVar3 == '\0') goto LAB_0137d147;
  }
  if (0xe < *(int *)(local_70 + 3) + 7U) {
    local_120 = local_70;
    local_118 = 0;
    FUN_01353f80(uVar22,&local_120);
  }
LAB_0137d147:
  FUN_00d216c0();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = local_b0;
  (*local_b8)();
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_58 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (((char)uVar21 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
LAB_0137c6e9:
  local_180 = *local_68;
  goto LAB_0137c6f0;
}


