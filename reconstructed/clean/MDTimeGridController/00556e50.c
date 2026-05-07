// Function: FUN_00556e50
// Address: 00556e50
// Size: 2569 bytes
// Class: MDTimeGridController
// String references:
//   "gridn_t1_%I"
//   "gridn_b1_%I"
//   "gridn_b%I_%I"

void FUN_00556e50(uint64_t param_1)

{
  bool bVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar11;
  int64_t *plVar12;
  uint8_t local_108 [8];
  uint8_t local_100;
  int64_t *local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  uint32_t local_7c;
  int64_t *local_78;
  uint64_t local_70;
  int64_t *local_68;
  uint64_t local_60;
  uint64_t local_58;
  int64_t *local_50;
  uint local_48;
  uint32_t local_44;
  int local_40;
  int64_t *local_38;
  
  if (*arg1 == 0) {
    return;
  }
  local_60 = 0;
  local_38 = (int64_t *)0x0;
  local_58 = 0;
  local_68 = (int64_t *)0x0;
  cVar4 = FUN_00108e10();
  if (cVar4 == '\0') {
    if (g_0280a520 != (int64_t *)0x0) {
      local_60 = 0;
      local_38 = (int64_t *)0x0;
      if (g_0280a520 == (int64_t *)0x0) goto LAB_0055748e;
LAB_00556f59:
      plVar12 = g_0280a520;
      plVar10 = (int64_t *)0x0;
      local_58 = 0;
      local_68 = (int64_t *)0x0;
      uVar7 = FUN_00d50b00();
      local_68 = (int64_t *)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      plVar9 = local_38;
      plVar11 = local_38;
      plVar2 = plVar12;
      goto joined_r0x00556f86;
    }
    FUN_00d30620();
    local_68 = local_50;
    if ((char)local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00557208;
      }
LAB_0055725f:
      bVar1 = true;
      local_60 = 0;
LAB_00557349:
      plVar10 = g_026d7d28;
      if (g_026d7d28 == (int64_t *)0x0) {
        plVar10 = (int64_t *)0x0;
      }
      else {
        uVar7 = FUN_00d50b00();
        local_60 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      }
    }
    else {
      if (local_50 == (int64_t *)0x0) goto LAB_0055725f;
LAB_00557208:
      lVar3 = g_026d7d20;
      if (g_026d7d20 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar3;
      local_e0 = '\x01';
      uVar7 = FUN_00d30f20(param_1,&local_e8);
      plVar10 = local_50;
      if (local_50 == (int64_t *)0x0) {
        plVar10 = (int64_t *)0x0;
        local_60 = 0;
      }
      else if ((char)local_48 == '\0') {
        uVar7 = FUN_00d50b00();
        local_60 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = local_48 & 0xffffff00;
        local_60 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      bVar1 = false;
      if (plVar10 == (int64_t *)0x0) goto LAB_00557349;
    }
    local_38 = plVar10;
    (**(code **)(*(int64_t *)*this_ptr + 0x640))();
    plVar10 = local_78;
    if ((char)local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = local_70 & 0xffffffffffffff00;
    }
    local_100 = 1;
    FUN_005565f0(param_1,local_108);
    plVar12 = local_50;
    if (g_0280a520 != local_50) {
      plVar9 = g_0280a520;
      if ((char)local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
          plVar9 = g_0280a520;
        }
      }
      else {
        local_48 = local_48 & 0xffffff00;
      }
      g_0280a520 = plVar12;
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((plVar12 != (int64_t *)0x0) && (g_0280a528 == '\0')) {
      g_0280a528 = '\x01';
      FUN_00e8cb90();
    }
    if (((char)local_48 != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
    if (g_0280a520 != (int64_t *)0x0) goto LAB_00556f59;
LAB_0055748e:
    local_58 = 0;
    plVar10 = (int64_t *)0x0;
    local_68 = (int64_t *)0x0;
    plVar9 = local_38;
  }
  else {
    iVar5 = FUN_00108090();
    if (iVar5 == 0) {
      local_70 = 1;
      local_78 = &g_024cc6f0;
      uVar7 = FUN_00d8cb40(param_1,&local_78);
      plVar10 = local_50;
      if (local_50 != (int64_t *)0x0) {
        if ((char)local_48 == '\0') {
          uVar7 = FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            local_58 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
            FUN_00d50b20();
            goto LAB_0055713b;
          }
        }
        goto LAB_0055712e;
      }
LAB_00557132:
      plVar10 = (int64_t *)0x0;
      local_58 = 0;
    }
    else {
      cVar4 = FUN_001080b0();
      if (cVar4 != '\0') {
        local_78 = &g_024cc6f0;
        local_70 = CONCAT44(iVar5,1);
        uVar7 = FUN_00d8cb40(param_1,&local_78);
        plVar10 = local_50;
        if (local_50 != (int64_t *)0x0) {
          if ((char)local_48 == '\0') {
            uVar7 = FUN_00d50b00();
            if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              local_58 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
              FUN_00d50b20();
              goto LAB_0055713b;
            }
          }
          goto LAB_0055712e;
        }
        goto LAB_00557132;
      }
      iVar6 = FUN_00108080();
      if ((iVar6 != 1) && (iVar6 = FUN_00108080(), iVar6 != 0)) {
        local_44 = FUN_00108080();
        local_48 = 2;
        local_50 = (int64_t *)&g_024c3df0;
        local_40 = iVar5;
        uVar7 = FUN_00d8cb40(param_1,&local_50);
        plVar10 = local_78;
        if (local_78 != (int64_t *)0x0) {
          if ((char)local_70 == '\0') {
            uVar7 = FUN_00d50b00();
            if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              local_58 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
              FUN_00d50b20();
              goto LAB_0055713b;
            }
          }
          goto LAB_0055712e;
        }
        goto LAB_00557132;
      }
      local_78 = &g_024cc6f0;
      local_70 = CONCAT44(iVar5,1);
      uVar7 = FUN_00d8cb40(param_1,&local_78);
      plVar10 = local_50;
      if (local_50 == (int64_t *)0x0) goto LAB_00557132;
      if ((char)local_48 == '\0') {
        uVar7 = FUN_00d50b00();
        if (((char)local_48 == '\0') || (local_50 == (int64_t *)0x0)) goto LAB_0055712e;
        local_58 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
        FUN_00d50b20();
      }
      else {
LAB_0055712e:
        local_58 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      }
    }
LAB_0055713b:
    local_60 = 0;
    plVar9 = (int64_t *)0x0;
    local_68 = (int64_t *)0x0;
    plVar12 = (int64_t *)0x0;
    plVar11 = local_38;
    plVar2 = plVar10;
joined_r0x00556f86:
    if (plVar2 != (int64_t *)0x0) {
      local_38 = plVar9;
      if (plVar12 == (int64_t *)0x0) {
        local_d0 = '\0';
        local_d8 = plVar10;
        local_38 = plVar11;
        uVar7 = FUN_01d51a40();
        plVar12 = local_50;
        if (local_50 == (int64_t *)0x0) {
          plVar12 = (int64_t *)0x0;
        }
        else if ((char)local_48 == '\0') {
          uVar7 = FUN_00d50b00();
          local_68 = (int64_t *)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = local_48 & 0xffffff00;
          local_68 = (int64_t *)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
        }
        if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_38 = plVar9;
        if (plVar12 == (int64_t *)0x0) {
          if (g_0280a530 == (int64_t *)0x0) {
            uVar7 = FUN_00d30620();
            local_88 = local_50;
            if ((char)local_48 == '\0') {
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b00();
                if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_00557502;
              }
LAB_00557564:
              local_7c = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
              uVar8 = local_60 & 0xffffffff;
              plVar12 = local_38;
            }
            else {
              if (local_50 == (int64_t *)0x0) goto LAB_00557564;
LAB_00557502:
              lVar3 = g_0270d3e8;
              if (g_0270d3e8 != 0) {
                FUN_00d50b00();
              }
              local_c8 = lVar3;
              local_c0 = '\x01';
              FUN_00d30f20(param_1,&local_c8);
              plVar12 = local_50;
              if (local_50 == local_38) {
                if (((char)local_60 == '\0') && (local_50 != (int64_t *)0x0)) {
                  plVar12 = local_38;
                  if ((char)local_48 != '\0') goto LAB_0055758a;
                  uVar8 = 1;
                  FUN_00d50b00();
                }
                else {
                  uVar8 = local_60 & 0xffffffff;
                }
LAB_005575d8:
                plVar12 = local_38;
                if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if ((char)local_48 == '\0') {
                  if (local_50 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  uVar8 = 1;
                  if (((char)local_60 == '\0') || (local_38 == (int64_t *)0x0)) {
                    local_38 = plVar12;
                  }
                  else {
                    local_38 = plVar12;
                    FUN_00d50b20();
                  }
                  goto LAB_005575d8;
                }
                if (((char)local_60 != '\0') && (local_38 != (int64_t *)0x0)) {
                  local_38 = local_50;
                  FUN_00d50b20();
                }
LAB_0055758a:
                local_48 = local_48 & 0xffffff00;
                uVar8 = 1;
              }
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
              local_7c = 0;
            }
            plVar9 = g_0270d3f0;
            if (plVar12 == (int64_t *)0x0) {
              if (g_0270d3f0 == (int64_t *)0x0) {
                plVar12 = (int64_t *)0x0;
              }
              else {
                uVar7 = FUN_00d50b00();
                uVar8 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
                plVar12 = plVar9;
              }
            }
            local_60 = uVar8;
            local_38 = plVar12;
            (**(code **)(*(int64_t *)*this_ptr + 0x640))();
            plVar12 = local_78;
            if ((char)local_70 == '\0') {
              if (local_78 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = local_70 & 0xffffffffffffff00;
            }
            local_f0 = 1;
            local_f8 = plVar12;
            FUN_005565f0(param_1,&local_f8);
            plVar9 = local_50;
            if (g_0280a530 != local_50) {
              plVar11 = g_0280a530;
              if ((char)local_48 == '\0') {
                if (local_50 != (int64_t *)0x0) {
                  FUN_00d50b00();
                  plVar11 = g_0280a530;
                }
              }
              else {
                local_48 = local_48 & 0xffffff00;
              }
              g_0280a530 = plVar9;
              if (plVar11 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            if ((plVar9 != (int64_t *)0x0) && (g_0280a538 == '\0')) {
              g_0280a538 = '\x01';
              FUN_00e8cb90();
            }
            if (((char)local_48 != '\0') && (plVar9 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar12 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((char)local_7c == '\0') {
              FUN_00d50b20();
            }
          }
          plVar9 = g_0280a530;
          plVar12 = (int64_t *)0x0;
          if (g_0280a530 != (int64_t *)0x0) {
            uVar7 = FUN_00d50b00();
            local_68 = (int64_t *)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
            plVar12 = plVar9;
          }
        }
      }
      local_b0 = '\0';
      local_b8 = plVar12;
      FUN_01cef3b0();
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_005577b7;
    }
  }
  local_a0 = '\0';
  local_a8 = 0;
  local_38 = plVar9;
  FUN_01cef3b0();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  local_90 = '\0';
  local_98 = plVar9;
  (**(code **)(*(int64_t *)*this_ptr + 0x958))();
  plVar12 = (int64_t *)0x0;
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
    plVar12 = (int64_t *)0x0;
  }
LAB_005577b7:
  FUN_01cef450();
  plVar9 = (int64_t *)*this_ptr;
  FUN_001060a0();
  (**(code **)(*local_50 + 0x3c8))();
  (**(code **)(*plVar9 + 0x918))();
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

