// Function: FUN_007e6670
// Address: 007e6670
// Size: 5958 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x007e7b73) */
/* WARNING: Removing unreachable block (ram,0x007e7b78) */
/* WARNING: Removing unreachable block (ram,0x007e7aa8) */
/* WARNING: Removing unreachable block (ram,0x007e7ab4) */
/* WARNING: Removing unreachable block (ram,0x007e7b97) */
/* WARNING: Removing unreachable block (ram,0x007e7ba3) */
/* WARNING: Removing unreachable block (ram,0x007e745e) */
/* WARNING: Removing unreachable block (ram,0x007e746e) */
/* WARNING: Removing unreachable block (ram,0x007e7d92) */
/* WARNING: Removing unreachable block (ram,0x007e7da2) */
/* WARNING: Removing unreachable block (ram,0x007e7347) */
/* WARNING: Removing unreachable block (ram,0x007e7370) */
/* WARNING: Removing unreachable block (ram,0x007e7349) */
/* WARNING: Removing unreachable block (ram,0x007e7372) */
/* WARNING: Removing unreachable block (ram,0x007e71f8) */
/* WARNING: Removing unreachable block (ram,0x007e7220) */
/* WARNING: Removing unreachable block (ram,0x007e71fa) */
/* WARNING: Removing unreachable block (ram,0x007e7222) */
/* WARNING: Removing unreachable block (ram,0x007e6762) */
/* WARNING: Removing unreachable block (ram,0x007e6790) */
/* WARNING: Removing unreachable block (ram,0x007e6764) */
/* WARNING: Removing unreachable block (ram,0x007e6792) */
/* WARNING: Removing unreachable block (ram,0x007e72f8) */
/* WARNING: Removing unreachable block (ram,0x007e7301) */
/* WARNING: Removing unreachable block (ram,0x007e75a1) */
/* WARNING: Removing unreachable block (ram,0x007e75ad) */
/* WARNING: Removing unreachable block (ram,0x007e7c13) */
/* WARNING: Removing unreachable block (ram,0x007e7c40) */
/* WARNING: Removing unreachable block (ram,0x007e7c15) */
/* WARNING: Removing unreachable block (ram,0x007e7c42) */
/* WARNING: Removing unreachable block (ram,0x007e7807) */
/* WARNING: Removing unreachable block (ram,0x007e7830) */
/* WARNING: Removing unreachable block (ram,0x007e7809) */
/* WARNING: Removing unreachable block (ram,0x007e7832) */

void FUN_007e6670(void)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  longlong **pplVar11;
  longlong *plVar12;
  longlong unaff_RDI;
  longlong **unaff_R13;
  undefined7 uVar14;
  undefined8 uVar13;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  longlong *local_220;
  longlong *local_218;
  char local_210;
  longlong *local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  undefined8 *local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  pthread_key_t local_144;
  longlong local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  int local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  char local_a0;
  longlong local_98;
  char local_90;
  int local_80;
  longlong *local_68;
  char local_60;
  int local_50;
  longlong *local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar2)();
  plVar15 = *(longlong **)(unaff_RDI + 0x28);
  if (plVar15 != (longlong *)0x0) {
    local_c0 = '\0';
    local_c8 = (longlong *)0x0;
    local_b0 = -1;
    unaff_R13 = &local_40;
LAB_007e675e:
    while( true ) {
      lVar8 = local_98;
      local_a8 = 0;
      lVar6 = (longlong)local_b0;
      local_b0 = local_b0 + 1;
      if (*(int *)((longlong)plVar15 + 0xc) <= local_b0) break;
      lVar10 = plVar15[2];
      local_c8 = *(longlong **)(lVar10 + 8 + lVar6 * 8);
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar10);
      pVar9 = (pthread_key_t)lVar10;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_012ccb50();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313ad0();
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_138 = 0;
        lVar6 = *(longlong *)(unaff_RDI + 0x30);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        local_138 = '\x01';
        local_140 = lVar6;
        FUN_017a4f40();
        plVar12 = local_40;
        local_108 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_108 = '\x01';
        local_110 = plVar12;
        local_210 = '\0';
        local_218 = (longlong *)0x0;
        local_208 = (longlong *)0x0;
        local_200 = '\0';
        pplVar11 = &local_208;
        FUN_012cc0c0(pplVar11,&local_218,0,0);
        pVar9 = (pthread_key_t)pplVar11;
        if ((local_200 != '\0') && (local_208 != (longlong *)0x0)) {
          (**(code **)(*local_208 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_210 != '\0') && (local_218 != (longlong *)0x0)) {
          (**(code **)(*local_218 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_012ccb50();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313ad0();
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar6 = *(longlong *)(unaff_RDI + 0x30);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        local_1f0 = '\x01';
        local_1e8 = (longlong *)0x0;
        local_1e0 = '\0';
        local_1d8 = (longlong *)0x0;
        local_1d0 = '\0';
        pplVar11 = &local_1d8;
        local_1f8 = lVar6;
        FUN_012cc0c0(pplVar11,&local_1e8,0,0);
        pVar9 = (pthread_key_t)pplVar11;
        if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
          (**(code **)(*local_1d8 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
          (**(code **)(*local_1e8 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_1f0 != '\0') && (local_1f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_012ccb50();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313ad0();
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01f27fe0();
        (**(code **)(*local_f0 + 0x768))();
        plVar12 = local_40;
        local_f8 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_f8 = '\x01';
        local_100 = plVar12;
        local_1c0 = '\0';
        local_1c8 = (longlong *)0x0;
        local_1b8 = (longlong *)0x0;
        local_1b0 = '\0';
        pplVar11 = &local_1b8;
        FUN_012cc0c0(pplVar11,&local_1c8,0,0);
        pVar9 = (pthread_key_t)pplVar11;
        if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
          (**(code **)(*local_1b8 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
          (**(code **)(*local_1c8 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb480();
      if (local_90 == '\0') {
        if (local_98 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_98 != 0) {
        local_90 = '\0';
        local_98 = 0;
        local_80 = -1;
LAB_007e71f4:
        do {
          plVar12 = local_68;
          lVar6 = (longlong)local_80;
          local_80 = local_80 + 1;
          if (*(int *)(lVar8 + 0xc) <= local_80) goto LAB_007e6740;
          lVar10 = *(longlong *)(lVar8 + 0x10);
          local_98 = *(longlong *)(lVar10 + 8 + lVar6 * 8);
          pvVar7 = _pthread_getspecific((pthread_key_t)lVar10);
          pVar9 = (pthread_key_t)lVar10;
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_0124d450();
          if (cVar3 != '\0') {
            pvVar7 = _pthread_getspecific(pVar9);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124c6e0();
            if (local_60 == '\0') {
              if (local_68 == (longlong *)0x0) goto LAB_007e71f4;
              FUN_00d50b00();
            }
            else if (local_68 == (longlong *)0x0) goto LAB_007e71f4;
            local_60 = '\0';
            local_68 = (longlong *)0x0;
            local_50 = -1;
            while( true ) {
              lVar6 = (longlong)local_50;
              local_50 = local_50 + 1;
              if (*(int *)((longlong)plVar12 + 0xc) <= local_50) break;
              lVar10 = plVar12[2];
              local_68 = *(longlong **)(lVar10 + 8 + lVar6 * 8);
              local_38 = '\0';
              local_40 = local_68;
              FUN_00d235a0();
              pVar9 = (pthread_key_t)lVar10;
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar3 = FUN_01397570();
              if (cVar3 != '\0') {
                local_38 = '\0';
                local_40 = local_68;
                FUN_00d235a0();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_00115190();
            FUN_00d50b20();
          }
        } while( true );
      }
    }
    FUN_007ead60();
    local_b8 = plVar15;
  }
  fVar16 = DAT_02390124 - *(float *)(unaff_RDI + 0x38);
  fVar17 = DAT_02391090 * fVar16;
  iVar1 = *(int *)((longlong)puVar4 + 0xc);
  if (iVar1 == 0) {
    *(float *)(unaff_RDI + 0x38) = fVar17 + *(float *)(unaff_RDI + 0x38);
    if (puVar5 == (undefined8 *)0x0) goto LAB_007e7e12;
  }
  else {
    if (*(int *)((longlong)puVar5 + 0xc) == 0) {
      uVar13 = 0;
      plVar15 = (longlong *)0x0;
    }
    else {
      *(float *)(unaff_RDI + 0x3c) = fVar16 * DAT_02390120;
      local_128 = 0;
      (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
      FUN_00d50b00();
      local_128 = '\x01';
      local_1a0 = '\0';
      local_1a8 = puVar5;
      local_130 = (longlong *)(unaff_RDI + 0x10);
      FUN_013206a0();
      if (local_c8 == (longlong *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar14 = (undefined7)((ulonglong)unaff_R13 >> 8);
        if (local_c0 == '\0') {
          FUN_00d50b00();
          uVar13 = CONCAT71(uVar14,1);
        }
        else {
          local_c0 = '\0';
          uVar13 = CONCAT71(uVar14,1);
        }
      }
      if ((local_1a0 != '\0') && (local_1a8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      plVar15 = local_c8;
      if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
        (**(code **)(*local_130 + 0x10))();
        FUN_00d50b20();
      }
    }
    lVar8 = *(longlong *)(unaff_RDI + 0x28);
    if (lVar8 != 0) {
      local_228 = uVar13;
      local_220 = plVar15;
      if (0 < *(int *)(lVar8 + 0xc)) {
        pVar9 = 0;
        local_230 = lVar8;
        do {
          local_144 = pVar9;
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004a1110();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313ad0();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb480();
          local_118 = local_c8;
          if (local_c0 == '\0') {
            if (local_c8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = '\0';
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar15 = local_118;
          if (local_118 != (longlong *)0x0) {
            local_60 = '\0';
            local_68 = (longlong *)0x0;
            local_50 = -1;
            while( true ) {
              lVar8 = (longlong)local_50;
              local_50 = local_50 + 1;
              if (*(int *)((longlong)plVar15 + 0xc) <= local_50) break;
              lVar6 = plVar15[2];
              local_68 = *(longlong **)(lVar6 + 8 + lVar8 * 8);
              pvVar7 = _pthread_getspecific((pthread_key_t)lVar6);
              pVar9 = (pthread_key_t)lVar6;
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar3 = FUN_0124d450();
              if (cVar3 != '\0') {
                pvVar7 = _pthread_getspecific(pVar9);
                plVar12 = local_68;
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  plVar12 = (longlong *)local_68[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar12 + 0x3a8))();
                lVar8 = DAT_02729550;
                if (DAT_02729550 != 0) {
                  FUN_00d50b00();
                }
                local_238 = lVar8;
                FUN_00083ea0(2,&local_238);
                FUN_000b4da0();
                local_120 = local_40;
                if (local_38 == '\0') {
                  if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                     (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_38 = '\0';
                }
                if ((local_a0 != '\0') && (CONCAT44(uStack_a4,local_a8) != 0)) {
                  FUN_00d50b20();
                }
                if (((char)local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (lVar8 != 0) {
                  FUN_00d50b20();
                }
                if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                lVar8 = DAT_026f6f70;
                if (DAT_026f6f70 != 0) {
                  FUN_00d50b00();
                }
                lVar6 = DAT_02703540;
                local_198 = lVar8;
                local_190 = '\x01';
                if (DAT_02703540 != 0) {
                  FUN_00d50b00();
                }
                local_188 = lVar6;
                local_180 = '\x01';
                local_178 = local_120;
                local_170 = '\0';
                pVar9 = (pthread_key_t)&local_178;
                FUN_00d31230();
                plVar12 = local_40;
                if (local_38 == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_c8 = plVar12;
                FUN_00172e90();
                if (plVar12 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_180 != '\0') && (local_188 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_190 != '\0') && (local_198 != 0)) {
                  FUN_00d50b20();
                }
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0124c6e0();
                if (plVar12 != (longlong *)0x0) {
                  FUN_00d50b00();
                  local_c8 = (longlong *)0x0;
                  local_b8 = plVar12;
                  local_b0 = -1;
                  while( true ) {
                    local_a8 = 0;
                    lVar8 = (longlong)local_b0;
                    local_b0 = local_b0 + 1;
                    if (*(int *)((longlong)plVar12 + 0xc) <= local_b0) break;
                    local_c8 = *(longlong **)(plVar12[2] + 8 + lVar8 * 8);
                    pvVar7 = _pthread_getspecific((pthread_key_t)plVar12[2]);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_160 = '\0';
                    local_168 = (longlong *)0x0;
                    local_158 = (longlong *)0x0;
                    local_150 = '\0';
                    FUN_01397bb0(0,&local_158);
                    if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
                      (**(code **)(*local_158 + 0x10))();
                      FUN_00d50b20();
                    }
                    if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
                      (**(code **)(*local_168 + 0x10))();
                      FUN_00d50b20();
                    }
                    *(float *)(unaff_RDI + 0x38) =
                         *(float *)(unaff_RDI + 0x38) + fVar17 / (float)iVar1;
                  }
                  FUN_00115190();
                  FUN_00d50b20();
                }
                local_c0 = '\0';
                if (local_120 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_00115e00();
            FUN_00d50b20();
          }
          pVar9 = local_144 + 1;
        } while ((int)pVar9 < *(int *)(local_230 + 0xc));
      }
      FUN_007ead60();
      uVar13 = local_228;
      plVar15 = local_220;
    }
    if (*(int *)((longlong)puVar5 + 0xc) != 0) {
      *(float *)(unaff_RDI + 0x38) = *(float *)(unaff_RDI + 0x3c) + *(float *)(unaff_RDI + 0x38);
    }
    if (((char)uVar13 != '\0') && (plVar15 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
LAB_007e7e12:
  FUN_00d50b20();
  return;
LAB_007e6740:
  FUN_00115e00();
  FUN_00d50b20();
  goto LAB_007e675e;
}


