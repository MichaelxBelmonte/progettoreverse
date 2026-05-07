// Reconstructed implementation of GNNull
// From MikeCore binary — reverse-engineered pseudocode

#include "GNNull.h"

// ============================================================
// @00d21bf0 — 1931 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d21c30) */
/* WARNING: Removing unreachable block (ram,0x00d21c3c) */
/* WARNING: Removing unreachable block (ram,0x00d221db) */
/* WARNING: Removing unreachable block (ram,0x00d222e0) */

void FUN_00d21bf0(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40;
  
  FUN_00d50cd0();
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
  lVar11 = DAT_0277cf70;
  lVar10 = DAT_0277cf50;
  plVar1 = (longlong *)*unaff_RSI;
  if (cVar3 == '\0') {
    if (DAT_0277cf70 != 0) {
      FUN_00d50b00();
    }
    iVar5 = (**(code **)(*plVar1 + 0x598))();
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    lVar10 = DAT_0277cf78;
    if (iVar5 == 0) {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf78 != 0) {
        FUN_00d50b00();
      }
      iVar5 = (**(code **)(*plVar1 + 0x598))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    if (1 < iVar5) {
      uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
      *(undefined1 *)(unaff_RDI + 0x1c) = uVar4;
      if (iVar5 != 2) {
        uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
        *(undefined1 *)(unaff_RDI + 0x1d) = uVar4;
        if (3 < iVar5) {
          uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
          *(undefined1 *)(unaff_RDI + 0x1e) = uVar4;
        }
      }
    }
    iVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
    iVar6 = FUN_00e83090();
    iVar9 = iVar6 + 7;
    if (-1 < iVar6) {
      iVar9 = iVar6;
    }
    *(int *)(unaff_RDI + 0x18) = iVar9 >> 3;
    uVar7 = FUN_00e83060();
    *(undefined8 *)(unaff_RDI + 0x10) = uVar7;
    if (0 < iVar5) {
      do {
        (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        iVar9 = *(int *)(unaff_RDI + 0xc);
        *(int *)(unaff_RDI + 0xc) = iVar9 + 1;
        FUN_00d23090();
        cVar3 = *(char *)(unaff_RDI + 0x1c);
        *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + (longlong)iVar9 * 8) = local_48;
        if ((cVar3 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    if (DAT_0277cf50 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = DAT_0277cf50;
    if (cVar3 != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf50 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x510))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        if (*(char *)(unaff_RDI + 0x1c) == '\0') {
          uVar8 = *(uint *)(unaff_RDI + 0xc);
          if (0 < (int)uVar8) {
            lVar10 = (ulonglong)uVar8 + 1;
            do {
              uVar8 = uVar8 - 1;
              if (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + (ulonglong)uVar8 * 8) != 0) {
                FUN_00d50b20();
              }
              lVar10 = lVar10 + -1;
            } while (1 < lVar10);
          }
        }
        *(undefined1 *)(unaff_RDI + 0x1c) = 1;
      }
    }
    lVar10 = DAT_0277cf58;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_0277cf58 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = DAT_0277cf58;
    if (cVar3 != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf58 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*plVar1 + 0x510))();
      *(undefined1 *)(unaff_RDI + 0x1d) = uVar4;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    lVar10 = DAT_0277cf60;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_0277cf60 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = DAT_0277cf60;
    if (cVar3 != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf60 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*plVar1 + 0x510))();
      *(undefined1 *)(unaff_RDI + 0x1e) = uVar4;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    lVar10 = DAT_0277cf68;
    if (cVar3 == '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf68 != 0) {
        FUN_00d50b00();
      }
      iVar5 = (**(code **)(*plVar1 + 0x520))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      iVar6 = FUN_00e83090();
      iVar9 = iVar6 + 7;
      if (-1 < iVar6) {
        iVar9 = iVar6;
      }
      *(int *)(unaff_RDI + 0x18) = iVar9 >> 3;
      uVar7 = FUN_00e83060();
      *(undefined8 *)(unaff_RDI + 0x10) = uVar7;
      if (0 < iVar5) {
        iVar9 = 0;
        lVar10 = 0;
        bVar2 = false;
        do {
          plVar1 = (longlong *)*unaff_RSI;
          FUN_00d93550();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          (**(code **)(*plVar1 + 0x578))();
          if (local_48 == lVar10) {
            if ((!bVar2) && (local_48 != 0)) {
              lVar11 = lVar10;
              if (local_40 != '\0') goto LAB_00d221c4;
              FUN_00d50b00();
              goto LAB_00d22230;
            }
            if (local_40 == '\0') goto LAB_00d22258;
LAB_00d2223a:
            if (local_48 != 0) {
              FUN_00d50b20();
            }
          }
          else if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            lVar11 = local_48;
            if (bVar2) {
              bVar12 = lVar10 == 0;
              lVar10 = local_48;
              bVar2 = true;
              if (bVar12) goto LAB_00d22258;
              FUN_00d50b20();
            }
LAB_00d22230:
            lVar10 = lVar11;
            bVar2 = true;
            if (local_40 != '\0') goto LAB_00d2223a;
          }
          else {
            lVar11 = local_48;
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
LAB_00d221c4:
            local_40 = '\0';
            lVar10 = lVar11;
            bVar2 = true;
          }
LAB_00d22258:
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((lVar10 != 0) || (*(char *)(unaff_RDI + 0x1d) != '\0')) {
            iVar6 = *(int *)(unaff_RDI + 0xc);
            *(int *)(unaff_RDI + 0xc) = iVar6 + 1;
            FUN_00d23090();
            if ((*(char *)(unaff_RDI + 0x1c) == '\0') && (lVar10 != 0)) {
              FUN_00d50b00();
            }
            *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + (longlong)iVar6 * 8) = lVar10;
          }
          iVar9 = iVar9 + 1;
        } while (iVar5 != iVar9);
        if ((bVar2) && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (unaff_RDI != 0) {
        FUN_00d50b00();
      }
      FUN_00e5a7d0();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @012549c0 — 1800 bytes
// ============================================================

void FUN_012549c0(ulonglong param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  int iVar10;
  longlong *unaff_RSI;
  longlong lVar11;
  undefined4 local_74;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  char local_48;
  ulonglong local_40;
  char local_38;
  
  local_38 = '\0';
  local_40 = 0;
  local_70 = param_2;
  if (param_3 == 0) {
LAB_01254ecb:
    local_60 = param_1;
    if (((local_70 >> 0x20 != 0) && (param_1 = param_1 >> 0x20, param_1 != 0)) &&
       (cVar5 = FUN_00e7c020(), cVar5 == '\0')) goto LAB_012550b3;
  }
  else {
    local_60 = param_1;
    if (param_2 >> 0x20 != 0) {
      lVar11 = *unaff_RSI;
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        lVar11 = *unaff_RSI;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      iVar6 = FUN_01251eb0();
      if (iVar6 < 1) {
        local_58 = FUN_00e7bdb0();
        lVar8 = *(longlong *)(lVar11 + 0x48);
      }
      else {
        lVar8 = *(longlong *)(lVar11 + 0x48);
        local_58 = *(ulonglong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(iVar6 - 1) * 8);
      }
      iVar1 = *(int *)(lVar8 + 0x18);
      iVar10 = iVar1 + 7;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar6 < iVar10 >> 3) {
        local_68 = *(ulonglong *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar6 * 8);
      }
      else {
        local_68 = FUN_00e7bdb0();
      }
      cVar5 = local_38;
      uVar4 = local_40;
      uVar2 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x50) + 0x10) + (longlong)iVar6 * 8);
      if (local_40 == uVar2) {
        if ((local_38 == '\0') && (uVar2 != 0)) {
          FUN_00d50b00();
          goto LAB_01254af5;
        }
      }
      else {
        if (uVar2 != 0) {
          FUN_00d50b00();
        }
        local_40 = uVar2;
        if ((cVar5 != '\0') && (uVar4 != 0)) {
          FUN_00d50b20();
        }
LAB_01254af5:
        local_38 = '\x01';
      }
      if (local_40 != 0) {
        FUN_00d51d20();
        cVar5 = local_38;
        uVar4 = local_40;
        uVar2 = local_50;
        if (local_40 == local_50) {
          if ((local_38 != '\0') || (local_50 == 0)) goto LAB_01254b86;
          if (local_48 == '\0') {
            FUN_00d50b00();
            goto LAB_01254b82;
          }
        }
        else {
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            local_40 = uVar2;
            if ((cVar5 != '\0') && (uVar4 != 0)) {
              FUN_00d50b20();
            }
LAB_01254b82:
            local_38 = '\x01';
LAB_01254b86:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01254b9a;
          }
          local_40 = local_50;
          if ((local_38 != '\0') && (uVar4 != 0)) {
            FUN_00d50b20();
          }
        }
        local_38 = '\x01';
      }
LAB_01254b9a:
      local_50 = local_60;
      if (local_60 >> 0x20 == 0) {
        bVar3 = local_68 >> 0x20 == 0;
      }
      else if ((local_68 >> 0x20 == 0) || (cVar5 = FUN_00e7c020(), cVar5 == '\0')) {
        bVar3 = true;
        local_68 = local_50;
      }
      else {
        bVar3 = false;
      }
      FUN_012502a0(local_68,local_70,1);
      if (bVar3) goto LAB_012550b3;
      local_70 = local_68;
    }
    param_1 = 0;
    if (local_60 >> 0x20 != 0) {
      local_74 = 0xffffffff;
      lVar11 = *unaff_RSI;
      pvVar7 = _pthread_getspecific((pthread_key_t)(local_60 >> 0x20));
      if (pvVar7 != (void *)0x0) {
        lVar11 = *unaff_RSI;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      iVar6 = FUN_01251eb0();
      if (iVar6 < 1) {
        local_58 = FUN_00e7bdb0();
        lVar8 = *(longlong *)(lVar11 + 0x48);
      }
      else {
        lVar8 = *(longlong *)(lVar11 + 0x48);
        local_58 = *(ulonglong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(iVar6 - 1) * 8);
      }
      iVar1 = *(int *)(lVar8 + 0x18);
      iVar10 = iVar1 + 7;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar6 < iVar10 >> 3) {
        local_68 = *(ulonglong *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar6 * 8);
      }
      else {
        local_68 = FUN_00e7bdb0();
      }
      cVar5 = local_38;
      uVar4 = local_40;
      pVar9 = (pthread_key_t)lVar8;
      uVar2 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x50) + 0x10) + (longlong)iVar6 * 8);
      if (local_40 == uVar2) {
        if ((local_38 == '\0') && (uVar2 != 0)) {
          FUN_00d50b00();
          goto LAB_01254d2c;
        }
      }
      else {
        if (uVar2 != 0) {
          FUN_00d50b00();
        }
        local_40 = uVar2;
        if ((cVar5 != '\0') && (uVar4 != 0)) {
          FUN_00d50b20();
        }
LAB_01254d2c:
        local_38 = '\x01';
      }
      if (((local_58._4_4_ != 0) && (local_60._4_4_ != 0)) &&
         (cVar5 = FUN_00e7c000(), cVar5 != '\0')) {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012535e0(&local_58,&local_40,&local_68,&local_74);
      }
      if (local_40 != 0) {
        FUN_00d51d20();
        cVar5 = local_38;
        uVar4 = local_40;
        uVar2 = local_50;
        if (local_40 == local_50) {
          if ((local_38 != '\0') || (local_50 == 0)) goto LAB_01254e2a;
          if (local_48 == '\0') {
            FUN_00d50b00();
            goto LAB_01254e26;
          }
        }
        else {
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            local_40 = uVar2;
            if ((cVar5 != '\0') && (uVar4 != 0)) {
              FUN_00d50b20();
            }
LAB_01254e26:
            local_38 = '\x01';
LAB_01254e2a:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01254e3e;
          }
          local_40 = local_50;
          if ((local_38 != '\0') && (uVar4 != 0)) {
            FUN_00d50b20();
          }
        }
        local_38 = '\x01';
      }
LAB_01254e3e:
      local_50 = local_70;
      if (local_70 >> 0x20 == 0) {
        bVar3 = local_58 >> 0x20 == 0;
      }
      else if ((local_58 >> 0x20 == 0) || (cVar5 = FUN_00e7c020(), cVar5 == '\0')) {
        bVar3 = true;
        local_58 = local_50;
      }
      else {
        bVar3 = false;
      }
      FUN_012502a0(local_60,local_58,1);
      param_1 = local_58;
      if (bVar3) goto LAB_012550b3;
      goto LAB_01254ecb;
    }
  }
  local_74 = 0xffffffff;
  while( true ) {
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar5 = FUN_01252960(local_60,local_70,&local_40,&local_58);
    if (cVar5 == '\0') break;
    if (local_40 != 0) {
      FUN_00d51d20();
      cVar5 = local_38;
      uVar4 = local_40;
      uVar2 = local_50;
      if (local_40 == local_50) {
        if ((local_38 != '\0') || (local_50 == 0)) goto LAB_01255038;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01255034;
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          local_40 = uVar2;
          if ((cVar5 != '\0') && (uVar4 != 0)) {
            FUN_00d50b20();
          }
LAB_01255034:
          local_38 = '\x01';
LAB_01255038:
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01255050;
        }
        local_40 = local_50;
        if ((local_38 != '\0') && (uVar4 != 0)) {
          FUN_00d50b20();
        }
      }
      local_38 = '\x01';
    }
LAB_01255050:
    if ((local_70 >> 0x20 != 0) &&
       ((local_58._4_4_ == 0 || (cVar5 = FUN_00e7c020(), cVar5 != '\0')))) {
      local_58 = local_70;
    }
    if ((local_60 >> 0x20 != 0) &&
       ((local_68._4_4_ == 0 || (cVar5 = FUN_00e7c020(), cVar5 != '\0')))) {
      local_68 = local_60;
    }
    param_1 = local_68;
    FUN_012502a0(local_68,local_58,0);
  }
LAB_012550b3:
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01252f30 — 1595 bytes
// ============================================================

bool FUN_01252f30(longlong *param_1,double param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *in_RCX;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  longlong *in_RDX;
  int iVar13;
  uint uVar14;
  char unaff_SIL;
  longlong unaff_RDI;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  longlong *plVar18;
  bool bVar19;
  double dVar20;
  undefined8 local_a8;
  undefined8 *local_a0;
  double local_98;
  double local_90;
  longlong local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  undefined8 *local_58;
  int *local_50;
  longlong *local_48;
  char local_3c;
  
  local_48 = param_1;
  local_60 = param_1;
  local_90 = param_2;
  local_98 = param_2;
  local_50 = param_4;
  iVar1 = *param_4;
  if ((longlong)iVar1 == -2) goto LAB_012534d5;
  local_78 = '\0';
  local_80 = 0;
  plVar18 = &local_80;
  if (in_RDX != (longlong *)0x0) {
    plVar18 = in_RDX;
  }
  local_a0 = param_3;
  if (param_3 == (undefined8 *)0x0) {
    param_3 = &local_a8;
  }
  local_58 = param_3;
  local_3c = unaff_SIL;
  if (iVar1 == -1) {
    if (!NAN((double)param_1)) {
      local_70 = FUN_00e7bdb0();
      dVar20 = (double)FUN_00e7c860();
      if (dVar20 <= (double)local_48) {
        FUN_012523c0(local_60,local_3c,local_58,local_50);
        lVar3 = local_70;
        lVar6 = *plVar18;
        if (lVar6 == local_70) {
          if (((char)plVar18[1] == '\0') && (local_70 != 0)) {
            plVar2 = plVar18 + 1;
            if (local_68 == '\0') {
              FUN_00d50b00();
            }
            goto LAB_012534f4;
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_88 = lVar6;
          local_48 = plVar18 + 1;
          lVar4 = plVar18[1];
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
            *plVar18 = lVar3;
            plVar2 = local_48;
            if (((char)lVar4 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
              plVar2 = local_48;
            }
          }
          else {
            *plVar18 = local_70;
            plVar2 = local_48;
            if (((char)lVar4 != '\0') && (lVar6 != 0)) {
              FUN_00d50b20();
              plVar2 = local_48;
            }
          }
LAB_012534f4:
          local_48 = plVar2;
          *(undefined1 *)local_48 = 1;
        }
        if (((in_RCX != (undefined8 *)0x0) && (local_3c != '\0')) &&
           ((*(int *)((longlong)in_RCX + 4) == 0 ||
            ((!NAN((double)local_60) && (cVar5 = FUN_00e7c790(), cVar5 == '\0')))))) {
          local_48 = local_60;
          FUN_00e7bcc0();
          uVar7 = FUN_00e7cd00(local_48);
          *in_RCX = uVar7;
        }
        goto LAB_0125339f;
      }
    }
    *local_50 = 0;
    if (local_3c == '\0') {
      lVar6 = *(longlong *)(unaff_RDI + 0x48);
      uVar9 = *(uint *)(lVar6 + 0x18);
      uVar17 = 0;
      uVar14 = 0;
    }
    else {
      if (**(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10) == 0) {
        *local_50 = 1;
      }
      lVar6 = *(longlong *)(unaff_RDI + 0x48);
      uVar9 = *(uint *)(lVar6 + 0x18);
      uVar17 = 0;
      if ((int)uVar9 < 8) {
        uVar14 = 0;
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
        lVar3 = *plVar2;
        bVar19 = lVar3 == 0;
        uVar17 = (ulonglong)bVar19;
        uVar14 = (uint)bVar19;
        if ((uVar14 < uVar9 >> 3) && (uVar14 = (lVar3 == 0) + 1, plVar2[uVar14] != 0)) {
          uVar14 = (uint)bVar19;
        }
      }
    }
    if (in_RCX != (undefined8 *)0x0) {
      uVar7 = FUN_00e7bdb0();
      *in_RCX = uVar7;
      lVar6 = *(longlong *)(unaff_RDI + 0x48);
      uVar9 = *(uint *)(lVar6 + 0x18);
    }
    uVar12 = uVar9 + 7;
    if (-1 < (int)uVar9) {
      uVar12 = uVar9;
    }
    if ((int)uVar14 < (int)uVar12 >> 3) {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)uVar14 * 8);
    }
    else {
      uVar7 = FUN_00e7bdb0();
    }
    *local_58 = uVar7;
    lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + uVar17 * 8);
    lVar3 = *plVar18;
    lVar4 = plVar18[1];
    if (lVar3 == lVar6) {
      if (((char)lVar4 != '\0') || (lVar6 == 0)) goto LAB_0125339f;
      FUN_00d50b00();
    }
    else {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *plVar18 = lVar6;
      if (((char)lVar4 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_0125339a:
    *(undefined1 *)(plVar18 + 1) = 1;
  }
  else {
    lVar6 = *(longlong *)(unaff_RDI + 0x48);
    iVar15 = *(int *)(lVar6 + 0x18);
    iVar8 = iVar15 + 7;
    if (-1 < iVar15) {
      iVar8 = iVar15;
    }
    iVar8 = iVar8 >> 3;
    iVar13 = iVar1;
    iVar16 = iVar1;
    iVar11 = iVar1;
    if ((unaff_SIL != '\0') && (7 < iVar15)) {
      plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
      if (plVar2[iVar1] == 0) {
        if (iVar1 != 0) {
          iVar13 = iVar1 + -1;
          goto LAB_01253009;
        }
        iVar16 = 1;
        iVar15 = 0;
LAB_0125328e:
        iVar11 = 0;
        if (*plVar2 != 0) {
          iVar11 = iVar15;
        }
        iVar13 = 1;
        if (iVar8 < 2) goto LAB_01253035;
      }
      else {
LAB_01253009:
        iVar15 = 1;
        if (iVar13 == 1) goto LAB_0125328e;
        iVar11 = iVar13;
        if (iVar8 <= iVar13) goto LAB_01253035;
      }
      if (plVar2[(longlong)iVar13 + 1] == 0) {
        iVar16 = iVar13 + 1;
      }
    }
LAB_01253035:
    if (in_RCX != (undefined8 *)0x0) {
      if (iVar11 < 1) {
        uVar7 = FUN_00e7bdb0();
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(iVar11 - 1) * 8);
      }
      *in_RCX = uVar7;
      lVar6 = *(longlong *)(unaff_RDI + 0x48);
      iVar15 = *(int *)(lVar6 + 0x18);
      iVar8 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar8 = iVar15;
      }
      iVar8 = iVar8 >> 3;
    }
    if (iVar16 < iVar8) {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar16 * 8);
    }
    else {
      uVar7 = FUN_00e7bdb0();
    }
    *local_58 = uVar7;
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)iVar13 * 8);
    lVar3 = *plVar18;
    lVar4 = plVar18[1];
    if (lVar3 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *plVar18 = lVar6;
      if (((char)lVar4 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0125339a;
    }
    if (((char)lVar4 == '\0') && (lVar6 != 0)) {
      FUN_00d50b00();
      goto LAB_0125339a;
    }
  }
LAB_0125339f:
  if (NAN(local_90)) {
LAB_012533d7:
    iVar15 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
    iVar8 = iVar15 + 7;
    if (-1 < iVar15) {
      iVar8 = iVar15;
    }
    iVar15 = *local_50;
    iVar13 = -2;
    if (iVar15 == iVar8 >> 3) goto LAB_012534bf;
    *local_50 = iVar15 + 1;
    if ((local_3c != '\0') &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + 8 + (longlong)iVar15 * 8) == 0)) {
      iVar13 = -2;
      if (iVar15 + 1 != iVar8 >> 3) {
        iVar13 = iVar15 + 2;
      }
      goto LAB_012534bf;
    }
  }
  else {
    local_70 = FUN_00e7bdb0();
    dVar20 = (double)FUN_00e7c860();
    if (dVar20 < local_90) goto LAB_012533d7;
    if (*(int *)((longlong)local_58 + 4) != 0) {
      puVar10 = &local_a8;
      if (local_a0 != (undefined8 *)0x0) {
        puVar10 = local_a0;
      }
      if ((*(int *)((longlong)puVar10 + 4) == 0) || (cVar5 = FUN_00e7c790(), cVar5 == '\0'))
      goto LAB_012533d7;
    }
    dVar20 = local_98;
    iVar13 = -2;
    if (local_3c != '\0') {
      FUN_00e7bcc0();
      uVar7 = FUN_00e7cd00(dVar20);
      *local_58 = uVar7;
    }
LAB_012534bf:
    *local_50 = iVar13;
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_012534d5:
  return iVar1 != -2;
}




// ============================================================
// @01254260 — 1542 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01254886) */

ulonglong FUN_01254260(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong unaff_RBX;
  longlong lVar12;
  undefined7 uVar13;
  uint7 uVar14;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined4 local_6c;
  longlong local_68;
  char local_60;
  undefined4 local_54;
  int iStack_4c;
  undefined8 local_40;
  
  lVar15 = *unaff_RSI;
  if (lVar15 == unaff_RDI) {
    uVar10 = CONCAT71((int7)(unaff_RBX >> 8),1);
    goto LAB_0125485b;
  }
  pVar9 = (pthread_key_t)(param_1 >> 0x20);
  uVar10 = param_1;
  if ((param_2 >> 0x20 != 0) || (uVar10 = param_1 >> 0x20, uVar10 != 0)) {
    local_54 = 0xffffffff;
    local_6c = 0xffffffff;
    local_b0 = '\0';
    local_b8 = 0;
    uVar16 = 0;
    lVar15 = 0;
    local_c8 = param_2;
LAB_01254498:
    pvVar6 = _pthread_getspecific((pthread_key_t)uVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_01252960(param_1,local_c8,&local_b8,&local_d0);
    uVar13 = (undefined7)(unaff_RBX >> 8);
    if (cVar4 == '\0') {
      uVar10 = CONCAT71(uVar13,1);
joined_r0x012547f4:
      cVar4 = (char)uVar16;
      goto joined_r0x012547f4;
    }
    cVar4 = (char)uVar16;
    if (local_d0 >> 0x20 == 0) {
      local_54 = 0;
      FUN_00e7bdb0();
      if (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18) < 8) {
        local_40 = FUN_00e7bdb0();
      }
      else {
        local_40 = **(ulonglong **)(*(longlong *)(unaff_RDI + 0x48) + 0x10);
      }
      lVar7 = **(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
      if (lVar15 == lVar7) {
        if ((cVar4 != '\0') || (lVar15 == 0)) goto LAB_01254733;
        unaff_RBX = CONCAT71(uVar13,1);
        FUN_00d50b00();
        lVar7 = lVar15;
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        unaff_RBX = CONCAT71(uVar13,1);
        if ((cVar4 != '\0') && (lVar15 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01254680:
      lVar15 = lVar7;
      if (iStack_4c != 0) goto LAB_01254692;
LAB_01254750:
      uVar10 = local_40 >> 0x20;
      if (uVar10 != 0) {
        if (pVar9 != 0) {
          cVar4 = FUN_00e7c020();
          goto LAB_0125476f;
        }
LAB_012547d6:
        unaff_RBX = unaff_RBX & 0xffffffff;
joined_r0x01254836:
        cVar4 = (char)unaff_RBX;
        uVar10 = 0;
joined_r0x012547f4:
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((cVar4 != '\0') && (lVar15 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0125485b;
      }
    }
    else {
      iVar5 = FUN_01251eb0();
      if (iVar5 < 1) {
        FUN_00e7bdb0();
      }
      iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
      iVar11 = iVar1 + 7;
      if (-1 < iVar1) {
        iVar11 = iVar1;
      }
      if (iVar5 < iVar11 >> 3) {
        local_40 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (longlong)iVar5 * 8);
      }
      else {
        local_40 = FUN_00e7bdb0();
      }
      lVar7 = *(longlong *)
               (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)iVar5 * 8);
      uVar14 = (uint7)(uint3)((uint)iVar5 >> 8);
      if (lVar15 != lVar7) {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        unaff_RBX = CONCAT71(uVar14,1);
        if ((cVar4 != '\0') && (lVar15 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01254680;
      }
      if ((cVar4 == '\0') && (lVar15 != 0)) {
        unaff_RBX = CONCAT71(uVar14,1);
        FUN_00d50b00();
        lVar7 = lVar15;
        goto LAB_01254680;
      }
LAB_01254733:
      unaff_RBX = uVar16;
      if (iStack_4c == 0) goto LAB_01254750;
LAB_01254692:
      uVar10 = local_40 >> 0x20;
      if (uVar10 == 0) {
        if (pVar9 == 0) goto LAB_012547d6;
        if (iStack_4c != 0) {
          cVar4 = FUN_00e7c020();
LAB_0125476f:
          if (cVar4 != '\0') goto LAB_012547d6;
        }
      }
      else if ((iStack_4c == 0) || (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
        if ((param_1 >> 0x20 == 0) ||
           (((local_40._4_4_ != 0 && (pVar9 != 0)) && (cVar4 = FUN_00e7c020(), cVar4 != '\0'))))
        goto LAB_012547d6;
        if ((iStack_4c != 0) && (pVar9 != 0)) {
          cVar4 = FUN_00e7c020();
          goto LAB_0125476f;
        }
      }
    }
    if (local_b8 != lVar15) {
      if (lVar15 == 0) {
        lVar15 = 0;
        uVar16 = unaff_RBX & 0xffffffff;
        uVar10 = 0;
        goto joined_r0x012547f4;
      }
      unaff_RBX = unaff_RBX & 0xffffffff;
      if (local_b8 == 0) goto joined_r0x01254836;
      local_80 = local_b8;
      local_78 = '\0';
      cVar4 = FUN_00d51e10();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_012547d6;
    }
    uVar16 = unaff_RBX & 0xffffffff;
    goto LAB_01254498;
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x48);
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    lVar15 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar15 = *(longlong *)(lVar15 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  local_60 = 0;
  lVar15 = *(longlong *)(lVar15 + 0x48);
  if (lVar15 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar15;
  cVar4 = (**(code **)(*plVar2 + 0x50))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    uVar10 = 0;
    goto LAB_0125485b;
  }
  lVar15 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar15 == 0) {
LAB_0125480e:
    iVar5 = 0;
  }
  else {
    local_b0 = 0;
    local_b8 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = lVar15;
    if (0 < *(int *)(lVar15 + 0xc)) {
      lVar7 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + lVar7 * 8);
        lVar12 = *unaff_RSI;
        local_b8 = lVar3;
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar10);
        if (pvVar6 != (void *)0x0) {
          lVar12 = *unaff_RSI;
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 0x50) + 0x10) + lVar7 * 8);
        if (lVar3 != lVar12) {
          iVar5 = 1;
          if ((lVar3 == 0) || (lVar12 == 0)) goto LAB_012547fd;
          local_88 = '\0';
          local_90 = lVar12;
          cVar4 = FUN_00d51e10();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            iVar5 = 1;
            FUN_00083b20();
            goto LAB_01254810;
          }
        }
        lVar7 = lVar7 + 1;
        local_a0 = CONCAT44(local_a0._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar15 + 0xc));
    }
    iVar5 = 2;
LAB_012547fd:
    FUN_00083b20();
    if (iVar5 == 2) goto LAB_0125480e;
  }
LAB_01254810:
  uVar10 = (ulonglong)(iVar5 == 0);
LAB_0125485b:
  return uVar10 & 0xffffffff;
}




// ============================================================
// @01253c10 — 1480 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x012540fe) */
/* WARNING: Removing unreachable block (ram,0x01254103) */
/* WARNING: Removing unreachable block (ram,0x01253e4e) */
/* WARNING: Removing unreachable block (ram,0x01253e53) */
/* WARNING: Removing unreachable block (ram,0x01254139) */
/* WARNING: Removing unreachable block (ram,0x01254141) */
/* WARNING: Removing unreachable block (ram,0x01254146) */
/* WARNING: Removing unreachable block (ram,0x01253eed) */
/* WARNING: Removing unreachable block (ram,0x01253ef9) */
/* WARNING: Removing unreachable block (ram,0x01253f02) */
/* WARNING: Removing unreachable block (ram,0x012541bc) */
/* WARNING: Removing unreachable block (ram,0x012541c5) */
/* WARNING: Removing unreachable block (ram,0x0125416c) */

ulonglong FUN_01253c10(ulonglong *param_1,longlong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  char unaff_SIL;
  longlong unaff_RDI;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iStack_4c;
  
  uVar5 = *(uint *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
  uVar10 = uVar5;
  if ((int)uVar5 < 0) {
    uVar10 = uVar5 + 7;
  }
  if ((0xe < uVar5 + 7) && (uVar8 = *param_3, uVar8 >> 0x20 != 0)) {
    uVar10 = (int)uVar10 >> 3;
    if ((int)uVar5 < 8) {
      uVar6 = FUN_00e7bdb0();
    }
    else {
      uVar6 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (ulonglong)(uVar10 - 1) * 8)
      ;
    }
    if ((uVar6 >> 0x20 == 0) || (cVar4 = FUN_00e7c020(), cVar4 == '\0')) {
      uVar5 = FUN_01251eb0();
      uVar6 = (ulonglong)uVar5;
      iStack_4c = (int)(uVar8 >> 0x20);
      if (unaff_SIL == '\0') {
        lVar13 = *(longlong *)(unaff_RDI + 0x48);
        if (param_1 != (ulonglong *)0x0) {
          if ((int)uVar5 < 1) {
            uVar8 = FUN_00e7bdb0();
          }
          else {
            uVar8 = *(ulonglong *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)(uVar5 - 1) * 8);
          }
          *param_1 = uVar8;
          lVar13 = *(longlong *)(unaff_RDI + 0x48);
        }
        iVar15 = *(int *)(lVar13 + 0x18);
        iVar9 = iVar15 + 7;
        if (-1 < iVar15) {
          iVar9 = iVar15;
        }
        if ((int)uVar5 < iVar9 >> 3) {
          uVar8 = *(ulonglong *)(*(longlong *)(lVar13 + 0x10) + (longlong)(int)uVar5 * 8);
        }
        else {
          uVar8 = FUN_00e7bdb0();
        }
        *param_3 = uVar8;
        lVar13 = *(longlong *)
                  (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)(int)uVar5 * 8)
        ;
        if (lVar13 == 0) {
          lVar13 = 0;
          iVar15 = *(int *)((longlong)param_1 + 4);
        }
        else {
          iVar15 = *(int *)((longlong)param_1 + 4);
        }
        if (((iVar15 != 0) && (iStack_4c != 0)) && (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
          if ((int)uVar5 < 0) {
            uVar8 = FUN_00e7bdb0();
          }
          else {
            uVar8 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + uVar6 * 8);
          }
          iVar14 = uVar5 + 1;
          *param_1 = uVar8;
          iVar15 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
          iVar9 = iVar15 + 7;
          if (-1 < iVar15) {
            iVar9 = iVar15;
          }
          if (iVar14 < iVar9 >> 3) {
            uVar8 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (longlong)iVar14 * 8);
          }
          else {
            uVar8 = FUN_00e7bdb0();
          }
          *param_3 = uVar8;
          lVar11 = *(longlong *)
                    (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)iVar14 * 8);
          if (lVar13 != lVar11) {
            lVar13 = lVar11;
          }
        }
        uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        if (param_2 != (longlong *)0x0) {
          lVar11 = *param_2;
          if (lVar11 == lVar13) {
            if (((char)param_2[1] == '\0') && (lVar13 != 0)) {
              FUN_00d50b00();
              *(undefined1 *)(param_2 + 1) = 1;
            }
          }
          else {
            lVar3 = param_2[1];
            if (lVar13 != 0) {
              FUN_00d50b00();
            }
            *param_2 = lVar13;
            if (((char)lVar3 != '\0') && (lVar11 != 0)) {
              FUN_00d50b20();
            }
LAB_012541ad:
            *(undefined1 *)(param_2 + 1) = 1;
          }
        }
      }
      else {
        uVar1 = *param_1;
        lVar13 = (longlong)(int)uVar5;
        if ((int)uVar5 < (int)uVar10) {
          uVar5 = uVar10;
        }
        lVar11 = 0;
        do {
          iVar15 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
          iVar9 = iVar15 + 7;
          if (-1 < iVar15) {
            iVar9 = iVar15;
          }
          iVar12 = (int)lVar13;
          iVar14 = iVar12;
          iVar16 = iVar12;
          if (7 < iVar15) {
            plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
            if (plVar2[lVar13] == 0) {
              if (lVar13 != 0) {
                iVar14 = (int)uVar6 + -1;
                if (iVar14 != 1) goto LAB_01253d8a;
                goto LAB_01253d61;
              }
              iVar12 = 1;
              iVar14 = 0;
LAB_01253d9e:
              if (*plVar2 == 0) {
                iVar14 = 0;
              }
              iVar16 = 1;
              iVar15 = 1;
              if (iVar9 >> 3 < 2) goto LAB_01253dc5;
            }
            else {
              if (iVar12 == 1) {
LAB_01253d61:
                iVar14 = 1;
                goto LAB_01253d9e;
              }
LAB_01253d8a:
              iVar16 = iVar14;
              iVar15 = iVar14;
              if (iVar9 >> 3 <= iVar14) goto LAB_01253dc5;
            }
            iVar16 = iVar15;
            if (plVar2[(longlong)iVar15 + 1] == 0) {
              iVar12 = iVar15 + 1;
            }
          }
LAB_01253dc5:
          if (iVar14 < 1) {
            uVar7 = FUN_00e7bdb0();
          }
          else {
            uVar7 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) +
                     (ulonglong)(iVar14 - 1) * 8);
          }
          *param_1 = uVar7;
          iVar15 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
          iVar9 = iVar15 + 7;
          if (-1 < iVar15) {
            iVar9 = iVar15;
          }
          if (iVar12 < iVar9 >> 3) {
            uVar7 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (longlong)iVar12 * 8);
          }
          else {
            uVar7 = FUN_00e7bdb0();
          }
          *param_3 = uVar7;
          lVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)iVar16 * 8);
          if (lVar11 != lVar3) {
            lVar11 = lVar3;
          }
          if ((*(int *)((longlong)param_3 + 4) == 0) ||
             ((iStack_4c != 0 && (cVar4 = FUN_00e7c020(), cVar4 != '\0')))) {
            if ((*(int *)((longlong)param_1 + 4) == 0) ||
               ((iStack_4c != 0 && (cVar4 = FUN_00e7c020(), cVar4 != '\0')))) {
              *param_1 = uVar8;
            }
            uVar8 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
            if (param_2 == (longlong *)0x0) goto LAB_01253c91;
            lVar13 = *param_2;
            if (lVar13 == lVar11) {
              if (((char)param_2[1] == '\0') && (lVar11 != 0)) {
                FUN_00d50b00();
                *(undefined1 *)(param_2 + 1) = 1;
              }
              goto LAB_01253c91;
            }
            lVar3 = param_2[1];
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            *param_2 = lVar11;
            if (((char)lVar3 != '\0') && (lVar13 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_012541ad;
          }
          lVar13 = lVar13 + 1;
          uVar6 = (ulonglong)((int)uVar6 + 1);
        } while (uVar5 + 1 != (int)lVar13);
        *param_1 = uVar1;
        *param_3 = uVar8;
        uVar8 = 0;
      }
      goto LAB_01253c91;
    }
  }
  uVar8 = 0;
LAB_01253c91:
  return uVar8 & 0xffffffff;
}




// ============================================================
// @012535e0 — 1448 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x012538c3) */
/* WARNING: Removing unreachable block (ram,0x012538cf) */
/* WARNING: Removing unreachable block (ram,0x012538d8) */
/* WARNING: Removing unreachable block (ram,0x01253b98) */
/* WARNING: Removing unreachable block (ram,0x01253ba1) */
/* WARNING: Removing unreachable block (ram,0x01253805) */
/* WARNING: Removing unreachable block (ram,0x0125380a) */
/* WARNING: Removing unreachable block (ram,0x01253ac6) */
/* WARNING: Removing unreachable block (ram,0x01253acb) */
/* WARNING: Removing unreachable block (ram,0x01253b32) */
/* WARNING: Removing unreachable block (ram,0x01253aff) */
/* WARNING: Removing unreachable block (ram,0x01253b07) */
/* WARNING: Removing unreachable block (ram,0x01253b0c) */
/* WARNING: Removing unreachable block (ram,0x01253b35) */

ulonglong FUN_012535e0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char unaff_SIL;
  longlong unaff_RDI;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  int iStack_4c;
  
  iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
  if ((0xe < iVar4 + 7U) && (uVar8 = *param_1, uVar8 >> 0x20 != 0)) {
    if (iVar4 < 8) {
      uVar5 = FUN_00e7bdb0();
    }
    else {
      uVar5 = **(ulonglong **)(*(longlong *)(unaff_RDI + 0x48) + 0x10);
    }
    if ((uVar5 >> 0x20 == 0) || (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
      uVar5 = *param_3;
      iVar4 = FUN_01251eb0();
      iStack_4c = (int)(uVar8 >> 0x20);
      if (unaff_SIL == '\0') {
        if (iVar4 < 2) {
          uVar7 = FUN_00e7bdb0();
        }
        else {
          uVar7 = *(ulonglong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) +
                   (ulonglong)(iVar4 - 2) * 8);
        }
        uVar13 = iVar4 - 1;
        uVar6 = (ulonglong)uVar13;
        *param_1 = uVar7;
        iVar11 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
        iVar9 = iVar11 + 7;
        if (-1 < iVar11) {
          iVar9 = iVar11;
        }
        if (iVar9 >> 3 < iVar4) {
          uVar7 = FUN_00e7bdb0();
        }
        else {
          uVar7 = *(ulonglong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) +
                   (longlong)(int)uVar13 * 8);
        }
        *param_3 = uVar7;
        uVar14 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)(int)uVar13 * 8
                  );
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        if (((uVar7 >> 0x20 != 0) && (iStack_4c != 0)) && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
          if (uVar13 == 0) {
            *param_1 = uVar8;
            goto LAB_01253a10;
          }
          if (iVar4 < 3) {
            uVar8 = FUN_00e7bdb0();
          }
          else {
            uVar8 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) +
                     (ulonglong)(iVar4 - 3) * 8);
          }
          iVar4 = iVar4 + -2;
          *param_1 = uVar8;
          iVar11 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
          iVar9 = iVar11 + 7;
          if (-1 < iVar11) {
            iVar9 = iVar11;
          }
          if (iVar4 < iVar9 >> 3) {
            uVar8 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (longlong)iVar4 * 8);
          }
          else {
            uVar8 = FUN_00e7bdb0();
          }
          *param_3 = uVar8;
          uVar6 = *(ulonglong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)iVar4 * 8);
          if (uVar14 != uVar6) {
            uVar14 = uVar6;
          }
        }
        uVar8 = CONCAT71((int7)(uVar6 >> 8),1);
        if (param_2 != (ulonglong *)0x0) {
          uVar5 = *param_2;
          if (uVar5 == uVar14) {
            if (((char)param_2[1] != '\0') || (uVar14 == 0)) goto LAB_0125364d;
            FUN_00d50b00();
          }
          else {
            uVar7 = param_2[1];
            if (uVar14 != 0) {
              FUN_00d50b00(uVar14);
            }
            *param_2 = uVar14;
            if (((char)uVar7 != '\0') && (uVar5 != 0)) {
              FUN_00d50b20();
            }
          }
LAB_01253b8a:
          *(undefined1 *)(param_2 + 1) = 1;
        }
      }
      else {
        uVar7 = 0;
        lVar16 = (longlong)iVar4;
        do {
          iVar11 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
          iVar9 = iVar11 + 7;
          if (-1 < iVar11) {
            iVar9 = iVar11;
          }
          iVar15 = (int)lVar16;
          iVar10 = iVar15;
          iVar12 = iVar15;
          if (7 < iVar11) {
            plVar1 = *(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
            if (plVar1[lVar16] == 0) {
              if (lVar16 != 0) {
                iVar10 = iVar4 + -1;
                if (iVar10 != 1) goto LAB_0125373f;
                goto LAB_01253715;
              }
              iVar15 = 1;
              iVar10 = 0;
LAB_01253752:
              if (*plVar1 == 0) {
                iVar10 = 0;
              }
              iVar12 = 1;
              iVar11 = 1;
              if (iVar9 >> 3 < 2) goto LAB_01253777;
            }
            else {
              if (iVar15 == 1) {
LAB_01253715:
                iVar10 = 1;
                goto LAB_01253752;
              }
LAB_0125373f:
              iVar12 = iVar10;
              iVar11 = iVar10;
              if (iVar9 >> 3 <= iVar10) goto LAB_01253777;
            }
            iVar12 = iVar11;
            if (plVar1[(longlong)iVar11 + 1] == 0) {
              iVar15 = iVar11 + 1;
            }
          }
LAB_01253777:
          if (iVar10 < 1) {
            uVar6 = FUN_00e7bdb0();
          }
          else {
            uVar6 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) +
                     (ulonglong)(iVar10 - 1) * 8);
          }
          *param_1 = uVar6;
          iVar11 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
          iVar9 = iVar11 + 7;
          if (-1 < iVar11) {
            iVar9 = iVar11;
          }
          if (iVar15 < iVar9 >> 3) {
            uVar6 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (longlong)iVar15 * 8);
          }
          else {
            uVar6 = FUN_00e7bdb0();
          }
          *param_3 = uVar6;
          uVar6 = *(ulonglong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)iVar12 * 8);
          if (uVar7 == uVar6) {
            uVar6 = uVar7;
            if (*(int *)((longlong)param_1 + 4) != 0) goto LAB_0125383e;
LAB_0125385d:
            if ((*(int *)((longlong)param_3 + 4) == 0) ||
               ((iStack_4c != 0 && (cVar3 = FUN_00e7c020(), cVar3 != '\0')))) {
              *param_3 = uVar8;
            }
            uVar8 = CONCAT71((int7)(uVar6 >> 8),1);
            if (param_2 == (ulonglong *)0x0) goto LAB_0125364d;
            uVar5 = *param_2;
            if (uVar5 == uVar6) {
              if (((char)param_2[1] != '\0') || (uVar6 == 0)) goto LAB_0125364d;
              FUN_00d50b00();
            }
            else {
              uVar7 = param_2[1];
              if (uVar6 != 0) {
                FUN_00d50b00(uVar6);
              }
              *param_2 = uVar6;
              if (((char)uVar7 != '\0') && (uVar5 != 0)) {
                FUN_00d50b20();
              }
            }
            goto LAB_01253b8a;
          }
          uVar7 = uVar6;
          if (*(int *)((longlong)param_1 + 4) == 0) goto LAB_0125385d;
LAB_0125383e:
          if ((iStack_4c != 0) && (cVar3 = FUN_00e7c020(), uVar6 = uVar7, cVar3 != '\0'))
          goto LAB_0125385d;
          iVar4 = iVar4 + -1;
          bVar2 = 0 < lVar16;
          lVar16 = lVar16 + -1;
        } while (bVar2);
        *param_1 = uVar8;
LAB_01253a10:
        *param_3 = uVar5;
        uVar8 = 0;
      }
      goto LAB_0125364d;
    }
  }
  uVar8 = 0;
LAB_0125364d:
  return uVar8 & 0xffffffff;
}




// ============================================================
// @01252960 — 1389 bytes
// ============================================================

bool FUN_01252960(ulonglong param_1,ulonglong param_2,longlong *param_3,ulonglong *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  char unaff_SIL;
  longlong unaff_RDI;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  bool bVar19;
  ulonglong *local_res8;
  int *local_res10;
  ulonglong local_98;
  longlong local_90;
  char local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong *local_48;
  
  local_58 = param_2;
  local_80 = param_1;
  local_78 = param_1;
  iVar1 = *local_res10;
  if ((longlong)iVar1 == -2) goto LAB_01252e63;
  local_60 = '\0';
  local_68 = 0;
  plVar17 = &local_68;
  if (param_3 != (longlong *)0x0) {
    plVar17 = param_3;
  }
  local_48 = local_res8;
  if (local_res8 == (ulonglong *)0x0) {
    local_48 = &local_98;
  }
  if (iVar1 == -1) {
    if (param_2 >> 0x20 == 0) {
      *local_res10 = 0;
      if (unaff_SIL == '\0') {
        lVar6 = *(longlong *)(unaff_RDI + 0x48);
        uVar10 = *(uint *)(lVar6 + 0x18);
        uVar7 = 0;
        uVar15 = 0;
      }
      else {
        if (**(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10) == 0) {
          *local_res10 = 1;
        }
        lVar6 = *(longlong *)(unaff_RDI + 0x48);
        uVar10 = *(uint *)(lVar6 + 0x18);
        uVar7 = 0;
        if ((int)uVar10 < 8) {
          uVar15 = 0;
        }
        else {
          plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
          lVar3 = *plVar2;
          bVar19 = lVar3 == 0;
          uVar7 = (ulonglong)bVar19;
          uVar15 = (uint)bVar19;
          if ((uVar15 < uVar10 >> 3) && (uVar15 = (lVar3 == 0) + 1, plVar2[uVar15] != 0)) {
            uVar15 = (uint)bVar19;
          }
        }
      }
      if (param_4 != (ulonglong *)0x0) {
        uVar8 = FUN_00e7bdb0();
        *param_4 = uVar8;
        lVar6 = *(longlong *)(unaff_RDI + 0x48);
        uVar10 = *(uint *)(lVar6 + 0x18);
      }
      uVar13 = uVar10 + 7;
      if (-1 < (int)uVar10) {
        uVar13 = uVar10;
      }
      if ((int)uVar15 < (int)uVar13 >> 3) {
        uVar8 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)uVar15 * 8);
      }
      else {
        uVar8 = FUN_00e7bdb0();
      }
      *local_48 = uVar8;
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + uVar7 * 8);
      lVar3 = *plVar17;
      lVar4 = plVar17[1];
      if (lVar3 == lVar6) {
        if (((char)lVar4 != '\0') || (lVar6 == 0)) goto LAB_01252da5;
        FUN_00d50b00();
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        *plVar17 = lVar6;
        if (((char)lVar4 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_01252da0;
    }
    FUN_012521f0(param_2,unaff_SIL,param_4,local_48);
    lVar6 = *plVar17;
    if (lVar6 == local_90) {
      if (((char)plVar17[1] == '\0') && (local_90 != 0)) {
        if (local_88 == '\0') {
          FUN_00d50b00();
          local_50 = plVar17 + 1;
        }
        else {
          local_50 = plVar17 + 1;
        }
        goto LAB_01252e82;
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = lVar6;
      local_50 = plVar17 + 1;
      lVar3 = plVar17[1];
      if (local_88 == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
        }
        *plVar17 = local_90;
        if (((char)lVar3 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *plVar17 = local_90;
        if (((char)lVar3 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01252e82:
      *(undefined1 *)local_50 = 1;
    }
    if (((param_4 != (ulonglong *)0x0) && (unaff_SIL != '\0')) &&
       ((*(int *)((longlong)param_4 + 4) == 0 ||
        ((local_58._4_4_ != 0 && (cVar5 = FUN_00e7c020(), cVar5 != '\0')))))) {
      *param_4 = local_58;
    }
  }
  else {
    lVar6 = *(longlong *)(unaff_RDI + 0x48);
    iVar16 = *(int *)(lVar6 + 0x18);
    iVar9 = iVar16 + 7;
    if (-1 < iVar16) {
      iVar9 = iVar16;
    }
    iVar9 = iVar9 >> 3;
    iVar14 = iVar1;
    iVar18 = iVar1;
    iVar12 = iVar1;
    if ((unaff_SIL != '\0') && (7 < iVar16)) {
      plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
      if (plVar2[iVar1] == 0) {
        if (iVar1 != 0) {
          iVar14 = iVar1 + -1;
          goto LAB_01252a26;
        }
        iVar18 = 1;
        iVar16 = 0;
LAB_01252c91:
        iVar12 = 0;
        if (*plVar2 != 0) {
          iVar12 = iVar16;
        }
        iVar14 = 1;
        if (iVar9 < 2) goto LAB_01252a52;
      }
      else {
LAB_01252a26:
        iVar16 = 1;
        if (iVar14 == 1) goto LAB_01252c91;
        iVar12 = iVar14;
        if (iVar9 <= iVar14) goto LAB_01252a52;
      }
      if (plVar2[(longlong)iVar14 + 1] == 0) {
        iVar18 = iVar14 + 1;
      }
    }
LAB_01252a52:
    if (param_4 != (ulonglong *)0x0) {
      if (iVar12 < 1) {
        uVar7 = FUN_00e7bdb0();
      }
      else {
        uVar7 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(iVar12 - 1) * 8);
      }
      *param_4 = uVar7;
      lVar6 = *(longlong *)(unaff_RDI + 0x48);
      iVar16 = *(int *)(lVar6 + 0x18);
      iVar9 = iVar16 + 7;
      if (-1 < iVar16) {
        iVar9 = iVar16;
      }
      iVar9 = iVar9 >> 3;
    }
    if (iVar18 < iVar9) {
      uVar7 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar18 * 8);
    }
    else {
      uVar7 = FUN_00e7bdb0();
    }
    *local_48 = uVar7;
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)iVar14 * 8);
    lVar3 = *plVar17;
    lVar4 = plVar17[1];
    if (lVar3 == lVar6) {
      if (((char)lVar4 != '\0') || (lVar6 == 0)) goto LAB_01252da5;
      FUN_00d50b00();
    }
    else {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *plVar17 = lVar6;
      if (((char)lVar4 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01252da0:
    *(undefined1 *)(plVar17 + 1) = 1;
  }
LAB_01252da5:
  local_80 = local_80 >> 0x20;
  if (local_80 == 0) {
LAB_01252ddf:
    iVar16 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
    iVar9 = iVar16 + 7;
    if (-1 < iVar16) {
      iVar9 = iVar16;
    }
    iVar16 = *local_res10;
    iVar14 = -2;
    if (iVar16 == iVar9 >> 3) goto LAB_01252e4d;
    *local_res10 = iVar16 + 1;
    if ((unaff_SIL != '\0') &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + 8 + (longlong)iVar16 * 8) == 0)) {
      iVar14 = -2;
      if (iVar16 + 1 != iVar9 >> 3) {
        iVar14 = iVar16 + 2;
      }
      goto LAB_01252e4d;
    }
  }
  else {
    if (*(int *)((longlong)local_48 + 4) != 0) {
      puVar11 = &local_98;
      if (local_res8 != (ulonglong *)0x0) {
        puVar11 = local_res8;
      }
      if ((*(int *)((longlong)puVar11 + 4) == 0) || (cVar5 = FUN_00e7c020(), cVar5 != '\0'))
      goto LAB_01252ddf;
    }
    iVar14 = -2;
    if (unaff_SIL != '\0') {
      *local_48 = local_78;
    }
LAB_01252e4d:
    *local_res10 = iVar14;
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
LAB_01252e63:
  return iVar1 != -2;
}




// ============================================================
// @00d227f0 — 1321 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d22830) */
/* WARNING: Removing unreachable block (ram,0x00d2283c) */

void FUN_00d227f0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_00d50de0();
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x378))();
  lVar2 = DAT_0277cf70;
  lVar4 = DAT_0277cf50;
  if (cVar3 == '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (*(char *)(unaff_RDI + 0x1e) == '\0') {
      if (DAT_0277cf70 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar2;
      local_78 = '\x01';
      (**(code **)(*plVar1 + 0x5a0))(param_1,4);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_0277cf70 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar2;
      local_88 = '\x01';
      (**(code **)(*plVar1 + 0x5a0))(param_1,3);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    if (*(char *)(unaff_RDI + 0x1e) == '\0') {
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
    if (0 < *(int *)(unaff_RDI + 0xc)) {
      lVar4 = 0;
      do {
        local_70 = *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + lVar4 * 8);
        local_68 = '\0';
        (**(code **)(*(longlong *)*unaff_RSI + 0x400))();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(unaff_RDI + 0xc));
    }
  }
  else {
    if (*(char *)(unaff_RDI + 0x1c) != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf50 != 0) {
        FUN_00d50b00();
      }
      local_100 = lVar4;
      local_f8 = '\x01';
      (**(code **)(*plVar1 + 0x488))(param_1,&local_100);
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar4 = DAT_0277cf58;
    if (*(char *)(unaff_RDI + 0x1d) != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf58 != 0) {
        FUN_00d50b00();
      }
      local_f0 = lVar4;
      local_e8 = '\x01';
      (**(code **)(*plVar1 + 0x488))(param_1,&local_f0);
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar4 = DAT_0277cf60;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_0277cf60 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar4;
    local_d8 = '\x01';
    (**(code **)(*plVar1 + 0x488))(param_1,&local_e0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))();
    local_c0 = DAT_0277cf68;
    if (cVar3 == '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf68 != 0) {
        FUN_00d50b00();
      }
      local_b8 = '\x01';
      (**(code **)(*plVar1 + 0x498))(param_1,&local_c0);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)(unaff_RDI + 0xc)) {
        lVar4 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + lVar4 * 8);
          plVar1 = (longlong *)*unaff_RSI;
          if (*(char *)(unaff_RDI + 0x1e) == '\0') {
            local_98 = '\0';
            local_a0 = lVar2;
            FUN_00d93550();
            local_50 = local_40;
            local_48 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_48 = '\x01';
            (**(code **)(*plVar1 + 0x4f8))(param_1,&local_50);
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_a8 = '\0';
            local_b0 = lVar2;
            FUN_00d93550();
            local_60 = local_40;
            local_58 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_58 = '\x01';
            (**(code **)(*plVar1 + 0x4f0))(param_1,&local_60);
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(unaff_RDI + 0xc));
      }
    }
    else {
      FUN_00d50b00();
      FUN_00e4ad10();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @01694420 — 1001 bytes
// str: ""(knownRoles & ARA::kARAPlaybackRendererRole) != 0""
// str: ""(knownRoles & ARA::kARAEditorRendererRole) != 0""
// str: ""(knownRoles & ARA::kARAEditorViewRole) != 0""
// str: ""assignedRoles != 0""
// str: ""(knownRoles | assignedRoles) == knownRoles""
// ============================================================

undefined8 * FUN_01694420(ulonglong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  
  FUN_00da7190();
  if ((param_2 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((param_2 & 2) == 0) {
    puVar5 = (undefined8 *)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((param_2 & 4) == 0) {
    puVar5 = (undefined8 *)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((uint)param_1 == 0) {
    puVar5 = (undefined8 *)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((~param_2 & (uint)param_1) != 0) {
    puVar5 = (undefined8 *)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((unaff_RSI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    FUN_016aea20();
    puVar5 = (undefined8 *)0x0;
    goto LAB_01694559;
  }
  FUN_00d50b00();
  cVar2 = FUN_0168a0d0();
  if (cVar2 == '\0') {
    puVar5 = (undefined8 *)0x0;
    FUN_016aea20();
  }
  else if (*(longlong *)(unaff_RDI + 0x98) == 0) {
    if ((*(byte *)(unaff_RDI + 0xa0) & 1) == 0) {
      cVar2 = FUN_016ae5f0();
      uVar6 = *(uint *)(unaff_RDI + 0xa0);
      if (cVar2 == '\0') {
        if ((uVar6 & 2) != 0) {
          puVar5 = (undefined8 *)0x0;
          FUN_016aea20(uVar6,
                       "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedSetParameterState) && \"binding must be done before restoring state\""
                      );
          goto LAB_01694551;
        }
      }
      else if ((uVar6 & 2) != 0) {
        FUN_016aea20(uVar6,
                     "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedSetParameterState) && \"binding must be done before restoring state\""
                    );
        uVar6 = *(uint *)(unaff_RDI + 0xa0);
      }
      if ((uVar6 & 4) == 0) {
        *(byte *)(unaff_RDI + 0xa5) = (byte)param_1 & 1;
        *(byte *)(unaff_RDI + 0xa6) = (byte)((param_1 & 0xffffffff) >> 1) & 1;
        *(byte *)(unaff_RDI + 0xa7) = (byte)((param_1 & 0xffffffff) >> 2) & 1;
        cVar2 = FUN_016ae5f0();
        if (cVar2 == '\0') {
          cVar2 = FUN_00bd22a0();
          if (cVar2 != '\0') {
            FUN_016aea20();
          }
          iVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x68) + 0xb0))();
          if ((*(char *)(unaff_RDI + 0xa6) != '\0') && (iVar3 == 1)) {
            FUN_016aea20();
          }
        }
        lVar1 = *(longlong *)(unaff_RDI + 0x98);
        if (lVar1 != unaff_RSI) {
          FUN_00d50b00();
          *(longlong *)(unaff_RDI + 0x98) = unaff_RSI;
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b00();
        FUN_01689630();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        *(undefined1 *)(unaff_RDI + 0xa4) = 1;
        cVar2 = FUN_016ae5f0();
        if (cVar2 == '\0') {
          FUN_0167ab60();
          pvVar4 = _pthread_getspecific(uVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01537ab0();
          iVar3 = *(int *)(local_60 + 0xc);
          if (local_58 != '\0') {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (iVar3 != 0) {
            FUN_016948c0();
          }
        }
        puVar5 = (undefined8 *)FUN_00e83020();
        *puVar5 = 0x48;
        cVar2 = FUN_016ae5f0();
        if (cVar2 != '\0') {
          puVar5[1] = unaff_RDI;
          puVar5[2] = &DAT_025f8d98;
        }
        if (*(char *)(unaff_RDI + 0xa5) != '\0') {
          puVar5[3] = unaff_RDI;
          puVar5[4] = &DAT_025f8db0;
        }
        if (*(char *)(unaff_RDI + 0xa6) != '\0') {
          puVar5[5] = unaff_RDI;
          puVar5[6] = &DAT_025f8dc8;
        }
        if (*(char *)(unaff_RDI + 0xa7) != '\0') {
          puVar5[7] = unaff_RDI;
          puVar5[8] = &DAT_025f8df0;
        }
        *(undefined8 **)(unaff_RDI + 0x90) = puVar5;
      }
      else {
        puVar5 = (undefined8 *)0x0;
        FUN_016aea20(uVar6,
                     "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedCreateController) && \"binding must be done before creating the UI\""
                    );
      }
    }
    else {
      puVar5 = (undefined8 *)0x0;
      FUN_016aea20();
    }
  }
  else {
    puVar5 = (undefined8 *)0x0;
    FUN_016aea20();
  }
LAB_01694551:
  FUN_00d50b20();
LAB_01694559:
  FUN_00da71b0();
  return puVar5;
}




// ============================================================
// @01251eb0 — 827 bytes
// ============================================================

uint FUN_01251eb0(undefined8 param_1,uint *param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iStack_44;
  
  uVar9 = *(uint *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
  uVar5 = uVar9;
  if ((int)uVar9 < 0) {
    uVar5 = uVar9 + 7;
  }
  if (uVar9 + 7 < 0xf) {
LAB_01251f0c:
    uVar5 = 0;
LAB_012521d4:
    if (param_2 != (uint *)0x0) {
      *param_2 = uVar5;
    }
    return uVar5;
  }
  iVar6 = (int)((ulonglong)unaff_RSI >> 0x20);
  puVar4 = *(ulonglong **)(*(longlong *)(unaff_RDI + 0x48) + 0x10);
  if ((iVar6 != 0) && (*puVar4 >> 0x20 != 0)) {
    cVar2 = FUN_00e7c020();
    if (cVar2 != '\0') goto LAB_01251f0c;
    puVar4 = *(ulonglong **)(*(longlong *)(unaff_RDI + 0x48) + 0x10);
    uVar9 = *(uint *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
  }
  uVar5 = (int)uVar5 >> 3;
  if (((*(ulonglong *)((longlong)(int)uVar9 + -8 + (longlong)puVar4) >> 0x20 != 0) && (iVar6 != 0))
     && (cVar2 = FUN_00e7c020(), cVar2 == '\0')) goto LAB_012521d4;
  if ((param_2 != (uint *)0x0) && (uVar9 = *param_2, uVar9 != 0xffffffff)) {
    if ((int)uVar5 <= (int)uVar9) {
      uVar9 = uVar5 - 1;
    }
    if (((iVar6 == 0) ||
        (*(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + 4 +
                 (longlong)(int)uVar9 * 8) == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0')) {
      uVar7 = uVar9;
      if ((((((((int)(uVar5 - 1) <= (int)uVar9) || (iVar6 == 0)) ||
             (uVar8 = uVar9 + 1,
             *(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + 4 +
                     (longlong)(int)uVar8 * 8) == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0')) &&
           (((uVar8 = uVar9 + 2, (int)uVar5 <= (int)uVar8 || (iVar6 == 0)) ||
            ((*(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + 4 +
                      (longlong)(int)uVar8 * 8) == 0 || (cVar2 = FUN_00e7c020(), cVar2 == '\0'))))))
          && ((uVar9 = uVar9 + 3, uVar8 = uVar5, (int)uVar9 < (int)uVar5 && (iVar6 != 0)))) &&
         ((*(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + 4 +
                   (longlong)(int)uVar9 * 8) != 0 && (cVar2 = FUN_00e7c020(), cVar2 != '\0')))) {
        uVar8 = uVar9;
      }
      goto LAB_01252136;
    }
    uVar5 = uVar9;
    if (0 < (int)uVar9) {
      uVar8 = uVar9;
      if (((iVar6 != 0) &&
          (*(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + 4 +
                   (ulonglong)(uVar9 - 1) * 8) != 0)) &&
         (cVar2 = FUN_00e7c020(), uVar7 = uVar9 - 1, cVar2 == '\0')) goto LAB_01252136;
      uVar5 = 1;
      if (1 < (int)uVar9) {
        if (((iVar6 != 0) &&
            (*(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + 4 +
                     (ulonglong)(uVar9 - 2) * 8) != 0)) &&
           (cVar2 = FUN_00e7c020(), uVar7 = uVar9 - 2, cVar2 == '\0')) goto LAB_01252136;
        uVar5 = 2;
        if (((2 < (int)uVar9) && (uVar5 = uVar9, iVar6 != 0)) &&
           (*(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + 4 +
                    (ulonglong)(uVar9 - 3) * 8) != 0)) {
          cVar2 = FUN_00e7c020();
          uVar7 = uVar9 - 3;
          if (cVar2 != '\0') {
            uVar7 = 0;
          }
          goto LAB_01252136;
        }
      }
    }
  }
  uVar8 = uVar5;
  uVar7 = 0;
LAB_01252136:
  iVar3 = uVar8 - uVar7;
joined_r0x0125213e:
  uVar5 = uVar8;
  uVar8 = uVar5;
  if (iVar3 != 1) {
    do {
      uVar5 = iVar3 / 2 + uVar7;
      uVar1 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (longlong)(int)uVar5 * 8);
      if ((uVar1 >> 0x20 != 0) && (iVar6 != 0)) {
        cVar2 = FUN_00e7c000();
        if (cVar2 != '\0') {
          uVar5 = uVar5 + 1;
          break;
        }
        iStack_44 = (int)(uVar1 >> 0x20);
        if (((iStack_44 != 0) && (iVar6 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0'))
        goto code_r0x012521ba;
      }
      iVar3 = uVar5 - uVar7;
      uVar8 = uVar5;
      if (iVar3 == 1) break;
    } while( true );
  }
  goto LAB_012521d4;
code_r0x012521ba:
  iVar3 = uVar8 - uVar5;
  uVar7 = uVar5;
  goto joined_r0x0125213e;
}




// ============================================================
// @012523c0 — 681 bytes
// ============================================================

undefined8 * FUN_012523c0(double param_1,char param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *in_RCX;
  int iVar5;
  longlong unaff_RSI;
  int iVar6;
  undefined8 *unaff_RDI;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  if ((((*(int *)(*(longlong *)(unaff_RSI + 0x48) + 0x18) < 8) || (NAN(param_1))) ||
      (**(ulonglong **)(*(longlong *)(unaff_RSI + 0x48) + 0x10) >> 0x20 == 0)) ||
     (cVar2 = FUN_00e7c720(), cVar2 != '\0')) {
    iVar3 = 0;
  }
  else {
    FUN_00e7bcc0();
    uVar10 = FUN_00e7cd00(param_1);
    iVar3 = FUN_01251eb0(uVar10,param_4);
    if (iVar3 < 1) goto LAB_012524a0;
    while (uVar4 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(unaff_RSI + 0x48) + 0x10) +
                    (ulonglong)(iVar3 - 1) * 8), !NAN(param_1)) {
      while( true ) {
        if ((uVar4 >> 0x20 == 0) || (cVar2 = FUN_00e7c720(), cVar2 == '\0'))
        goto joined_r0x012524dc;
        iVar3 = iVar3 + -1;
        if (0 < iVar3) break;
LAB_012524a0:
        uVar4 = FUN_00e7bdb0();
        if (NAN(param_1)) goto joined_r0x012524dc;
      }
    }
  }
joined_r0x012524dc:
  if (((param_4 != (int *)0x0) && (*param_4 = iVar3, param_2 != '\0')) &&
     (*(longlong *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x50) + 0x10) + (longlong)iVar3 * 8) ==
      0)) {
    *param_4 = iVar3 + (uint)(iVar3 < 1) * 2 + -1;
  }
  iVar7 = *(int *)(*(longlong *)(unaff_RSI + 0x48) + 0x18);
  iVar6 = iVar7 + 7;
  if (-1 < iVar7) {
    iVar6 = iVar7;
  }
  iVar9 = iVar3;
  iVar5 = iVar3;
  if ((param_2 == '\0') || (iVar7 < 8)) goto joined_r0x0125257d;
  plVar1 = *(longlong **)(*(longlong *)(unaff_RSI + 0x50) + 0x10);
  if (plVar1[iVar3] == 0) {
    if (iVar3 == 0) {
      iVar3 = 1;
      iVar7 = 0;
    }
    else {
      iVar8 = iVar3 + -1;
      iVar7 = 1;
      if (iVar8 != 1) goto LAB_0125255d;
    }
LAB_012525a2:
    iVar5 = 0;
    if (*plVar1 != 0) {
      iVar5 = iVar7;
    }
    iVar8 = 1;
    iVar9 = 1;
    if (iVar6 >> 3 < 2) goto joined_r0x0125257d;
  }
  else {
    iVar7 = 1;
    iVar8 = iVar3;
    if (iVar3 == 1) goto LAB_012525a2;
LAB_0125255d:
    iVar5 = iVar8;
    iVar9 = iVar8;
    if (iVar6 >> 3 <= iVar8) goto joined_r0x0125257d;
  }
  iVar9 = iVar8;
  if (plVar1[(longlong)iVar8 + 1] == 0) {
    iVar3 = iVar8 + 1;
  }
joined_r0x0125257d:
  if (in_RCX != (undefined8 *)0x0) {
    if (iVar5 < 1) {
      uVar10 = FUN_00e7bdb0();
      *in_RCX = uVar10;
    }
    else {
      *in_RCX = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(unaff_RSI + 0x48) + 0x10) + (ulonglong)(iVar5 - 1) * 8
                 );
    }
  }
  if (param_3 != (undefined8 *)0x0) {
    iVar7 = *(int *)(*(longlong *)(unaff_RSI + 0x48) + 0x18);
    iVar6 = iVar7 + 7;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    if (iVar3 < iVar6 >> 3) {
      uVar10 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(unaff_RSI + 0x48) + 0x10) + (longlong)iVar3 * 8);
    }
    else {
      uVar10 = FUN_00e7bdb0();
    }
    *param_3 = uVar10;
  }
  *unaff_RDI = *(undefined8 *)
                (*(longlong *)(*(longlong *)(unaff_RSI + 0x50) + 0x10) + (longlong)iVar9 * 8);
  *(undefined1 *)(unaff_RDI + 1) = 0;
  return unaff_RDI;
}




// ============================================================
// @00d21790 — 645 bytes
// str: ""GNNull""
// str: ""NotAnObject""
// str: "",\n  ""
// str: "", ""
// ============================================================

void FUN_00d21790(void)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar5;
  longlong local_50;
  char local_48;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00d8db40();
  uVar1 = *(uint *)(unaff_RSI + 0xc);
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 5) {
      uVar5 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(unaff_RSI + 0x10) + uVar5 * 8);
        cVar3 = FUN_00d50c10();
        if (cVar3 == '\0') {
          FUN_00d8db40();
        }
        else if (plVar2 == (longlong *)0x0) {
          FUN_00d8db40();
        }
        else {
          (**(code **)(*plVar2 + 400))();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00d8dbf0();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if (uVar5 < uVar1 - 1) {
          FUN_00d8db40();
        }
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
    else {
      uVar5 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(unaff_RSI + 0x10) + uVar5 * 8);
        cVar3 = FUN_00d50c10();
        if (cVar3 == '\0') {
          FUN_00d8db40();
        }
        else if (plVar2 == (longlong *)0x0) {
          FUN_00d8db40();
        }
        else {
          (**(code **)(*plVar2 + 400))();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00d8dbf0();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if (uVar5 < uVar1 - 1) {
          FUN_00d8db40();
        }
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  FUN_00d8db40();
  FUN_00d8c7d0();
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01251710 — 558 bytes
// str: ""%@""
// str: ""sequence: ""
// str: ""(GNNull)""
// str: "" (%Q) ""
// str: ""const sequence: %@""
// ============================================================

undefined8 * FUN_01251710(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar5;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  char local_38;
  
  puVar4 = DAT_027be958;
  if (*(int *)(*(longlong *)(unaff_RSI + 0x48) + 0x18) + 7U < 0xf) {
    lVar1 = **(longlong **)(*(longlong *)(unaff_RSI + 0x50) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d8cb40();
      if (lVar1 == 0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_025795a8;
    (*DAT_025795c0)();
    FUN_00d94d80();
    lVar1 = *(longlong *)(unaff_RSI + 0x50);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
          if (lVar2 == 0) {
            FUN_00d8db40();
          }
          else {
            local_48 = 1;
            local_50 = &DAT_024c5048;
            local_38 = 0;
            FUN_00d50b00();
            local_40 = (undefined4)lVar2;
            uStack_3c = (undefined4)((ulonglong)lVar2 >> 0x20);
            local_38 = '\x01';
            FUN_00d94d80();
            local_50 = &DAT_024c5048;
            if ((local_38 != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
              FUN_00d50b20();
            }
          }
          if ((int)lVar5 != *(int *)(lVar1 + 0xc) + -1) {
            local_48 = 1;
            local_50 = (undefined8 *)&DAT_025d0e78;
            uVar3 = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(unaff_RSI + 0x48) + 0x10) + lVar5 * 8);
            uStack_44 = (undefined4)uVar3;
            local_40 = (undefined4)((ulonglong)uVar3 >> 0x20);
            FUN_00d94d80(&DAT_025d0e78,&local_50);
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
      FUN_00083b20();
    }
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}



