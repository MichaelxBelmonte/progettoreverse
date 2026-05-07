// Function: FUN_00626ed0
// Address: 00626ed0
// Size: 3343 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00626ed0(void* param_1,char param_2)

{
  uint uVar1;
  uint64_t uVar2;
  char cVar3;
  void *pvVar4;
  uint64_t uVar5;
  undefined7 uVar7;
  undefined7 extraout_var;
  int64_t lVar6;
  void* pVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int iVar11;
  int64_t *this_ptr;
  uint64_t uVar12;
  char *pcVar13;
  bool bVar14;
  int64_t local_130;
  char local_128;
  char local_b8;
  undefined7 uStack_b7;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  char local_60 [8];
  uint64_t local_58;
  uint64_t local_50;
  int local_48;
  char local_40;
  undefined7 uStack_3f;
  char local_38;
  
  cVar3 = FUN_00742da0();
  if (cVar3 != '\0') {
    (**(code **)(*this_ptr + 0x5d8))();
    uVar10 = local_68;
    if (local_60[0] == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
        if ((local_60[0] != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00626f3c;
      }
    }
    else if (local_68 != 0) {
LAB_00626f3c:
      local_98 = uVar10;
      FUN_006f4810();
      FUN_002eacb0();
      lVar6 = CONCAT71(uStack_3f,local_40);
      if (local_38 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_003231a0();
      uVar10 = local_68;
      if (local_60[0] == '\0') {
        if (((local_68 != 0) && (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60[0] = '\0';
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
        FUN_00d50b20();
      }
      local_78 = uVar10;
      if (*(int *)(uVar10 + 0xc) == 1) {
        FUN_00d23310();
        uVar10 = local_68;
        pcVar13 = &local_b8;
        if (local_60[0] != '\0') {
          pcVar13 = local_60;
        }
        local_b8 = local_60[0];
        *pcVar13 = '\0';
        if ((local_60[0] != '\0') && (uVar10 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        iVar11 = *(int *)(CONCAT71(uStack_3f,local_40) + 0xc);
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (uVar10 != 0)) {
          FUN_00d50b20();
        }
        if (iVar11 < 1) goto LAB_0062715a;
        uVar5 = FUN_00d23310();
        uVar12 = local_68;
        uVar7 = (undefined7)((uint64_t)uVar5 >> 8);
        pcVar13 = local_60;
        if (local_60[0] == '\0') {
          pcVar13 = &local_40;
        }
        local_40 = local_60[0];
        *pcVar13 = '\0';
        if ((local_60[0] != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
          uVar7 = extraout_var;
        }
        if (uVar12 == 0) {
          uVar12 = 0;
          local_88 = 0;
        }
        else {
          local_88 = CONCAT71(uVar7,1);
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        local_a0 = 0;
        local_a8 = CONCAT71(uStack_3f,local_40);
        if (local_38 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_a0 = '\x01';
        FUN_003231a0();
        uVar10 = local_68;
        if (local_78 == local_68) {
LAB_00627543:
          uVar10 = local_78;
          if ((local_60[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_60[0] == '\0') {
            if (local_68 != 0) {
              FUN_00d50b00();
            }
            local_78 = uVar10;
            FUN_00d50b20();
            goto LAB_00627543;
          }
          local_78 = local_68;
          FUN_00d50b20();
          local_60[0] = '\0';
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
          FUN_00d50b20();
        }
joined_r0x0062745a:
        local_90 = uVar12;
        local_78 = uVar10;
        if (uVar12 != 0) {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6a50();
          local_80 = local_68;
          if ((((local_60[0] == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60[0] != '\0'))
             && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (param_2 != '\0') {
            local_70 = uVar12;
            pvVar4 = _pthread_getspecific(param_1);
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              param_1 = (void*)local_80;
            }
            FUN_012e6160();
            local_60[0] = '\0';
            local_68 = uVar12;
            FUN_00d237a0();
            if ((local_60[0] != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
              FUN_00d50b20();
            }
            if (uVar10 != 0) {
              local_60[0] = '\0';
              local_68 = 0;
              local_50 = 0xffffffff;
              local_48 = 0;
              local_50._4_4_ = 0;
              local_58 = uVar10;
              while( true ) {
                if (local_50._4_4_ != 0) {
                  if (local_50._4_4_ < 1) {
                    iVar11 = -local_50._4_4_;
                  }
                  else {
                    iVar11 = (int)local_50 - local_50._4_4_;
                    local_50 = CONCAT44(local_50._4_4_,iVar11);
                    FUN_00d23690();
                    local_48 = local_48 + local_50._4_4_;
                    iVar11 = 0;
                  }
                  local_50 = CONCAT44(iVar11,(int)local_50);
                }
                lVar6 = (int64_t)(int)local_50;
                iVar11 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,iVar11);
                if (*(int *)(local_58 + 0xc) <= iVar11) break;
                lVar9 = *(int64_t *)(local_58 + 0x10);
                local_68 = *(uint64_t *)(lVar9 + 8 + lVar6 * 8);
                pvVar4 = _pthread_getspecific((void*)lVar9);
                pVar8 = (void*)lVar9;
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7fb0();
                lVar6 = CONCAT71(uStack_3f,local_40);
                if ((((local_38 == '\0') && (lVar6 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
                   (CONCAT71(uStack_3f,local_40) != 0)) {
                  FUN_00d50b20();
                }
                pvVar4 = _pthread_getspecific(pVar8);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e6a50();
                pvVar4 = _pthread_getspecific(pVar8);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e68b0();
                if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
                  FUN_00d50b20();
                }
                pvVar4 = _pthread_getspecific(pVar8);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e66e0();
                if (lVar6 != 0) {
                  pvVar4 = _pthread_getspecific(pVar8);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0150fe10();
                  pvVar4 = _pthread_getspecific(pVar8);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0150f380();
                  if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
                    FUN_00d50b20();
                  }
                  pvVar4 = _pthread_getspecific(pVar8);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012e7fb0();
                  pvVar4 = _pthread_getspecific(pVar8);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0150f1c0();
                  if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
              }
              uVar10 = local_58;
              FUN_000be170();
              param_1 = (void*)uVar10;
            }
            uVar12 = local_70;
            pvVar4 = _pthread_getspecific(param_1);
            if (pvVar4 != (void *)0x0) {
              lVar6 = FUN_00e8b990();
              if (lVar6 == 0) {
                local_90 = uVar12;
              }
              else {
                local_90 = *(uint64_t *)
                            (uVar12 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
              }
            }
            FUN_012e6160();
            uVar1 = *(uint *)(local_68 + 0xc);
            uVar10 = (uint64_t)uVar1;
            if (local_60[0] != '\0') {
              FUN_00d50b20();
            }
            if (uVar1 == 0) {
              FUN_006f3f00();
              (**(code **)(*(int64_t *)CONCAT71(uStack_3f,local_40) + 0x628))();
              uVar10 = local_68;
              pvVar4 = _pthread_getspecific(param_1);
              uVar2 = local_68;
              if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), uVar10 = uVar2, lVar6 != 0)) {
                uVar10 = *(uint64_t *)
                          (uVar2 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
              }
              FUN_004a7530();
              if ((local_60[0] != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_006f3f00();
            FUN_0074a910();
            if ((local_60[0] != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00627b29;
        }
        uVar10 = 0;
      }
      else {
LAB_0062715a:
        local_60[0] = '\0';
        local_68 = 0;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        local_88 = 0;
        local_70 = 0;
        local_58 = local_78;
        while( true ) {
          uVar10 = local_78;
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar11 = -local_50._4_4_;
            }
            else {
              iVar11 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar11);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar11 = 0;
            }
            local_50 = CONCAT44(iVar11,(int)local_50);
          }
          lVar6 = (int64_t)(int)local_50;
          iVar11 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar11);
          if (*(int *)(local_58 + 0xc) <= iVar11) {
            uVar12 = local_58;
            FUN_000be170();
            param_1 = (void*)uVar12;
            uVar12 = local_70;
            goto joined_r0x0062745a;
          }
          lVar9 = *(int64_t *)(local_58 + 0x10);
          local_68 = *(uint64_t *)(lVar9 + 8 + lVar6 * 8);
          pvVar4 = _pthread_getspecific((void*)lVar9);
          pVar8 = (void*)lVar9;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6a50();
          if (CONCAT71(uStack_3f,local_40) == 0) {
            bVar14 = false;
            lVar6 = 0;
          }
          else {
            pvVar4 = _pthread_getspecific(pVar8);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6a50();
            pvVar4 = _pthread_getspecific(pVar8);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6a50();
            bVar14 = CONCAT71(uStack_b7,local_b8) == 0;
            if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
              FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != 0)) {
              FUN_00d50b20();
            }
            lVar6 = CONCAT71(uStack_3f,local_40);
          }
          if ((local_38 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
          uVar10 = local_68;
          if (bVar14) break;
          if (local_70 == 0) {
            pvVar4 = _pthread_getspecific(pVar8);
            uVar12 = local_68;
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), uVar10 = uVar12, lVar6 != 0)) {
              uVar10 = *(uint64_t *)(uVar12 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8)
              ;
            }
            FUN_012e6a50();
            uVar12 = CONCAT71(uStack_3f,local_40);
            if (uVar12 == 0) {
              uVar12 = 0;
              uVar10 = local_88 & 0xffffffff;
            }
            else {
              uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
              if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
                 (CONCAT71(uStack_3f,local_40) != 0)) {
                FUN_00d50b20();
              }
            }
            local_88 = uVar10 & 0xffffffff;
            local_70 = uVar12;
          }
          else {
            pvVar4 = _pthread_getspecific(pVar8);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6a50();
            uVar10 = CONCAT71(uStack_3f,local_40);
            if ((local_38 != '\0') && (uVar10 != 0)) {
              FUN_00d50b20();
            }
            if (uVar10 != local_70) break;
          }
        }
        FUN_000be170();
        uVar10 = 0;
        uVar12 = local_70;
LAB_00627b29:
        if (((char)local_88 != '\0') && (uVar12 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_00627b52;
    }
  }
  uVar10 = 0;
LAB_00627b52:
  return uVar10 & 0xffffffff;
}

