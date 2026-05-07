// ===================================================================
// MDExportAudioController — Complete reconstructed pseudocode
// 8 functions
// ===================================================================


// ============================================================
// 007fbe30
// ============================================================
// Function: FUN_007fbe30
// Address: 007fbe30
// Size: 4270 bytes
// Class: MDExportAudioController

void FUN_007fbe30(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  byte bVar3;
  char cVar4;
  uint32_t uVar5;
  int iVar6;
  void *pvVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t *plVar12;
  int64_t lVar13;
  void* pVar14;
  void* pVar15;
  int64_t **pplVar16;
  int unaff_ESI;
  int iVar17;
  int64_t this_ptr;
  int iVar18;
  int64_t **pplVar19;
  bool bVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  double dVar23;
  int64_t *local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  uint32_t local_f0;
  uint32_t local_ec;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  uVar21 = FUN_00c9fe20();
  lVar2 = local_58;
  local_80 = (int64_t *)CONCAT71(local_80._1_7_,local_50[0]);
  pplVar16 = &local_80;
  if (local_50[0] != '\0') {
    pplVar16 = (int64_t **)local_50;
  }
  *(char *)pplVar16 = '\0';
  if ((local_50[0] != '\0') && (lVar2 != 0)) {
    uVar21 = FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + (int64_t)unaff_ESI * 8);
  if (plVar1 != (int64_t *)0x0) {
    uVar21 = FUN_00d50b00();
  }
  local_b0 = plVar1;
  if ((char)local_80 != '\0') {
    uVar21 = FUN_00d50b20();
  }
  local_180 = local_b0;
  local_178 = '\0';
  FUN_007fdf30(uVar21,&local_180);
  lVar2 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x80);
  (**(code **)(*local_b0 + 0x468))();
  local_d0 = local_58;
  local_c8 = 0;
  if (local_50[0] == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  local_c8 = '\x01';
  uVar21 = (**(code **)(*plVar1 + 0x968))();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    uVar21 = FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    uVar21 = FUN_00d50b20();
  }
  local_170 = lVar2;
  local_168 = '\0';
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x18))(uVar21,unaff_ESI);
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x28))();
  local_f0 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x30))();
  uVar21 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x38))();
  local_160 = lVar2;
  local_158 = '\0';
  uVar22 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x40))
                     (*(void*)(this_ptr + 0xee),unaff_ESI);
  local_d8 = param_2;
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  lVar11 = local_58;
  pplVar16 = &local_a8;
  pplVar19 = (int64_t **)local_50;
  if (local_50[0] == '\0') {
    pplVar19 = pplVar16;
  }
  local_a8._0_1_ = local_50[0];
  *(char *)pplVar19 = '\0';
  local_ec = uVar5;
  if ((local_50[0] != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific((void*)pplVar16);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  plVar1 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if (((char)local_a8 != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  uVar8 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x48))(uVar22,local_d8);
  *(void*)(this_ptr + 0xb8) = uVar8;
  *(void*)(this_ptr + 0xc0) = 0;
  uVar8 = FUN_00aea410();
  *(void*)(this_ptr + 0xb0) = uVar8;
  plVar9 = (int64_t *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar9 + 0x18))();
  plVar12 = *(int64_t **)(this_ptr + 0xa0);
  if (plVar12 == plVar9) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0xa0) = plVar9;
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_012dc370();
  local_150 = plVar1;
  local_148 = '\0';
  FUN_012d1940();
  if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x398))(uVar21);
  FUN_00b335a0();
  (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x3a0))();
  (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x418))();
  plVar12 = g_026e1800;
  if (*(char *)(this_ptr + 0xed) != '\0') {
    if (g_026e1800 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    dVar23 = (double)FUN_00e7d6f0();
    uVar10 = (uint64_t)(dVar23 * g_023907c0);
    dVar23 = dVar23 * g_023907c0 - g_023907c8;
    FUN_0071a120();
    if ((((local_50[0] == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != 0)) {
      FUN_00d50b20();
    }
    bVar3 = (byte)(((int64_t)dVar23 & (int64_t)uVar10 >> 0x3f | uVar10) / 3);
    local_80 = plVar12;
    local_78 = '\0';
    FUN_000175c0();
    lVar11 = local_58;
    if (local_50[0] == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar11 != 0) {
      local_50[0] = '\0';
      local_58 = lVar11;
      bVar3 = FUN_00c70bc0();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    pVar14 = 2;
    if ((lVar11 != 0 & bVar3) != 0) goto LAB_007fc774;
  }
  if (lVar2 != 0) {
    local_50[0] = '\0';
    local_58 = 0;
    local_48 = lVar2;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    do {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar17 = -local_40._4_4_;
        }
        else {
          iVar17 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar17);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar17 = 0;
        }
        local_40 = CONCAT44(iVar17,(int)local_40);
      }
      lVar11 = (int64_t)(int)local_40;
      iVar17 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar17);
      if (*(int *)(local_48 + 0xc) <= iVar17) {
        pVar14 = 1;
        goto LAB_007fc75c;
      }
      local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar11 * 8);
      pvVar7 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      plVar12 = local_80;
      if (local_78 == '\0') {
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_007fc578;
        }
      }
      else if (local_80 != (int64_t *)0x0) {
LAB_007fc578:
        local_78 = '\0';
        local_80 = (int64_t *)0x0;
        local_d8 = plVar12;
        local_70 = plVar12;
        local_68 = 0xffffffff;
        local_60 = 0;
        while( true ) {
          lVar11 = (int64_t)(int)local_68;
          iVar18 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar18);
          iVar17 = *(int *)((int64_t)local_70 + 0xc);
          if (iVar17 <= iVar18) break;
          lVar13 = local_70[2];
          local_80 = *(int64_t **)(lVar13 + 8 + lVar11 * 8);
          pvVar7 = _pthread_getspecific((void*)lVar13);
          pVar14 = (void*)lVar13;
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126ef70();
          if (CONCAT71(local_a8._1_7_,(char)local_a8) == 0) {
            bVar20 = false;
            lVar11 = 0;
          }
          else {
            pvVar7 = _pthread_getspecific(pVar14);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126ef70();
            plVar12 = local_140;
            pvVar7 = _pthread_getspecific(pVar14);
            plVar9 = local_140;
            if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), plVar12 = plVar9, lVar11 != 0))
            {
              plVar12 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
            }
            iVar6 = (**(code **)(*plVar12 + 0x380))();
            bVar20 = iVar6 == 2;
            if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            lVar11 = CONCAT71(local_a8._1_7_,(char)local_a8);
          }
          if ((local_a0 != '\0') && (lVar11 != 0)) {
            FUN_00d50b20();
          }
          if (bVar20) break;
          if (local_68._4_4_ != 0) {
            if (local_68._4_4_ < 1) {
              iVar17 = -local_68._4_4_;
            }
            else {
              local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar17 = 0;
            }
            local_68 = CONCAT44(iVar17,(int)local_68);
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
        if (iVar18 < iVar17) goto code_r0x007fc74e;
      }
    } while( true );
  }
  pVar14 = 1;
  goto LAB_007fc774;
code_r0x007fc74e:
  pVar14 = 2;
LAB_007fc75c:
  FUN_000be170();
LAB_007fc774:
  local_130 = local_b0;
  local_128 = '\0';
  local_120 = 0;
  local_118 = '\0';
  pVar15 = pVar14;
  FUN_00b82410(uVar21,local_f0,local_ec,0);
  lVar11 = *(int64_t *)(this_ptr + 0xa8);
  lVar13 = lVar11;
  if (lVar11 != local_58) {
    if (local_50[0] == '\0') {
      if (local_58 == 0) {
        lVar13 = 0;
        goto LAB_007fc7eb;
      }
      FUN_00d50b00();
      lVar11 = *(int64_t *)(this_ptr + 0xa8);
      *(int64_t *)(this_ptr + 0xa8) = local_58;
      lVar13 = local_58;
    }
    else {
      local_50[0] = '\0';
      lVar13 = local_58;
LAB_007fc7eb:
      *(int64_t *)(this_ptr + 0xa8) = lVar13;
    }
    pVar15 = (void*)lVar11;
    if (lVar11 != 0) {
      FUN_00d50b20();
      lVar13 = local_58;
    }
  }
  if ((local_50[0] != '\0') && (lVar13 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xa8) == 0) {
    *(void*)(this_ptr + 0xd4) = 0x101;
    goto LAB_007fcf04;
  }
  if ((pVar14 == 1) && (lVar2 != 0)) {
    local_50[0] = '\0';
    local_58 = 0;
    local_48 = lVar2;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar17 = -local_40._4_4_;
        }
        else {
          iVar17 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar17);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar17 = 0;
        }
        local_40 = CONCAT44(iVar17,(int)local_40);
      }
      lVar11 = (int64_t)(int)local_40;
      iVar17 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar17);
      if (*(int *)(local_48 + 0xc) <= iVar17) break;
      lVar13 = *(int64_t *)(local_48 + 0x10);
      local_58 = *(int64_t *)(lVar13 + 8 + lVar11 * 8);
      pvVar7 = _pthread_getspecific((void*)lVar13);
      pVar14 = (void*)lVar13;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7d10();
      plVar12 = local_80;
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar12 != (int64_t *)0x0) {
        pvVar7 = _pthread_getspecific(pVar14);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7d10();
        pvVar7 = _pthread_getspecific(pVar14);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f2240();
        plVar12 = local_80;
        if (local_78 == '\0') {
          if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
             (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_78 = '\0';
        }
        if ((local_a0 != '\0') && (CONCAT71(local_a8._1_7_,(char)local_a8) != 0)) {
          FUN_00d50b20();
        }
        if (plVar12 != (int64_t *)0x0) {
          local_78 = '\0';
          local_80 = (int64_t *)0x0;
          local_70 = plVar12;
          local_68 = 0xffffffff;
          local_60 = 0;
          local_68._4_4_ = 0;
          while( true ) {
            if (local_68._4_4_ != 0) {
              if (local_68._4_4_ < 1) {
                iVar17 = -local_68._4_4_;
              }
              else {
                iVar17 = (int)local_68 - local_68._4_4_;
                local_68 = CONCAT44(local_68._4_4_,iVar17);
                FUN_00d23690();
                local_60 = local_60 + local_68._4_4_;
                iVar17 = 0;
              }
              local_68 = CONCAT44(iVar17,(int)local_68);
            }
            lVar11 = (int64_t)(int)local_68;
            iVar17 = (int)local_68 + 1;
            local_68 = CONCAT44(local_68._4_4_,iVar17);
            if (*(int *)((int64_t)local_70 + 0xc) <= iVar17) break;
            plVar12 = *(int64_t **)(local_70[2] + 8 + lVar11 * 8);
            local_80 = plVar12;
            FUN_004fbac0();
            pplVar16 = (int64_t **)&g_02802688;
            if (plVar12 != (int64_t *)0x0) {
              (**(code **)(*plVar12 + 0x360))();
              cVar4 = FUN_00e85ea0();
              pplVar16 = &local_80;
              if (cVar4 == '\0') {
                pplVar16 = (int64_t **)&g_02802688;
              }
            }
            if (*(char *)(pplVar16 + 1) == '\0') {
              if (*pplVar16 != (int64_t *)0x0) {
                FUN_00d50b00();
                goto LAB_007fcb41;
              }
            }
            else {
              *(void*)(pplVar16 + 1) = 0;
              if (*pplVar16 != (int64_t *)0x0) {
LAB_007fcb41:
                pvVar7 = _pthread_getspecific((void*)pplVar16);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012de780(0);
                FUN_00d50b20();
              }
            }
          }
          FUN_007fe1f0();
          FUN_00d50b20();
        }
      }
    }
    lVar11 = local_48;
    FUN_000be170();
    pVar15 = (void*)lVar11;
  }
  pvVar7 = _pthread_getspecific(pVar15);
  if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    pVar15 = (void*)plVar1;
  }
  FUN_00e8b990();
  local_108 = '\0';
  local_110 = (int64_t *)0x0;
  FUN_00cb1fa0();
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    (**(code **)(*local_110 + 0x10))();
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar15);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  FUN_00cbbfd0();
  (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x368))();
  FUN_00ae9740(2,g_0280d348);
  (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x400))
            (g_0280d348,*(void*)(this_ptr + 0xb0));
  if (0 < *(int64_t *)(this_ptr + 0xb8)) {
    plVar12 = *(int64_t **)(this_ptr + 0xa0);
    FUN_0141c350(uVar22);
    local_c0 = local_58;
    local_b8 = 0;
    if (local_50[0] == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    local_b8 = '\x01';
    (**(code **)(*plVar12 + 0x690))();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar12 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar12 + 0x18))();
  local_e0 = 0;
  uVar21 = FUN_00d50b00();
  lVar11 = g_0272fae8;
  local_e0 = '\x01';
  local_e8 = this_ptr;
  if (g_0272fae8 != 0) {
    uVar21 = FUN_00d50b00();
  }
  local_58 = lVar11;
  local_50[0] = '\0';
  FUN_00ca0840(uVar21,&local_58);
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_f8 = '\0';
  local_100 = plVar12;
  FUN_00da62d0(g_02391038,&local_100);
  lVar11 = *(int64_t *)(this_ptr + 0x98);
  lVar13 = lVar11;
  if (lVar11 != local_58) {
    if (local_50[0] == '\0') {
      if (local_58 == 0) {
        lVar13 = 0;
        goto LAB_007fce87;
      }
      FUN_00d50b00();
      lVar11 = *(int64_t *)(this_ptr + 0x98);
      *(int64_t *)(this_ptr + 0x98) = local_58;
      lVar13 = local_58;
    }
    else {
      local_50[0] = '\0';
      lVar13 = local_58;
LAB_007fce87:
      *(int64_t *)(this_ptr + 0x98) = lVar13;
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
      lVar13 = local_58;
    }
  }
  if ((local_50[0] != '\0') && (lVar13 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_007fcf04:
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_b0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 007fd7a0
// ============================================================
// Function: FUN_007fd7a0
// Address: 007fd7a0
// Size: 1704 bytes
// Class: MDExportAudioController

void FUN_007fd7a0(uint32_t param_1,float param_2,uint64_t param_3,float param_4)

{
  bool bVar1;
  int iVar2;
  int64_t lVar3;
  uint8_t auVar4 [16];
  char cVar5;
  uint uVar6;
  int64_t lVar7;
  float *pfVar8;
  int64_t lVar9;
  int iVar10;
  uint64_t uVar11;
  float fVar12;
  float fVar13;
  float extraout_XMM0_Da;
  uint32_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  float fVar17;
  float in_XMM4_Da;
  int64_t local_78;
  char local_70;
  float local_68;
  float local_64;
  int64_t local_60;
  char local_58;
  float local_4c;
  uint8_t local_48 [16];
  float local_34;
  
  lVar3 = g_0272fae8;
  if (g_0272fae8 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_78 = lVar3;
  local_70 = '\x01';
  FUN_000175c0(param_1,&local_78);
  lVar3 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != 0) && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_4c = g_02390124;
  if (*(char *)(lVar3 + 0xd0) != '\0') {
    local_4c = *(float *)(lVar3 + 0xe8);
  }
  lVar9 = *(int64_t *)(lVar3 + 0xb8);
  *(void*)(lVar3 + 0xe0) = 0;
  local_34 = 0.0;
  local_48 = ZEXT816(0);
  do {
    if ((lVar9 < 1) || (*(char *)(lVar3 + 0xd4) != '\0')) break;
    uVar6 = 0;
    if ((int)g_0280d348 < lVar9) {
      uVar6 = g_0280d348;
    }
    uVar6 = (int)lVar9 - uVar6;
    if ((int64_t)(int)g_0280d348 * 2 < lVar9) {
      uVar6 = g_0280d348;
    }
    uVar11 = (uint64_t)uVar6;
    FUN_00ae9740(2);
    if (0 < (int)uVar6) {
      *(int64_t *)(lVar3 + 0xc0) = *(int64_t *)(lVar3 + 0xc0) + uVar11;
    }
    (**(code **)(**(int64_t **)(lVar3 + 0xa0) + 0x400))(uVar11,*(void*)(lVar3 + 0xb0));
    iVar10 = uVar6 - 1;
    if ((local_4c != g_02390124) || (NAN(local_4c) || NAN(g_02390124))) {
      pfVar8 = (float *)**(void**)(lVar3 + 0xb0);
      (**(code **)(g_02786500 + 0x20))();
      local_68 = (float)local_48._0_4_;
      fVar13 = local_34;
      if (uVar6 != 0) {
        iVar2 = iVar10;
        if ((uVar6 & 1) != 0) {
          fVar13 = *pfVar8;
          param_2 = (float)local_48._0_4_;
          uVar14 = local_48._4_4_;
          uVar15 = local_48._8_4_;
          uVar16 = local_48._12_4_;
          if (!NAN(fVar13)) {
            fVar12 = fVar13;
            if (fVar13 <= local_34) {
              fVar12 = local_34;
            }
            param_2 = fVar13;
            uVar14 = 0;
            uVar15 = 0;
            uVar16 = 0;
            local_34 = fVar12;
            if ((float)local_48._0_4_ <= fVar13) {
              param_2 = (float)local_48._0_4_;
              uVar14 = local_48._4_4_;
              uVar15 = local_48._8_4_;
              uVar16 = local_48._12_4_;
            }
          }
          pfVar8 = pfVar8 + 1;
          local_48._4_4_ = uVar14;
          local_48._0_4_ = param_2;
          local_48._8_4_ = uVar15;
          local_48._12_4_ = uVar16;
          iVar2 = uVar6 - 2;
          param_4 = param_2;
          in_XMM4_Da = local_34;
        }
        local_68 = param_4;
        fVar13 = in_XMM4_Da;
        if (uVar6 != 1) {
          lVar7 = 0;
          fVar12 = (float)local_48._0_4_;
          fVar13 = local_34;
          do {
            param_2 = fVar13;
            local_68 = pfVar8[lVar7];
            if (NAN(local_68)) {
LAB_007fdb35:
              local_68 = fVar12;
            }
            else {
              fVar13 = local_68;
              if (local_68 <= param_2) {
                fVar13 = param_2;
              }
              param_2 = fVar13;
              if (fVar12 <= local_68) goto LAB_007fdb35;
            }
            fVar12 = pfVar8[lVar7 + 1];
            fVar13 = param_2;
            if (!NAN(fVar12)) {
              fVar13 = fVar12;
              if (fVar12 <= param_2) {
                fVar13 = param_2;
              }
              if (fVar12 < local_68) {
                local_68 = fVar12;
              }
            }
            lVar7 = lVar7 + 2;
            fVar12 = local_68;
          } while (iVar2 + 1 != (int)lVar7);
        }
      }
      pfVar8 = *(float **)(*(int64_t *)(lVar3 + 0xb0) + 8);
      local_64 = fVar13;
      fVar12 = (float)(**(code **)(g_02786500 + 0x20))(local_4c);
      param_4 = local_64;
      in_XMM4_Da = fVar13;
      if (uVar6 == 0) {
        local_34 = local_64;
        local_48 = ZEXT416((uint)local_68);
        fVar12 = local_68;
      }
      else {
        fVar13 = local_68;
        if ((uVar6 & 1) != 0) {
          fVar13 = *pfVar8;
          if (NAN(fVar13)) {
            local_34 = local_64;
            fVar12 = local_68;
          }
          else {
            local_34 = fVar13;
            if (fVar13 <= local_64) {
              local_34 = local_64;
            }
            fVar12 = local_68;
            param_2 = local_34;
            if (fVar13 < local_68) {
              fVar12 = fVar13;
              param_2 = fVar13;
            }
          }
          pfVar8 = pfVar8 + 1;
          iVar10 = uVar6 - 2;
          local_48 = ZEXT416((uint)fVar12);
          fVar13 = fVar12;
          param_4 = local_34;
        }
        if (uVar6 != 1) {
          lVar7 = 0;
          local_48 = ZEXT416((uint)fVar13);
          local_34 = param_4;
          do {
            fVar13 = pfVar8[lVar7];
            if (NAN(fVar13)) {
              fVar17 = pfVar8[lVar7 + 1];
              param_2 = local_34;
              if (!NAN(fVar17)) goto LAB_007fdd4a;
LAB_007fdd10:
              local_48._4_4_ = 0;
              fVar12 = (float)local_48._0_4_;
              auVar4 = local_48;
            }
            else {
              param_2 = fVar13;
              if (fVar13 <= local_34) {
                param_2 = local_34;
              }
              uVar14 = 0;
              uVar15 = 0;
              if ((float)local_48._0_4_ <= fVar13) {
                fVar13 = (float)local_48._0_4_;
                uVar14 = local_48._8_4_;
                uVar15 = local_48._12_4_;
              }
              fVar17 = pfVar8[lVar7 + 1];
              local_48._0_4_ = fVar13;
              local_48._8_4_ = uVar14;
              local_48._12_4_ = uVar15;
              local_34 = param_2;
              if (NAN(fVar17)) goto LAB_007fdd10;
LAB_007fdd4a:
              param_4 = fVar17;
              if (fVar17 <= local_34) {
                param_4 = local_34;
              }
              fVar12 = (float)local_48._0_4_;
              param_2 = local_34;
              auVar4 = ZEXT416((uint)fVar17);
              local_34 = param_4;
              if ((float)local_48._0_4_ <= fVar17) goto LAB_007fdd10;
            }
            local_48 = auVar4;
            lVar7 = lVar7 + 2;
          } while (iVar10 + 1 != (int)lVar7);
        }
      }
    }
    else {
      fVar12 = local_4c;
      if (uVar6 != 0) {
        pfVar8 = (float *)**(void**)(lVar3 + 0xb0);
        iVar2 = iVar10;
        fVar12 = local_4c;
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
        fVar17 = param_2;
        fVar13 = local_34;
        auVar4 = local_48;
        if ((uVar6 & 1) != 0) {
          fVar13 = *pfVar8;
          fVar12 = (float)local_48._0_4_;
          uVar14 = local_48._4_4_;
          uVar15 = local_48._8_4_;
          uVar16 = local_48._12_4_;
          if (!NAN(fVar13)) {
            fVar17 = fVar13;
            if (fVar13 <= local_34) {
              fVar17 = local_34;
            }
            fVar12 = fVar13;
            uVar14 = 0;
            uVar15 = 0;
            uVar16 = 0;
            local_34 = fVar17;
            if ((float)local_48._0_4_ <= fVar13) {
              fVar12 = (float)local_48._0_4_;
              uVar14 = local_48._4_4_;
              uVar15 = local_48._8_4_;
              uVar16 = local_48._12_4_;
            }
          }
          pfVar8 = pfVar8 + 1;
          local_48._4_4_ = uVar14;
          local_48._0_4_ = fVar12;
          local_48._8_4_ = uVar15;
          local_48._12_4_ = uVar16;
          iVar2 = uVar6 - 2;
          fVar17 = local_34;
          fVar13 = local_34;
          auVar4 = local_48;
        }
        local_34 = fVar17;
        local_48._12_4_ = uVar16;
        local_48._8_4_ = uVar15;
        local_48._4_4_ = uVar14;
        local_48._0_4_ = fVar12;
        if (uVar6 != 1) {
          lVar7 = 0;
          local_48._0_4_ = auVar4._0_4_;
          local_48._4_4_ = auVar4._4_4_;
          local_48._8_4_ = auVar4._8_4_;
          local_48._12_4_ = auVar4._12_4_;
          local_34 = fVar13;
          do {
            fVar12 = pfVar8[lVar7];
            if (NAN(fVar12)) {
LAB_007fdb85:
              fVar12 = (float)local_48._0_4_;
              uVar14 = local_48._4_4_;
              uVar15 = local_48._8_4_;
              uVar16 = local_48._12_4_;
              param_4 = local_34;
            }
            else {
              param_4 = fVar12;
              if (fVar12 <= local_34) {
                param_4 = local_34;
              }
              uVar14 = 0;
              uVar15 = 0;
              uVar16 = 0;
              local_34 = param_4;
              if ((float)local_48._0_4_ <= fVar12) goto LAB_007fdb85;
            }
            local_48._12_4_ = uVar16;
            local_48._8_4_ = uVar15;
            local_48._4_4_ = uVar14;
            local_48._0_4_ = fVar12;
            fVar12 = pfVar8[lVar7 + 1];
            local_34 = param_4;
            if (!NAN(fVar12)) {
              local_34 = fVar12;
              if (fVar12 <= param_4) {
                local_34 = param_4;
              }
              if (fVar12 < (float)local_48._0_4_) {
                local_48._0_4_ = fVar12;
                local_48._4_4_ = 0;
                local_48._8_4_ = 0;
                local_48._12_4_ = 0;
              }
            }
            lVar7 = lVar7 + 2;
          } while (iVar2 + 1 != (int)lVar7);
        }
        pfVar8 = (float *)(*(void**)(lVar3 + 0xb0))[1];
        fVar12 = (float)local_48._0_4_;
        uVar14 = local_48._4_4_;
        uVar15 = local_48._8_4_;
        uVar16 = local_48._12_4_;
        param_2 = local_34;
        if ((uVar6 & 1) != 0) {
          fVar13 = *pfVar8;
          if (!NAN(fVar13)) {
            param_4 = fVar13;
            if (fVar13 <= local_34) {
              param_4 = local_34;
            }
            local_34 = param_4;
            if (fVar13 < (float)local_48._0_4_) {
              local_48._4_4_ = 0;
              local_48._8_4_ = 0;
              local_48._12_4_ = 0;
              local_48._0_4_ = fVar13;
            }
          }
          pfVar8 = pfVar8 + 1;
          iVar10 = uVar6 - 2;
          fVar12 = (float)local_48._0_4_;
          uVar14 = local_48._4_4_;
          uVar15 = local_48._8_4_;
          uVar16 = local_48._12_4_;
          auVar4 = local_48;
          param_2 = local_34;
          fVar13 = local_34;
        }
        local_34 = fVar13;
        local_48 = auVar4;
        if (uVar6 != 1) {
          lVar7 = 0;
          local_48._4_4_ = uVar14;
          local_48._0_4_ = fVar12;
          local_48._8_4_ = uVar15;
          local_48._12_4_ = uVar16;
          local_34 = param_2;
          do {
            fVar13 = pfVar8[lVar7];
            if (NAN(fVar13)) {
              fVar17 = pfVar8[lVar7 + 1];
              param_2 = local_34;
              if (!NAN(fVar17)) goto LAB_007fdbea;
LAB_007fdbb0:
              fVar12 = (float)local_48._0_4_;
              auVar4 = local_48;
            }
            else {
              param_2 = fVar13;
              if (fVar13 <= local_34) {
                param_2 = local_34;
              }
              uVar14 = 0;
              uVar15 = 0;
              uVar16 = 0;
              if ((float)local_48._0_4_ <= fVar13) {
                fVar13 = (float)local_48._0_4_;
                uVar14 = local_48._4_4_;
                uVar15 = local_48._8_4_;
                uVar16 = local_48._12_4_;
              }
              fVar17 = pfVar8[lVar7 + 1];
              local_48._0_4_ = fVar13;
              local_48._4_4_ = uVar14;
              local_48._8_4_ = uVar15;
              local_48._12_4_ = uVar16;
              local_34 = param_2;
              if (NAN(fVar17)) goto LAB_007fdbb0;
LAB_007fdbea:
              param_4 = fVar17;
              if (fVar17 <= local_34) {
                param_4 = local_34;
              }
              fVar12 = (float)local_48._0_4_;
              param_2 = local_34;
              auVar4 = ZEXT416((uint)fVar17);
              local_34 = param_4;
              if ((float)local_48._0_4_ <= fVar17) goto LAB_007fdbb0;
            }
            local_48 = auVar4;
            lVar7 = lVar7 + 2;
          } while (iVar10 + 1 != (int)lVar7);
        }
      }
    }
    lVar9 = lVar9 - (int)uVar6;
    if ((lVar9 < 0) &&
       (cVar5 = (**(code **)(**(int64_t **)(lVar3 + 0xa0) + 0x5e8))(fVar12),
       fVar12 = extraout_XMM0_Da, cVar5 == '\0')) {
      param_2 = 0.0;
      if ((int)uVar6 < 1) break;
      lVar7 = (int64_t)(int)uVar6 + 1;
      while( true ) {
        uVar6 = (uint)uVar11;
        fVar12 = *(float *)(**(int64_t **)(lVar3 + 0xb0) + -8 + lVar7 * 4);
        bVar1 = true;
        if ((fVar12 != 0.0) || (NAN(fVar12))) break;
        fVar12 = *(float *)((*(int64_t **)(lVar3 + 0xb0))[1] + -8 + lVar7 * 4);
        if ((fVar12 != 0.0) || (NAN(fVar12))) break;
        uVar11 = (uint64_t)(uVar6 - 1);
        lVar7 = lVar7 + -1;
        if (lVar7 < 2) goto LAB_007fdd8f;
      }
    }
    else {
      bVar1 = false;
    }
    if (0 < (int)uVar6) {
      FUN_00b87ba0(fVar12,uVar6);
    }
  } while (!bVar1);
LAB_007fdd8f:
  FUN_0141cb10();
  lVar9 = local_60;
  if ((((local_58 == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58 != '\0')) &&
     (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_0141cc00();
  (**(code **)(**(int64_t **)(lVar3 + 0xa0) + 0x400))(1,*(void*)(lVar3 + 0xb0));
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  fVar13 = (float)(local_48._0_4_ ^ g_023945e0);
  if ((float)(local_48._0_4_ ^ g_023945e0) <= local_34) {
    fVar13 = local_34;
  }
  *(float *)(lVar3 + 0xe0) = fVar13;
  FUN_00d50b20();
  return;
}



// ============================================================
// 00129ad0
// ============================================================
// Function: FUN_00129ad0
// Address: 00129ad0
// Size: 2488 bytes
// Class: MDExportAudioController
// String references:
//   "MDExportAudioController"

void FUN_00129ad0(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  int64_t *plVar6;
  void *pvVar7;
  char *pcVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t *this_ptr;
  int64_t **pplVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  int64_t local_188;
  char local_180;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  uint32_t local_ac;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58 [8];
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_0012b400();
  local_38 = plVar6;
  (**(code **)(*plVar6 + 0x18))();
  FUN_00757c60();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_80 = (int64_t *)FUN_00e8b990();
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00763390();
  lVar9 = *this_ptr;
  lVar1 = local_38[0x18];
  if (lVar1 != lVar9) {
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    local_38[0x18] = lVar9;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar6 = local_38;
  uVar12 = FUN_00127790();
  plVar10 = local_60;
  plVar6 = (int64_t *)plVar6[0xf];
  if (plVar6 == local_60) {
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  else {
    if ((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b00();
      plVar6 = (int64_t *)local_38[0xf];
    }
    local_38[0xf] = (int64_t)plVar10;
    if (plVar6 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b20();
    }
  }
  lVar9 = g_027259a0;
  if (local_38[0xf] == 0) {
    if (g_027259a0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    lVar1 = g_026e18b8;
    if (g_026e18b8 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_160 = lVar1;
    local_158 = '\x01';
    FUN_01f6ca30(uVar12,&local_160);
    (**(code **)(*local_60 + 0x5e0))();
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0012a3b2;
  }
  FUN_00c9fe20();
  plVar6 = local_60;
  local_78 = local_58[0];
  pcVar8 = local_58;
  if (local_58[0] == '\0') {
    pcVar8 = &local_78;
  }
  *pcVar8 = '\0';
  local_ac = uVar4;
  if ((local_58[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar5 = *(int *)((int64_t)plVar6 + 0xc);
  if (local_78 != '\0') {
    FUN_00d50b20();
  }
  if (0 < iVar5) {
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    local_68 = plVar6;
    FUN_00c9fe20();
    plVar6 = local_60;
    pcVar8 = local_58;
    if (local_58[0] == '\0') {
      pcVar8 = &local_78;
    }
    local_78 = local_58[0];
    *pcVar8 = '\0';
    if ((local_58[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 == '\0') {
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_00129de2;
      }
    }
    else if (plVar6 != (int64_t *)0x0) {
LAB_00129de2:
      local_58[0] = '\0';
      local_60 = (int64_t *)0x0;
      local_50 = plVar6;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_48._4_4_ = 0;
      while( true ) {
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            iVar5 = (int)local_48 - local_48._4_4_;
            local_48 = CONCAT44(local_48._4_4_,iVar5);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        lVar9 = (int64_t)(int)local_48;
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)((int64_t)local_50 + 0xc) <= iVar5) break;
        local_150 = *(int64_t **)(local_50[2] + 8 + lVar9 * 8);
        local_148 = '\0';
        local_60 = local_150;
        uVar4 = FUN_000ba510();
        local_88 = 0;
        lVar9 = CONCAT71(uStack_77,local_78);
        if (local_70 == '\0') {
          if (lVar9 != 0) {
            uVar4 = FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_88 = '\x01';
        local_140 = local_60;
        local_138 = '\0';
        local_90 = lVar9;
        uVar4 = FUN_0012aa40(uVar4,&local_140);
        local_98 = 0;
        lVar9 = *(int64_t *)(local_188 + 0x28);
        if (lVar9 != 0) {
          uVar4 = FUN_00d50b00();
        }
        local_98 = '\x01';
        local_a0 = lVar9;
        FUN_00122700(uVar4,&local_a0);
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_180 != '\0') && (local_188 != 0)) {
          FUN_00d50b20();
        }
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
          FUN_00d50b20();
        }
        if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_000be170();
      FUN_00d50b20();
    }
    plVar6 = local_68;
    FUN_00cb1f10();
    FUN_00db32a0();
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar10 = (int64_t *)FUN_00e8fc40();
    FUN_000161a0();
    *plVar10 = (int64_t)&g_02512820;
    plVar10[0xe] = 0;
    plVar10[0xf] = 0;
    plVar10[0x10] = 0;
    plVar10[0x11] = 0;
    plVar10[0x12] = 0;
    plVar10[0x13] = 0;
    plVar10[0x14] = 0;
    plVar10[0x15] = 0;
    plVar10[0x16] = 0;
    plVar10[0x17] = 0;
    plVar10[0x18] = 0;
    plVar10[0x19] = 0;
    *(void*)((int64_t)plVar10 + 0xce) = 0;
    plVar10[0x1b] = 0;
    plVar10[0x1c] = 0;
    *(void*)((int64_t)plVar10 + 0xe7) = 0;
    (*g_02512838)();
    local_130 = g_026e1860;
    if (g_026e1860 != 0) {
      FUN_00d50b00();
    }
    local_128 = '\x01';
    local_120 = 0;
    local_118 = '\0';
    local_110 = 0;
    local_108 = '\0';
    pplVar11 = &local_60;
    FUN_01e4fcf0(&local_110,&local_120);
    plVar2 = local_60;
    if ((g_026e2658 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026e25a8 = FUN_00015ff0();
      g_026e2590 = "MDExportAudioController";
      g_026e2598 = 0xf0;
      g_026e25a0 = FUN_00130570;
      g_026e25b0 = 0;
      ram_00000000026e25b8 = 0;
      g_026e25c0 = 0;
      g_026e2638 = 0;
      ram_00000000026e2640 = 0;
      g_026e2648 = 0;
      g_026e264a = 1;
      g_026e25c8 = 0;
      ram_00000000026e25d0 = 0;
      g_026e25d8 = 0;
      ram_00000000026e25e0 = 0;
      g_026e25e8 = 0;
      ram_00000000026e25f0 = 0;
      g_026e25f8 = 0;
      ram_00000000026e2600 = 0;
      g_026e2608 = 0;
      ram_00000000026e2610 = 0;
      g_026e2618 = 0;
      ram_00000000026e2620 = 0;
      g_026e2628 = 0;
      ram_00000000026e2630 = 0;
      g_026e2653 = 0;
      g_026e264b = 0;
      ___cxa_guard_release();
      plVar6 = local_68;
    }
    if (plVar2 == (int64_t *)0x0) {
LAB_0012a14c:
      pplVar11 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0012a14c;
    }
    plVar2 = *pplVar11;
    if (plVar10 != plVar2) {
      plVar10 = plVar2;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
        *(void*)(pplVar11 + 1) = 0;
      }
    }
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    local_100 = local_38 + 0xe;
    local_f8 = '\0';
    FUN_007faee0();
    if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
      (**(code **)(*local_100 + 0x10))();
      FUN_00d50b20();
    }
    local_e8 = '\0';
    local_f0 = plVar6;
    FUN_007faf50();
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_007fdfe0();
    FUN_007fdff0();
    local_d8 = '\0';
    local_e0 = plVar10;
    FUN_01d83990();
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_80 + 0x3b8))();
    cVar3 = FUN_007fe020();
    lVar9 = g_027259a0;
    if (cVar3 != '\0') {
      uVar4 = extraout_XMM0_Da;
      if (g_027259a0 != 0) {
        uVar4 = FUN_00d50b00();
      }
      lVar1 = g_026e18b8;
      local_d0 = lVar9;
      local_c8 = '\x01';
      if (g_026e18b8 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_c0 = lVar1;
      local_b8 = '\x01';
      FUN_01f6ca30(uVar4,&local_c0);
      (**(code **)(*local_60 + 0x5e0))();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_007635c0();
LAB_0012a3b2:
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 007fea30
// ============================================================
// Function: FUN_007fea30
// Address: 007fea30
// Size: 1760 bytes
// Class: MDExportAudioController

void FUN_007fea30(void* param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  bool bVar5;
  uint64_t uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  double local_48;
  int64_t local_38;
  char local_30;
  
  plVar1 = (int64_t *)(this_ptr + 0x18);
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) {
    plVar4 = (int64_t *)*plVar1;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      plVar4 = (int64_t *)*plVar1;
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
    }
    uVar6 = (**(code **)(*plVar4 + 0x378))();
    *(void*)(this_ptr + 0x20) = uVar6;
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_0152e9b0(0);
    *(void*)(this_ptr + 0x20) = uVar6;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) {
    plVar4 = (int64_t *)*plVar1;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      plVar4 = (int64_t *)*plVar1;
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
    }
    dVar7 = (double)(**(code **)(*plVar4 + 0x380))();
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_0152e9b0(0);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar8 = (double)FUN_01259650();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012641c0();
    if (local_38 == 0) {
      bVar5 = false;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012641c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      bVar5 = local_58 != 0;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    local_48 = dVar7 - dVar8;
    if (bVar5) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012641c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = (double)FUN_0152e9b0(0);
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012641c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar9 = (double)FUN_01259650();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      local_48 = local_48 - dVar9;
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar9 = (double)FUN_012646c0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_0125a280();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_01259520();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_0125a280();
    dVar9 = (dVar9 - dVar10) / (dVar11 - dVar12);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_012646c0();
    dVar7 = local_48 * dVar9 + (dVar7 - dVar8) * (g_0238fee8 - dVar9) + dVar10;
  }
  *(double *)(this_ptr + 0x28) = dVar7;
  return;
}



// ============================================================
// 001305f0
// ============================================================
// Function: FUN_001305f0
// Address: 001305f0
// Size: 4559 bytes
// Class: MDExportAudioController
// String references:
//   "MDExportAudioController"

void FUN_001305f0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_02512820;
  FUN_00131930();
  FUN_00131cd0();
  FUN_00132000();
  FUN_00132330();
  FUN_00132660();
  FUN_00132990();
  FUN_00132cc0();
  FUN_00132ff0();
  this_ptr[0x16] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_00133320();
    FUN_00e87980();
  }
  this_ptr[0x17] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_001334b0();
    FUN_00e87980();
  }
  this_ptr[0x18] = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_00133640();
    FUN_00e87980();
  }
  FUN_001337d0();
  *(void*)(this_ptr + 0x1a) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_00133b00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd1) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_00133c90();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd2) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_00133e20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_00133fb0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_00134140();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_001342d0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1b) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_00134460();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xdc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_001345f0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_00134780();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xe4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_00134910();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1d) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_00134aa0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xec) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_00134c30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xed) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_00134dc0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xee) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e264b == '\0') {
    FUN_00134f50();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 007fbb40
// ============================================================
// Function: FUN_007fbb40
// Address: 007fbb40
// Size: 573 bytes
// Class: MDExportAudioController

void FUN_007fbb40(void)

{
  int iVar1;
  void*puVar2;
  int64_t this_ptr;
  int64_t lVar3;
  char cVar4;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar5;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  int64_t *local_28;
  char local_20;
  
  if (*(int64_t *)(this_ptr + 0x98) != 0) {
    *(void*)(this_ptr + 0x98) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xa8) != 0) {
    FUN_00b881a0();
  }
  lVar3 = 0;
  if (*(int64_t **)(this_ptr + 0xa0) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x370))();
    lVar3 = *(int64_t *)(this_ptr + 0xa0);
  }
  if (lVar3 != 0) {
    *(void*)(this_ptr + 0xa0) = 0;
    FUN_00d50b20();
  }
  FUN_00aea540(2,g_0280d348);
  if (*(int64_t *)(this_ptr + 0xa8) != 0) {
    *(void*)(this_ptr + 0xa8) = 0;
    FUN_00d50b20();
  }
  if (*(char *)(this_ptr + 0xd4) == '\0') {
    *(int *)(this_ptr + 0xd8) = *(int *)(this_ptr + 0xd8) + 1;
    *(void*)(this_ptr + 0xe8) = 0x3f800000;
    puVar2 = (void*)(this_ptr + 0xd0);
    if ((*(char *)(this_ptr + 0xd0) == '\0') && (g_02390124 < *(float *)(this_ptr + 0xe0))) {
      *(void*)(this_ptr + 0xec) = 1;
      if (*(char *)(this_ptr + 0xd2) == '\0') {
        cVar4 = *(char *)(this_ptr + 0xd1);
      }
      else {
        *(void*)(this_ptr + 0xd2) = 0;
        iVar1 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x28))();
        local_38 = g_0272faf8;
        lVar3 = g_0272faf0;
        if (iVar1 == 0x44) {
          uVar5 = extraout_XMM0_Da;
          if (g_0272faf0 != 0) {
            uVar5 = FUN_00d50b00();
          }
          local_48 = lVar3;
          local_40 = '\x01';
          FUN_01e57490(uVar5,&local_48);
          iVar1 = (**(code **)(*local_28 + 0x5e0))();
          if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar5 = extraout_XMM0_Da;
          if (g_0272faf8 != 0) {
            uVar5 = FUN_00d50b00();
          }
          local_30 = '\x01';
          FUN_01e57490(uVar5,&local_38);
          iVar1 = (**(code **)(*local_28 + 0x5e0))();
          if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
        cVar4 = iVar1 == 0;
        *(char *)(this_ptr + 0xd1) = cVar4;
      }
      puVar2 = (void*)(this_ptr + 0xec);
      if (cVar4 != '\0') {
        *(void*)(this_ptr + 0xd0) = 1;
        *(int *)(this_ptr + 0xd8) = *(int *)(this_ptr + 0xd8) + -1;
        *(float *)(this_ptr + 0xe8) = (g_02390124 / *(float *)(this_ptr + 0xe0)) * g_0239428c;
      }
    }
    *puVar2 = 0;
  }
  return;
}



// ============================================================
// 007fb340
// ============================================================
// Function: FUN_007fb340
// Address: 007fb340
// Size: 735 bytes
// Class: MDExportAudioController
// String references:
//   "handleCancel"
//   "MDExportAudioController"
//   "handleTimer"

void FUN_007fb340(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_0280d350 = "handleCancel";
      g_0280d358 = &g_026e2590;
      g_0280d360 = 0;
      g_0280d368 = &g_0272fb00;
      g_0280d370 = FUN_007fe160;
      g_0280d378 = 0x5c1;
      g_0280d380 = 0;
      ram_000000000280d388 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280d398 = "handleTimer";
      g_0280d3a0 = &g_026e2590;
      g_0280d3a8 = 0;
      g_0280d3b0 = &g_0272fb00;
      g_0280d3b8 = FUN_007fe160;
      g_0280d3c0 = 0x5c9;
      g_0280d3c8 = 0;
      ram_000000000280d3d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 007ff930
// ============================================================
// Function: FUN_007ff930
// Address: 007ff930
// Size: 941 bytes
// Class: MDExportAudioController
// String references:
//   "handleTakeApplyToAll"
//   "handleTakeGrooveReferenceAction"
//   "handleTakeQuantizationAction"
//   "handlePluginListChanged"
//   "handleCustomChanged"
//   "handleReflectGroove"

void FUN_007ff930(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  return;
}

