// Function: FUN_00803100
// Address: 00803100
// Size: 5326 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00803100(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int64_t lVar5;
  void *pvVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  void* pVar10;
  void* pVar11;
  uint64_t *puVar12;
  int iVar13;
  int64_t *plVar14;
  byte bVar15;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t unaff_R13;
  uint64_t unaff_R15;
  undefined7 uVar17;
  uint64_t uVar16;
  bool bVar18;
  uint64_t uVar19;
  double dVar20;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  int64_t local_1d0;
  uint8_t local_1c8;
  uint8_t local_1b8;
  uint64_t local_1b0;
  uint64_t local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  uint64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  uint64_t local_130;
  char local_128;
  int64_t local_110;
  int64_t local_108;
  int64_t local_100;
  uint64_t local_f8;
  int local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  int64_t local_d0;
  uint32_t local_c8;
  int local_c4;
  int local_c0;
  uint32_t uStack_bc;
  char local_b8;
  uint64_t local_b0;
  int64_t local_a8;
  uint64_t *local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  char local_70;
  int64_t local_68;
  int64_t local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48 [8];
  int64_t local_40;
  char local_38 [8];
  
  local_1a0 = *arg1;
  if (local_1a0 == 0) {
    return;
  }
  if (*(int *)(local_1a0 + 0xc) == 0) {
    return;
  }
  local_198 = '\0';
  local_c8 = param_2;
  FUN_01273200();
  local_d0 = local_110;
  if ((char)local_108 == '\0') {
    if (((local_110 != 0) && (FUN_00d50b00(), (char)local_108 != '\0')) && (local_110 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_108._0_1_ = '\0';
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar14 = &local_40;
  if ((char)local_108 != '\0') {
    plVar14 = &local_108;
  }
  local_40 = CONCAT71(local_40._1_7_,(char)local_108);
  *(void*)plVar14 = 0;
  if (((char)local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_40 == '\0') {
    if (local_110 == 0) goto LAB_008045bd;
    FUN_00d50b00();
  }
  else if (local_110 == 0) {
LAB_008045bd:
    local_88 = 0;
    local_80 = 0;
    local_60 = 0;
    goto joined_r0x008045df;
  }
  local_108._0_1_ = '\0';
  local_100 = local_110;
  local_f8 = 0xffffffff;
  local_f0 = 0;
  local_1a8 = 0;
  local_c4 = 0;
  local_88 = 0;
  local_58 = 0;
  local_80 = 0;
  local_60 = 0;
LAB_008032b0:
  if (local_c4 == 0) {
    local_c4 = 0;
  }
  else {
    if (local_c4 < 1) {
      local_1a8 = (uint64_t)(uint)-local_c4;
    }
    else {
      local_f8 = CONCAT44(local_f8._4_4_,(int)local_f8 - local_c4);
      FUN_00d23690();
      local_f0 = local_f0 + (int)local_1a8;
      local_1a8 = 0;
    }
    local_c4 = (int)local_1a8;
    local_f8 = CONCAT44(local_c4,(int)local_f8);
  }
  lVar5 = (int64_t)(int)local_f8;
  iVar13 = (int)local_f8 + 1;
  local_f8 = CONCAT44(local_f8._4_4_,iVar13);
  if (*(int *)(local_100 + 0xc) <= iVar13) {
    FUN_000be170();
    if (local_110 != 0) {
      FUN_00d50b20();
    }
    goto joined_r0x00804611;
  }
  local_190 = *(int64_t *)(*(int64_t *)(local_100 + 0x10) + 8 + lVar5 * 8);
  local_188 = '\0';
  FUN_00805b20(*(int64_t *)(local_100 + 0x10),&local_190);
  local_d8 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  lVar5 = local_40;
  local_78 = CONCAT71(local_78._1_7_,local_38[0]);
  puVar12 = &local_78;
  puVar9 = (uint64_t *)local_38;
  if (local_38[0] == '\0') {
    puVar9 = puVar12;
  }
  *(void*)puVar9 = 0;
  if ((local_38[0] != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  pVar10 = (void*)puVar12;
  local_50 = lVar5;
  if (((char)local_78 == '\0') && (lVar5 != 0)) {
    FUN_00d50b00();
  }
  local_1b0 = FUN_00e7bcc0();
  pvVar6 = _pthread_getspecific(pVar10);
  if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    pVar10 = (void*)local_50;
  }
  FUN_01274b60();
  lVar5 = local_40;
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    uVar7 = FUN_00e7bcc0();
    if (local_50 != 0) {
      pvVar6 = _pthread_getspecific(pVar10);
      if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar10 = (void*)local_50;
      }
      FUN_0125e930();
      if (local_40 == 0) {
        bVar18 = false;
      }
      else {
        pvVar6 = _pthread_getspecific(pVar10);
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pVar10 = (void*)local_50;
        }
        FUN_0125e930();
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        bVar18 = local_78 != 0;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (CONCAT44(uStack_bc,local_c0) != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (bVar18) {
        pvVar6 = _pthread_getspecific(pVar10);
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pVar10 = (void*)local_50;
        }
        FUN_0125e930();
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = FUN_01507970();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar10 = (void*)local_50;
    }
    FUN_01266fe0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar19 = FUN_00e7bcc0();
    local_1b0 = FUN_012f9410(uVar19,uVar7);
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  local_180 = local_d8;
  local_178 = '\0';
  FUN_01278c70();
  local_a8 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  lVar5 = local_40;
  local_b0 = CONCAT71(local_b0._1_7_,local_38[0]);
  puVar12 = &local_b0;
  puVar9 = (uint64_t *)local_38;
  if (local_38[0] == '\0') {
    puVar9 = puVar12;
  }
  *(void*)puVar9 = 0;
  if ((local_38[0] != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  pVar10 = (void*)puVar12;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01267000();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_012caf10();
  uVar8 = local_78;
  uVar17 = (undefined7)(unaff_R15 >> 8);
  if (local_78 == local_58) {
    uVar8 = local_58;
    if (((char)local_88 == '\0') && (local_78 != 0)) {
      if (local_70 == '\0') {
        FUN_00d50b00();
        goto LAB_00803a00;
      }
      goto LAB_00803985;
    }
    uVar16 = local_88 & 0xffffffff;
joined_r0x008039ed:
    local_58 = uVar8;
    if ((local_70 == '\0') || (local_78 == 0)) {
      local_88 = uVar16 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      local_88 = uVar16 & 0xffffffff;
    }
  }
  else {
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
      uVar16 = CONCAT71(uVar17,1);
      if (((char)local_88 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
        local_58 = uVar8;
LAB_00803a00:
        uVar16 = CONCAT71(uVar17,1);
        uVar8 = local_58;
      }
      goto joined_r0x008039ed;
    }
    if (((char)local_88 != '\0') && (local_58 != 0)) {
      uVar7 = FUN_00d50b20();
    }
LAB_00803985:
    local_70 = '\0';
    local_88 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
    local_58 = uVar8;
  }
  if ((local_b8 != '\0') && (CONCAT44(uStack_bc,local_c0) != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    bVar2 = false;
    pVar11 = 0x80505c;
    bVar18 = false;
    bVar3 = false;
    switch(local_c8) {
    case 0:
      goto LAB_00803a9d;
    case 1:
      bVar2 = true;
      goto LAB_00803aaa;
    case 2:
      break;
    case 3:
      goto switchD_00803a85_caseD_3;
    case 4:
      bVar2 = false;
LAB_00803aaa:
      bVar18 = false;
      break;
    case 5:
      goto switchD_00803a85_caseD_3;
    case 6:
LAB_00803a9d:
      bVar3 = false;
      pVar10 = 0x80505c;
      goto switchD_00803a85_default;
    case 7:
switchD_00803a85_caseD_3:
      bVar3 = true;
      pVar10 = 0x80505c;
switchD_00803a85_default:
      pVar11 = pVar10;
      bVar2 = bVar3;
      bVar18 = false;
      break;
    case 8:
    case 9:
      bVar18 = true;
      bVar2 = false;
      break;
    default:
      goto switchD_00803a85_default;
    }
    local_170 = local_a8;
    local_168 = '\0';
    uVar7 = FUN_01271180();
    lVar5 = local_40;
    uVar17 = (undefined7)(unaff_R13 >> 8);
    if (local_40 == local_60) {
      lVar5 = local_60;
      if (((char)local_80 == '\0') && (local_40 != 0)) {
        if (local_38[0] == '\0') {
          FUN_00d50b00();
          goto LAB_00803bb0;
        }
        goto LAB_00803b35;
      }
      unaff_R13 = local_80 & 0xffffffff;
joined_r0x00803b9d:
      local_60 = lVar5;
      if ((local_38[0] == '\0') || (local_40 == 0)) {
        local_80 = unaff_R13 & 0xffffffff;
      }
      else {
        FUN_00d50b20();
        local_80 = unaff_R13 & 0xffffffff;
      }
    }
    else {
      if (local_38[0] == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        unaff_R13 = CONCAT71(uVar17,1);
        if (((char)local_80 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
          local_60 = lVar5;
LAB_00803bb0:
          unaff_R13 = CONCAT71(uVar17,1);
          lVar5 = local_60;
        }
        goto joined_r0x00803b9d;
      }
      if (((char)local_80 != '\0') && (local_60 != 0)) {
        uVar7 = FUN_00d50b20();
      }
LAB_00803b35:
      local_38[0] = '\0';
      local_80 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      local_60 = lVar5;
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if (bVar18) {
      local_b0 = FUN_00e7bdb0();
    }
    else {
      if (*(char *)(this_ptr + 0xe0) == '\0') {
LAB_00803d30:
        local_b0 = FUN_00e7bcc0();
      }
      else {
        uVar7 = (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x970))();
        lVar5 = local_40;
        local_e0 = 0;
        if (local_38[0] == '\0') {
          if (local_40 != 0) {
            uVar7 = FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_e0 = '\x01';
        local_e8 = lVar5;
        cVar4 = FUN_007424c0(uVar7,&local_c0);
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') goto LAB_00803d30;
        if (((int)local_78 == local_c0) && (0 < local_c0)) {
          pvVar6 = _pthread_getspecific(pVar11);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016ca720(0,0,0);
          FUN_0123fef0();
          FUN_0123ff00();
          local_b0 = FUN_00e7bcc0();
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_b0 = FUN_00e7bcc0();
        }
      }
      if (bVar2) {
        local_40 = FUN_00e7bcc0();
        FUN_00e7bac0();
      }
    }
    FUN_00e7bdc0();
    unaff_R15 = g_026e1810;
    if (g_026e1810 != 0) {
      FUN_00d50b00();
    }
    dVar20 = (double)FUN_00e7d6f0();
    uVar8 = (uint64_t)(dVar20 * g_023907c0);
    uVar8 = (int64_t)(dVar20 * g_023907c0 - g_023907c8) & (int64_t)uVar8 >> 0x3f | uVar8;
    uVar7 = FUN_0071a120();
    if ((((local_38[0] == '\0') && (local_40 != 0)) && (uVar7 = FUN_00d50b00(), local_38[0] != '\0')
        ) && (local_40 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    bVar15 = (char)uVar8 + (char)(uVar8 / 3) * -3;
    local_78 = unaff_R15;
    local_70 = '\0';
    FUN_000175c0(uVar7,&local_78);
    lVar5 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      local_38[0] = '\0';
      local_40 = lVar5;
      bVar15 = FUN_00c70bc0();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((lVar5 != 0 & bVar15) == 1) {
      if (*(int64_t **)(this_ptr + 0xb0) == (int64_t *)0x0) {
        bVar18 = false;
      }
      else {
        iVar13 = (**(code **)(**(int64_t **)(this_ptr + 0xb0) + 0x920))();
        bVar18 = iVar13 != 0;
      }
      if (unaff_R15 != 0) {
        FUN_00d50b20();
      }
      if (!bVar18) goto LAB_00803fb0;
      local_160 = local_a8;
      local_158 = '\0';
      local_40 = FUN_00e7bcc0();
      FUN_00e7bdc0();
      FUN_0141f160();
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (unaff_R15 != 0) {
        FUN_00d50b20();
      }
LAB_00803fb0:
      if (0 < *(int *)(local_60 + 0xc)) {
        unaff_R15 = 0;
        local_90 = 0;
        local_68 = 0;
        local_a0 = (uint64_t *)0x0;
        unaff_R13 = 0;
        do {
          lVar5 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + unaff_R15 * 8);
          if (local_a8 != lVar5) {
            if (lVar5 != 0) {
              FUN_00d50b00();
            }
            bVar18 = local_a8 != 0;
            local_a8 = lVar5;
            if (bVar18) {
              FUN_00d50b20();
            }
          }
          FUN_00d23310();
          lVar5 = local_40;
          local_48[0] = local_38[0];
          puVar12 = (uint64_t *)local_48;
          puVar9 = (uint64_t *)local_38;
          if (local_38[0] == '\0') {
            puVar9 = puVar12;
          }
          *(void*)puVar9 = 0;
          if ((local_38[0] != '\0') && (lVar5 != 0)) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific((void*)puVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270af0();
          lVar1 = CONCAT44(uStack_bc,local_c0);
          if (local_b8 == '\0') {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b8 = '\0';
          }
          local_1b8 = 1;
          uVar19 = FUN_007fe440();
          uVar8 = local_78;
          uVar7 = extraout_XMM0_Qa;
          if (unaff_R13 == local_78) {
            if (((char)local_a0 == '\0') && (unaff_R13 != 0)) {
              puVar12 = (uint64_t *)CONCAT71((int7)((uint64_t)puVar12 >> 8),1);
              local_a0 = puVar12;
              local_98 = unaff_R13;
              if (local_70 == '\0') {
                uVar7 = FUN_00d50b00();
              }
            }
            else {
              local_98 = unaff_R13;
              if ((local_70 != '\0') && (local_78 != 0)) {
                uVar7 = FUN_00d50b20();
              }
            }
          }
          else {
            if (local_70 == '\0') {
              local_98 = unaff_R13;
              if (local_78 != 0) {
                uVar19 = FUN_00d50b00();
                uVar7 = extraout_XMM0_Qa_01;
              }
              if (((char)local_a0 != '\0') && (local_98 != 0)) {
                local_98 = uVar8;
                uVar19 = FUN_00d50b20();
                uVar7 = extraout_XMM0_Qa_02;
                local_a0 = (uint64_t *)CONCAT71((int7)((uint64_t)uVar19 >> 8),1);
                goto LAB_0080416c;
              }
            }
            else {
              if (((char)local_a0 != '\0') && (unaff_R13 != 0)) {
                uVar19 = FUN_00d50b20();
                uVar7 = extraout_XMM0_Qa_00;
              }
              local_70 = '\0';
            }
            local_98 = uVar8;
            local_a0 = (uint64_t *)CONCAT71((int7)((uint64_t)uVar19 >> 8),1);
          }
LAB_0080416c:
          if (lVar1 != 0) {
            uVar7 = FUN_00d50b20();
          }
          unaff_R13 = local_98;
          if ((local_b8 != '\0') && (CONCAT44(uStack_bc,local_c0) != 0)) {
            uVar7 = FUN_00d50b20();
          }
          if ((local_48[0] != '\0') && (lVar5 != 0)) {
            uVar7 = FUN_00d50b20();
          }
          local_1d0 = local_a8;
          local_1c8 = 0;
          uVar7 = FUN_007fe7a0(uVar7,&local_1d0);
          lVar5 = local_40;
          if (local_68 == local_40) {
            if (((char)local_90 == '\0') && (local_68 != 0)) {
              local_90 = CONCAT71((int7)((uint64_t)puVar12 >> 8),1);
              if (local_38[0] == '\0') {
                FUN_00d50b00();
              }
            }
            else if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_38[0] == '\0') {
              if (local_40 != 0) {
                uVar7 = FUN_00d50b00();
              }
              if (((char)local_90 != '\0') && (local_68 != 0)) {
                local_68 = lVar5;
                uVar7 = FUN_00d50b20();
                local_90 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
                goto LAB_0080436d;
              }
            }
            else if (((char)local_90 != '\0') && (local_68 != 0)) {
              uVar7 = FUN_00d50b20();
            }
            local_90 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
            local_68 = lVar5;
          }
LAB_0080436d:
          local_150 = local_58;
          local_148 = '\0';
          local_140 = local_68;
          local_138 = '\0';
          local_130 = unaff_R13;
          local_128 = '\0';
          FUN_012a4a40(local_b0,&local_130);
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          unaff_R15 = unaff_R15 + 1;
        } while ((int64_t)unaff_R15 < (int64_t)*(int *)(local_60 + 0xc));
        if (((char)local_90 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_a0 != '\0') && (unaff_R13 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if (local_d8 != 0) {
      FUN_00d50b20();
    }
    goto LAB_008032b0;
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (local_d8 != 0) {
    FUN_00d50b20();
  }
  FUN_000be170();
  FUN_00d50b20();
joined_r0x008045df:
  local_58 = 0;
joined_r0x00804611:
  if (local_d0 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_88 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}

