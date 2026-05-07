// Reconstructed implementation of MDTimeGridController
// From MikeCore binary — reverse-engineered pseudocode

#include "MDTimeGridController.h"

// ============================================================
// @00556e50 — 2569 bytes
// str: ""gridn_t1_%I""
// str: ""gridn_b1_%I""
// str: ""gridn_b%I_%I""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x005574b0) */

void FUN_00556e50(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 local_108 [8];
  undefined1 local_100;
  longlong *local_f8;
  undefined1 local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  undefined4 local_44;
  int local_40;
  longlong *local_38;
  
  if (*unaff_RSI == 0) {
    return;
  }
  local_60 = 0;
  local_38 = (longlong *)0x0;
  local_58 = 0;
  local_68 = (longlong *)0x0;
  cVar4 = FUN_00108e10();
  if (cVar4 == '\0') {
    if (DAT_0280a520 != (longlong *)0x0) {
      local_60 = 0;
      local_38 = (longlong *)0x0;
      if (DAT_0280a520 == (longlong *)0x0) goto LAB_0055748e;
LAB_00556f59:
      plVar12 = DAT_0280a520;
      plVar10 = (longlong *)0x0;
      local_58 = 0;
      local_68 = (longlong *)0x0;
      uVar7 = FUN_00d50b00();
      local_68 = (longlong *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      plVar9 = local_38;
      plVar11 = local_38;
      plVar2 = plVar12;
      goto joined_r0x00556f86;
    }
    FUN_00d30620();
    local_68 = local_50;
    if ((char)local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00557208;
      }
LAB_0055725f:
      bVar1 = true;
      local_60 = 0;
LAB_00557349:
      plVar10 = DAT_026d7d28;
      if (DAT_026d7d28 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        uVar7 = FUN_00d50b00();
        local_60 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      }
    }
    else {
      if (local_50 == (longlong *)0x0) goto LAB_0055725f;
LAB_00557208:
      lVar3 = DAT_026d7d20;
      if (DAT_026d7d20 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar3;
      local_e0 = '\x01';
      uVar7 = FUN_00d30f20(param_1,&local_e8);
      plVar10 = local_50;
      if (local_50 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
        local_60 = 0;
      }
      else if ((char)local_48 == '\0') {
        uVar7 = FUN_00d50b00();
        local_60 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = local_48 & 0xffffff00;
        local_60 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      bVar1 = false;
      if (plVar10 == (longlong *)0x0) goto LAB_00557349;
    }
    local_38 = plVar10;
    (**(code **)(*(longlong *)*unaff_RDI + 0x640))();
    plVar10 = local_78;
    if ((char)local_70 == '\0') {
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = local_70 & 0xffffffffffffff00;
    }
    local_100 = 1;
    FUN_005565f0(param_1,local_108);
    plVar12 = local_50;
    if (DAT_0280a520 != local_50) {
      plVar9 = DAT_0280a520;
      if ((char)local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
          plVar9 = DAT_0280a520;
        }
      }
      else {
        local_48 = local_48 & 0xffffff00;
      }
      DAT_0280a520 = plVar12;
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((plVar12 != (longlong *)0x0) && (DAT_0280a528 == '\0')) {
      DAT_0280a528 = '\x01';
      FUN_00e8cb90();
    }
    if (((char)local_48 != '\0') && (plVar12 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
    if (DAT_0280a520 != (longlong *)0x0) goto LAB_00556f59;
LAB_0055748e:
    local_58 = 0;
    plVar10 = (longlong *)0x0;
    local_68 = (longlong *)0x0;
    plVar9 = local_38;
  }
  else {
    iVar5 = FUN_00108090();
    if (iVar5 == 0) {
      local_70 = 1;
      local_78 = &DAT_024cc6f0;
      uVar7 = FUN_00d8cb40(param_1,&local_78);
      plVar10 = local_50;
      if (local_50 != (longlong *)0x0) {
        if ((char)local_48 == '\0') {
          uVar7 = FUN_00d50b00();
          if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            local_58 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
            FUN_00d50b20();
            goto LAB_0055713b;
          }
        }
        goto LAB_0055712e;
      }
LAB_00557132:
      plVar10 = (longlong *)0x0;
      local_58 = 0;
    }
    else {
      cVar4 = FUN_001080b0();
      if (cVar4 != '\0') {
        local_78 = &DAT_024cc6f0;
        local_70 = CONCAT44(iVar5,1);
        uVar7 = FUN_00d8cb40(param_1,&local_78);
        plVar10 = local_50;
        if (local_50 != (longlong *)0x0) {
          if ((char)local_48 == '\0') {
            uVar7 = FUN_00d50b00();
            if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              local_58 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
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
        local_50 = (longlong *)&DAT_024c3df0;
        local_40 = iVar5;
        uVar7 = FUN_00d8cb40(param_1,&local_50);
        plVar10 = local_78;
        if (local_78 != (longlong *)0x0) {
          if ((char)local_70 == '\0') {
            uVar7 = FUN_00d50b00();
            if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              local_58 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
              FUN_00d50b20();
              goto LAB_0055713b;
            }
          }
          goto LAB_0055712e;
        }
        goto LAB_00557132;
      }
      local_78 = &DAT_024cc6f0;
      local_70 = CONCAT44(iVar5,1);
      uVar7 = FUN_00d8cb40(param_1,&local_78);
      plVar10 = local_50;
      if (local_50 == (longlong *)0x0) goto LAB_00557132;
      if ((char)local_48 == '\0') {
        uVar7 = FUN_00d50b00();
        if (((char)local_48 == '\0') || (local_50 == (longlong *)0x0)) goto LAB_0055712e;
        local_58 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        FUN_00d50b20();
      }
      else {
LAB_0055712e:
        local_58 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      }
    }
LAB_0055713b:
    local_60 = 0;
    plVar9 = (longlong *)0x0;
    local_68 = (longlong *)0x0;
    plVar12 = (longlong *)0x0;
    plVar11 = local_38;
    plVar2 = plVar10;
joined_r0x00556f86:
    if (plVar2 != (longlong *)0x0) {
      local_38 = plVar9;
      if (plVar12 == (longlong *)0x0) {
        local_d0 = '\0';
        local_d8 = plVar10;
        local_38 = plVar11;
        uVar7 = FUN_01d51a40();
        plVar12 = local_50;
        if (local_50 == (longlong *)0x0) {
          plVar12 = (longlong *)0x0;
        }
        else if ((char)local_48 == '\0') {
          uVar7 = FUN_00d50b00();
          local_68 = (longlong *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = local_48 & 0xffffff00;
          local_68 = (longlong *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        }
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_38 = plVar9;
        if (plVar12 == (longlong *)0x0) {
          if (DAT_0280a530 == (longlong *)0x0) {
            uVar7 = FUN_00d30620();
            local_88 = local_50;
            if ((char)local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
                if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_00557502;
              }
LAB_00557564:
              local_7c = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
              uVar8 = local_60 & 0xffffffff;
              plVar12 = local_38;
            }
            else {
              if (local_50 == (longlong *)0x0) goto LAB_00557564;
LAB_00557502:
              lVar3 = DAT_0270d3e8;
              if (DAT_0270d3e8 != 0) {
                FUN_00d50b00();
              }
              local_c8 = lVar3;
              local_c0 = '\x01';
              FUN_00d30f20(param_1,&local_c8);
              plVar12 = local_50;
              if (local_50 == local_38) {
                if (((char)local_60 == '\0') && (local_50 != (longlong *)0x0)) {
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
                if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if ((char)local_48 == '\0') {
                  if (local_50 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  uVar8 = 1;
                  if (((char)local_60 == '\0') || (local_38 == (longlong *)0x0)) {
                    local_38 = plVar12;
                  }
                  else {
                    local_38 = plVar12;
                    FUN_00d50b20();
                  }
                  goto LAB_005575d8;
                }
                if (((char)local_60 != '\0') && (local_38 != (longlong *)0x0)) {
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
            plVar9 = DAT_0270d3f0;
            if (plVar12 == (longlong *)0x0) {
              if (DAT_0270d3f0 == (longlong *)0x0) {
                plVar12 = (longlong *)0x0;
              }
              else {
                uVar7 = FUN_00d50b00();
                uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
                plVar12 = plVar9;
              }
            }
            local_60 = uVar8;
            local_38 = plVar12;
            (**(code **)(*(longlong *)*unaff_RDI + 0x640))();
            plVar12 = local_78;
            if ((char)local_70 == '\0') {
              if (local_78 != (longlong *)0x0) {
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
            if (DAT_0280a530 != local_50) {
              plVar11 = DAT_0280a530;
              if ((char)local_48 == '\0') {
                if (local_50 != (longlong *)0x0) {
                  FUN_00d50b00();
                  plVar11 = DAT_0280a530;
                }
              }
              else {
                local_48 = local_48 & 0xffffff00;
              }
              DAT_0280a530 = plVar9;
              if (plVar11 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            if ((plVar9 != (longlong *)0x0) && (DAT_0280a538 == '\0')) {
              DAT_0280a538 = '\x01';
              FUN_00e8cb90();
            }
            if (((char)local_48 != '\0') && (plVar9 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar12 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((char)local_7c == '\0') {
              FUN_00d50b20();
            }
          }
          plVar9 = DAT_0280a530;
          plVar12 = (longlong *)0x0;
          if (DAT_0280a530 != (longlong *)0x0) {
            uVar7 = FUN_00d50b00();
            local_68 = (longlong *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
            plVar12 = plVar9;
          }
        }
      }
      local_b0 = '\0';
      local_b8 = plVar12;
      FUN_01cef3b0();
      if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
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
  (**(code **)(*(longlong *)*unaff_RDI + 0x958))();
  plVar12 = (longlong *)0x0;
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
    plVar12 = (longlong *)0x0;
  }
LAB_005577b7:
  FUN_01cef450();
  plVar9 = (longlong *)*unaff_RDI;
  FUN_001060a0();
  (**(code **)(*local_50 + 0x3c8))();
  (**(code **)(*plVar9 + 0x918))();
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00555360 — 2568 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x005558b0) */
/* WARNING: Removing unreachable block (ram,0x005558a4) */
/* WARNING: Removing unreachable block (ram,0x00555903) */
/* WARNING: Removing unreachable block (ram,0x0055590f) */

void FUN_00555360(undefined8 param_1,float param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong **pplVar9;
  ulonglong uVar10;
  longlong *in_RDX;
  longlong *unaff_RDI;
  longlong *plVar11;
  char cVar12;
  longlong *plVar13;
  undefined4 uVar14;
  float fVar15;
  longlong local_f0;
  char local_e8;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  uint local_a4;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  longlong *local_40;
  ulonglong local_38;
  
  if (*in_RDX == 0) {
    return;
  }
  local_98 = in_RDX;
  FUN_01e53c20();
  local_a0 = local_80;
  if ((((local_78 == '\0') && (local_80 != (longlong *)0x0)) && (FUN_00d50b00(), local_78 != '\0'))
     && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar6 = FUN_01d3a5a0();
  if (iVar6 == 1) {
    uVar7 = FUN_01d3b630();
    local_a4 = (uint)CONCAT71((int7)((ulonglong)uVar7 >> 8),(int)uVar7 == 1);
  }
  else {
    local_a4 = 0;
  }
  FUN_00d4efa0();
  FUN_00c81c60();
  local_58 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = (longlong *)0x0;
  if (local_58 != (longlong *)0x0) {
    local_78 = '\0';
    local_80 = (longlong *)0x0;
    local_70 = local_58;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    do {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar6 = -local_68._4_4_;
        }
        else {
          iVar6 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar6);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar6 = 0;
        }
        local_68 = CONCAT44(iVar6,(int)local_68);
      }
      lVar8 = (longlong)(int)local_68;
      iVar6 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar6);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar6) {
        bVar2 = false;
        local_40 = (longlong *)0x0;
        goto LAB_005556d4;
      }
      local_80 = *(longlong **)(local_70[2] + 8 + lVar8 * 8);
      uVar14 = FUN_00d74120();
      local_c0 = 0;
      if (local_e8 == '\0') {
        if (local_f0 != 0) {
          uVar14 = FUN_00d50b00();
        }
      }
      else {
        local_e8 = '\0';
      }
      local_c0 = '\x01';
      local_c8 = local_f0;
      (**(code **)(*unaff_RDI + 0x88))(uVar14,&local_c8);
      plVar3 = local_90;
      FUN_000f5df0();
      pplVar9 = (longlong **)&DAT_02802688;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar9 = &local_90;
        if (cVar4 == '\0') {
          pplVar9 = (longlong **)&DAT_02802688;
        }
      }
      local_40 = *pplVar9;
      if (*(char *)(pplVar9 + 1) == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00(pplVar9,local_40);
        }
      }
      else {
        *(undefined1 *)(pplVar9 + 1) = 0;
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        iVar6 = (**(code **)(*local_40 + 0x920))();
        if (iVar6 != 0) goto LAB_005556b7;
        FUN_00d50b20();
      }
    } while( true );
  }
  bVar2 = false;
LAB_005556e6:
  FUN_01e561b0();
  FUN_01d8c6e0();
  plVar3 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_01e3f820();
    local_58 = (longlong *)FUN_01e46ed0();
    FUN_01e3f820();
    uVar7 = FUN_01e46ed0();
    param_2 = local_58._4_4_ - (float)((ulonglong)uVar7 >> 0x20);
    FUN_01e5bd60((float)local_58 - (float)uVar7);
  }
  local_38 = 0;
  local_58 = (longlong *)0x0;
  uVar14 = FUN_01e5b880();
  FUN_01e49570();
  FUN_01d3abf0();
  FUN_01f514b0();
  local_b8 = local_80;
  local_b0 = 0;
  if (local_78 == '\0') {
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_b0 = '\x01';
  FUN_01edf2f0(uVar14,param_2);
  FUN_01e5ba50();
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_38 = 0;
  local_58 = (longlong *)0x0;
  FUN_01e5d9c0();
  local_38 = 0;
  local_58 = (longlong *)0x0;
  FUN_01e5d070();
  local_38 = 0;
  local_58 = (longlong *)0x0;
  plVar11 = (longlong *)0x0;
  uVar10 = 0;
  while( true ) {
    FUN_01e42030();
    plVar1 = local_80;
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (longlong *)0x0) break;
    FUN_01d3abf0();
    uVar14 = FUN_01e466c0();
    fVar15 = (float)FUN_01e3f820();
    cVar4 = FUN_00d05410(uVar14,fVar15,param_2);
    cVar12 = (char)uVar10;
    if (cVar4 == '\0') {
      param_2 = fVar15;
      if (plVar11 != (longlong *)0x0) {
        if (cVar12 != '\0') {
          FUN_00d50b20();
        }
        uVar10 = 0;
        param_2 = fVar15;
      }
      plVar11 = (longlong *)0x0;
      if (local_58 != (longlong *)0x0) goto LAB_00555b44;
    }
    else {
      (**(code **)(*local_a0 + 0x490))(uVar14);
      plVar1 = local_80;
      FUN_000f5df0();
      pplVar9 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar9 = &local_80;
        if (cVar5 == '\0') {
          pplVar9 = (longlong **)&DAT_02802688;
        }
      }
      plVar13 = *pplVar9;
      if (plVar11 == plVar13) {
        if ((cVar12 == '\0') && (plVar11 != (longlong *)0x0)) {
          plVar13 = plVar11;
          if (*(char *)(pplVar9 + 1) != '\0') goto LAB_00555a9e;
          FUN_00d50b00();
          goto joined_r0x00555b24;
        }
        uVar10 = uVar10 & 0xffffffff;
        param_2 = fVar15;
      }
      else {
        if (*(char *)(pplVar9 + 1) == '\0') {
          if (plVar13 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((cVar12 != '\0') && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((cVar12 != '\0') && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_00555a9e:
          *(undefined1 *)(pplVar9 + 1) = 0;
        }
joined_r0x00555b24:
        uVar10 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
        plVar11 = plVar13;
        param_2 = fVar15;
      }
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != local_58) {
LAB_00555b44:
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 0x918))();
        }
        if (((char)uVar10 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if (((char)local_38 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 == (longlong *)0x0) {
          if (local_40 != (longlong *)0x0) goto LAB_00555bbf;
          local_38 = uVar10 & 0xffffffff;
          local_58 = (longlong *)0x0;
        }
        else {
          (**(code **)(*plVar11 + 0x918))();
          if (local_40 != (longlong *)0x0) {
LAB_00555bbf:
            plVar1 = local_40;
            (**(code **)(*local_40 + 0x918))();
            local_a4 = local_a4 & 0xff;
            if (plVar1 != plVar11) {
              local_a4 = 1;
            }
          }
          local_38 = uVar10 & 0xffffffff;
          local_58 = plVar11;
        }
      }
    }
    (**(code **)(*local_a0 + 0x658))();
    plVar13 = local_80;
    plVar1 = (longlong *)*local_98;
    if (plVar1 == local_80) {
      if (((char)local_98[1] != '\0') || (local_80 == (longlong *)0x0)) goto LAB_00555cb0;
      if (local_78 == '\0') {
        FUN_00d50b00();
        goto LAB_00555ca5;
      }
LAB_00555c51:
      *(undefined1 *)(local_98 + 1) = 1;
    }
    else {
      lVar8 = local_98[1];
      if (local_78 != '\0') {
        *local_98 = (longlong)local_80;
        if (((char)lVar8 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00555c51;
      }
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *local_98 = (longlong)plVar13;
      if (((char)lVar8 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00555ca5:
      *(undefined1 *)(local_98 + 1) = 1;
LAB_00555cb0:
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (((*local_98 == 0) ||
        ((((local_a4 & 1) != 0 && (iVar6 = FUN_01d3a5a0(), iVar6 == 6)) && (cVar4 == '\x01')))) ||
       (iVar6 = FUN_01d3a5a0(), iVar6 == 1)) goto LAB_00555d1a;
  }
  uVar10 = uVar10 & 0xffffffff;
LAB_00555d1a:
  if (local_58 != (longlong *)0x0) {
    FUN_01d11e80();
  }
  FUN_01d7c320();
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)uVar10 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_38 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
LAB_005556b7:
  FUN_00d50b00();
  FUN_00d50b20();
  bVar2 = true;
LAB_005556d4:
  FUN_00559a70();
  FUN_00d50b20();
  goto LAB_005556e6;
}




// ============================================================
// @002b3880 — 2461 bytes
// str: ""MDTimeGridController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002b412e) */
/* WARNING: Removing unreachable block (ram,0x002b4137) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b3880(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  longlong **pplVar8;
  longlong *unaff_RDI;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_68;
  char local_60;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00d3ecc0();
  plVar3 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026f6d10;
  if (DAT_026f6d10 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar3 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fce70;
  if (cVar4 == '\0') {
    if (DAT_026fce70 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar3 + 0x50))();
    lVar2 = DAT_026f6e90;
    cVar5 = '\x01';
    if (cVar4 == '\0') {
      if (DAT_026f6e90 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*plVar3 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027ebc60;
    if (cVar5 == '\0') {
      if (DAT_027ebc60 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar3 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_026fc520;
      if (cVar4 == '\0') {
        if (DAT_026fc520 != 0) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*plVar3 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = DAT_027f0f20;
        if (cVar4 == '\0') {
          if (DAT_027f0f20 != 0) {
            FUN_00d50b00();
          }
          cVar4 = (**(code **)(*plVar3 + 0x50))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = DAT_026d7d88;
          if (cVar4 == '\0') {
            if (DAT_026d7d88 != 0) {
              FUN_00d50b00();
            }
            cVar4 = (**(code **)(*plVar3 + 0x50))();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((cVar4 != '\0') && ((longlong *)unaff_RDI[0x27] != (longlong *)0x0)) {
              (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x30))();
              FUN_00d3ecf0();
              plVar10 = local_48;
              plVar9 = local_68;
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar10 == plVar9) {
                (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x38))();
              }
            }
          }
          else {
            FUN_00d3ecf0();
            pplVar8 = &local_48;
            FUN_01d77a20();
            plVar9 = local_48;
            if ((DAT_02701700 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
              _DAT_026fc568 = FUN_00015ff0();
              _DAT_026fc550 = "MDTimeGridController";
              _DAT_026fc558 = 0x118;
              _DAT_026fc560 = FUN_002b8a60;
              _DAT_026fc570 = 0;
              uRam00000000026fc578 = 0;
              _DAT_026fc580 = 0;
              _DAT_026fc5f8 = 0;
              uRam00000000026fc600 = 0;
              _DAT_026fc608 = 0;
              DAT_026fc60a = 1;
              _DAT_026fc588 = 0;
              uRam00000000026fc590 = 0;
              _DAT_026fc598 = 0;
              uRam00000000026fc5a0 = 0;
              _DAT_026fc5a8 = 0;
              uRam00000000026fc5b0 = 0;
              _DAT_026fc5b8 = 0;
              uRam00000000026fc5c0 = 0;
              _DAT_026fc5c8 = 0;
              uRam00000000026fc5d0 = 0;
              _DAT_026fc5d8 = 0;
              uRam00000000026fc5e0 = 0;
              _DAT_026fc5e8 = 0;
              uRam00000000026fc5f0 = 0;
              DAT_026fc613 = 0;
              _DAT_026fc60b = 0;
              ___cxa_guard_release();
            }
            if (plVar9 == (longlong *)0x0) {
              pplVar8 = (longlong **)&DAT_02802688;
            }
            else {
              (**(code **)(*plVar9 + 0x360))();
              cVar4 = FUN_00e85ea0();
              if (cVar4 == '\0') {
                pplVar8 = (longlong **)&DAT_02802688;
              }
            }
            plVar9 = *pplVar8;
            if (*(char *)(pplVar8 + 1) == '\0') {
              if (plVar9 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar8 + 1) = 0;
            }
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar9 != (longlong *)0x0) {
              FUN_00559890();
              (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x38))();
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_00d3ecf0();
          FUN_01d77a20();
          plVar9 = local_48;
          if (local_40[0] == '\0') {
            if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00559890();
          (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x30))();
          plVar10 = local_48;
          if (local_40[0] == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40[0] = '\0';
          }
          FUN_005597b0();
          if (plVar10 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar9 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x30))();
        if (local_40[0] == '\0') {
          if (local_48 == (longlong *)0x0) goto LAB_002b4110;
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_48 == (longlong *)0x0) goto LAB_002b4110;
        FUN_001060a0();
        FUN_00d3ecf0();
        plVar10 = local_48;
        plVar9 = local_68;
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar10 == plVar9) {
          lVar1 = unaff_RDI[0x29];
          FUN_001060a0();
          cVar4 = (**(code **)(*local_48 + 0x3c8))();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)lVar1 != cVar4) {
            (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x38))();
          }
        }
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x38))();
    }
    goto LAB_002b4110;
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar9 = unaff_RDI;
  local_68 = unaff_RDI;
  do {
    (**(code **)(*plVar9 + 0x370))();
    plVar10 = local_48;
    if (local_48 == plVar9) {
      if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) &&
         (plVar10 = plVar9, local_40[0] != '\0')) goto LAB_002b39b7;
    }
    else {
      local_68 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar7 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar7 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
LAB_002b39b7:
        local_38[0] = '\x01';
        pcVar7 = local_40;
      }
      *pcVar7 = '\0';
      plVar9 = plVar10;
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    pplVar8 = (longlong **)&DAT_02802688;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar8 = &local_68;
      if (cVar4 == '\0') {
        pplVar8 = (longlong **)&DAT_02802688;
      }
    }
    if (*pplVar8 != (longlong *)0x0) {
      if ((local_38[0] == '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x002b3b55;
    }
  } while (plVar9 != (longlong *)0x0);
  plVar9 = (longlong *)0x0;
joined_r0x002b3b55:
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d3ecf0();
  plVar10 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == plVar10) {
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x30))();
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_002b3d3c;
      }
    }
    else if (local_48 != (longlong *)0x0) {
LAB_002b3d3c:
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_48 + 0x450))();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_0010a0e0();
      }
      FUN_00d50b20();
    }
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_002b4110:
  FUN_00d530a0();
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @005548c0 — 1479 bytes
// str: ""MDTimeGridController""
// str: ""handleToggleSnapMode""
// str: ""handleToggleDynamicMode""
// str: ""handleSetTimeGrid""
// str: ""handleSynchronizeAll""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005548c0(void)

{
  int iVar1;
  
  if (DAT_0280a440 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02701700 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fc568 = FUN_00015ff0();
          _DAT_026fc550 = "MDTimeGridController";
          _DAT_026fc558 = 0x118;
          _DAT_026fc560 = FUN_002b8a60;
          _DAT_026fc570 = 0;
          uRam00000000026fc578 = 0;
          _DAT_026fc580 = 0;
          _DAT_026fc5f8 = 0;
          uRam00000000026fc600 = 0;
          _DAT_026fc608 = 0;
          DAT_026fc60a = 1;
          _DAT_026fc588 = 0;
          uRam00000000026fc590 = 0;
          _DAT_026fc598 = 0;
          uRam00000000026fc5a0 = 0;
          _DAT_026fc5a8 = 0;
          uRam00000000026fc5b0 = 0;
          _DAT_026fc5b8 = 0;
          uRam00000000026fc5c0 = 0;
          _DAT_026fc5c8 = 0;
          uRam00000000026fc5d0 = 0;
          _DAT_026fc5d8 = 0;
          uRam00000000026fc5e0 = 0;
          _DAT_026fc5e8 = 0;
          uRam00000000026fc5f0 = 0;
          DAT_026fc613 = 0;
          _DAT_026fc60b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280a400 = "handleToggleSnapMode";
      _DAT_0280a408 = &DAT_026fc550;
      _DAT_0280a410 = 0;
      _DAT_0280a418 = &DAT_0270d400;
      _DAT_0280a420 = FUN_005599e0;
      _DAT_0280a428 = FUN_00558b50;
      _DAT_0280a430 = 0;
      uRam000000000280a438 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280a488 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02701700 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fc568 = FUN_00015ff0();
          _DAT_026fc550 = "MDTimeGridController";
          _DAT_026fc558 = 0x118;
          _DAT_026fc560 = FUN_002b8a60;
          _DAT_026fc570 = 0;
          uRam00000000026fc578 = 0;
          _DAT_026fc580 = 0;
          _DAT_026fc5f8 = 0;
          uRam00000000026fc600 = 0;
          _DAT_026fc608 = 0;
          DAT_026fc60a = 1;
          _DAT_026fc588 = 0;
          uRam00000000026fc590 = 0;
          _DAT_026fc598 = 0;
          uRam00000000026fc5a0 = 0;
          _DAT_026fc5a8 = 0;
          uRam00000000026fc5b0 = 0;
          _DAT_026fc5b8 = 0;
          uRam00000000026fc5c0 = 0;
          _DAT_026fc5c8 = 0;
          uRam00000000026fc5d0 = 0;
          _DAT_026fc5d8 = 0;
          uRam00000000026fc5e0 = 0;
          _DAT_026fc5e8 = 0;
          uRam00000000026fc5f0 = 0;
          DAT_026fc613 = 0;
          _DAT_026fc60b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280a448 = "handleToggleDynamicMode";
      _DAT_0280a450 = &DAT_026fc550;
      _DAT_0280a458 = 0;
      _DAT_0280a460 = &DAT_0270d400;
      _DAT_0280a468 = FUN_005599e0;
      _DAT_0280a470 = FUN_00559660;
      _DAT_0280a478 = 0;
      uRam000000000280a480 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280a4d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02701700 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fc568 = FUN_00015ff0();
          _DAT_026fc550 = "MDTimeGridController";
          _DAT_026fc558 = 0x118;
          _DAT_026fc560 = FUN_002b8a60;
          _DAT_026fc570 = 0;
          uRam00000000026fc578 = 0;
          _DAT_026fc580 = 0;
          _DAT_026fc5f8 = 0;
          uRam00000000026fc600 = 0;
          _DAT_026fc608 = 0;
          DAT_026fc60a = 1;
          _DAT_026fc588 = 0;
          uRam00000000026fc590 = 0;
          _DAT_026fc598 = 0;
          uRam00000000026fc5a0 = 0;
          _DAT_026fc5a8 = 0;
          uRam00000000026fc5b0 = 0;
          _DAT_026fc5b8 = 0;
          uRam00000000026fc5c0 = 0;
          _DAT_026fc5c8 = 0;
          uRam00000000026fc5d0 = 0;
          _DAT_026fc5d8 = 0;
          uRam00000000026fc5e0 = 0;
          _DAT_026fc5e8 = 0;
          uRam00000000026fc5f0 = 0;
          DAT_026fc613 = 0;
          _DAT_026fc60b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280a490 = "handleSetTimeGrid";
      _DAT_0280a498 = &DAT_026fc550;
      _DAT_0280a4a0 = 0;
      _DAT_0280a4a8 = &DAT_0270d400;
      _DAT_0280a4b0 = FUN_005599e0;
      _DAT_0280a4b8 = FUN_00559030;
      _DAT_0280a4c0 = 0;
      uRam000000000280a4c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280a518 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02701700 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fc568 = FUN_00015ff0();
          _DAT_026fc550 = "MDTimeGridController";
          _DAT_026fc558 = 0x118;
          _DAT_026fc560 = FUN_002b8a60;
          _DAT_026fc570 = 0;
          uRam00000000026fc578 = 0;
          _DAT_026fc580 = 0;
          _DAT_026fc5f8 = 0;
          uRam00000000026fc600 = 0;
          _DAT_026fc608 = 0;
          DAT_026fc60a = 1;
          _DAT_026fc588 = 0;
          uRam00000000026fc590 = 0;
          _DAT_026fc598 = 0;
          uRam00000000026fc5a0 = 0;
          _DAT_026fc5a8 = 0;
          uRam00000000026fc5b0 = 0;
          _DAT_026fc5b8 = 0;
          uRam00000000026fc5c0 = 0;
          _DAT_026fc5c8 = 0;
          uRam00000000026fc5d0 = 0;
          _DAT_026fc5d8 = 0;
          uRam00000000026fc5e0 = 0;
          _DAT_026fc5e8 = 0;
          uRam00000000026fc5f0 = 0;
          DAT_026fc613 = 0;
          _DAT_026fc60b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280a4d8 = "handleSynchronizeAll";
      _DAT_0280a4e0 = &DAT_026fc550;
      _DAT_0280a4e8 = 0;
      _DAT_0280a4f0 = &DAT_0270d400;
      _DAT_0280a4f8 = FUN_005599e0;
      _DAT_0280a500 = FUN_00558ce0;
      _DAT_0280a508 = 0;
      uRam000000000280a510 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @005565f0 — 1397 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00556a99) */
/* WARNING: Removing unreachable block (ram,0x00556aa5) */
/* WARNING: Removing unreachable block (ram,0x00556751) */
/* WARNING: Removing unreachable block (ram,0x0055675d) */
/* WARNING: Removing unreachable block (ram,0x0055668b) */
/* WARNING: Removing unreachable block (ram,0x00556697) */
/* WARNING: Removing unreachable block (ram,0x0055689d) */
/* WARNING: Removing unreachable block (ram,0x005568a9) */
/* WARNING: Removing unreachable block (ram,0x0055698f) */
/* WARNING: Removing unreachable block (ram,0x0055699b) */
/* WARNING: Removing unreachable block (ram,0x00556af9) */
/* WARNING: Removing unreachable block (ram,0x00556b05) */
/* WARNING: Removing unreachable block (ram,0x005566ec) */
/* WARNING: Removing unreachable block (ram,0x005566f5) */
/* WARNING: Removing unreachable block (ram,0x0055663d) */
/* WARNING: Removing unreachable block (ram,0x00556646) */
/* WARNING: Removing unreachable block (ram,0x00556942) */
/* WARNING: Removing unreachable block (ram,0x0055694b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_005565f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *unaff_RDI;
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar3 [16];
  longlong local_78;
  char local_70;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*(longlong *)*param_2 + 0x370))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  uVar2 = FUN_01d43d10();
  local_58 = (float)uVar2;
  fStack_54 = (float)((ulonglong)uVar2 >> 0x20);
  fStack_50 = (float)extraout_XMM0_Qb;
  fStack_4c = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar3._0_4_ = local_58 + _DAT_023b5550;
  auVar3._4_4_ = fStack_54 + _UNK_023b5554;
  auVar3._8_4_ = fStack_50 + _UNK_023b5558;
  auVar3._12_4_ = fStack_4c + _UNK_023b555c;
  auVar3 = roundps(auVar3,auVar3,10);
  FUN_01d4ed90(auVar3._0_8_,DAT_02390124);
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d52700();
  FUN_01d52740();
  FUN_01d48a10();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  FUN_01cfbc00();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_01d488d0();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  (**(code **)(*local_40 + 0x3f8))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  FUN_01d526d0();
  plVar1 = (longlong *)0x0;
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = local_40;
  }
  FUN_01d4ed90();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d52700();
  FUN_01d52740();
  FUN_01d48a10();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  FUN_01cfbc00();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_01d488d0();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  (**(code **)(*local_40 + 0x3f8))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  FUN_01d526d0();
  FUN_01d52660();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((local_40 == (longlong *)0x0) && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00558550 — 1385 bytes
// ============================================================

void FUN_00558550(void)

{
  longlong *plVar1;
  char cVar2;
  char *pcVar3;
  longlong unaff_RDI;
  longlong local_58;
  char local_50 [9];
  undefined7 uStack_47;
  char local_40;
  char local_38 [8];
  
  FUN_00d23310();
  local_50[8] = local_50[0];
  pcVar3 = local_50 + 8;
  if (local_50[0] != '\0') {
    pcVar3 = local_50;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50[8] == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x78);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d23310();
    pcVar3 = local_50;
    if (local_50[0] == '\0') {
      pcVar3 = local_38;
    }
    local_38[0] = local_50[0];
    *pcVar3 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_001060a0();
    (**(code **)(*(longlong *)CONCAT71(uStack_47,local_50[8]) + 0x3c8))();
    (**(code **)(*plVar1 + 0x918))();
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_50[8]) != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x918))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x998))();
  cVar2 = FUN_00108e10();
  plVar1 = *(longlong **)(unaff_RDI + 0x80);
  if (cVar2 == '\0') {
    (**(code **)(*plVar1 + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x998))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x108) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xe8) + 0x918))();
  }
  else {
    FUN_001080a0();
    (**(code **)(*plVar1 + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x998))();
    FUN_00108090();
    cVar2 = FUN_001080b0();
    if (cVar2 == '\0') {
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xe8) + 0x918))();
    }
    else {
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xe8) + 0x918))();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x108) + 0x918))();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00559030 — 1255 bytes
// ============================================================

undefined8 FUN_00559030(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  char *pcVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  longlong *local_80;
  longlong *local_78;
  char local_70 [8];
  longlong local_68;
  int local_60;
  undefined8 local_5c;
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  pplVar8 = &local_78;
  FUN_01caeb00();
  plVar1 = local_78;
  FUN_000f5df0();
  if (plVar1 == (longlong *)0x0) {
LAB_00559088:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00559088;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = FUN_00558480();
  if (plVar1 == (longlong *)unaff_RDI[0x1e]) {
LAB_0055921e:
    if (plVar1 == (longlong *)unaff_RDI[0x1f]) goto LAB_00559255;
    if (plVar1 == (longlong *)unaff_RDI[0x20]) {
      lVar2 = unaff_RDI[0x22];
    }
    else {
      lVar2 = unaff_RDI[0x22];
    }
  }
  else {
    if (plVar1 != (longlong *)unaff_RDI[0x1f]) {
      if ((plVar1 != (longlong *)unaff_RDI[0x20]) && (plVar1 != (longlong *)unaff_RDI[0x21])) {
        FUN_00d50b00();
        local_38[0] = '\0';
        plVar10 = unaff_RDI;
        local_80 = unaff_RDI;
        do {
          (**(code **)(*plVar10 + 0x370))();
          plVar9 = local_78;
          if (local_78 == plVar10) {
            if (((local_38[0] == '\0') && (local_78 != (longlong *)0x0)) &&
               (plVar9 = plVar10, local_70[0] != '\0')) goto LAB_00559177;
          }
          else {
            local_80 = local_78;
            if (local_70[0] == '\0') {
              if (local_38[0] == '\0') {
                pcVar6 = local_38;
              }
              else {
                FUN_00d50b20();
                pcVar6 = local_38;
              }
            }
            else {
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
LAB_00559177:
              local_38[0] = '\x01';
              pcVar6 = local_70;
            }
            *pcVar6 = '\0';
            plVar10 = plVar9;
          }
          if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00082eb0();
          pplVar8 = (longlong **)&DAT_02802688;
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x360))();
            cVar4 = FUN_00e85ea0();
            pplVar8 = &local_80;
            if (cVar4 == '\0') {
              pplVar8 = (longlong **)&DAT_02802688;
            }
          }
          if (*pplVar8 != (longlong *)0x0) {
            if ((local_38[0] == '\0') && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            break;
          }
        } while (plVar10 != (longlong *)0x0);
        FUN_00d50b20();
        if (plVar10 != (longlong *)0x0) {
          FUN_0078e590();
        }
        if (plVar1 == (longlong *)unaff_RDI[0x11]) {
          bVar11 = false;
        }
        else if (plVar1 == (longlong *)unaff_RDI[0x12]) {
          bVar11 = false;
        }
        else if (plVar1 == (longlong *)unaff_RDI[0x13]) {
          bVar11 = false;
        }
        else if (plVar1 == (longlong *)unaff_RDI[0x14]) {
          bVar11 = false;
        }
        else if (plVar1 == (longlong *)unaff_RDI[0x15]) {
          bVar11 = false;
        }
        else if (plVar1 == (longlong *)unaff_RDI[0x16]) {
          bVar11 = false;
        }
        else if (plVar1 == (longlong *)unaff_RDI[0x17]) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
          if ((((plVar1 != (longlong *)unaff_RDI[0x19]) && (plVar1 != (longlong *)unaff_RDI[0x1a]))
              && (plVar1 != (longlong *)unaff_RDI[0x1b])) && (plVar1 != (longlong *)unaff_RDI[0x1c])
             ) {
            bVar11 = plVar1 == (longlong *)unaff_RDI[0x1d];
          }
        }
        lVar2 = unaff_RDI[0x22];
        if (lVar2 != 0) {
          local_70[0] = '\0';
          local_78 = (longlong *)0x0;
          local_5c = 0;
          local_68 = lVar2;
          if (cVar3 == '\0') {
            local_60 = 0;
            if (0 < *(int *)(lVar2 + 0xc)) {
              local_78 = (longlong *)**(undefined8 **)(lVar2 + 0x10);
              uVar5 = FUN_001080a0();
              FUN_0010a8e0(bVar11,uVar5);
            }
          }
          else {
            for (lVar7 = 0; local_60 = (int)lVar7, local_60 < *(int *)(lVar2 + 0xc);
                lVar7 = lVar7 + 1) {
              local_78 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
              uVar5 = FUN_001080a0();
              FUN_0010a8e0(bVar11,uVar5);
            }
          }
          FUN_00559b10();
        }
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_005592ed;
      }
      goto LAB_0055921e;
    }
LAB_00559255:
    lVar2 = unaff_RDI[0x22];
  }
  if (lVar2 != 0) {
    local_70[0] = '\0';
    local_78 = (longlong *)0x0;
    local_5c = 0;
    local_68 = lVar2;
    if (cVar3 == '\0') {
      local_60 = 0;
      if (0 < *(int *)(lVar2 + 0xc)) {
        local_78 = (longlong *)**(undefined8 **)(lVar2 + 0x10);
        FUN_0010a2f0();
      }
    }
    else {
      for (lVar7 = 0; local_60 = (int)lVar7, local_60 < *(int *)(lVar2 + 0xc); lVar7 = lVar7 + 1) {
        local_78 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
        FUN_0010a2f0();
      }
    }
    FUN_00559b10();
  }
LAB_005592ed:
  FUN_00558550();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}




// ============================================================
// @005580b0 — 550 bytes
// str: ""gridn_%@""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0055823e) */
/* WARNING: Removing unreachable block (ram,0x0055824a) */

void FUN_005580b0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar5;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_90 = *unaff_RSI;
  local_88 = '\0';
  pplVar5 = &local_60;
  (**(code **)(*(longlong *)*unaff_RDI + 0x88))(param_1,&local_90);
  plVar1 = local_60;
  FUN_000f5df0();
  if (plVar1 == (longlong *)0x0) {
LAB_00558118:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00558118;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar2 = *unaff_RSI;
  local_58 = 1;
  local_60 = &DAT_024c5048;
  local_48 = 0;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar2;
  FUN_00d8cb40(param_1,&local_60);
  local_40 = local_70;
  local_38 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_38 = '\x01';
  FUN_01d51a40();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_00558253;
    FUN_00d50b00();
  }
  else {
    local_78 = '\0';
    if (local_80 == 0) {
LAB_00558253:
      bVar3 = true;
      goto LAB_00558255;
    }
  }
  FUN_01cef3b0();
  bVar3 = false;
LAB_00558255:
  FUN_01cef450();
  if (!bVar3) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



