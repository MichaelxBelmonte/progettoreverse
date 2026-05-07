// Function: FUN_01ccad90
// Address: 01ccad90
// Size: 2497 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ccad90(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined7 uVar7;
  longlong lVar6;
  int iVar8;
  undefined8 *unaff_RDI;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  local_40 = (longlong *)0x0;
  local_110 = *param_2;
  local_108 = 0;
  uVar10 = FUN_01ccab60(param_1,&local_110);
  local_98 = local_68;
  if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b00();
  }
  local_78 = (longlong *)*param_2;
  local_70 = '\0';
  FUN_01cc98b0(uVar10,&local_78);
  plVar9 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01ccae2d;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_01ccae2d:
    lVar6 = plVar9[5];
    FUN_00d50b20();
    if (lVar6 != 0) {
      uVar10 = FUN_00d50b00();
      local_b0 = lVar6;
      if (local_98 == (longlong *)0x0) {
        uVar5 = FUN_01d836c0();
        plVar9 = local_68;
        uVar7 = (undefined7)((ulonglong)uVar5 >> 8);
        if (local_68 == local_40) {
          if (local_68 == (longlong *)0x0) {
            local_34 = 0;
          }
          else {
            local_34 = (undefined4)CONCAT71(uVar7,1);
            if (local_60 != '\0') goto LAB_01ccafa0;
            local_34 = (undefined4)CONCAT71(uVar7,1);
            FUN_00d50b00();
          }
joined_r0x01ccaf90:
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              uVar5 = FUN_00d50b00();
            }
            local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            local_40 = plVar9;
            goto joined_r0x01ccaf90;
          }
          local_40 = local_68;
          local_34 = (undefined4)CONCAT71(uVar7,1);
        }
      }
      else {
        local_e0 = local_98;
        local_d8 = '\0';
        uVar5 = FUN_01d26620(uVar10,&local_e0);
        plVar9 = local_68;
        uVar7 = (undefined7)((ulonglong)uVar5 >> 8);
        if (local_68 == local_40) {
          if (local_68 == (longlong *)0x0) {
            local_34 = 0;
          }
          else {
            if (local_60 != '\0') goto LAB_01ccaee1;
            local_34 = (undefined4)CONCAT71(uVar7,1);
            FUN_00d50b00();
          }
LAB_01ccaf55:
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              uVar5 = FUN_00d50b00();
            }
            local_40 = plVar9;
            local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            goto LAB_01ccaf55;
          }
          local_40 = local_68;
LAB_01ccaee1:
          local_60 = '\0';
          local_34 = (undefined4)CONCAT71(uVar7,1);
        }
        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01ccafa0:
      lVar6 = DAT_027057d0;
      plVar9 = (longlong *)*param_2;
      if (DAT_027057d0 != 0) {
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
          if (local_68 == (longlong *)0x0) goto LAB_01ccb19d;
          uVar10 = FUN_00d50b00();
LAB_01ccb148:
          local_c0 = local_40;
          local_b8 = '\0';
          (**(code **)(*plVar9 + 0x370))(uVar10,&local_c0);
          plVar1 = local_40;
          plVar9 = local_68;
          if (local_68 == local_40) {
            uVar10 = local_34;
            if (((char)local_34 == '\0') && (local_68 != (longlong *)0x0)) {
              if (local_60 != '\0') goto LAB_01ccb1c1;
              FUN_00d50b00();
              uVar10 = 1;
            }
LAB_01ccb595:
            cVar4 = (char)uVar10;
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_60 == '\0') {
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              local_40 = plVar9;
              uVar10 = 1;
              if (((char)local_34 != '\0') && (plVar1 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01ccb595;
            }
            local_40 = local_68;
            if (((char)local_34 != '\0') && (plVar1 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01ccb1c1:
            local_60 = '\0';
            cVar4 = '\x01';
          }
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        else {
          if (local_68 != (longlong *)0x0) goto LAB_01ccb148;
LAB_01ccb19d:
          cVar4 = (char)local_34;
        }
        plVar9 = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if ((cVar4 == '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        *unaff_RDI = plVar9;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        if ((DAT_0277a3a0 == '\0') &&
           (iVar8 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_01, iVar8 != 0)) {
          _DAT_026d3c38 = FUN_00d4fe50();
          _DAT_026d3c20 = "GNMultipleValue";
          _DAT_026d3c28 = 0x18;
          _DAT_026d3c30 = FUN_00050c70;
          _DAT_026d3c40 = 0;
          uRam00000000026d3c48 = 0;
          _DAT_026d3c50 = 0;
          uRam00000000026d3c58 = 0;
          _DAT_026d3c60 = 0;
          uRam00000000026d3c68 = 0;
          _DAT_026d3c70 = 0;
          uRam00000000026d3c78 = 0;
          _DAT_026d3c80 = 0;
          uRam00000000026d3c88 = 0;
          _DAT_026d3c90 = 0;
          uRam00000000026d3c98 = 0;
          _DAT_026d3ca0 = 0;
          uRam00000000026d3ca8 = 0;
          _DAT_026d3cb0 = 0;
          uRam00000000026d3cb8 = 0;
          _DAT_026d3cc0 = 0;
          uRam00000000026d3cc8 = 0;
          _DAT_026d3cd0 = 0;
          uRam00000000026d3cd8 = 0;
          _DAT_026d3ce0 = 0;
          uVar10 = ___cxa_guard_release();
        }
        plVar1 = DAT_02802688;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar4 = FUN_00e85ea0();
          uVar10 = extraout_XMM0_Da_00;
          plVar1 = DAT_02802688;
          if (cVar4 != '\0') {
            plVar1 = local_40;
          }
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (plVar1 == (longlong *)0x0) goto LAB_01ccb106;
        FUN_00e987b0();
        local_80 = local_68;
        if ((((local_60 == '\0') && (local_68 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar5 = FUN_00d46300();
        plVar1 = local_40;
        plVar9 = local_68;
        uVar7 = (undefined7)((ulonglong)uVar5 >> 8);
        if (local_68 == local_40) {
          if (((char)local_34 == '\0') && (local_68 != (longlong *)0x0)) {
            local_38 = (undefined4)CONCAT71(uVar7,1);
            if (local_60 != '\0') goto LAB_01ccb282;
            local_38 = (undefined4)CONCAT71(uVar7,1);
            FUN_00d50b00();
          }
          else {
            local_38 = local_34;
          }
LAB_01ccb26e:
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              uVar5 = FUN_00d50b00();
            }
            local_40 = plVar9;
            local_38 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            if (((char)local_34 != '\0') && (plVar1 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01ccb26e;
          }
          local_40 = local_68;
          local_38 = (undefined4)CONCAT71(uVar7,1);
          if (((char)local_34 != '\0') && (plVar1 != (longlong *)0x0)) {
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
        if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if (plVar9 != (longlong *)0x0) {
          local_60 = '\0';
          local_68 = (longlong *)0x0;
          local_58 = plVar9;
          local_50 = 0xffffffff;
          local_48 = 0;
          if (plVar1 == (longlong *)0x0) {
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
              lVar6 = (longlong)(int)local_50;
              iVar8 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar8);
              uVar10 = local_38;
              if (*(int *)((longlong)local_58 + 0xc) <= iVar8) goto LAB_01ccb64d;
              plVar9 = *(longlong **)(local_58[2] + 8 + lVar6 * 8);
              local_70 = '\0';
              local_68 = plVar9;
              if (local_60 == '\0') {
                if (plVar9 != (longlong *)0x0) {
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
              if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') break;
              if (plVar9 != (longlong *)0x0) {
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
              lVar6 = (longlong)(int)local_50;
              iVar8 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar8);
              uVar10 = local_38;
              if (*(int *)((longlong)local_58 + 0xc) <= iVar8) goto LAB_01ccb64d;
              local_d0 = *(longlong **)(local_58[2] + 8 + lVar6 * 8);
              local_c8 = '\0';
              local_68 = local_d0;
              (**(code **)(*plVar1 + 0x370))(local_58[2],&local_d0);
              plVar9 = local_78;
              if (local_70 == '\0') {
                if (local_78 == (longlong *)0x0) {
                  plVar9 = (longlong *)0x0;
                }
                else {
                  FUN_00d50b00();
                  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                local_70 = '\0';
              }
              if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_88 = '\0';
              local_90 = plVar9;
              cVar4 = FUN_00c70bc0();
              if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') break;
              if (plVar9 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          FUN_00d46300();
          plVar3 = local_40;
          plVar2 = local_78;
          if (local_78 == local_40) {
            uVar10 = local_38;
            if (((char)local_38 == '\0') && (local_78 != (longlong *)0x0)) {
              uVar10 = 1;
              if (local_70 != '\0') goto LAB_01ccb640;
              FUN_00d50b00();
              uVar10 = 1;
            }
LAB_01ccb62c:
            if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_70 == '\0') {
              if (local_78 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              local_40 = plVar2;
              uVar10 = 1;
              if (((char)local_38 != '\0') && (plVar3 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01ccb62c;
            }
            local_40 = local_78;
            uVar10 = 1;
            if (((char)local_38 != '\0') && (plVar3 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_01ccb640:
          if (plVar9 != (longlong *)0x0) {
            FUN_00d50b20();
          }
LAB_01ccb64d:
          FUN_00083b20();
          plVar9 = local_80;
        }
        plVar2 = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (((char)uVar10 == '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        *unaff_RDI = plVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      goto LAB_01ccb6a9;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_01ccb6a9:
  if (local_98 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


