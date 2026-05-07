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

