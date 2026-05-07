// Function: FUN_00444210
// Address: 00444210
// Size: 3820 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00444210(void)

{
  bool bVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined7 uVar10;
  uint64_t uVar7;
  void *pvVar8;
  int64_t lVar9;
  void* pVar11;
  int64_t **pplVar12;
  int64_t lVar13;
  int64_t this_ptr;
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
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int local_cc;
  int64_t *local_c8;
  char local_c0;
  uint64_t local_b8;
  int64_t local_b0;
  int64_t local_a8;
  int64_t local_a0;
  uint32_t local_98;
  uint32_t local_94;
  int64_t local_90;
  int64_t local_88;
  uint32_t local_7c;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  int64_t local_60;
  char local_58 [8];
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  int64_t local_38;
  
  if (*(int64_t *)(this_ptr + 0x20) != 0) {
    return;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x5d8))();
  if (local_58[0] == '\0') {
    if (local_60 == 0) {
      return;
    }
    FUN_00d50b00();
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_60 == 0) {
    return;
  }
  FUN_0062abf0();
  if (local_58[0] == '\0') {
    if (local_60 == 0) goto LAB_00445096;
    local_b0 = local_60;
    FUN_00d50b00();
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_b0 = local_60;
    if (local_60 == 0) goto LAB_00445096;
  }
  if (*(int64_t *)(this_ptr + 0x18) != 0) {
    local_68 = *(int64_t *)(this_ptr + 0x18);
    FUN_00d50b00();
    FUN_0053a050();
    local_88 = local_60;
    if ((((local_58[0] == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != 0)) {
      FUN_00d50b20();
    }
    FUN_0053a480();
    lVar9 = local_60;
    if (((local_58[0] == '\0') && (local_60 != 0)) &&
       ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != 0)))) {
      FUN_00d50b20();
    }
    local_38 = lVar9;
    iVar5 = FUN_00228b30();
    if (iVar5 == 1) {
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      FUN_01653930();
      lVar13 = local_60;
      if (lVar9 == local_60) {
        local_38 = lVar9;
LAB_0044440d:
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_58[0] == '\0') {
          if (local_60 != 0) {
            local_38 = lVar9;
            FUN_00d50b00();
          }
          if (lVar9 == 0) {
            local_38 = lVar13;
          }
          else {
            local_38 = lVar13;
            FUN_00d50b20();
          }
          goto LAB_0044440d;
        }
        if (lVar9 != 0) {
          local_38 = local_60;
          FUN_00d50b20();
        }
        local_58[0] = '\0';
        local_38 = lVar13;
      }
      if ((((local_88 == 0) || (*(int *)(local_88 + 0xc) == 0)) &&
          ((local_38 == 0 || (*(int *)(local_38 + 0xc) == 0)))) &&
         (cVar4 = FUN_00228480(), cVar4 != '\0')) {
        local_1a0 = 0;
        local_198 = '\0';
        FUN_00228b40(&local_1a0);
        if ((local_198 != '\0') && (local_1a0 != 0)) {
          FUN_00d50b20();
        }
        if (lVar9 != local_38) {
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          if (local_38 == 0) {
            local_38 = lVar9;
          }
          else {
            local_38 = lVar9;
            FUN_00d50b20();
          }
        }
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
        lVar9 = local_38;
        goto LAB_00444522;
      }
      lVar9 = local_38;
      lVar13 = local_38;
      if (local_38 == 0) goto LAB_00444594;
LAB_0044452a:
      if (*(int *)(lVar13 + 0xc) != 0) {
        local_178 = '\0';
        local_180 = lVar13;
        FUN_004461d0();
        local_98 = 0;
        if ((local_178 != '\0') && (local_180 != 0)) {
          FUN_00d50b20();
        }
      }
      pVar11 = (void*)lVar9;
      local_98 = 0;
    }
    else {
LAB_00444522:
      lVar13 = lVar9;
      if (lVar9 != 0) goto LAB_0044452a;
LAB_00444594:
      local_38 = 0;
      uVar7 = FUN_00228b30();
      uVar10 = (undefined7)((uint64_t)uVar7 >> 8);
      if ((int)uVar7 == 0) {
        local_98 = (uint32_t)CONCAT71(uVar10,1);
        local_190 = local_88;
        local_188 = '\0';
        FUN_01653930();
        lVar13 = local_60;
        if (local_60 == 0) {
          lVar13 = 0;
        }
        else if (local_58[0] == '\0') {
          FUN_00d50b00();
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58[0] = '\0';
        }
        if ((local_188 != '\0') && (local_190 != 0)) {
          FUN_00d50b20();
        }
        if (lVar13 != 0) goto LAB_0044452a;
      }
      else {
        local_98 = (uint32_t)CONCAT71(uVar10,1);
      }
      pVar11 = (void*)lVar9;
      lVar13 = 0;
    }
    if ((local_88 != 0) && (pVar11 = (void*)lVar9, *(int *)(local_88 + 0xc) != 0)) {
      FUN_00226f20();
      lVar3 = local_60;
      if (local_58[0] == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0044460e;
        }
LAB_0044464a:
        bVar1 = true;
LAB_00444651:
        local_38 = lVar13;
        FUN_00d23310();
        lVar13 = local_60;
        pVar11 = (void*)CONCAT71((int7)((uint64_t)lVar9 >> 8),local_58[0]);
        pplVar12 = &local_78;
        if (local_58[0] != '\0') {
          pplVar12 = (int64_t **)local_58;
        }
        local_78 = (int64_t *)CONCAT71(local_78._1_7_,local_58[0]);
        *(char *)pplVar12 = '\0';
        if ((local_58[0] != '\0') && (lVar13 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_78 == '\0') && (lVar13 != 0)) {
          FUN_00d50b00();
        }
        local_170 = lVar13;
        local_168 = '\0';
        FUN_00228980();
        if ((local_168 != '\0') && (local_170 != 0)) {
          FUN_00d50b20();
        }
        local_160 = lVar13;
        local_158 = '\0';
        FUN_002614f0();
        if ((local_158 != '\0') && (local_160 != 0)) {
          FUN_00d50b20();
        }
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        lVar13 = local_38;
        if (bVar1) goto LAB_0044472d;
      }
      else {
        if (local_60 == 0) goto LAB_0044464a;
LAB_0044460e:
        local_58[0] = '\0';
        local_60 = lVar3;
        cVar4 = FUN_00d24090();
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        pVar11 = (void*)lVar9;
        if (cVar4 == '\0') {
          bVar1 = false;
          goto LAB_00444651;
        }
      }
      FUN_00d50b20();
    }
LAB_0044472d:
    FUN_00262a50();
    lVar9 = local_60;
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      local_38 = lVar13;
      cVar4 = FUN_00445c20();
      if (cVar4 == '\0') {
        FUN_00262a50();
        FUN_0053a8b0();
        FUN_004f32b0();
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00262a50();
        FUN_00445ea0();
        FUN_004f2300();
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        cVar4 = FUN_00233fd0();
        if (cVar4 != '\0') {
          FUN_00226250();
          if (local_60 == 0) {
            cVar4 = '\0';
          }
          else {
            FUN_00226250();
            cVar4 = (**(code **)(*local_78 + 0x398))();
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            FUN_0021f1d0();
          }
        }
      }
      FUN_0021a630();
      (**(code **)(*local_78 + 0xe20))();
      iVar5 = *(int *)(local_60 + 0xc);
      if (local_58[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      iVar6 = FUN_00228b30();
      if (iVar6 == 0) {
        uVar7 = (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x9e0))();
        lVar9 = local_60;
        if (local_58[0] == '\0') {
          if (local_60 != 0) {
            uVar7 = FUN_00d50b00();
            if ((local_58[0] != '\0') && (local_60 != 0)) {
              uVar7 = FUN_00d50b20();
            }
            goto LAB_00444996;
          }
LAB_004449e8:
          uVar7 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
          local_7c = (uint32_t)uVar7;
LAB_00444ac9:
          local_94 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
          local_b8 = 0;
LAB_00444adc:
          lVar13 = 0;
        }
        else {
          if (local_60 == 0) goto LAB_004449e8;
LAB_00444996:
          if (*(int *)(lVar9 + 0xc) == 0) {
            local_7c = 0;
            goto LAB_00444ac9;
          }
          local_150 = lVar9;
          local_148 = '\0';
          uVar7 = FUN_012e74e0();
          lVar13 = local_60;
          if (local_60 == 0) {
            lVar13 = 0;
            uVar7 = 0;
            local_b8 = 0;
          }
          else if (local_58[0] == '\0') {
            uVar7 = FUN_00d50b00();
            uVar7 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
            local_b8 = uVar7;
            if ((local_58[0] != '\0') && (local_60 != 0)) {
              uVar7 = FUN_00d50b20();
            }
          }
          else {
            local_58[0] = '\0';
            uVar7 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
            local_b8 = uVar7;
          }
          if ((local_148 != '\0') && (local_150 != 0)) {
            uVar7 = FUN_00d50b20();
          }
          if (lVar13 == 0) {
            local_94 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
            local_7c = 0;
            goto LAB_00444adc;
          }
          local_94 = 0;
          local_7c = 0;
        }
        FUN_00323290();
        local_a8 = local_60;
        if (local_58[0] == '\0') {
          if (((local_60 != 0) && (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58[0] = '\0';
        }
        if ((char)local_94 == '\0') {
          local_90 = lVar9;
          local_58[0] = '\0';
          local_60 = 0;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          local_cc = iVar5;
          local_a0 = lVar13;
          local_50 = lVar13;
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
            if (*(int *)(local_50 + 0xc) <= iVar5) break;
            local_60 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar9 * 8);
            pvVar8 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012f4d60();
            plVar2 = local_78;
            if (local_70 == '\0') {
              if (local_78 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_00444ea0;
              }
            }
            else if (local_78 != (int64_t *)0x0) {
LAB_00444ea0:
              local_70 = '\0';
              local_78 = plVar2;
              cVar4 = FUN_00d24090();
              if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') {
                local_70 = '\0';
                local_78 = plVar2;
                FUN_00d21140();
                if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
          }
          FUN_000be170();
          lVar13 = local_a0;
          iVar5 = local_cc;
        }
        local_138 = '\0';
        local_140 = 0;
        (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0xdc8))();
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
        local_128 = '\0';
        local_130 = lVar13;
        (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0xde8))();
        if ((local_128 != '\0') && (local_130 != 0)) {
          FUN_00d50b20();
        }
        FUN_006f4810();
        local_120 = local_a8;
        local_118 = '\0';
        FUN_002ea230();
        if ((local_118 != '\0') && (local_120 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (iVar5 == 0) {
          (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x400))();
        }
        if (local_a8 != 0) {
          FUN_00d50b20();
        }
        if ((char)local_b8 != '\0' && (char)local_94 == '\0') {
          FUN_00d50b20();
        }
        if ((char)local_7c == '\0') {
          FUN_00d50b20();
        }
      }
      else {
        iVar6 = FUN_00228b30();
        if (iVar6 == 1) {
          FUN_00226f20();
          if (local_58[0] == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              if ((local_58[0] != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_00444a17;
            }
          }
          else if (local_60 != 0) {
LAB_00444a17:
            pvVar8 = _pthread_getspecific(pVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01657380();
            pvVar8 = _pthread_getspecific(pVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01650330();
            local_c8 = local_78;
            local_c0 = 0;
            if (local_70 == '\0') {
              if (local_78 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            local_c0 = '\x01';
            FUN_000ba510();
            lVar9 = local_60;
            if (local_58[0] == '\0') {
              if (((local_60 != 0) && (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58[0] = '\0';
            }
            if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            local_f8 = '\0';
            local_100 = 0;
            (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0xdc8))();
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
            local_f0 = lVar9;
            local_e8 = '\0';
            (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0xde8))();
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            FUN_006f4810();
            local_e0 = lVar9;
            local_d8 = '\0';
            FUN_002ea230();
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58[0] != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if (iVar5 == 0) {
              (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x400))();
            }
            if (lVar9 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
      }
    }
    if ((char)local_98 == '\0') {
      FUN_00d50b20();
    }
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00445096:
  FUN_00d50b20();
  return;
}

