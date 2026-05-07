// Function: FUN_002cf230
// Address: 002cf230
// Size: 4507 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


uint64_t FUN_002cf230(uint64_t param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  char *pcVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  void* pVar15;
  char *pcVar16;
  uint uVar17;
  uint64_t uVar18;
  int64_t *plVar19;
  int iVar20;
  int64_t *plVar21;
  int64_t this_ptr;
  uint64_t uVar22;
  int64_t *local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t *local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int local_15c;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  int64_t *local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  int64_t local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  int64_t *local_f0;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  int64_t *local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  uint local_a8 [2];
  int64_t *local_a0;
  uint local_98;
  int iStack_94;
  int iStack_90;
  uint32_t local_5c;
  int64_t *local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  plVar19 = *(int64_t **)(this_ptr + 0xe0);
  uVar18 = 0;
  if (plVar19 == (int64_t *)0x0) {
    uVar22 = 0;
  }
  else {
    FUN_00d50b00();
    local_a8[0] = local_a8[0] & 0xffffff00;
    local_b0 = (int64_t *)0x0;
    iStack_94 = 0;
    iStack_90 = 0;
    uVar17 = *(uint *)((int64_t)plVar19 + 0xc);
    if ((int)uVar17 < 1) {
      uVar22 = 0;
    }
    else {
      lVar8 = plVar19[2];
      uVar14 = uVar17 & 3;
      if (uVar17 - 1 < 3) {
        uVar18 = 0;
        uVar22 = 0;
      }
      else {
        uVar18 = 0;
        uVar22 = 0;
        do {
          if (*(int *)(*(int64_t *)(lVar8 + uVar18 * 8) + 0x24) == 2) {
            uVar22 = 1;
          }
          if (*(int *)(*(int64_t *)(lVar8 + 8 + uVar18 * 8) + 0x24) == 2) {
            uVar22 = 1;
          }
          local_b0 = *(int64_t **)(lVar8 + 0x18 + uVar18 * 8);
          if (*(int *)(*(int64_t *)(lVar8 + 0x10 + uVar18 * 8) + 0x24) == 2) {
            uVar22 = 1;
          }
          if (*(int *)((int64_t)local_b0 + 0x24) == 2) {
            uVar22 = 1;
          }
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffc) != (uint)uVar18);
      }
      if (uVar14 != 0) {
        uVar18 = uVar18 & 0xffffffff;
        do {
          local_b0 = *(int64_t **)(lVar8 + uVar18 * 8);
          if (*(int *)((int64_t)local_b0 + 0x24) == 2) {
            uVar22 = 1;
          }
          uVar18 = uVar18 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    local_98 = (uint)uVar18;
    local_a0 = plVar19;
    FUN_002d7300();
    FUN_00d50b20();
  }
  if (param_2 != '\0') {
    FUN_002cd490();
    local_130 = local_b0;
    if (((char)local_a8[0] == '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_002d0ef0();
    local_40 = local_b0;
    if (((char)local_a8[0] == '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    iVar6 = *(int *)((int64_t)local_40 + 0xc);
    iVar4 = iVar6;
    iVar20 = local_15c;
    while (local_15c = iVar4, iVar6 != 0) {
      local_c8 = (int64_t *)((int64_t)local_40 + 0xc);
      uVar18 = (uint64_t)local_f0 >> 8;
      local_f0 = (int64_t *)CONCAT71((int7)uVar18,iVar6 != 1);
      FUN_00d23310();
      plVar19 = local_b0;
      local_e0 = CONCAT71(local_e0._1_7_,(char)local_a8[0]);
      puVar13 = (uint *)&local_e0;
      puVar12 = local_a8;
      if ((char)local_a8[0] == '\0') {
        puVar12 = puVar13;
      }
      *(void*)puVar12 = 0;
      if (((char)local_a8[0] != '\0') && (plVar19 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar15 = (void*)puVar13;
      plVar19 = (int64_t *)plVar19[2];
      if (plVar19 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(pVar15);
      plVar21 = plVar19;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar21 = (int64_t *)plVar19[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar21 + 0x478))();
      (**(code **)(*local_c0 + 0x3f0))();
      local_f8 = CONCAT71(uStack_4f,local_50);
      if (local_48[0] == '\0') {
        if (((local_f8 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
           (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48[0] = '\0';
      }
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar19 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((char)local_e0 != '\0') {
        FUN_00d50b20();
      }
      lVar10 = g_026fced8;
      lVar8 = g_026fced0;
      if (iVar6 == 1) {
        if (g_026fced0 != 0) {
          FUN_00d50b00();
        }
        FUN_01e57260();
        lVar10 = local_e0;
        local_100 = 0;
        if (local_d8 == '\0') {
          if (local_e0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_d8 = '\0';
        }
        local_100 = '\x01';
        local_108 = lVar10;
        FUN_00d23310();
        local_38[0] = local_48[0];
        pcVar16 = local_38;
        pcVar9 = local_48;
        if (local_48[0] == '\0') {
          pcVar9 = pcVar16;
        }
        lVar10 = CONCAT71(uStack_4f,local_50);
        *pcVar9 = '\0';
        if ((local_48[0] != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
        pVar15 = (void*)pcVar16;
        plVar21 = *(int64_t **)(lVar10 + 0x10);
        if (plVar21 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific(pVar15);
        plVar19 = plVar21;
        if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          plVar19 = (int64_t *)plVar21[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar19 + 0x478))();
        (**(code **)(*local_148 + 0x468))();
        plVar19 = local_158;
        local_a8[0] = 1;
        local_b0 = &g_024c5048;
        local_98 = local_98 & 0xffffff00;
        if (local_158 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_a0 = plVar19;
        local_98 = CONCAT31(local_98._1_3_,1);
        FUN_00d93690();
        plVar19 = local_40;
        local_d0 = local_c0;
        if (local_c0 == (int64_t *)0x0) {
          local_5c = 0;
        }
        else if (local_b8 == '\0') {
          uVar11 = FUN_00d50b00();
          local_5c = (uint32_t)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
          if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_b8 = '\0';
          local_5c = (uint32_t)CONCAT71((int7)((uint64_t)local_c0 >> 8),1);
        }
        local_b0 = &g_024c5048;
        if (((char)local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar21 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (g_026fced8 != 0) {
          FUN_00d50b00();
        }
        FUN_01e57260();
        plVar19 = local_40;
        local_d0 = local_b0;
        if (local_b0 == (int64_t *)0x0) {
          local_5c = 0;
        }
        else if ((char)local_a8[0] == '\0') {
          uVar11 = FUN_00d50b00();
          local_5c = (uint32_t)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
          if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_a8[0] = local_a8[0] & 0xffffff00;
          local_5c = (uint32_t)CONCAT71((int7)((uint64_t)local_b0 >> 8),1);
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00b7ace0();
      plVar21 = local_b0;
      if (((char)local_a8[0] == '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_1e0 = plVar21;
      local_1d8 = '\0';
      local_1d0 = local_d0;
      local_1c8 = '\0';
      FUN_01f4f940((uint64_t)local_f0 & 0xff,&local_1e0,0,&local_1d0);
      local_f0 = local_b0;
      if ((char)local_a8[0] == '\0') {
        if (local_b0 != (int64_t *)0x0) {
          FUN_00d50b00();
          if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_a8[0] = local_a8[0] & 0xffffff00;
      }
      if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 == (int64_t *)0x0) || (*(int *)((int64_t)local_f0 + 0xc) == 0)) {
        uVar17 = 1;
        if (local_15c != (int)*local_c8) {
          (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x578))();
        }
      }
      else {
        FUN_00d23310();
        plVar3 = local_b0;
        local_50 = (char)local_a8[0];
        puVar13 = local_a8;
        if ((char)local_a8[0] == '\0') {
          puVar13 = (uint *)&local_50;
        }
        *(void*)puVar13 = 0;
        if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 == '\0') && (plVar3 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*plVar3 + 0x398))();
        if (cVar5 == '\0') {
          local_a8[0] = local_a8[0] & 0xffffff00;
          local_b0 = (int64_t *)0x0;
          local_98 = 0xffffffff;
          iStack_94 = 0;
          iStack_90 = 0;
          local_a0 = plVar19;
          iVar6 = 0;
          while( true ) {
            iVar20 = 0;
            if (iVar6 != 0) {
              if (iVar6 < 1) {
                iVar20 = -iVar6;
                iStack_94 = iVar20;
              }
              else {
                local_98 = local_98 - iVar6;
                FUN_00d23690(iVar6,iVar6);
                iStack_90 = iStack_90 + iStack_94;
                iVar20 = 0;
                iStack_94 = iVar20;
              }
            }
            lVar8 = (int64_t)(int)local_98;
            local_98 = local_98 + 1;
            if (*(int *)((int64_t)local_a0 + 0xc) <= (int)local_98) break;
            local_b0 = *(int64_t **)(local_a0[2] + 8 + lVar8 * 8);
            iVar6 = iVar20;
            if (*(int *)((int64_t)local_b0 + 0x24) == 2) {
              FUN_002c3060();
              iVar6 = iStack_94;
            }
          }
          FUN_002d7300();
LAB_002d00a5:
          FUN_002d0ef0();
          plVar19 = local_b0;
          if (local_b0 == local_40) {
            if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if ((char)local_a8[0] == '\0') {
            if (local_b0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if (local_40 == (int64_t *)0x0) goto LAB_002d014f;
            FUN_00d50b20();
            local_40 = plVar19;
          }
          else if (local_40 == (int64_t *)0x0) {
LAB_002d014f:
            local_40 = plVar19;
          }
          else {
            FUN_00d50b20();
            local_40 = plVar19;
          }
          uVar17 = 0;
        }
        else {
          local_58 = plVar21;
          FUN_00d23310();
          plVar19 = local_b0;
          local_e0 = CONCAT71(local_e0._1_7_,(char)local_a8[0]);
          puVar13 = (uint *)&local_e0;
          puVar12 = local_a8;
          if ((char)local_a8[0] == '\0') {
            puVar12 = puVar13;
          }
          *(void*)puVar12 = 0;
          if (((char)local_a8[0] != '\0') && (plVar19 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pVar15 = (void*)puVar13;
          plVar19 = (int64_t *)plVar19[2];
          if (plVar19 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          pvVar7 = _pthread_getspecific(pVar15);
          plVar21 = plVar19;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar21 = (int64_t *)plVar19[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar21 + 0x478))();
          (**(code **)(*local_c0 + 0x388))();
          local_c8 = (int64_t *)CONCAT71(uStack_4f,local_50);
          if (local_48[0] == '\0') {
            if (((local_c8 != (int64_t *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
               (CONCAT71(uStack_4f,local_50) != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48[0] = '\0';
          }
          if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar19 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((char)local_e0 != '\0') {
            FUN_00d50b20();
          }
          (**(code **)(*plVar3 + 0x388))();
          plVar21 = local_b0;
          plVar19 = local_c8;
          if (((char)local_a8[0] == '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b00();
            if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_118 = plVar21;
          local_1c0 = plVar21;
          local_1b8 = '\0';
          cVar5 = (**(code **)(*plVar19 + 0x50))();
          if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = g_026f6fb0;
          if (cVar5 == '\0') {
            if (g_026f6fb0 != 0) {
              FUN_00d50b00();
            }
            lVar10 = g_026fcee8;
            local_1b0 = lVar8;
            local_1a8 = '\x01';
            if (g_026fcee8 != 0) {
              FUN_00d50b00();
            }
            local_1a0 = lVar10;
            local_198 = '\x01';
            FUN_01f6ca30();
            plVar19 = local_b0;
            if ((char)local_a8[0] == '\0') {
              if (local_b0 != (int64_t *)0x0) {
                FUN_00d50b00();
                if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_a8[0] = local_a8[0] & 0xffffff00;
            }
            if ((local_198 != '\0') && (local_1a0 != 0)) {
              FUN_00d50b20();
            }
            local_138 = plVar19;
            if ((local_1a8 != '\0') && (local_1b0 != 0)) {
              FUN_00d50b20();
            }
            lVar8 = g_026fcef0;
            if (g_026fcef0 != 0) {
              FUN_00d50b00();
            }
            plVar19 = g_026fcef8;
            local_110 = lVar8;
            if (g_026fcef8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_c0 = local_c8;
            local_e0 = local_110;
            local_158 = local_118;
            local_148 = plVar19;
            FUN_002d73e0(&local_158,&local_e0,&local_148,4);
            FUN_000b4da0();
            lVar8 = CONCAT71(uStack_4f,local_50);
            if (local_48[0] == '\0') {
              if (((lVar8 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
                 (CONCAT71(uStack_4f,local_50) != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48[0] = '\0';
            }
            FUN_002d10d0();
            if (plVar19 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (local_110 != 0) {
              FUN_00d50b20();
            }
            local_188 = '\0';
            local_190 = lVar8;
            iVar6 = (**(code **)(*local_138 + 0x5d8))();
            if ((local_188 != '\0') && (local_190 != 0)) {
              FUN_00d50b20();
            }
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (iVar6 == 0) goto LAB_002cfffc;
            uVar17 = 4;
            bVar2 = false;
            bVar1 = false;
          }
          else {
LAB_002cfffc:
            FUN_00d23310();
            plVar19 = local_b0;
            local_50 = (char)local_a8[0];
            puVar13 = local_a8;
            if ((char)local_a8[0] == '\0') {
              puVar13 = (uint *)&local_50;
            }
            *(void*)puVar13 = 0;
            if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_002c3060();
            if ((local_50 != '\0') && (plVar19 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            uVar17 = 0;
            bVar2 = true;
            bVar1 = true;
          }
          if (local_118 != (int64_t *)0x0) {
            FUN_00d50b20();
            bVar1 = bVar2;
          }
          FUN_00d50b20();
          plVar21 = local_58;
          if (bVar1) goto LAB_002d00a5;
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (local_f0 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar21 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_5c != '\0') && (local_d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_f8 != 0) {
        FUN_00d50b20();
      }
      if ((uVar17 & 3) != 0) {
        if (local_40 == (int64_t *)0x0) goto LAB_002d03bb;
        goto LAB_002d03b2;
      }
      iVar4 = local_15c;
      iVar20 = local_15c;
      iVar6 = *(int *)((int64_t)local_40 + 0xc);
    }
    local_15c = iVar20;
    (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x498))();
    FUN_00cb1f10();
    FUN_00db3760();
    if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48[0] != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x578))();
    FUN_00d403d0();
    local_180 = g_026fce60;
    if (g_026fce60 != 0) {
      FUN_00d50b00();
    }
    local_178 = '\x01';
    local_120 = 0;
    FUN_00d50b00();
    local_120 = '\x01';
    local_170 = 0;
    local_168 = '\0';
    local_128 = this_ptr;
    FUN_00d40470(&local_170,&local_128,1,3);
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar17 = 0;
LAB_002d03b2:
    FUN_00d50b20();
LAB_002d03bb:
    if (local_130 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (uVar17 != 0) {
      uVar22 = 0;
    }
  }
  return uVar22;
}

