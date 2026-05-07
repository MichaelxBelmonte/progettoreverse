// Function: FUN_01a42180
// Address: 01a42180
// Size: 2617 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


int FUN_01a42180(double param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  uint8_t uVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  int64_t *plVar6;
  int iVar7;
  int64_t lVar8;
  void*this_ptr;
  int64_t lVar9;
  int iVar10;
  bool bVar11;
  uint64_t uVar12;
  double dVar13;
  uint8_t uVar14;
  int64_t local_130;
  uint8_t local_128;
  int64_t local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  double local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  int64_t local_90;
  int64_t local_88;
  char local_80 [8];
  int64_t local_78;
  uint64_t local_70;
  int local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  
  local_c0 = param_1;
  (**(code **)(*(int64_t *)*this_ptr + 0xe20))();
  local_a8 = local_60;
  local_a0 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_a0 = '\x01';
  FUN_00243390();
  lVar9 = local_88;
  if (local_80[0] == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(lVar9 + 0xc) == 0) {
    iVar7 = 0;
    goto LAB_01a42bdc;
  }
  local_c8 = lVar9;
  (**(code **)(*(int64_t *)*this_ptr + 0xe20))();
  lVar3 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_01a40b30(local_c0);
  local_90 = local_88;
  if ((local_80[0] == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  uVar12 = FUN_00c9fe20();
  lVar3 = local_88;
  plVar6 = &local_60;
  if (local_80[0] != '\0') {
    plVar6 = (int64_t *)local_80;
  }
  local_60 = CONCAT71(local_60._1_7_,local_80[0]);
  *(void*)plVar6 = 0;
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((char)local_60 == '\0') {
    if (lVar3 != 0) {
      uVar12 = FUN_00d50b00();
      goto LAB_01a42383;
    }
LAB_01a42752:
    iVar7 = 0;
  }
  else {
    if (lVar3 == 0) goto LAB_01a42752;
LAB_01a42383:
    iVar7 = 0;
    if (*(int *)(lVar3 + 0xc) == 0) {
LAB_01a42bc1:
      FUN_00d50b20();
    }
    else {
      local_80[0] = '\0';
      local_88 = 0;
      local_98 = lVar3;
      local_78 = lVar3;
      local_70 = 0xffffffff;
      local_68 = 0;
      while( true ) {
        if (iVar7 != 0) {
          if (iVar7 < 1) {
            iVar7 = -iVar7;
          }
          else {
            local_70 = CONCAT44(local_70._4_4_,(int)local_70 - iVar7);
            FUN_00d23690(uVar12,iVar7);
            local_68 = local_68 + local_70._4_4_;
            iVar7 = 0;
          }
          local_70 = CONCAT44(iVar7,(int)local_70);
        }
        lVar3 = (int64_t)(int)local_70;
        iVar7 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar7);
        if (*(int *)(local_78 + 0xc) <= iVar7) {
          FUN_00115190();
          local_80[0] = '\0';
          local_88 = 0;
          local_78 = local_98;
          local_70 = 0xffffffff;
          local_68 = 0;
          local_70._4_4_ = 0;
          while( true ) {
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                iVar7 = -local_70._4_4_;
              }
              else {
                iVar7 = (int)local_70 - local_70._4_4_;
                local_70 = CONCAT44(local_70._4_4_,iVar7);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar7 = 0;
              }
              local_70 = CONCAT44(iVar7,(int)local_70);
            }
            lVar3 = (int64_t)(int)local_70;
            iVar7 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar7);
            if (*(int *)(local_78 + 0xc) <= iVar7) break;
            local_108 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + 8 + lVar3 * 8);
            uVar14 = 0;
            local_100 = '\0';
            local_88 = local_108;
            FUN_0076f110(*this_ptr,&local_108);
            lVar3 = local_60;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_128 = 1;
            local_130 = lVar3;
            uVar2 = (**(code **)((int64_t)&dylib_command_00001220.dylib.current_version +
                                *(int64_t *)*this_ptr))();
            FUN_01a41040(local_c0,&local_130,uVar2,param_4,uVar14);
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00115190();
          FUN_00d23310();
          lVar3 = local_88;
          plVar6 = (int64_t *)local_80;
          if (local_80[0] == '\0') {
            plVar6 = &local_60;
          }
          local_60 = CONCAT71(local_60._1_7_,local_80[0]);
          *(char *)plVar6 = '\0';
          if ((local_80[0] != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific((void*)plVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar7 = FUN_01326de0();
          if (((char)local_60 != '\0') && (lVar3 != 0)) {
            FUN_00d50b20();
          }
          bVar11 = false;
          if ((*(int *)(local_98 + 0xc) == 1) && (iVar7 != 3)) {
            bVar11 = *(int *)(lVar9 + 0xc) == 2;
          }
          uVar12 = (**(code **)(*(int64_t *)*this_ptr + 0xda0))();
          if (bVar11) {
            plVar6 = *(int64_t **)(lVar9 + 0x10);
            lVar3 = *plVar6;
            if (lVar3 != 0) {
              FUN_00d50b00();
              plVar6 = *(int64_t **)(lVar9 + 0x10);
            }
            lVar8 = plVar6[1];
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            pVar5 = (void*)plVar6;
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_c0 = (double)FUN_0125a280();
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar13 = (double)FUN_0125a280();
            if (dVar13 <= local_c0) {
              local_d0 = '\0';
              local_d8 = lVar8;
              (**(code **)(*(int64_t *)*this_ptr + 0xda8))(dVar13,1);
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_e0 = '\0';
              local_e8 = lVar3;
              (**(code **)(*(int64_t *)*this_ptr + 0xda8))(dVar13,1);
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            iVar7 = 1;
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            local_f0 = '\0';
            local_f8 = lVar9;
            (**(code **)(*(int64_t *)*this_ptr + 0xdb8))(uVar12,1);
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            (**(code **)(*(int64_t *)*this_ptr + 0xea0))();
            iVar7 = 1;
            (**(code **)(*(int64_t *)*this_ptr + 0xda0))();
          }
          goto LAB_01a42bb5;
        }
        local_88 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + 8 + lVar3 * 8);
        pvVar4 = _pthread_getspecific((void*)*(int64_t *)(local_78 + 0x10));
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar7 = FUN_0132dd30();
        if (iVar7 == 0) break;
        local_118 = local_88;
        local_110 = '\0';
        uVar12 = FUN_0076f110();
        lVar3 = local_60;
        if (local_58 == '\0') {
          if (((local_60 != 0) && (uVar12 = FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
            uVar12 = FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
        }
        if ((local_110 != '\0') && (local_118 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        if (lVar3 != 0) {
          local_58 = '\0';
          local_60 = 0;
          local_120 = lVar3;
          local_50 = lVar3;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          bVar11 = false;
          lVar9 = 0;
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar7 = -local_48._4_4_;
              }
              else {
                iVar7 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar7);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar7 = 0;
              }
              local_48 = CONCAT44(iVar7,(int)local_48);
            }
            lVar3 = (int64_t)(int)local_48;
            iVar10 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar10);
            iVar7 = *(int *)(local_50 + 0xc);
            if (iVar7 <= iVar10) break;
            local_60 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar3 * 8);
            pVar5 = (void*)*(int64_t *)(local_50 + 0x10);
            bVar1 = bVar11;
            if (local_40 == 0 && iVar10 == 0) {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              lVar8 = local_b8;
              if (lVar9 == local_b8) {
                lVar8 = lVar9;
                if ((!bVar11) && (lVar9 != 0)) {
                  bVar1 = true;
                  if (local_b0 != '\0') goto LAB_01a42506;
                  FUN_00d50b00();
                  bVar1 = true;
                }
              }
              else {
                if (local_b0 != '\0') {
                  bVar1 = true;
                  if ((bVar11) && (lVar9 != 0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01a42506;
                }
                if (local_b8 != 0) {
                  FUN_00d50b00();
                }
                bVar1 = true;
                if ((bVar11) && (lVar9 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              lVar3 = local_b8;
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              lVar8 = lVar9;
              if (lVar9 != lVar3) break;
            }
LAB_01a42506:
            bVar11 = bVar1;
            lVar9 = lVar8;
          }
          FUN_001159b0();
          uVar12 = FUN_00d50b20();
          if ((bVar11) && (lVar9 != 0)) {
            uVar12 = FUN_00d50b20();
          }
          lVar9 = local_c8;
          if (iVar10 < iVar7) break;
        }
        iVar7 = local_70._4_4_;
      }
      FUN_00115190();
      iVar7 = 0;
LAB_01a42bb5:
      if (local_98 != 0) goto LAB_01a42bc1;
    }
  }
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 == 0) {
    return iVar7;
  }
LAB_01a42bdc:
  FUN_00d50b20();
  return iVar7;
}

