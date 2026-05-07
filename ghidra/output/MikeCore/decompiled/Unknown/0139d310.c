// Function: FUN_0139d310
// Address: 0139d310
// Size: 15825 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013a0512) */
/* WARNING: Removing unreachable block (ram,0x013a051e) */
/* WARNING: Removing unreachable block (ram,0x013a01bc) */
/* WARNING: Removing unreachable block (ram,0x013a01c8) */
/* WARNING: Removing unreachable block (ram,0x013a02bc) */
/* WARNING: Removing unreachable block (ram,0x013a02c8) */
/* WARNING: Removing unreachable block (ram,0x0139f319) */
/* WARNING: Removing unreachable block (ram,0x0139f329) */
/* WARNING: Removing unreachable block (ram,0x0139d555) */
/* WARNING: Removing unreachable block (ram,0x0139d565) */
/* WARNING: Removing unreachable block (ram,0x0139daa5) */
/* WARNING: Removing unreachable block (ram,0x0139dab5) */
/* WARNING: Removing unreachable block (ram,0x013a0fbf) */
/* WARNING: Removing unreachable block (ram,0x013a0fcb) */
/* WARNING: Removing unreachable block (ram,0x013a1208) */
/* WARNING: Removing unreachable block (ram,0x013a1218) */
/* WARNING: Removing unreachable block (ram,0x0139fba0) */
/* WARNING: Removing unreachable block (ram,0x0139fbac) */
/* WARNING: Removing unreachable block (ram,0x0139db4f) */
/* WARNING: Removing unreachable block (ram,0x0139db5b) */
/* WARNING: Removing unreachable block (ram,0x0139fa17) */
/* WARNING: Removing unreachable block (ram,0x0139fa23) */
/* WARNING: Removing unreachable block (ram,0x013a1006) */
/* WARNING: Removing unreachable block (ram,0x013a1016) */
/* WARNING: Removing unreachable block (ram,0x0139dc7a) */
/* WARNING: Removing unreachable block (ram,0x0139dcb0) */
/* WARNING: Removing unreachable block (ram,0x0139dc7c) */
/* WARNING: Removing unreachable block (ram,0x0139dcb2) */
/* WARNING: Removing unreachable block (ram,0x0139ff63) */
/* WARNING: Removing unreachable block (ram,0x0139ff6f) */
/* WARNING: Removing unreachable block (ram,0x013a023c) */
/* WARNING: Removing unreachable block (ram,0x013a0248) */
/* WARNING: Removing unreachable block (ram,0x013a058a) */
/* WARNING: Removing unreachable block (ram,0x013a0596) */
/* WARNING: Removing unreachable block (ram,0x013a05ff) */
/* WARNING: Removing unreachable block (ram,0x013a060b) */
/* WARNING: Removing unreachable block (ram,0x013a0684) */
/* WARNING: Removing unreachable block (ram,0x013a0690) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0139d310(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  code *pcVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined7 uVar26;
  longlong lVar15;
  void *pvVar16;
  longlong lVar17;
  void *pvVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong lVar25;
  pthread_key_t pVar27;
  uint uVar28;
  uint uVar29;
  longlong *plVar30;
  undefined7 uVar31;
  uint uVar32;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  char cVar33;
  int iVar34;
  int iVar35;
  char cVar36;
  char cVar37;
  longlong *plVar38;
  ulonglong uVar39;
  int iVar40;
  undefined8 *puVar41;
  bool bVar42;
  undefined4 uVar43;
  double dVar44;
  double dVar45;
  float fVar46;
  float fVar47;
  float local_19c;
  longlong local_178;
  char local_170;
  undefined4 local_164;
  ulonglong local_138;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  char local_108;
  int local_f8;
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined1 local_a8 [16];
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_70;
  uint local_68;
  uint local_64;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  uint local_3c;
  longlong *local_38;
  
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar41 = (undefined8 *)&DAT_02572358;
  *puVar11 = &DAT_02572358;
  pcVar9 = DAT_02572370;
  (*DAT_02572370)();
  lVar2 = *(longlong *)(unaff_RSI + 0x1a0);
  if (lVar2 == 0) {
    FUN_0132d640();
    lVar2 = *(longlong *)(unaff_RSI + 0x1a0);
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  dVar45 = *(double *)(lVar2 + 0x38);
  uVar1 = *(uint *)(lVar2 + 0x30);
  lVar12 = FUN_00e83010();
  if (*(float *)(unaff_RSI + 0x84) <= 0.0) {
    local_19c = DAT_02390124;
  }
  else {
    local_19c = DAT_02390124 / *(float *)(unaff_RSI + 0x84);
  }
  puVar13 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &DAT_02572358;
  (*pcVar9)();
  iVar34 = 0;
  if (*(int *)(unaff_RSI + 0x88) < 1) {
    local_138 = 0;
    local_130 = (longlong *)0x0;
  }
  else {
    local_130 = (longlong *)0x0;
    local_138 = 0;
    do {
      local_138 = local_138 & 0xffffffff;
      local_110 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_110 = (longlong)&DAT_02572358;
      uVar14 = (*pcVar9)();
      uVar26 = (undefined7)((ulonglong)uVar14 >> 8);
      cVar36 = (char)local_138;
      if (local_110 == local_130) {
        local_110 = local_130;
        if (cVar36 == '\0') {
          local_138 = CONCAT71(uVar26,1);
        }
        else {
          FUN_00d50b20();
        }
      }
      else {
        local_138 = CONCAT71(uVar26,1);
        if ((cVar36 != '\0') && (local_130 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_108 = '\0';
      param_1 = local_110;
      FUN_00d21140();
      iVar34 = iVar34 + 1;
      local_130 = local_110;
    } while (iVar34 < *(int *)(unaff_RSI + 0x88));
  }
  lVar15 = *(longlong *)(unaff_RSI + 0x40);
  if (*(int *)(lVar15 + 0xc) < 1) {
    bVar8 = false;
    local_118 = (longlong *)0x0;
    cVar36 = '\0';
    local_120 = (longlong *)0x0;
    local_50 = (longlong *)0x0;
    local_60 = (longlong *)0x0;
    local_3c = 0;
    local_38 = (longlong *)0x0;
  }
  else {
    puVar41 = (undefined8 *)0x0;
    local_38 = (longlong *)0x0;
    local_3c = 0;
    local_60 = (longlong *)0x0;
    local_50 = (longlong *)0x0;
    local_120 = (longlong *)0x0;
    cVar33 = '\0';
    cVar36 = '\0';
    local_118 = (longlong *)0x0;
    param_1 = (longlong *)0x0;
    bVar8 = false;
    do {
      pVar27 = (pthread_key_t)param_1;
      lVar15 = *(longlong *)(lVar15 + 0x10);
      plVar38 = *(longlong **)(lVar15 + (longlong)puVar41 * 8);
      if (local_60 == plVar38) {
        if (((char)local_50 == '\0') && (local_60 != (longlong *)0x0)) {
          local_50 = (longlong *)CONCAT71((int7)((ulonglong)lVar15 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar38 != (longlong *)0x0) {
          lVar15 = FUN_00d50b00();
        }
        if (((char)local_50 == '\0') || (local_60 == (longlong *)0x0)) {
          local_50 = (longlong *)CONCAT71((int7)((ulonglong)lVar15 >> 8),1);
          local_60 = plVar38;
        }
        else {
          uVar14 = FUN_00d50b20();
          local_50 = (longlong *)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
          local_60 = plVar38;
        }
      }
      pvVar16 = _pthread_getspecific(pVar27);
      if (pvVar16 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar14 = FUN_013de560();
      uVar26 = (undefined7)((ulonglong)uVar14 >> 8);
      cVar37 = (char)local_3c;
      if (local_110 == local_38) {
        if ((cVar37 == '\0') && (local_110 != (longlong *)0x0)) {
          local_3c = (uint)CONCAT71(uVar26,1);
          if (local_108 != '\0') goto LAB_0139d830;
          local_3c = (uint)CONCAT71(uVar26,1);
          FUN_00d50b00();
        }
joined_r0x0139d820:
        if (local_108 == '\0') {
LAB_0139d830:
          if (*(longlong **)(unaff_RSI + 0x118) != local_38) goto LAB_0139d7ac;
        }
        else {
          if (local_110 != (longlong *)0x0) {
            FUN_00d50b20();
            goto LAB_0139d797;
          }
          if (*(longlong **)(unaff_RSI + 0x118) != local_38) goto LAB_0139d7ac;
        }
      }
      else {
        if (local_108 == '\0') {
          if (local_110 != (longlong *)0x0) {
            uVar14 = FUN_00d50b00();
          }
          local_3c = (uint)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
          if (cVar37 == '\0') {
            local_38 = local_110;
          }
          else {
            bVar42 = local_38 != (longlong *)0x0;
            local_38 = local_110;
            if (bVar42) {
              FUN_00d50b20();
              local_38 = local_110;
              goto joined_r0x0139d820;
            }
          }
          goto LAB_0139d830;
        }
        local_3c = (uint)CONCAT71(uVar26,1);
        if ((cVar37 == '\0') || (local_38 == (longlong *)0x0)) {
          local_38 = local_110;
          if (*(longlong **)(unaff_RSI + 0x118) == local_110) goto LAB_0139d5e7;
        }
        else {
          FUN_00d50b20();
          local_38 = local_110;
LAB_0139d797:
          if (*(longlong **)(unaff_RSI + 0x118) == local_38) goto LAB_0139d5e7;
        }
LAB_0139d7ac:
        if ((*(longlong **)(unaff_RSI + 0x128) != local_38) &&
           (*(longlong **)(unaff_RSI + 0x120) != local_38)) {
          pvVar16 = _pthread_getspecific((pthread_key_t)local_38);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014c2a40();
          if (local_110 == local_120) {
            plVar38 = local_120;
            if ((cVar36 == '\0') && (local_110 != (longlong *)0x0)) {
              cVar33 = '\x01';
              cVar36 = '\x01';
              if (local_108 != '\0') goto LAB_0139d97b;
              cVar33 = '\x01';
              cVar36 = '\x01';
              FUN_00d50b00();
            }
LAB_0139d961:
            if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar38 = local_110;
            if (local_108 == '\0') {
              if (local_110 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              cVar33 = '\x01';
              cVar37 = '\x01';
              bVar42 = cVar36 != '\0';
              cVar36 = cVar37;
              if ((bVar42) && (local_120 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0139d961;
            }
            cVar33 = '\x01';
            cVar37 = '\x01';
            bVar42 = cVar36 != '\0';
            cVar36 = cVar37;
            if ((bVar42) && (local_120 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_0139d97b:
          local_120 = plVar38;
          if (0 < *(int *)((longlong)plVar38 + 0xc)) {
            local_a8[0] = cVar33;
            lVar15 = 0;
            do {
              plVar30 = *(longlong **)(plVar38[2] + lVar15 * 8);
              if (local_118 == plVar30) {
                if ((!bVar8) && (local_118 != (longlong *)0x0)) {
                  bVar8 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (plVar30 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar8) && (local_118 != (longlong *)0x0)) {
                  FUN_00d50b20();
                  bVar8 = true;
                  local_118 = plVar30;
                }
                else {
                  bVar8 = true;
                  local_118 = plVar30;
                }
              }
              if (*(int *)((longlong)local_118 + 0xc) < *(int *)((longlong)puVar13 + 0xc)) {
                local_110 = local_38;
                local_108 = '\0';
                FUN_00d21140();
              }
              lVar15 = lVar15 + 1;
              cVar36 = cVar33;
            } while (lVar15 < *(int *)((longlong)plVar38 + 0xc));
          }
        }
      }
LAB_0139d5e7:
      puVar41 = (undefined8 *)((longlong)puVar41 + 1);
      lVar15 = *(longlong *)(unaff_RSI + 0x40);
      param_1 = (longlong *)(longlong)*(int *)(lVar15 + 0xc);
    } while ((longlong)puVar41 < (longlong)param_1);
  }
  plVar38 = local_110;
  FUN_00c8e690();
  if ((local_108 == '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  if (0 < (int)local_110[3]) {
    _memset(param_1,(int)local_110[3],(size_t)param_3);
  }
  pVar27 = (pthread_key_t)param_1;
  lVar15 = *(longlong *)(unaff_RSI + 0x1f0);
  if (lVar15 != 0) {
    FUN_00d50b00();
  }
  if (*(int *)(lVar15 + 0xc) != 0) {
    ___bzero();
    plVar30 = *(longlong **)(unaff_RSI + 0x38);
    if (plVar30 == (longlong *)0x0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_a8._8_8_;
      local_a8 = auVar7 << 0x40;
    }
    else {
      pvVar16 = _pthread_getspecific(pVar27);
      if (pvVar16 != (void *)0x0) {
        plVar30 = *(longlong **)(unaff_RSI + 0x38);
        lVar17 = FUN_00e8b990();
        if (lVar17 != 0) {
          plVar30 = (longlong *)plVar30[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
        }
      }
      local_a8._0_8_ = (**(code **)(*plVar30 + 0x370))();
    }
    local_108 = '\0';
    local_110 = (longlong *)0x0;
    local_f8 = -1;
    puVar41 = &DAT_02802558;
    while( true ) {
      lVar17 = (longlong)local_f8;
      local_f8 = local_f8 + 1;
      if (*(int *)(lVar15 + 0xc) <= local_f8) break;
      pvVar16 = *(void **)(lVar15 + 0x10);
      local_110 = *(longlong **)((longlong)pvVar16 + lVar17 * 8 + 8);
      pvVar18 = _pthread_getspecific((pthread_key_t)pvVar16);
      if (pvVar18 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_011f2ec0();
      iVar34 = FUN_00e7d850(SUB84(dVar5 * (double)local_a8._0_8_,0));
      lVar17 = *(longlong *)(unaff_RSI + 0x1a0);
      if (lVar17 == 0) {
        FUN_0132d640();
        lVar17 = *(longlong *)(unaff_RSI + 0x1a0);
      }
      if (lVar17 != 0) {
        FUN_00d50b00();
      }
      iVar34 = (int)((double)iVar34 / (double)*(int *)(lVar17 + 0x30) + DAT_023942d0);
      if (iVar34 < 0) {
        iVar34 = 0;
      }
      iVar10 = *(int *)(unaff_RSI + 0x88);
      FUN_00d50b20();
      if (iVar10 <= iVar34) {
        iVar34 = iVar10 + -1;
      }
      pvVar18 = _pthread_getspecific((pthread_key_t)pvVar16);
      if (pvVar18 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_011f2ed0();
      iVar10 = FUN_00e7d850(SUB84(dVar5 * (double)local_a8._0_8_,0));
      lVar17 = *(longlong *)(unaff_RSI + 0x1a0);
      if (lVar17 == 0) {
        FUN_0132d640();
        lVar17 = *(longlong *)(unaff_RSI + 0x1a0);
      }
      if (lVar17 != 0) {
        FUN_00d50b00();
      }
      iVar10 = (int)((double)iVar10 / (double)*(int *)(lVar17 + 0x30) + DAT_023942d0);
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      iVar40 = *(int *)(unaff_RSI + 0x88);
      FUN_00d50b20();
      if (iVar10 < iVar40) {
        if (iVar34 < 0) goto LAB_0139deb5;
LAB_0139de8d:
        iVar40 = *(int *)(unaff_RSI + 0x88);
        if (iVar40 <= iVar10) goto LAB_0139de9c;
LAB_0139dec7:
        iVar35 = iVar10 - iVar34;
        if (iVar34 <= iVar10) {
LAB_0139ded0:
          _memset(pvVar16,iVar35 + 1,(size_t)param_3);
        }
      }
      else {
        iVar10 = iVar40 + -1;
        if (-1 < iVar34) goto LAB_0139de8d;
LAB_0139deb5:
        iVar34 = 0;
        iVar40 = *(int *)(unaff_RSI + 0x88);
        if (iVar10 < iVar40) goto LAB_0139dec7;
LAB_0139de9c:
        iVar35 = (iVar40 + -1) - iVar34;
        if (iVar34 <= iVar40 + -1) goto LAB_0139ded0;
      }
    }
    FUN_014813e0();
  }
  pcVar9 = DAT_025e74b8;
  if (*(int *)(unaff_RSI + 0x88) < 1) {
    bVar42 = false;
    local_90 = (longlong *)0x0;
    plVar30 = (longlong *)((ulonglong)local_50 & 0xffffffff);
    local_b8 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
    local_d0 = 0;
    local_58 = (longlong *)0x0;
    local_68._0_1_ = '\0';
    local_c8 = 0;
    local_64 = 0;
    local_d8 = 0;
    local_70 = (longlong *)0x0;
    local_88 = (longlong *)0x0;
  }
  else {
    dVar5 = DAT_023908d0 / dVar45;
    dVar45 = DAT_023934c8 / dVar45;
    local_164 = DAT_0241b650;
    local_a8[0] = (char)local_3c;
    local_80 = (longlong *)0x0;
    local_d8 = 0;
    local_64 = 0;
    local_c8 = 0;
    local_68 = 0;
    local_b0 = (longlong *)0x0;
    local_d0 = 0;
    local_c0 = (longlong *)0x0;
    local_b8 = (longlong *)0x0;
    local_90 = (longlong *)0x0;
    bVar42 = false;
    uVar22 = 0;
    plVar23 = (longlong *)0x0;
    do {
      local_70 = plVar23;
      lVar17 = puVar13[2];
      local_128._0_4_ = (uint)uVar22;
      uVar39 = (ulonglong)(int)(uint)local_128;
      plVar30 = *(longlong **)(lVar17 + uVar39 * 8);
      if (local_130 == plVar30) {
        if (((char)local_138 == '\0') && (local_130 != (longlong *)0x0)) {
          local_138 = CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
          puVar41 = (undefined8 *)0x0;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar30 != (longlong *)0x0) {
          puVar41 = (undefined8 *)(local_138 & 0xffffffff);
          lVar17 = FUN_00d50b00();
        }
        if (((char)local_138 == '\0') || (local_130 == (longlong *)0x0)) {
          local_138 = CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
          local_130 = plVar30;
        }
        else {
          puVar41 = (undefined8 *)(local_138 & 0xffffffff);
          uVar14 = FUN_00d50b20();
          local_138 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
          local_130 = plVar30;
        }
      }
      local_88 = local_80;
      if (*(char *)(plVar38[2] + uVar39) == '\0') {
LAB_0139e020:
        plVar30 = (longlong *)((ulonglong)local_50 & 0xffffffff);
        local_3c = (uint)CONCAT71((int7)((ulonglong)local_50 >> 8),local_a8[0]);
        local_48 = local_c0;
        local_58 = local_b0;
        uVar28 = (uint)local_128;
      }
      else {
        if (0 < *(int *)((longlong)local_130 + 0xc)) {
          puVar41 = (undefined8 *)0x0;
          do {
            plVar30 = *(longlong **)(local_130[2] + (longlong)puVar41 * 8);
            plVar23 = local_130;
            if (local_38 == plVar30) {
              if ((local_a8[0] == '\0') && (local_38 != (longlong *)0x0)) {
                local_a8[0] = 1;
                FUN_00d50b00();
              }
            }
            else {
              if (plVar30 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((local_a8[0] == '\0') || (local_38 == (longlong *)0x0)) {
                local_a8[0] = 1;
                local_38 = plVar30;
              }
              else {
                FUN_00d50b20();
                local_a8[0] = 1;
                local_38 = plVar30;
              }
            }
            pVar27 = (pthread_key_t)plVar23;
            pvVar16 = _pthread_getspecific(pVar27);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pVar27 = (pthread_key_t)local_38;
            }
            iVar34 = FUN_014c2f20();
            if (iVar34 <= (int)(uint)local_128) goto LAB_0139e020;
            pvVar16 = _pthread_getspecific(pVar27);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc340();
            if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_110 != (longlong *)0x0) goto LAB_0139e020;
            puVar41 = (undefined8 *)((longlong)puVar41 + 1);
          } while ((longlong)puVar41 < (longlong)*(int *)((longlong)local_130 + 0xc));
        }
        cVar33 = (char)local_70;
        if ((uint)local_128 == 0) {
          if ((local_80 == (longlong *)0x0) || (local_70 = (longlong *)0x0, cVar33 == '\0')) {
            local_88 = (longlong *)0x0;
          }
          else {
            local_88 = (longlong *)0x0;
            FUN_00d50b20();
            local_70 = (longlong *)0x0;
          }
        }
        else {
          plVar30 = *(longlong **)(puVar13[2] + -8 + (longlong)(int)(uint)local_128 * 8);
          if (local_80 == plVar30) {
            if (cVar33 == '\0') {
              if (local_80 == (longlong *)0x0) {
              }
              else {
                local_70 = (longlong *)CONCAT71((int7)((ulonglong)plVar30 >> 8),1);
                FUN_00d50b00();
              }
            }
          }
          else {
            uVar14 = 0;
            if (plVar30 != (longlong *)0x0) {
              uVar14 = FUN_00d50b00(plVar30);
            }
            local_70 = (longlong *)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
            local_88 = plVar30;
            if ((cVar33 != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        if (local_c8 != 0) {
          if ((char)local_68 == '\0') {
            local_68 = 0;
          }
          else {
            local_68 = 0;
            FUN_00d50b20();
          }
        }
        uVar32 = *(uint *)(unaff_RSI + 0x88);
        if ((int)(uint)local_128 < (int)uVar32) {
          puVar41 = (undefined8 *)(ulonglong)local_64;
          do {
            local_64 = (uint)puVar41;
            if (*(char *)(plVar38[2] + uVar39) == '\0') {
              local_c8 = 0;
LAB_0139e567:
              uVar32 = (uint)uVar39;
              goto LAB_0139e56e;
            }
            lVar17 = puVar13[2];
            lVar20 = *(longlong *)(lVar17 + uVar39 * 8);
            if (local_d8 == lVar20) {
              if (((char)puVar41 == '\0') && (local_d8 != 0)) {
                local_64 = (uint)CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
                puVar41 = (undefined8 *)0x0;
                FUN_00d50b00();
                lVar20 = local_d8;
                goto LAB_0139e490;
              }
              iVar34 = *(int *)(local_d8 + 0xc);
            }
            else {
              if (lVar20 != 0) {
                lVar17 = FUN_00d50b00();
              }
              local_64 = (uint)CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
              if (((char)puVar41 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
LAB_0139e490:
              iVar34 = *(int *)(lVar20 + 0xc);
              local_d8 = lVar20;
            }
            if (iVar34 != 0) {
              local_c8 = local_d8;
              if ((char)local_64 == '\0') {
                local_68 = 0;
                local_64 = 0;
              }
              else {
                FUN_00d50b00();
                local_68 = local_64;
              }
              goto LAB_0139e567;
            }
            uVar39 = uVar39 + 1;
            puVar41 = (undefined8 *)(ulonglong)local_64;
            uVar22 = uVar39;
          } while ((longlong)uVar39 < (longlong)*(int *)(unaff_RSI + 0x88));
        }
        local_c8 = 0;
        uVar39 = uVar22;
LAB_0139e56e:
        plVar30 = (longlong *)(ulonglong)(*(int *)(unaff_RSI + 0x88) - 1);
        if ((int)uVar39 < *(int *)(unaff_RSI + 0x88)) {
          plVar30 = (longlong *)(uVar39 & 0xffffffff);
        }
        uVar28 = (uint)plVar30;
        plVar23 = local_b8;
        if (local_c0 != (longlong *)0x0) {
          if ((char)local_b8 == '\0') {
            plVar23 = (longlong *)0x0;
          }
          else {
            FUN_00d50b20();
            plVar23 = (longlong *)0x0;
          }
        }
        uVar26 = (undefined7)((ulonglong)puVar41 >> 8);
        if (local_b0 == (longlong *)0x0) {
          uVar22 = local_d0 & 0xffffffff;
          if (local_88 != (longlong *)0x0) goto LAB_0139e62c;
joined_r0x0139e681:
          local_58 = (longlong *)0x0;
          local_d0 = uVar22;
          if (local_c8 == 0) goto LAB_0139e780;
LAB_0139e6c0:
          if (*(int *)(local_c8 + 0xc) == 0) goto LAB_0139e780;
          local_48 = (longlong *)**(undefined8 **)(local_c8 + 0x10);
          if (local_48 == (longlong *)0x0) goto LAB_0139e780;
          local_b8 = (longlong *)
                     CONCAT71((int7)((ulonglong)*(undefined8 **)(local_c8 + 0x10) >> 8),1);
          FUN_00d50b00();
          if (local_58 != (longlong *)0x0) goto LAB_0139e6f9;
LAB_0139e79a:
          local_3c = (uint)CONCAT71(uVar26,local_a8[0]);
          if (local_48 != (longlong *)0x0) {
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
            plVar19 = local_48;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar19 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            plVar30 = local_70;
            local_164 = (**(code **)(*plVar19 + 0x3e0))();
            local_3c = (uint)CONCAT71(uVar26,local_a8[0]);
          }
          iVar34 = uVar32 - (uint)local_128;
joined_r0x0139ea27:
          cVar33 = (char)local_3c;
          if (((local_48 != (longlong *)0x0) && (local_58 == (longlong *)0x0)) &&
             (iVar34 < (int)dVar45)) {
            if (local_38 == local_48) {
              plVar19 = local_38;
              if (((char)local_b8 != '\0') && (cVar33 == '\0')) {
                local_3c = (uint)CONCAT71((int7)(uVar22 >> 8),1);
                FUN_00d50b00();
                plVar23 = local_38;
              }
            }
            else {
              if ((char)local_b8 != '\0') {
                FUN_00d50b00();
              }
              local_3c = (uint)local_b8;
              plVar19 = local_48;
              if ((local_a8[0] != '\0') && (local_38 != (longlong *)0x0)) {
                FUN_00d50b20();
                plVar23 = local_48;
              }
            }
            uVar29 = uVar32 - 1;
            plVar30 = (longlong *)(ulonglong)uVar29;
            uVar32 = (uint)local_128 - 1;
            iVar34 = -1;
            local_38 = plVar19;
            local_128._0_4_ = uVar29;
            goto LAB_0139ed9e;
          }
          plVar23 = (longlong *)FUN_00e8fc40();
          FUN_010fe5f0();
          uVar14 = (**(code **)(*plVar23 + 0x18))();
          uVar26 = (undefined7)((ulonglong)uVar14 >> 8);
          if (plVar23 == local_38) {
            plVar23 = local_38;
            if (cVar33 == '\0') {
              local_3c = (uint)CONCAT71(uVar26,1);
            }
            else {
              FUN_00d50b20();
            }
          }
          else {
            local_3c = (uint)CONCAT71(uVar26,1);
            if ((cVar33 != '\0') && (local_38 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_38 = plVar23;
          pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar30 = local_38;
          }
          FUN_014bc030();
          pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar30 = local_38;
          }
          FUN_014bc170(DAT_02390d34);
          iVar34 = 1;
          bVar6 = true;
          if ((uint)local_128 != uVar32) goto LAB_0139efa1;
        }
        else {
          if ((char)local_d0 != '\0') {
            FUN_00d50b20();
          }
          uVar22 = (ulonglong)plVar23 & 0xffffffff;
          if (local_88 == (longlong *)0x0) goto joined_r0x0139e681;
LAB_0139e62c:
          if (*(int *)((longlong)local_88 + 0xc) == 0) goto joined_r0x0139e681;
          local_58 = *(longlong **)local_88[2];
          if (local_58 == (longlong *)0x0) goto joined_r0x0139e681;
          local_d0 = CONCAT71((int7)((ulonglong)local_88[2] >> 8),1);
          FUN_00d50b00();
          if (local_c8 != 0) goto LAB_0139e6c0;
LAB_0139e780:
          local_48 = (longlong *)0x0;
          local_b8 = plVar23;
          if (local_58 == (longlong *)0x0) goto LAB_0139e79a;
LAB_0139e6f9:
          pvVar16 = _pthread_getspecific((pthread_key_t)local_48);
          uVar31 = (undefined7)(uVar22 >> 8);
          plVar19 = local_58;
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar19 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
          }
          uVar22 = CONCAT71(uVar31,local_a8[0]);
          plVar30 = local_70;
          local_164 = (**(code **)(*plVar19 + 0x3e0))();
          iVar34 = uVar32 - (uint)local_128;
          if ((int)dVar5 <= iVar34) {
            local_3c = (uint)CONCAT71(uVar26,local_a8[0]);
            goto joined_r0x0139ea27;
          }
          if (local_38 == local_58) {
            plVar19 = local_38;
            if (((char)local_d0 == '\0') || (local_a8[0] != '\0')) {
              plVar30 = (longlong *)CONCAT71(uVar31,local_a8[0]);
            }
            else {
              plVar30 = (longlong *)CONCAT71(uVar31,1);
              FUN_00d50b00();
              plVar23 = local_38;
            }
          }
          else {
            if ((char)local_d0 != '\0') {
              FUN_00d50b00();
            }
            plVar30 = (longlong *)(local_d0 & 0xffffffff);
            plVar19 = local_58;
            if ((local_a8[0] != '\0') &&
               (plVar30 = (longlong *)(local_d0 & 0xffffffff), local_38 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar30 = (longlong *)(local_d0 & 0xffffffff);
              plVar23 = local_58;
            }
          }
          if ((int)*(uint *)(unaff_RSI + 0x88) < (int)uVar32) {
            uVar32 = *(uint *)(unaff_RSI + 0x88);
          }
          iVar34 = 1;
          local_3c = (uint)plVar30;
          local_38 = plVar19;
LAB_0139ed9e:
          pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar30 = local_38;
          }
          FUN_014d1d00();
          uVar26 = (undefined7)((ulonglong)plVar23 >> 8);
          if (local_110 == local_60) {
            plVar23 = local_60;
            if (((char)local_50 == '\0') && (local_110 != (longlong *)0x0)) {
              uVar22 = CONCAT71(uVar26,1);
              if (local_108 != '\0') goto LAB_0139ee94;
              uVar22 = CONCAT71(uVar26,1);
              FUN_00d50b00();
            }
            else {
              uVar22 = (ulonglong)local_50 & 0xffffffff;
            }
LAB_0139ee7a:
            if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar23 = local_110;
            if (local_108 == '\0') {
              if (local_110 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              uVar22 = CONCAT71(uVar26,1);
              if (((char)local_50 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0139ee7a;
            }
            uVar22 = CONCAT71(uVar26,1);
            if (((char)local_50 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_0139ee94:
          bVar6 = false;
          local_50 = (longlong *)(uVar22 & 0xffffffff);
          local_60 = plVar23;
          if ((uint)local_128 != uVar32) {
LAB_0139efa1:
            do {
              plVar23 = *(longlong **)(unaff_RSI + 0x38);
              pVar27 = (pthread_key_t)plVar30;
              pvVar16 = _pthread_getspecific(pVar27);
              if (pvVar16 != (void *)0x0) {
                plVar23 = *(longlong **)(unaff_RSI + 0x38);
                lVar17 = FUN_00e8b990();
                if (lVar17 != 0) {
                  plVar23 = (longlong *)plVar23[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                }
              }
              plVar30 = *(longlong **)(unaff_RSI + 0x38);
              pvVar16 = _pthread_getspecific(pVar27);
              if (pvVar16 != (void *)0x0) {
                plVar30 = *(longlong **)(unaff_RSI + 0x38);
                lVar17 = FUN_00e8b990();
                if (lVar17 != 0) {
                  plVar30 = (longlong *)plVar30[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                }
              }
              uVar43 = (**(code **)(*plVar30 + 0x3a0))();
              (**(code **)(*plVar23 + 0x388))
                        (0,(int)DAT_0238fee8,uVar43,
                         (longlong)(int)(uVar1 * (uint)local_128 - (int)uVar1 / 2));
              fVar47 = DAT_023d59b4;
              if (0 < (int)uVar1) {
                if ((ulonglong)uVar1 - 1 < 3) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = 0;
                  do {
                    fVar46 = (float)(*(uint *)(lVar12 + uVar22 * 4) & _DAT_02390140);
                    if (fVar46 <= fVar47) {
                      fVar46 = fVar47;
                    }
                    fVar47 = (float)(*(uint *)(lVar12 + 4 + uVar22 * 4) & _DAT_02390140);
                    if (fVar47 <= fVar46) {
                      fVar47 = fVar46;
                    }
                    fVar46 = (float)(*(uint *)(lVar12 + 8 + uVar22 * 4) & _DAT_02390140);
                    if (fVar46 <= fVar47) {
                      fVar46 = fVar47;
                    }
                    fVar47 = (float)(*(uint *)(lVar12 + 0xc + uVar22 * 4) & _DAT_02390140);
                    if (fVar47 <= fVar46) {
                      fVar47 = fVar46;
                    }
                    uVar22 = uVar22 + 4;
                  } while ((uVar1 & 0xfffffffc) != uVar22);
                }
                if ((ulonglong)(uVar1 & 3) != 0) {
                  uVar39 = 0;
                  do {
                    fVar46 = (float)(*(uint *)(lVar12 + uVar22 * 4 + uVar39 * 4) & _DAT_02390140);
                    if (fVar46 <= fVar47) {
                      fVar46 = fVar47;
                    }
                    fVar47 = fVar46;
                    uVar39 = uVar39 + 1;
                  } while ((uVar1 & 3) != uVar39);
                }
              }
              local_a8 = ZEXT416((uint)fVar47);
              plVar23 = (longlong *)FUN_00e8fc40();
              FUN_00d4ff40();
              *plVar23 = (longlong)&DAT_025e74a0;
              *(undefined8 *)((longlong)plVar23 + 0xc) = 0;
              *(undefined8 *)((longlong)plVar23 + 0x14) = 0;
              *(undefined8 *)((longlong)plVar23 + 0x1c) = 0;
              *(undefined8 *)((longlong)plVar23 + 0x24) = 0;
              *(undefined1 *)((longlong)plVar23 + 0x2c) = 0;
              plVar23[6] = 0;
              plVar23[7] = 0;
              plVar23[8] = 0;
              plVar23[9] = 0;
              plVar23[10] = 0;
              plVar23[0xb] = 0;
              *(undefined4 *)(plVar23 + 0xc) = 0;
              (*pcVar9)();
              if (plVar23 == local_118) {
                plVar23 = local_118;
                if (bVar8) {
                  FUN_00d50b20();
                  bVar3 = bVar8;
                }
                else {
                  bVar3 = true;
                }
              }
              else {
                bVar3 = true;
                if ((bVar8) && (local_118 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              bVar8 = bVar3;
              *(uint *)((longlong)plVar23 + 0xc) = (uint)local_128;
              *(undefined4 *)(plVar23 + 2) = 0x350637bd;
              *(undefined4 *)((longlong)plVar23 + 0x14) = local_164;
              *(undefined4 *)(plVar23 + 3) = local_164;
              *(undefined8 *)((longlong)plVar23 + 0x1c) = 0x38d1b717350637bd;
              *(undefined4 *)((longlong)plVar23 + 0x24) = 0x38d1b717;
              *(float *)(plVar23 + 5) = fVar47 * local_19c;
              *(undefined1 *)((longlong)plVar23 + 0x2c) = 1;
              plVar30 = plVar23;
              pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
              if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                plVar30 = local_38;
              }
              FUN_014c2e20();
              local_128._0_4_ = (uint)local_128 + iVar34;
              local_118 = plVar23;
            } while (uVar32 != (uint)local_128);
          }
        }
        plVar23 = *(longlong **)(unaff_RSI + 0x38);
        pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
        if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          plVar23 = (longlong *)plVar23[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
        }
        lVar17 = (**(code **)(*plVar23 + 0x378))();
        pVar27 = (pthread_key_t)plVar30;
        if (local_38 == local_58) {
          pvVar16 = _pthread_getspecific(pVar27);
          plVar23 = local_58;
          if ((pvVar16 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
            plVar30 = local_58;
            plVar23 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
          }
          lVar20 = (**(code **)(*plVar23 + 0x380))();
          if (local_48 == (longlong *)0x0) {
            plVar30 = (longlong *)plVar38[2];
            if (*(char *)((longlong)plVar30 + (longlong)(int)uVar28) == '\0') {
              lVar17 = FUN_0134c2c0();
            }
          }
          else {
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
            plVar23 = local_48;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar30 = local_48;
              plVar23 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            lVar17 = (**(code **)(*plVar23 + 0x380))();
          }
        }
        else if (local_38 == local_48) {
          pvVar16 = _pthread_getspecific(pVar27);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar30 = local_48;
          }
          FUN_014c2f20();
          lVar20 = FUN_0134c2c0();
          pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar30 = local_48;
          }
          lVar17 = FUN_014bb590();
        }
        else {
          if (local_58 == (longlong *)0x0) {
            lVar20 = 0;
          }
          else {
            pvVar16 = _pthread_getspecific(pVar27);
            if ((pvVar16 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
              plVar30 = local_58;
            }
            lVar20 = FUN_014bb590();
          }
          if (local_48 != (longlong *)0x0) {
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
            plVar23 = local_48;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar30 = local_48;
              plVar23 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            lVar17 = (**(code **)(*plVar23 + 0x380))();
          }
        }
        pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
        plVar23 = local_38;
        if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          plVar30 = local_38;
          plVar23 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar21 + 0x154) & 1) + 4];
        }
        pVar27 = (pthread_key_t)plVar30;
        uVar14 = (**(code **)(*plVar23 + 0x380))();
        local_a8._0_8_ = uVar14;
        pvVar16 = _pthread_getspecific(pVar27);
        plVar30 = local_38;
        if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          plVar30 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar21 + 0x154) & 1) + 4];
        }
        plVar23 = local_50;
        iVar34 = (**(code **)(*plVar30 + 0x388))();
        pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
        if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          plVar23 = local_38;
        }
        FUN_014bb250();
        pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
        if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          plVar23 = local_38;
        }
        puVar41 = (undefined8 *)(lVar17 - lVar20);
        FUN_014bb2b0();
        pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
        if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          plVar23 = local_38;
        }
        FUN_00d50b00();
        FUN_014ce440();
        if (unaff_RSI != 0) {
          FUN_00d50b20();
        }
        pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
        if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          plVar23 = local_38;
        }
        FUN_00d50b00();
        FUN_014ceed0();
        if (unaff_RSI != 0) {
          FUN_00d50b20();
        }
        pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
        if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          plVar23 = local_38;
        }
        FUN_00d50b00();
        FUN_014cfcc0();
        if (unaff_RSI != 0) {
          FUN_00d50b20();
        }
        pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
        plVar30 = plVar23;
        if (pvVar16 == (void *)0x0) {
LAB_0139f8c6:
          pVar27 = (pthread_key_t)plVar30;
          plVar19 = *(longlong **)(unaff_RSI + 0x38);
          plVar23 = plVar30;
          if (plVar19 != (longlong *)0x0) goto LAB_0139f8d3;
LAB_0139f93e:
          uVar43 = 0;
        }
        else {
          lVar17 = FUN_00e8b990();
          pVar27 = (pthread_key_t)plVar23;
          plVar30 = local_38;
          if (lVar17 != 0) goto LAB_0139f8c6;
          plVar19 = *(longlong **)(unaff_RSI + 0x38);
          if (plVar19 == (longlong *)0x0) goto LAB_0139f93e;
LAB_0139f8d3:
          pvVar16 = _pthread_getspecific(pVar27);
          if (pvVar16 != (void *)0x0) {
            plVar19 = *(longlong **)(unaff_RSI + 0x38);
            lVar17 = FUN_00e8b990();
            if (lVar17 != 0) {
              plVar19 = (longlong *)plVar19[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
          }
          plVar23 = local_50;
          uVar43 = (**(code **)(*plVar19 + 0x370))();
        }
        plVar30 = (longlong *)((ulonglong)local_50 & 0xffffffff);
        FUN_014bd640(uVar43);
        if (bVar6) {
          if (local_58 != (longlong *)0x0) {
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar23 = local_58;
            }
            FUN_014bc360();
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar23 = local_38;
            }
            FUN_014bc2e0();
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
            plVar30 = local_38;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar23 = local_38;
              plVar30 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar23 = local_58;
            }
            FUN_014bc000();
            if (local_108 == '\0') {
              if (local_110 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_108 = '\0';
            }
            FUN_014bbe30();
            if (local_110 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          pVar27 = (pthread_key_t)plVar23;
          if (local_48 != (longlong *)0x0) {
            pvVar16 = _pthread_getspecific(pVar27);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar23 = local_38;
            }
            plVar30 = (longlong *)((ulonglong)local_50 & 0xffffffff);
            iVar34 = FUN_014c2f20();
            pVar27 = (pthread_key_t)plVar23;
            if (iVar34 == 0) {
              pvVar16 = _pthread_getspecific(pVar27);
              if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                plVar23 = local_38;
              }
              FUN_014bc360();
              pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
              if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                plVar23 = local_48;
              }
              FUN_014bc2e0();
              pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
              plVar30 = local_38;
              if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                plVar23 = local_38;
                plVar30 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
              }
              pVar27 = (pthread_key_t)plVar23;
              pvVar16 = _pthread_getspecific(pVar27);
              if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                pVar27 = (pthread_key_t)local_48;
              }
              FUN_014bc000();
              if (local_108 == '\0') {
                if (local_110 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_108 = '\0';
              }
              FUN_014bbe30();
              if (local_110 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          plVar23 = (longlong *)FUN_00e8fc40();
          FUN_007eeec0();
          (**(code **)(*plVar23 + 0x18))();
          if (plVar23 == local_60) {
            plVar23 = local_60;
            if ((char)local_50 == '\0') {
              plVar30 = (longlong *)CONCAT71((int7)((ulonglong)local_50 >> 8),1);
            }
            else {
              FUN_00d50b20();
              plVar30 = local_50;
            }
          }
          else {
            plVar30 = (longlong *)CONCAT71((int7)((ulonglong)plVar30 >> 8),1);
            if (((char)local_50 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_60 = plVar23;
          plVar23 = (longlong *)FUN_00115860();
          (**(code **)(*plVar23 + 0x18))();
          if (local_90 == plVar23) {
            if ((!bVar42) && (plVar23 = local_90, local_90 != (longlong *)0x0)) goto LAB_013a049f;
            if (local_90 == (longlong *)0x0) {
              local_90 = (longlong *)0x0;
            }
            else {
              FUN_00d50b20();
            }
          }
          else {
            if ((bVar42) && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_013a049f:
            local_90 = plVar23;
            bVar42 = true;
          }
          pvVar16 = _pthread_getspecific(pVar27);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            pVar27 = (pthread_key_t)local_90;
          }
          FUN_013dd650();
          pvVar16 = _pthread_getspecific(pVar27);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            pVar27 = (pthread_key_t)local_38;
          }
          FUN_014bc440();
          pvVar16 = _pthread_getspecific(pVar27);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfbc0();
          FUN_01327c60();
          FUN_01328c70();
          local_110 = local_60;
          local_108 = '\0';
          FUN_00d21140();
        }
        else {
          pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
          plVar30 = local_38;
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar23 = local_38;
            plVar30 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
          }
          puVar41 = (undefined8 *)(**(code **)(*plVar30 + 0x380))();
          pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
          plVar30 = local_38;
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar23 = local_38;
            plVar30 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
          }
          iVar10 = (**(code **)(*plVar30 + 0x388))();
          pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            plVar23 = local_60;
          }
          FUN_013dfcb0();
          pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd7c0();
          if (local_110 == (longlong *)0x0) {
            bVar6 = true;
            plVar30 = (longlong *)0x0;
          }
          else {
            plVar30 = local_110;
            if (local_108 == '\0') {
              FUN_00d50b00();
              bVar6 = false;
            }
            else {
              local_108 = '\0';
              bVar6 = false;
            }
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          uVar22 = (ulonglong)(int)*(uint *)((longlong)plVar30 + 0xc);
          if (0 < (longlong)uVar22) {
            local_a8._0_4_ = (undefined4)uVar14;
            iVar40 = (int)puVar41 - local_a8._0_4_;
            iVar34 = (iVar10 - iVar34) + iVar40;
            local_a8._0_8_ = (undefined8)iVar34;
            if (iVar40 == 0) {
              if (iVar34 == 0) {
                uVar39 = (ulonglong)(*(uint *)((longlong)plVar30 + 0xc) & 7);
                if (6 < uVar22 - 1) {
                  lVar17 = -(uVar22 & 0xfffffffffffffff8);
                  do {
                    lVar17 = lVar17 + 8;
                  } while (lVar17 != 0);
                }
                puVar41 = (undefined8 *)0x0;
                for (; uVar39 != 0; uVar39 = uVar39 - 1) {
                }
              }
              else {
                puVar41 = (undefined8 *)0x0;
                do {
                  pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  plVar19 = *(longlong **)(unaff_RSI + 0x38);
                  if (plVar19 == (longlong *)0x0) {
                    dVar44 = 0.0;
                  }
                  else {
                    pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
                    if (pvVar16 != (void *)0x0) {
                      plVar19 = *(longlong **)(unaff_RSI + 0x38);
                      lVar17 = FUN_00e8b990();
                      if (lVar17 != 0) {
                        plVar19 = (longlong *)
                                  plVar19[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                      }
                    }
                    dVar44 = (double)(**(code **)(*plVar19 + 0x370))();
                  }
                  FUN_012756a0(SUB84((double)local_a8._0_8_ / dVar44,0));
                  puVar41 = (undefined8 *)((longlong)puVar41 + 1);
                } while ((longlong)puVar41 < (longlong)*(int *)((longlong)plVar30 + 0xc));
              }
            }
            else {
              puVar41 = (undefined8 *)0x0;
              if (iVar34 == 0) {
                do {
                  pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  plVar19 = *(longlong **)(unaff_RSI + 0x38);
                  if (plVar19 == (longlong *)0x0) {
                    dVar44 = 0.0;
                  }
                  else {
                    pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
                    if (pvVar16 != (void *)0x0) {
                      plVar19 = *(longlong **)(unaff_RSI + 0x38);
                      lVar17 = FUN_00e8b990();
                      if (lVar17 != 0) {
                        plVar19 = (longlong *)
                                  plVar19[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                      }
                    }
                    dVar44 = (double)(**(code **)(*plVar19 + 0x370))();
                  }
                  FUN_01275610(SUB84((double)iVar40 / dVar44,0));
                  puVar41 = (undefined8 *)((longlong)puVar41 + 1);
                } while ((longlong)puVar41 < (longlong)*(int *)((longlong)plVar30 + 0xc));
              }
              else {
                do {
                  pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  plVar19 = *(longlong **)(unaff_RSI + 0x38);
                  if (plVar19 == (longlong *)0x0) {
                    dVar44 = 0.0;
                  }
                  else {
                    pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
                    if (pvVar16 != (void *)0x0) {
                      plVar19 = *(longlong **)(unaff_RSI + 0x38);
                      lVar17 = FUN_00e8b990();
                      if (lVar17 != 0) {
                        plVar19 = (longlong *)
                                  plVar19[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                      }
                    }
                    dVar44 = (double)(**(code **)(*plVar19 + 0x370))();
                  }
                  FUN_01275610(SUB84((double)iVar40 / dVar44,0));
                  pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  plVar19 = *(longlong **)(unaff_RSI + 0x38);
                  if (plVar19 == (longlong *)0x0) {
                    dVar44 = 0.0;
                  }
                  else {
                    pvVar16 = _pthread_getspecific((pthread_key_t)plVar23);
                    if (pvVar16 != (void *)0x0) {
                      plVar19 = *(longlong **)(unaff_RSI + 0x38);
                      lVar17 = FUN_00e8b990();
                      if (lVar17 != 0) {
                        plVar19 = (longlong *)
                                  plVar19[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                      }
                    }
                    dVar44 = (double)(**(code **)(*plVar19 + 0x370))();
                  }
                  FUN_012756a0(SUB84((double)local_a8._0_8_ / dVar44,0));
                  puVar41 = (undefined8 *)((longlong)puVar41 + 1);
                } while ((longlong)puVar41 < (longlong)*(int *)((longlong)plVar30 + 0xc));
              }
            }
          }
          if (*param_2 != 0) {
            local_110 = local_60;
            local_108 = '\0';
            FUN_00d21140();
          }
          if (bVar6 || plVar30 == (longlong *)0x0) {
            plVar30 = (longlong *)((ulonglong)local_50 & 0xffffffff);
          }
          else {
            FUN_00d50b20();
            plVar30 = (longlong *)((ulonglong)local_50 & 0xffffffff);
          }
        }
      }
      uVar22 = (ulonglong)(uVar28 + 1);
      local_a8[0] = (char)local_3c;
      local_50 = (longlong *)((ulonglong)plVar30 & 0xffffffff);
      plVar23 = (longlong *)((ulonglong)local_70 & 0xffffffff);
      local_c0 = local_48;
      local_b0 = local_58;
      local_80 = local_88;
    } while ((int)(uVar28 + 1) < *(int *)(unaff_RSI + 0x88));
  }
  plVar23 = local_110;
  local_50 = (longlong *)((ulonglong)plVar30 & 0xffffffff);
  lVar12 = *(longlong *)(unaff_RSI + 0x40);
  plVar30 = local_88;
  if (lVar12 != 0) {
    FUN_00d50b00();
  }
  FUN_0147ce20();
  if (local_108 == '\0') {
    if (local_110 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_108 = '\0';
  }
  if (lVar12 != 0) {
    FUN_00d50b20();
  }
  FUN_00d242c0();
  if (1 < *(int *)((longlong)local_110 + 0xc)) {
    lVar12 = 1;
    local_128 = 0;
    do {
      plVar19 = *(longlong **)(plVar23[2] + local_128 * 8);
      if (local_60 == plVar19) {
        if (((char)local_50 == '\0') && (local_60 != (longlong *)0x0)) {
          local_50 = (longlong *)0x1;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar19 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (((char)local_50 == '\0') || (local_60 == (longlong *)0x0)) {
          local_50 = (longlong *)0x1;
          local_60 = plVar19;
        }
        else {
          FUN_00d50b20();
          local_50 = (longlong *)0x1;
          local_60 = plVar19;
        }
      }
      pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
      if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        plVar30 = local_60;
      }
      lVar17 = FUN_013de650();
      pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
      if ((pvVar16 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        plVar30 = local_60;
      }
      lVar20 = FUN_013de790();
      lVar20 = lVar20 + lVar17;
      if (*(int *)((longlong)plVar23 + 0xc) < 1) {
LAB_013a0afb:
        plVar30 = (longlong *)(local_128 + 1);
        lVar17 = lVar12;
        if ((longlong)plVar30 < (longlong)*(int *)((longlong)plVar23 + 0xc)) {
LAB_013a0b44:
          lVar21 = *(longlong *)(plVar23[2] + lVar17 * 8);
          if (lVar21 != 0) {
            FUN_00d50b00();
          }
          pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar24 = FUN_013de650();
          if (lVar24 <= lVar20) goto code_r0x013a0b9d;
          if (lVar21 != 0) {
            FUN_00d50b00();
            FUN_00d50b20();
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar17 = FUN_013de650();
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
            if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
              plVar30 = local_60;
            }
            uVar14 = FUN_013de560();
            uVar26 = (undefined7)((ulonglong)uVar14 >> 8);
            local_80._0_1_ = (char)local_3c;
            if (local_110 == local_38) {
              if (((char)local_80 == '\0') && (local_110 != (longlong *)0x0)) {
                local_3c = (uint)CONCAT71(uVar26,1);
                if (local_108 != '\0') goto LAB_013a0d37;
                local_3c = (uint)CONCAT71(uVar26,1);
                FUN_00d50b00();
              }
joined_r0x013a0d06:
              if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if (local_108 == '\0') {
              if (local_110 != (longlong *)0x0) {
                uVar14 = FUN_00d50b00();
              }
              local_3c = (uint)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
              if ((char)local_80 == '\0') {
                local_38 = local_110;
              }
              else {
                if (local_38 != (longlong *)0x0) {
                  FUN_00d50b20();
                  local_38 = local_110;
                  goto joined_r0x013a0d06;
                }
                local_38 = local_110;
              }
            }
            else {
              local_3c = (uint)CONCAT71(uVar26,1);
              if (((char)local_80 == '\0') || (local_38 == (longlong *)0x0)) {
                local_38 = local_110;
              }
              else {
                FUN_00d50b20();
                local_38 = local_110;
              }
            }
LAB_013a0d37:
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
            if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
              plVar30 = local_38;
            }
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
            plVar19 = local_38;
            if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
              plVar30 = local_38;
              plVar19 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar21 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar19 + 0x388))();
            FUN_014bb2b0();
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
            if ((pvVar16 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
              plVar30 = local_60;
            }
            FUN_013dfcb0();
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd7c0();
            if (local_108 == '\0') {
              if (local_110 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_108 = '\0';
            }
            if ((local_170 != '\0') && (local_178 != 0)) {
              FUN_00d50b20();
            }
            if (0 < *(int *)((longlong)local_110 + 0xc)) {
              lVar21 = 0;
              do {
                pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                plVar19 = *(longlong **)(unaff_RSI + 0x38);
                if (plVar19 == (longlong *)0x0) {
                  dVar45 = 0.0;
                }
                else {
                  pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
                  if (pvVar16 != (void *)0x0) {
                    plVar19 = *(longlong **)(unaff_RSI + 0x38);
                    lVar24 = FUN_00e8b990();
                    if (lVar24 != 0) {
                      plVar19 = (longlong *)plVar19[(ulonglong)(*(uint *)(lVar24 + 0x154) & 1) + 4];
                    }
                  }
                  dVar45 = (double)(**(code **)(*plVar19 + 0x370))();
                }
                FUN_012756a0(SUB84((double)(lVar17 - lVar20) / dVar45,0));
                lVar21 = lVar21 + 1;
              } while (lVar21 < *(int *)((longlong)local_110 + 0xc));
            }
            if (*param_2 != 0) {
              local_110 = local_60;
              local_108 = '\0';
              FUN_00d21140();
            }
            FUN_00d50b20();
            FUN_00d50b20();
          }
        }
      }
      else {
        bVar6 = true;
        lVar17 = 0;
        do {
          plVar19 = *(longlong **)(plVar23[2] + lVar17 * 8);
          if (plVar19 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (plVar19 == local_60) {
            iVar34 = 0x27;
          }
          else {
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar21 = FUN_013de650();
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar24 = FUN_013de650();
            pvVar16 = _pthread_getspecific((pthread_key_t)plVar30);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar25 = FUN_013de790();
            bVar3 = lVar21 <= lVar20;
            plVar30 = (longlong *)CONCAT71((int7)((ulonglong)plVar30 >> 8),bVar3);
            bVar4 = lVar20 < lVar25 + lVar24;
            if (bVar3 && bVar4) {
              bVar6 = false;
            }
            iVar34 = 0;
            if (bVar3 && bVar4) {
              iVar34 = 0x25;
            }
          }
          if (plVar19 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        } while (((iVar34 == 0x27) || (iVar34 == 0)) &&
                (lVar17 = lVar17 + 1, lVar17 < *(int *)((longlong)plVar23 + 0xc)));
        if (bVar6) goto LAB_013a0afb;
      }
LAB_013a080b:
      local_128 = local_128 + 1;
      plVar30 = (longlong *)(ulonglong)local_3c;
      lVar12 = lVar12 + 1;
    } while (local_128 < (longlong)*(int *)((longlong)plVar23 + 0xc) + -1);
  }
  FUN_00e83070();
  *unaff_RDI = puVar11;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  if (lVar15 != 0) {
    FUN_00d50b20();
  }
  if (plVar38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (puVar13 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_118 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar36 != '\0') && (local_120 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar42) && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_b8 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_3c != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_64 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_70 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_138 != '\0') && (local_130 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
code_r0x013a0b9d:
  if (lVar21 != 0) {
    FUN_00d50b20();
  }
  lVar17 = lVar17 + 1;
  if (*(int *)((longlong)plVar23 + 0xc) <= (int)lVar17) goto LAB_013a080b;
  goto LAB_013a0b44;
}


