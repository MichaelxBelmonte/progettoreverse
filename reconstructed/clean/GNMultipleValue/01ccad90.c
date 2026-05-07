// Function: FUN_01ccad90
// Address: 01ccad90
// Size: 2497 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"

void FUN_01ccad90(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  uint64_t uVar5;
  undefined7 uVar7;
  int64_t lVar6;
  int iVar8;
  void*this_ptr;
  int64_t *plVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint64_t local_110;
  uint8_t local_108;
  uint64_t local_100;
  uint8_t local_f8;
  uint64_t local_f0;
  uint8_t local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  uint32_t local_38;
  uint32_t local_34;
  
  local_40 = (int64_t *)0x0;
  local_110 = *param_2;
  local_108 = 0;
  uVar10 = FUN_01ccab60(param_1,&local_110);
  local_98 = local_68;
  if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b00();
  }
  local_78 = (int64_t *)*param_2;
  local_70 = '\0';
  FUN_01cc98b0(uVar10,&local_78);
  plVar9 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01ccae2d;
    }
  }
  else if (local_68 != (int64_t *)0x0) {
LAB_01ccae2d:
    lVar6 = plVar9[5];
    FUN_00d50b20();
    if (lVar6 != 0) {
      uVar10 = FUN_00d50b00();
      local_b0 = lVar6;
      if (local_98 == (int64_t *)0x0) {
        uVar5 = FUN_01d836c0();
        plVar9 = local_68;
        uVar7 = (undefined7)((uint64_t)uVar5 >> 8);
        if (local_68 == local_40) {
          if (local_68 == (int64_t *)0x0) {
            local_34 = 0;
          }
          else {
            local_34 = (uint32_t)CONCAT71(uVar7,1);
            if (local_60 != '\0') goto LAB_01ccafa0;
            local_34 = (uint32_t)CONCAT71(uVar7,1);
            FUN_00d50b00();
          }
joined_r0x01ccaf90:
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              uVar5 = FUN_00d50b00();
            }
            local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            local_40 = plVar9;
            goto joined_r0x01ccaf90;
          }
          local_40 = local_68;
          local_34 = (uint32_t)CONCAT71(uVar7,1);
        }
      }
      else {
        local_e0 = local_98;
        local_d8 = '\0';
        uVar5 = FUN_01d26620(uVar10,&local_e0);
        plVar9 = local_68;
        uVar7 = (undefined7)((uint64_t)uVar5 >> 8);
        if (local_68 == local_40) {
          if (local_68 == (int64_t *)0x0) {
            local_34 = 0;
          }
          else {
            if (local_60 != '\0') goto LAB_01ccaee1;
            local_34 = (uint32_t)CONCAT71(uVar7,1);
            FUN_00d50b00();
          }
LAB_01ccaf55:
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              uVar5 = FUN_00d50b00();
            }
            local_40 = plVar9;
            local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            goto LAB_01ccaf55;
          }
          local_40 = local_68;
LAB_01ccaee1:
          local_60 = '\0';
          local_34 = (uint32_t)CONCAT71(uVar7,1);
        }
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01ccafa0:
      lVar6 = g_027057d0;
      plVar9 = (int64_t *)*param_2;
      if (g_027057d0 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar6;
      local_a0 = '\x01';
      cVar4 = (**(code **)(*plVar9 + 0x50))();
      plVar9 = local_40;
      uVar10 = extraout_XMM0_Da;
      if (cVar4 == '\0') {
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          uVar10 = FUN_00d50b20();
        }
LAB_01ccb106:
        local_f0 = *param_2;
        local_e8 = 0;
        uVar10 = FUN_01ccac20(uVar10,&local_f0);
        plVar9 = local_68;
        if (local_60 == '\0') {
          if (local_68 == (int64_t *)0x0) goto LAB_01ccb19d;
          uVar10 = FUN_00d50b00();
LAB_01ccb148:
          local_c0 = local_40;
          local_b8 = '\0';
          (**(code **)(*plVar9 + 0x370))(uVar10,&local_c0);
          plVar1 = local_40;
          plVar9 = local_68;
          if (local_68 == local_40) {
            uVar10 = local_34;
            if (((char)local_34 == '\0') && (local_68 != (int64_t *)0x0)) {
              if (local_60 != '\0') goto LAB_01ccb1c1;
              FUN_00d50b00();
              uVar10 = 1;
            }
LAB_01ccb595:
            cVar4 = (char)uVar10;
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_60 == '\0') {
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_40 = plVar9;
              uVar10 = 1;
              if (((char)local_34 != '\0') && (plVar1 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01ccb595;
            }
            local_40 = local_68;
            if (((char)local_34 != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01ccb1c1:
            local_60 = '\0';
            cVar4 = '\x01';
          }
          if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        else {
          if (local_68 != (int64_t *)0x0) goto LAB_01ccb148;
LAB_01ccb19d:
          cVar4 = (char)local_34;
        }
        plVar9 = local_40;
        *(void*)(this_ptr + 1) = 0;
        if ((cVar4 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        *this_ptr = plVar9;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        if ((g_0277a3a0 == '\0') &&
           (iVar8 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_01, iVar8 != 0)) {
          g_026d3c38 = FUN_00d4fe50();
          g_026d3c20 = "GNMultipleValue";
          g_026d3c28 = 0x18;
          g_026d3c30 = FUN_00050c70;
          g_026d3c40 = 0;
          ram_00000000026d3c48 = 0;
          g_026d3c50 = 0;
          ram_00000000026d3c58 = 0;
          g_026d3c60 = 0;
          ram_00000000026d3c68 = 0;
          g_026d3c70 = 0;
          ram_00000000026d3c78 = 0;
          g_026d3c80 = 0;
          ram_00000000026d3c88 = 0;
          g_026d3c90 = 0;
          ram_00000000026d3c98 = 0;
          g_026d3ca0 = 0;
          ram_00000000026d3ca8 = 0;
          g_026d3cb0 = 0;
          ram_00000000026d3cb8 = 0;
          g_026d3cc0 = 0;
          ram_00000000026d3cc8 = 0;
          g_026d3cd0 = 0;
          ram_00000000026d3cd8 = 0;
          g_026d3ce0 = 0;
          uVar10 = ___cxa_guard_release();
        }
        plVar1 = g_02802688;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar4 = FUN_00e85ea0();
          uVar10 = extraout_XMM0_Da_00;
          plVar1 = g_02802688;
          if (cVar4 != '\0') {
            plVar1 = local_40;
          }
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (plVar1 == (int64_t *)0x0) goto LAB_01ccb106;
        FUN_00e987b0();
        local_80 = local_68;
        if ((((local_60 == '\0') && (local_68 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar5 = FUN_00d46300();
        plVar1 = local_40;
        plVar9 = local_68;
        uVar7 = (undefined7)((uint64_t)uVar5 >> 8);
        if (local_68 == local_40) {
          if (((char)local_34 == '\0') && (local_68 != (int64_t *)0x0)) {
            local_38 = (uint32_t)CONCAT71(uVar7,1);
            if (local_60 != '\0') goto LAB_01ccb282;
            local_38 = (uint32_t)CONCAT71(uVar7,1);
            FUN_00d50b00();
          }
          else {
            local_38 = local_34;
          }
LAB_01ccb26e:
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              uVar5 = FUN_00d50b00();
            }
            local_40 = plVar9;
            local_38 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            if (((char)local_34 != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01ccb26e;
          }
          local_40 = local_68;
          local_38 = (uint32_t)CONCAT71(uVar7,1);
          if (((char)local_34 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_01ccb282:
        local_100 = *param_2;
        local_f8 = 0;
        FUN_01ccac20();
        uVar10 = local_38;
        plVar1 = local_68;
        plVar9 = local_80;
        if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if (plVar9 != (int64_t *)0x0) {
          local_60 = '\0';
          local_68 = (int64_t *)0x0;
          local_58 = plVar9;
          local_50 = 0xffffffff;
          local_48 = 0;
          if (plVar1 == (int64_t *)0x0) {
            iVar8 = 0;
            while( true ) {
              if (iVar8 != 0) {
                if (iVar8 < 1) {
                  iVar8 = -iVar8;
                }
                else {
                  local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar8);
                  FUN_00d23690(iVar8,iVar8);
                  local_48 = local_48 + local_50._4_4_;
                  iVar8 = 0;
                }
                local_50 = CONCAT44(iVar8,(int)local_50);
              }
              lVar6 = (int64_t)(int)local_50;
              iVar8 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar8);
              uVar10 = local_38;
              if (*(int *)((int64_t)local_58 + 0xc) <= iVar8) goto LAB_01ccb64d;
              plVar9 = *(int64_t **)(local_58[2] + 8 + lVar6 * 8);
              local_70 = '\0';
              local_68 = plVar9;
              if (local_60 == '\0') {
                if (plVar9 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              local_88 = '\0';
              local_90 = plVar9;
              local_78 = plVar9;
              cVar4 = FUN_00c70bc0();
              if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') break;
              if (plVar9 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              iVar8 = local_50._4_4_;
            }
          }
          else {
            local_50._4_4_ = 0;
            while( true ) {
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar8 = -local_50._4_4_;
                }
                else {
                  iVar8 = (int)local_50 - local_50._4_4_;
                  local_50 = CONCAT44(local_50._4_4_,iVar8);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar8 = 0;
                }
                local_50 = CONCAT44(iVar8,(int)local_50);
              }
              lVar6 = (int64_t)(int)local_50;
              iVar8 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar8);
              uVar10 = local_38;
              if (*(int *)((int64_t)local_58 + 0xc) <= iVar8) goto LAB_01ccb64d;
              local_d0 = *(int64_t **)(local_58[2] + 8 + lVar6 * 8);
              local_c8 = '\0';
              local_68 = local_d0;
              (**(code **)(*plVar1 + 0x370))(local_58[2],&local_d0);
              plVar9 = local_78;
              if (local_70 == '\0') {
                if (local_78 == (int64_t *)0x0) {
                  plVar9 = (int64_t *)0x0;
                }
                else {
                  FUN_00d50b00();
                  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                local_70 = '\0';
              }
              if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_88 = '\0';
              local_90 = plVar9;
              cVar4 = FUN_00c70bc0();
              if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') break;
              if (plVar9 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          FUN_00d46300();
          plVar3 = local_40;
          plVar2 = local_78;
          if (local_78 == local_40) {
            uVar10 = local_38;
            if (((char)local_38 == '\0') && (local_78 != (int64_t *)0x0)) {
              uVar10 = 1;
              if (local_70 != '\0') goto LAB_01ccb640;
              FUN_00d50b00();
              uVar10 = 1;
            }
LAB_01ccb62c:
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_70 == '\0') {
              if (local_78 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_40 = plVar2;
              uVar10 = 1;
              if (((char)local_38 != '\0') && (plVar3 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01ccb62c;
            }
            local_40 = local_78;
            uVar10 = 1;
            if (((char)local_38 != '\0') && (plVar3 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_01ccb640:
          if (plVar9 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
LAB_01ccb64d:
          FUN_00083b20();
          plVar9 = local_80;
        }
        plVar2 = local_40;
        *(void*)(this_ptr + 1) = 0;
        if (((char)uVar10 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        *this_ptr = plVar2;
        *(void*)(this_ptr + 1) = 1;
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      goto LAB_01ccb6a9;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01ccb6a9:
  if (local_98 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

