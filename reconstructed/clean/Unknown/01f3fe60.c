// Function: FUN_01f3fe60
// Address: 01f3fe60
// Size: 2748 bytes
// Class: Unknown
// String references:
//   "%@.%@"
//   "%@.lproj"

void* FUN_01f3fe60(int64_t *param_1,int64_t *param_2,int64_t *param_3,uint32_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  byte bVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t *arg1;
  void*this_ptr;
  uint uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t *local_198;
  int64_t local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  uint32_t local_e4;
  int64_t *local_e0;
  int64_t *local_d8;
  int64_t *local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t *local_70;
  uint local_68;
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  uint32_t uStack_4c;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar5 = g_02800180;
  local_e4 = param_4;
  local_e0 = param_3;
  local_d8 = param_2;
  if (g_02800180 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_d0 = plVar5;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_88 = plVar5;
  if (((int64_t *)*param_1 != (int64_t *)0x0) && (*local_d8 != 0)) {
    (**(code **)(*(int64_t *)*param_1 + 1000))();
    plVar5 = local_70;
    if (((char)local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar5 != (int64_t *)0x0) {
      if (0 < *(int *)((int64_t)plVar5 + 0xc)) {
        lVar10 = 0;
        do {
          plVar1 = *(int64_t **)(plVar5[2] + lVar10 * 8);
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar3 = (**(code **)(*plVar1 + 0x3a0))();
          if ((bVar3 & (byte)local_e4) == 1) {
            (**(code **)(*plVar1 + 0x380))();
            plVar2 = local_70;
            local_c0 = 0;
            if ((char)local_68 == '\0') {
              if (local_70 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = local_68 & 0xffffff00;
            }
            local_c0 = '\x01';
            local_c8 = plVar2;
            cVar4 = (**(code **)(*local_d0 + 0x50))();
            if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar4 == '\0') {
              local_178 = *local_d8;
              local_170 = '\0';
              local_160 = '\0';
              local_158 = *local_e0;
              local_150 = '\0';
              local_168 = plVar1;
              (**(code **)(*arg1 + 0x6b0))(&local_168,&local_178,&local_158,1);
              plVar2 = local_40;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_70 = plVar2;
              local_68 = local_68 & 0xffffff00;
              FUN_00ca1b70();
              if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar2 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_150 != '\0') && (local_158 != 0)) {
                FUN_00d50b20();
              }
              if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_170 != '\0') && (local_178 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            cVar4 = (**(code **)(*plVar1 + 0x398))();
            if (cVar4 != '\0') {
              (**(code **)(*plVar1 + 0x370))();
              plVar2 = local_40;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_70 = plVar2;
              local_68 = local_68 & 0xffffff00;
              cVar4 = FUN_00d23d70();
              if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar2 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 != '\0') {
                (**(code **)(*plVar1 + 0x390))();
                plVar2 = local_70;
                if (((char)local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b00();
                  if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                lVar6 = g_02800188;
                local_80 = plVar2;
                if (g_02800188 != 0) {
                  FUN_00d50b00();
                }
                local_148 = lVar6;
                local_140 = '\x01';
                cVar4 = FUN_00d8f400();
                if ((local_140 != '\0') && (local_148 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar4 != '\0') {
                  (**(code **)(*plVar1 + 0x380))();
                  local_78 = local_70;
                  if (((char)local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
                    FUN_00d50b00();
                    if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  FUN_00d8c7a0();
                  FUN_00d97ce0();
                  local_198 = local_78;
                  FUN_00083ea0(2,&local_198);
                  FUN_00d8cb40();
                  plVar2 = local_40;
                  if (local_38 == '\0') {
                    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                       (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  local_70 = (int64_t *)&g_0253d630;
                  if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
                    FUN_00d50b20();
                  }
                  local_70 = &g_024c5048;
                  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_90 != '\0') && (local_98 != 0)) {
                    FUN_00d50b20();
                  }
                  local_68 = local_68 & 0xffffff00;
                  local_70 = (int64_t *)0x0;
                  local_60 = plVar5;
                  local_58 = 0xffffffff;
                  local_50 = 0;
                  while( true ) {
                    lVar6 = (int64_t)(int)local_58;
                    iVar7 = (int)local_58 + 1;
                    local_58 = CONCAT44(local_58._4_4_,iVar7);
                    if (*(int *)((int64_t)local_60 + 0xc) <= iVar7) break;
                    local_70 = *(int64_t **)(local_60[2] + 8 + lVar6 * 8);
                    (**(code **)(*local_70 + 0x368))();
                    local_138 = plVar2;
                    local_130 = '\0';
                    cVar4 = FUN_00d8f400();
                    if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (cVar4 != '\0') {
                      FUN_00115910();
                      plVar8 = local_80;
                      if (plVar2 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if (local_78 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      goto LAB_01f405ce;
                    }
                    if (local_58._4_4_ != 0) {
                      if (local_58._4_4_ < 1) {
                        iVar7 = -local_58._4_4_;
                      }
                      else {
                        local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
                        FUN_00d23690();
                        local_50 = local_50 + local_58._4_4_;
                        iVar7 = 0;
                      }
                      local_58 = CONCAT44(iVar7,(int)local_58);
                    }
                  }
                  FUN_00115910();
                  if (plVar2 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  if (local_78 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                }
                local_120 = '\0';
                local_128 = plVar1;
                (**(code **)(*plVar1 + 0x390))();
                plVar2 = local_70;
                local_b0 = 0;
                if ((char)local_68 == '\0') {
                  if (local_70 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_68 = local_68 & 0xffffff00;
                }
                plVar8 = local_80;
                local_b0 = '\x01';
                local_b8 = plVar2;
                FUN_01f41160();
                if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01f405ce:
                if (plVar8 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
              }
            }
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((int64_t)plVar5 + 0xc));
      }
      FUN_00d50b20();
    }
  }
  lVar10 = *local_e0;
  if (lVar10 != 0) {
    uVar9 = *(uint *)(lVar10 + 0xc);
    uVar11 = (uint64_t)uVar9;
    if (0 < (int)uVar9) {
      while( true ) {
        uVar9 = uVar9 - 1;
        plVar5 = (int64_t *)*param_1;
        plVar1 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + (uint64_t)uVar9 * 8);
        local_68 = 1;
        local_70 = &g_024c5048;
        local_58 = local_58 & 0xffffffffffffff00;
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_58 = CONCAT71(local_58._1_7_,1);
        local_60 = plVar1;
        FUN_00d8cb40();
        local_a8 = local_98;
        local_a0 = 0;
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_a0 = '\x01';
        (**(code **)(*plVar5 + 0x400))();
        plVar5 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        local_70 = &g_024c5048;
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar5 != (int64_t *)0x0) {
          cVar4 = (**(code **)(*plVar5 + 0x3a0))();
          if (cVar4 != '\0') {
            local_118 = *local_d8;
            local_110 = '\0';
            local_108 = plVar5;
            local_100 = '\0';
            local_f8 = 0;
            local_f0 = '\0';
            (**(code **)(*arg1 + 0x6b0))(&local_108,&local_118,&local_f8,1);
            plVar5 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_70 = plVar5;
            local_68 = local_68 & 0xffffff00;
            FUN_00ca1b70();
            if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar5 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        if ((int64_t)uVar11 < 2) break;
        uVar11 = uVar11 - 1;
        lVar10 = *local_e0;
      }
    }
  }
  *this_ptr = local_88;
  *(void*)(this_ptr + 1) = 1;
  if (local_d0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

