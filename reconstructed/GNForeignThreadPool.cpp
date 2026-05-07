// Reconstructed implementation of GNForeignThreadPool
// From MikeCore binary — reverse-engineered pseudocode

#include "GNForeignThreadPool.h"

// ============================================================
// @00da99a0 — 1481 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00da9b88) */
/* WARNING: Removing unreachable block (ram,0x00da9b91) */
/* WARNING: Removing unreachable block (ram,0x00da9b43) */
/* WARNING: Removing unreachable block (ram,0x00da9b4f) */
/* WARNING: Removing unreachable block (ram,0x00da9afd) */
/* WARNING: Removing unreachable block (ram,0x00da9b09) */
/* WARNING: Removing unreachable block (ram,0x00da9c68) */
/* WARNING: Removing unreachable block (ram,0x00da9c74) */
/* WARNING: Removing unreachable block (ram,0x00da9f15) */
/* WARNING: Removing unreachable block (ram,0x00da9f1e) */
/* WARNING: Removing unreachable block (ram,0x00da9ca2) */
/* WARNING: Removing unreachable block (ram,0x00da9cab) */
/* WARNING: Removing unreachable block (ram,0x00da9ce4) */
/* WARNING: Removing unreachable block (ram,0x00da9ced) */
/* WARNING: Removing unreachable block (ram,0x00da9d0d) */
/* WARNING: Removing unreachable block (ram,0x00da9d16) */

undefined8 * FUN_00da99a0(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined8 *local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  local_38 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_38 = &DAT_025795a8;
  pcVar1 = DAT_025795c0;
  (*DAT_025795c0)();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_025795a8;
  (*pcVar1)();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025795a8;
  (*pcVar1)();
  iVar3 = FUN_00d8c7a0();
  if (0 < iVar3) {
    iVar10 = 0;
    puVar9 = puVar7;
    puVar11 = puVar6;
    do {
      FUN_00d8cbc0();
      FUN_00d8ea20();
      cVar2 = (**(code **)(*unaff_RSI + 0x3a0))();
      if (cVar2 == '\0') {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_025795a8;
        (*pcVar1)();
        if (puVar8 == puVar11) {
          FUN_00d50b20();
          puVar8 = puVar11;
        }
        else if (puVar11 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
LAB_00da9c30:
        FUN_00d8ea20();
        cVar2 = (**(code **)(*unaff_RSI + 0x3b0))();
        if (cVar2 == '\0') {
          puVar7 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar7 = &DAT_025795a8;
          (*pcVar1)();
          if (puVar7 == puVar9) {
            FUN_00d50b20();
            puVar7 = puVar9;
          }
          else if (puVar9 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          cVar2 = (**(code **)(*unaff_RSI + 0x3b8))();
          puVar7 = puVar9;
          if (cVar2 != '\0') {
            iVar4 = FUN_00d8c7a0();
            if (iVar4 != 0) {
              FUN_00d21140();
            }
            FUN_00d21140();
            puVar7 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar7 = &DAT_025795a8;
            (*pcVar1)();
            if (puVar7 == local_38) {
              FUN_00d50b20();
            }
            else {
              bVar12 = local_38 != (undefined8 *)0x0;
              local_38 = puVar7;
              if (bVar12) {
                FUN_00d50b20();
              }
            }
            puVar6 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = &DAT_025795a8;
            (*pcVar1)();
            if (puVar6 == puVar8) {
              FUN_00d50b20();
              puVar6 = puVar8;
            }
            else if (puVar8 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            puVar7 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar7 = &DAT_025795a8;
            (*pcVar1)();
            if (puVar7 == puVar9) {
              FUN_00d50b20();
              puVar7 = puVar9;
            }
            else if (puVar9 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_00da9aa1;
          }
        }
        FUN_00d8ea20();
        puVar6 = puVar8;
      }
      else {
        cVar2 = (**(code **)(*unaff_RSI + 0x3a8))();
        puVar8 = puVar11;
        if (cVar2 == '\0') goto LAB_00da9c30;
        iVar4 = FUN_00d8c7a0();
        if (iVar4 != 0) {
          FUN_00d21140();
        }
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_025795a8;
        (*pcVar1)();
        if (puVar7 == local_38) {
          FUN_00d50b20();
        }
        else {
          bVar12 = local_38 != (undefined8 *)0x0;
          local_38 = puVar7;
          if (bVar12) {
            FUN_00d50b20();
          }
        }
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_025795a8;
        (*pcVar1)();
        if (puVar6 == puVar11) {
          FUN_00d50b20();
          puVar6 = puVar11;
        }
        else if (puVar11 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_025795a8;
        (*pcVar1)();
        if (puVar7 == puVar9) {
          FUN_00d50b20();
          puVar7 = puVar9;
        }
        else if (puVar9 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
LAB_00da9aa1:
      iVar10 = iVar10 + 1;
      puVar9 = puVar7;
      puVar11 = puVar6;
    } while (iVar3 != iVar10);
  }
  iVar3 = FUN_00d8c7a0();
  if (iVar3 != 0) {
    FUN_00d21140();
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00dadeb0 — 1157 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00dae0f0) */
/* WARNING: Removing unreachable block (ram,0x00dae0f9) */
/* WARNING: Removing unreachable block (ram,0x00dae117) */
/* WARNING: Removing unreachable block (ram,0x00dae124) */
/* WARNING: Removing unreachable block (ram,0x00dae00f) */
/* WARNING: Removing unreachable block (ram,0x00dae018) */
/* WARNING: Removing unreachable block (ram,0x00dae303) */
/* WARNING: Removing unreachable block (ram,0x00dae30c) */

ulonglong FUN_00dadeb0(undefined1 *param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  int local_a4;
  longlong local_a0;
  char local_98;
  int local_4c;
  longlong *local_40;
  char local_38;
  
  cVar5 = FUN_00dab660();
  *(char *)(unaff_RDI + 0x48) = cVar5;
  if (cVar5 == '\0') {
LAB_00dae34b:
    uVar6 = 0;
  }
  else {
    FUN_00d21370();
    if (0 < local_4c) {
      iVar8 = 0;
      do {
        cVar5 = FUN_00dab660();
        *(char *)(unaff_RDI + 0x48) = cVar5;
        if (cVar5 == '\0') goto LAB_00dae34b;
        param_1 = *(undefined1 **)(*(longlong *)(unaff_RDI + 0x30) + 0x10);
        lVar9 = *(longlong *)(param_1 + (longlong)local_a4 * 8 + -8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        plVar1 = *(longlong **)(unaff_RDI + 0x60);
        plVar7 = local_40;
        if (plVar1 == (longlong *)0x0) {
          FUN_00c7e7b0();
          lVar4 = local_a0;
          if (local_98 == '\0') {
            if (local_a0 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          FUN_00c82360();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != (longlong *)0x0) {
            FUN_00c811e0();
            if (local_40 == (longlong *)0x0) {
              plVar7 = (longlong *)0x0;
              bVar3 = false;
            }
            else {
              bVar3 = true;
              if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
            (**(code **)(*plVar7 + 0x20))();
            FUN_00d50b20();
            goto LAB_00dae156;
          }
          bVar3 = false;
          plVar7 = (longlong *)0x0;
          bVar2 = false;
        }
        else {
          local_d0 = '\0';
          local_d8 = lVar9;
          FUN_00d50b00();
          param_1 = &stack0xffffffffffffff70;
          (**(code **)(*plVar1 + 0x18))(param_1,&local_d8);
          if (local_40 == (longlong *)0x0) {
            plVar7 = (longlong *)0x0;
            bVar3 = false;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar3 = true;
          }
          else {
            local_38 = '\0';
            bVar3 = true;
          }
          if (unaff_RDI != 0) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
LAB_00dae156:
          local_c0 = '\0';
          local_c8 = plVar7;
          FUN_00d21140();
          bVar2 = true;
          if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        if ((bVar3) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar2) goto LAB_00dae34b;
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_4c);
    }
    uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (0 < local_4c) {
      lVar9 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10) + lVar9 * 8);
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar7 = *(longlong **)(unaff_RDI + 0x60);
        if (plVar7 == (longlong *)0x0) {
          FUN_00d50b00();
          (**(code **)(*plVar1 + 0x118))();
          if (unaff_RDI != 0) {
            FUN_00d50b20();
          }
        }
        else {
          local_b0 = '\0';
          local_b8 = plVar1;
          FUN_00d50b00();
          (**(code **)(*plVar7 + 0x20))();
          if (unaff_RDI != 0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (*(char *)(unaff_RDI + 0x48) == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_00dae34b;
        }
        FUN_00d4efa0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_00dae320;
          }
        }
        else if (local_40 != (longlong *)0x0) {
LAB_00dae320:
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < local_4c);
      uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
  return uVar6 & 0xffffffff;
}




// ============================================================
// @00da7a00 — 1056 bytes
// str: ""GNForeignThreadPool""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00da7a00(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02579cc0;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  if (DAT_02782bd8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02782b28 = FUN_00d4fe50();
      _DAT_02782b10 = "GNForeignThreadPool";
      _DAT_02782b18 = 0x30;
      _DAT_02782b20 = FUN_00da79c0;
      _DAT_02782b30 = 0;
      uRam0000000002782b38 = 0;
      _DAT_02782b40 = 0;
      _DAT_02782bb8 = 0;
      uRam0000000002782bc0 = 0;
      _DAT_02782bc8 = 0;
      DAT_02782bca = 3;
      _DAT_02782b48 = 0;
      uRam0000000002782b50 = 0;
      _DAT_02782b58 = 0;
      uRam0000000002782b60 = 0;
      _DAT_02782b68 = 0;
      uRam0000000002782b70 = 0;
      _DAT_02782b78 = 0;
      uRam0000000002782b80 = 0;
      _DAT_02782b88 = 0;
      uRam0000000002782b90 = 0;
      _DAT_02782b98 = 0;
      uRam0000000002782ba0 = 0;
      _DAT_02782ba8 = 0;
      uRam0000000002782bb0 = 0;
      DAT_02782bd3 = 0;
      _DAT_02782bcb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02782bcb == '\0') {
    FUN_00da7ea0();
    FUN_00e87980();
  }
  FUN_00da80f0();
  *(undefined4 *)(unaff_RDI + 3) = 0;
  if (DAT_02782bd8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02782b28 = FUN_00d4fe50();
      _DAT_02782b10 = "GNForeignThreadPool";
      _DAT_02782b18 = 0x30;
      _DAT_02782b20 = FUN_00da79c0;
      _DAT_02782b30 = 0;
      uRam0000000002782b38 = 0;
      _DAT_02782b40 = 0;
      _DAT_02782bb8 = 0;
      uRam0000000002782bc0 = 0;
      _DAT_02782bc8 = 0;
      DAT_02782bca = 3;
      _DAT_02782b48 = 0;
      uRam0000000002782b50 = 0;
      _DAT_02782b58 = 0;
      uRam0000000002782b60 = 0;
      _DAT_02782b68 = 0;
      uRam0000000002782b70 = 0;
      _DAT_02782b78 = 0;
      uRam0000000002782b80 = 0;
      _DAT_02782b88 = 0;
      uRam0000000002782b90 = 0;
      _DAT_02782b98 = 0;
      uRam0000000002782ba0 = 0;
      _DAT_02782ba8 = 0;
      uRam0000000002782bb0 = 0;
      DAT_02782bd3 = 0;
      _DAT_02782bcb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02782bcb == '\0') {
    FUN_00da8420();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 0;
  if (DAT_02782bd8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02782b28 = FUN_00d4fe50();
      _DAT_02782b10 = "GNForeignThreadPool";
      _DAT_02782b18 = 0x30;
      _DAT_02782b20 = FUN_00da79c0;
      _DAT_02782b30 = 0;
      uRam0000000002782b38 = 0;
      _DAT_02782b40 = 0;
      _DAT_02782bb8 = 0;
      uRam0000000002782bc0 = 0;
      _DAT_02782bc8 = 0;
      DAT_02782bca = 3;
      _DAT_02782b48 = 0;
      uRam0000000002782b50 = 0;
      _DAT_02782b58 = 0;
      uRam0000000002782b60 = 0;
      _DAT_02782b68 = 0;
      uRam0000000002782b70 = 0;
      _DAT_02782b78 = 0;
      uRam0000000002782b80 = 0;
      _DAT_02782b88 = 0;
      uRam0000000002782b90 = 0;
      _DAT_02782b98 = 0;
      uRam0000000002782ba0 = 0;
      _DAT_02782ba8 = 0;
      uRam0000000002782bb0 = 0;
      DAT_02782bd3 = 0;
      _DAT_02782bcb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02782bcb == '\0') {
    FUN_00da85b0();
    FUN_00e87980();
  }
  FUN_00da8740();
  *(undefined4 *)(unaff_RDI + 5) = 0;
  if (DAT_02782bd8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02782b28 = FUN_00d4fe50();
      _DAT_02782b10 = "GNForeignThreadPool";
      _DAT_02782b18 = 0x30;
      _DAT_02782b20 = FUN_00da79c0;
      _DAT_02782b30 = 0;
      uRam0000000002782b38 = 0;
      _DAT_02782b40 = 0;
      _DAT_02782bb8 = 0;
      uRam0000000002782bc0 = 0;
      _DAT_02782bc8 = 0;
      DAT_02782bca = 3;
      _DAT_02782b48 = 0;
      uRam0000000002782b50 = 0;
      _DAT_02782b58 = 0;
      uRam0000000002782b60 = 0;
      _DAT_02782b68 = 0;
      uRam0000000002782b70 = 0;
      _DAT_02782b78 = 0;
      uRam0000000002782b80 = 0;
      _DAT_02782b88 = 0;
      uRam0000000002782b90 = 0;
      _DAT_02782b98 = 0;
      uRam0000000002782ba0 = 0;
      _DAT_02782ba8 = 0;
      uRam0000000002782bb0 = 0;
      DAT_02782bd3 = 0;
      _DAT_02782bcb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02782bcb == '\0') {
    FUN_00da8a70();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00da62d0 — 1010 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00da62d0(double param_1,longlong *param_2,sched_param *param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  pthread_t p_Var4;
  int iVar5;
  pthread_attr_t *in_RCX;
  pthread_t info;
  ulonglong uVar7;
  undefined8 unaff_RSI;
  undefined8 *unaff_RDI;
  mach_msg_type_number_t policy_infoCnt;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  undefined4 local_c8;
  uint local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8;
  uint local_b4;
  pthread_t local_b0;
  char local_a8;
  undefined8 local_a0;
  char *local_98;
  double local_90;
  int local_88 [3];
  undefined4 local_7c;
  longlong local_38;
  pthread_attr_t *ppVar6;
  
  uVar8 = (undefined4)((ulonglong)param_4 >> 0x20);
  policy_infoCnt = (mach_msg_type_number_t)param_4;
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  ppVar6 = in_RCX;
  local_90 = param_1;
  p_Var4 = (pthread_t)FUN_00e8fc40();
  FUN_00d4ff40();
  *(pthread_t *)p_Var4 = (pthread_t)&DAT_02579948;
  p_Var4->__opaque[8] = '\0';
  p_Var4->__opaque[9] = '\0';
  p_Var4->__opaque[0x18] = '\0';
  p_Var4->__opaque[0x19] = '\0';
  p_Var4->__opaque[0x1a] = '\0';
  p_Var4->__opaque[0x1b] = '\0';
  p_Var4->__opaque[0x1c] = '\0';
  p_Var4->__opaque[0x1d] = '\0';
  p_Var4->__opaque[0x1e] = '\0';
  p_Var4->__opaque[0x1f] = '\0';
  p_Var4->__opaque[0x20] = '\0';
  p_Var4->__opaque[0x21] = '\0';
  p_Var4->__opaque[0x22] = '\0';
  p_Var4->__opaque[0x23] = '\0';
  p_Var4->__opaque[0x28] = '\0';
  p_Var4->__opaque[0x29] = '\0';
  p_Var4->__opaque[0x2a] = '\0';
  p_Var4->__opaque[0x2b] = '\0';
  p_Var4->__opaque[0x2c] = '\0';
  p_Var4->__opaque[0x2d] = '\0';
  p_Var4->__opaque[0x2e] = '\0';
  p_Var4->__opaque[0x2f] = '\0';
  p_Var4->__opaque[0x30] = '\0';
  p_Var4->__opaque[0x31] = '\0';
  p_Var4->__opaque[0x32] = '\0';
  p_Var4->__opaque[0x33] = '\0';
  p_Var4->__opaque[0x34] = '\0';
  p_Var4->__opaque[0x35] = '\0';
  p_Var4->__opaque[0x36] = '\0';
  p_Var4->__opaque[0x37] = '\0';
  p_Var4->__opaque[0x38] = '\0';
  p_Var4->__opaque[0x39] = '\0';
  p_Var4->__opaque[0x3a] = '\0';
  p_Var4->__opaque[0x3b] = '\0';
  p_Var4->__opaque[0x3c] = '\0';
  p_Var4->__opaque[0x3d] = '\0';
  p_Var4->__opaque[0x3e] = '\0';
  p_Var4->__opaque[0x3f] = '\0';
  p_Var4->__opaque[0x40] = '\0';
  p_Var4->__opaque[0x41] = '\0';
  p_Var4->__opaque[0x42] = '\0';
  p_Var4->__opaque[0x43] = '\0';
  p_Var4->__opaque[0x44] = '\0';
  p_Var4->__opaque[0x45] = '\0';
  p_Var4->__opaque[0x46] = '\0';
  p_Var4->__opaque[0x47] = '\0';
  p_Var4->__opaque[0x50] = '\0';
  p_Var4->__opaque[0x51] = '\0';
  p_Var4->__opaque[0x52] = '\0';
  p_Var4->__opaque[0x53] = '\0';
  p_Var4->__opaque[0x54] = '\0';
  p_Var4->__opaque[0x55] = '\0';
  p_Var4->__opaque[0x56] = '\0';
  p_Var4->__opaque[0x57] = '\0';
  p_Var4->__opaque[0x58] = '\0';
  p_Var4->__opaque[0x59] = '\0';
  p_Var4->__opaque[0x5a] = '\0';
  p_Var4->__opaque[0x5b] = '\0';
  p_Var4->__opaque[0x5c] = '\0';
  p_Var4->__opaque[0x5d] = '\0';
  p_Var4->__opaque[0x5e] = '\0';
  p_Var4->__opaque[0x5f] = '\0';
  p_Var4->__opaque[0x60] = '\0';
  p_Var4->__opaque[0x61] = '\0';
  p_Var4->__opaque[0x62] = '\0';
  p_Var4->__opaque[99] = '\0';
  FUN_00d500e0();
  *(undefined8 *)(p_Var4->__opaque + 0x10) = unaff_RSI;
  lVar1 = *param_2;
  lVar9 = *(longlong *)(p_Var4->__opaque + 0x18);
  if (lVar9 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(p_Var4->__opaque + 0x18) = lVar1;
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  iVar10 = (int)in_RCX;
  *(int *)(p_Var4->__opaque + 0x20) = iVar10;
  p_Var4->__opaque[9] = '\x01';
  local_98 = p_Var4->__opaque + 0x48;
  FUN_00e8f710();
  lVar1 = DAT_028a8630;
  if (((iVar10 == 4) && (DAT_028a8630 != 0)) && (7 < *(int *)(DAT_028a8630 + 0x18))) {
    lVar9 = 0;
    do {
      local_a8 = '\0';
      local_b0 = p_Var4;
      (**(code **)(*(longlong *)(lVar1 + 0x10) + lVar9 * 8))();
      if ((local_a8 != '\0') && (local_b0 != (pthread_t)0x0)) {
        FUN_00d50b20();
      }
      iVar3 = *(int *)(lVar1 + 0x18);
      iVar5 = iVar3 + 7;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      ppVar6 = (pthread_attr_t *)(ulonglong)(uint)(iVar5 >> 3);
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < iVar5 >> 3);
  }
  (**(code **)(*DAT_02802568 + 0x368))();
  _pthread_attr_init(ppVar6);
  _pthread_attr_set_qos_class_np();
  info = p_Var4;
  iVar3 = _pthread_create_suspended_np
                    ((pthread_t *)p_Var4,(pthread_attr_t *)FUN_00da5c40,(void **)param_3,
                     (void *)CONCAT44(uVar8,policy_infoCnt));
  if (iVar3 != 0) {
    FUN_00e8f7d0();
    if (p_Var4 != (pthread_t)0x0) {
      bVar2 = true;
      p_Var4 = (pthread_t)0x0;
      FUN_00d50b20();
      goto LAB_00da666e;
    }
    goto LAB_00da666c;
  }
  *(undefined8 *)p_Var4->__opaque = local_a0;
  iVar3 = _pthread_getschedparam(info,local_88,param_3);
  if ((iVar3 != 0) || (iVar10 == 0)) goto LAB_00da6645;
  if (3 < iVar10 - 1U) goto switchD_00da64fb_default;
  info = (pthread_t)
         ((longlong)&switchD_00da64fb::switchdataD_00da6730 +
         (longlong)(int)(&switchD_00da64fb::switchdataD_00da6730)[iVar10 - 1U]);
  switch(iVar10) {
  case 1:
    local_7c = 1;
    local_88[0] = 0xf;
    break;
  case 2:
    local_7c = 1;
    local_88[0] = 0x1f;
    break;
  case 3:
    local_88[0] = 0x23;
    goto LAB_00da654a;
  case 4:
    local_88[0] = 0x3f;
LAB_00da654a:
    local_7c = 2;
  }
switchD_00da64fb_default:
  _pthread_setschedparam(info,(int)local_88,param_3);
  if ((local_90 != _DAT_02391038) || (NAN(local_90) || NAN(_DAT_02391038))) {
    if (((*(double *)(p_Var4->__opaque + 0x28) != local_90) ||
        (NAN(*(double *)(p_Var4->__opaque + 0x28)) || NAN(local_90))) &&
       (*(double *)(p_Var4->__opaque + 0x28) = local_90, *(int *)(p_Var4->__opaque + 0x20) == 4)) {
      _mach_timebase_info((mach_timebase_info_t)info);
      local_98 = *(char **)(p_Var4->__opaque + 0x28);
      _pthread_mach_thread_np(info);
      uVar7 = (ulonglong)
              ((((double)local_b4 * DAT_024110e0) / (double)local_b8) *
              (double)local_98 * DAT_023907c0);
      local_c8 = (undefined4)uVar7;
      local_c4 = (uint)(uVar7 >> 1) & 0x7fffffff;
      local_bc = 1;
      info = (pthread_t)&MACH_HEADER.cputype;
      local_c0 = local_c8;
      _thread_policy_set(4,(thread_policy_flavor_t)&local_c8,&param_3->sched_priority,policy_infoCnt
                        );
    }
  }
LAB_00da6645:
  _pthread_mach_thread_np(info);
  _thread_resume((thread_act_t)info);
  FUN_00dee5a0((int)DAT_023908c8);
LAB_00da666c:
  bVar2 = false;
LAB_00da666e:
  (**(code **)(*DAT_02802568 + 0x378))();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((bVar2) && (p_Var4 != (pthread_t)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = p_Var4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return unaff_RDI;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




// ============================================================
// @00dad970 — 887 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00dadbd6) */
/* WARNING: Removing unreachable block (ram,0x00dadbdf) */
/* WARNING: Removing unreachable block (ram,0x00dadc7a) */
/* WARNING: Removing unreachable block (ram,0x00dadc83) */
/* WARNING: Removing unreachable block (ram,0x00dadcb2) */
/* WARNING: Removing unreachable block (ram,0x00dadcbf) */

ulonglong FUN_00dad970(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  int iVar8;
  int local_5c;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  
  cVar4 = FUN_00dab660();
  *(char *)(unaff_RDI + 0x48) = cVar4;
  if (cVar4 != '\0') {
    cVar4 = FUN_00dab660();
    *(char *)(unaff_RDI + 0x48) = cVar4;
    if (cVar4 != '\0') {
      if (local_5c < 1) {
        uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      }
      else {
        iVar8 = 0;
        plVar7 = (longlong *)0x0;
        bVar1 = false;
        local_40 = (longlong *)0x0;
        bVar2 = false;
        do {
          cVar4 = FUN_00dab660();
          *(char *)(unaff_RDI + 0x48) = cVar4;
          if (cVar4 == '\0') {
LAB_00dadcfd:
            uVar6 = 0;
            goto LAB_00dadcff;
          }
          cVar4 = FUN_00dab660();
          *(char *)(unaff_RDI + 0x48) = cVar4;
          if (cVar4 == '\0') goto LAB_00dadcfd;
          FUN_00dabdf0();
          if (plVar7 == local_50) {
            if ((bVar1) || (plVar7 == (longlong *)0x0)) goto joined_r0x00dadac4;
            if (local_48 == '\0') {
              FUN_00d50b00();
              plVar5 = plVar7;
              goto LAB_00dadae0;
            }
            *(undefined1 *)(unaff_RDI + 0x48) = 1;
            bVar1 = true;
          }
          else {
            if (local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              plVar5 = local_50;
              if ((bVar1) && (plVar7 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_00dadae0:
              bVar1 = true;
              plVar7 = plVar5;
joined_r0x00dadac4:
              plVar5 = plVar7;
              bVar3 = bVar1;
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              plVar5 = local_50;
              if ((bVar1) && (plVar7 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar1 = bVar3;
            plVar7 = plVar5;
            *(bool *)(unaff_RDI + 0x48) = plVar7 != (longlong *)0x0;
            if (plVar7 == (longlong *)0x0) {
              plVar7 = (longlong *)0x0;
              goto LAB_00dadcfd;
            }
          }
          FUN_00dace50();
          if (plVar7 == local_50) {
            if (bVar1) {
              bVar3 = bVar1;
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              if (local_48 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          else {
            plVar7 = local_50;
            if (local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              if (bVar1) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              if (bVar1) {
                FUN_00d50b20();
              }
            }
          }
          bVar1 = bVar3;
          plVar5 = (longlong *)FUN_00e8fc40();
          FUN_0002f270();
          (**(code **)(*plVar5 + 0x18))();
          if (plVar5 == local_40) {
            plVar5 = local_40;
            if (bVar2) {
              FUN_00d50b20();
              bVar3 = bVar2;
            }
            else {
              bVar3 = true;
            }
          }
          else {
            bVar3 = true;
            if ((bVar2) && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          bVar2 = bVar3;
          local_40 = plVar5;
          FUN_00c7ee10();
          FUN_00c811a0();
          local_48 = '\0';
          FUN_00d21140();
          iVar8 = iVar8 + 1;
          local_50 = local_40;
        } while (iVar8 < local_5c);
        bVar2 = true;
        bVar1 = true;
        uVar6 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
LAB_00dadcff:
        if ((bVar2) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar1) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_00dadccb;
    }
  }
  uVar6 = 0;
LAB_00dadccb:
  return uVar6 & 0xffffffff;
}




// ============================================================
// @00dad420 — 638 bytes
// ============================================================

void FUN_00dad420(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0x18) == 0)) goto LAB_00dad620;
  (**(code **)(*unaff_RSI + 0x608))();
  lVar2 = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    (**(code **)(*unaff_RSI + 0x608))();
    local_80 = *param_2;
    local_78 = '\0';
    (**(code **)(*local_90 + 0x370))(param_1,&local_80);
    lVar3 = local_48;
    lVar2 = *param_2;
    if (lVar2 == local_48) {
      if (((char)param_2[1] == '\0') && (local_48 != 0)) {
        local_50 = param_2 + 1;
        if (local_40 != '\0') goto LAB_00dad508;
        FUN_00d50b00();
        goto LAB_00dad546;
      }
LAB_00dad54d:
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = param_2 + 1;
      cVar1 = (char)param_2[1];
      if (local_40 == '\0') {
        local_31 = cVar1;
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *param_2 = lVar3;
        if ((local_31 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
LAB_00dad546:
        *(undefined1 *)local_50 = 1;
        goto LAB_00dad54d;
      }
      *param_2 = local_48;
      if ((cVar1 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
LAB_00dad508:
      *(undefined1 *)local_50 = 1;
      local_40 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_70 = *param_2;
  local_68 = '\0';
  FUN_00daa910();
  lVar2 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_60 = lVar2;
    local_58 = '\0';
    (**(code **)(*unaff_RSI + 0x618))(param_1,&local_60);
    lVar2 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return;
  }
LAB_00dad620:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}




// ============================================================
// @00dad000 — 591 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00dad0ca) */
/* WARNING: Removing unreachable block (ram,0x00dad0d3) */
/* WARNING: Removing unreachable block (ram,0x00dad047) */
/* WARNING: Removing unreachable block (ram,0x00dad050) */
/* WARNING: Removing unreachable block (ram,0x00dad11a) */
/* WARNING: Removing unreachable block (ram,0x00dad123) */

void FUN_00dad000(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar3;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_00c8e830();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00c92170();
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_0256d868;
    puVar2[2] = 0;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    (*DAT_0256d880)();
    FUN_00cccfe0();
    FUN_00d50b20();
    FUN_00ccce80();
    uVar3 = FUN_00daa940();
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (uVar3 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        uVar3 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar1 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      local_50 = lVar1;
      local_48 = '\0';
      (**(code **)(*unaff_RSI + 0x618))(uVar3,&local_50);
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00dabfc0 — 563 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00dac0c3) */
/* WARNING: Removing unreachable block (ram,0x00dac0cc) */
/* WARNING: Removing unreachable block (ram,0x00dac18a) */
/* WARNING: Removing unreachable block (ram,0x00dac193) */

void FUN_00dabfc0(undefined8 param_1,int param_2,size_t param_3)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  bool bVar5;
  longlong local_48;
  char local_40;
  char local_35;
  int local_34;
  
  if (*(longlong *)(unaff_RSI + 0x20) == 0) {
    iVar2 = *(int *)(unaff_RSI + 0x18);
    bVar1 = *(byte *)(unaff_RSI + 0x28);
    pvVar4 = (void *)(ulonglong)bVar1;
    if ((int)(iVar2 + (uint)bVar1) < *(int *)(*(longlong *)(unaff_RSI + 0x10) + 0x18)) {
      if (bVar1 != 0) {
        if (*(char *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x10) + 0x10) + (longlong)iVar2) !=
            'b') goto LAB_00dac1d5;
        *(int *)(unaff_RSI + 0x18) = iVar2 + 1;
      }
      iVar2 = param_2;
      if ((param_2 != -1) || (cVar3 = FUN_00dab510(), iVar2 = local_34, cVar3 != '\0')) {
        local_34 = iVar2;
        FUN_00c8e690();
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        _memcpy(pvVar4,(void *)(longlong)local_34,param_3);
        FUN_00c92150();
        *(int *)(unaff_RSI + 0x18) = *(int *)(unaff_RSI + 0x18) + local_34;
        *unaff_RDI = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return;
      }
    }
  }
  else {
    if (*(char *)(unaff_RSI + 0x28) != '\0') {
      FUN_00ccd300(&local_34,&local_35);
      bVar5 = local_34 != 1;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != 0 || bVar5) || (local_35 != 'b')) goto LAB_00dac1d5;
    }
    iVar2 = param_2;
    if ((param_2 != -1) || (cVar3 = FUN_00dab510(), iVar2 = local_34, cVar3 != '\0')) {
      local_34 = iVar2;
      iVar2 = local_34;
      FUN_00c8e690();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      (**(code **)(**(longlong **)(unaff_RSI + 0x20) + 0x380))
                (&local_34,*(undefined8 *)(local_48 + 0x10));
      bVar5 = local_34 != iVar2;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0 || bVar5) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        FUN_00d50b20();
        return;
      }
      FUN_00c92150();
      *unaff_RDI = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
  }
LAB_00dac1d5:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}




// ============================================================
// @00da7ea0 — 557 bytes
// str: ""GNForeignThreadPool""
// str: ""_priority""
// str: ""GNThreadPriorityGroup""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00da7ea0(void)

{
  int iVar1;
  
  if (DAT_026d68a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d6890 = _DAT_0238fcc0;
      uRam00000000026d6894 = _UNK_0238fcc4;
      uRam00000000026d6898 = _UNK_0238fcc8;
      uRam00000000026d689c = _UNK_0238fccc;
      _DAT_026d68a0 = 4;
      DAT_026d68a4 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d68e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d68b0 = "GNThreadPriorityGroup";
      _DAT_026d68b8 = 5;
      DAT_026d68bc = DAT_026d68a4;
      _DAT_026d68c0 = &DAT_026d6890;
      _DAT_026d68c8 = &DAT_026d6860;
      DAT_026d68d0 = 0;
      uRam00000000026d68d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_02782c20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02782bd8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02782b28 = FUN_00d4fe50();
          _DAT_02782b10 = "GNForeignThreadPool";
          _DAT_02782b18 = 0x30;
          _DAT_02782b20 = FUN_00da79c0;
          _DAT_02782b30 = 0;
          uRam0000000002782b38 = 0;
          _DAT_02782b40 = 0;
          _DAT_02782bb8 = 0;
          uRam0000000002782bc0 = 0;
          _DAT_02782bc8 = 0;
          DAT_02782bca = 3;
          _DAT_02782b48 = 0;
          uRam0000000002782b50 = 0;
          _DAT_02782b58 = 0;
          uRam0000000002782b60 = 0;
          _DAT_02782b68 = 0;
          uRam0000000002782b70 = 0;
          _DAT_02782b78 = 0;
          uRam0000000002782b80 = 0;
          _DAT_02782b88 = 0;
          uRam0000000002782b90 = 0;
          _DAT_02782b98 = 0;
          uRam0000000002782ba0 = 0;
          _DAT_02782ba8 = 0;
          uRam0000000002782bb0 = 0;
          DAT_02782bd3 = 0;
          _DAT_02782bcb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02782be0 = "_priority";
      _DAT_02782be8 = &DAT_02782b10;
      _DAT_02782bf0 = 0;
      _DAT_02782bf8 = 0x6500;
      _DAT_02782c00 = "GNThreadPriorityGroup";
      _DAT_02782c08 = &DAT_026d68b0;
      _DAT_02782c10 = 0;
      uRam0000000002782c18 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_02782be0;
}




// ============================================================
// @00dae710 — 523 bytes
// ============================================================

ulonglong FUN_00dae710(void)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  undefined7 uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong local_90;
  char local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  
  lVar4 = *(longlong *)(unaff_RDI + 0x28);
  uVar1 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar1 < 1) {
    bVar7 = false;
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined7)((ulonglong)unaff_R14 >> 8);
    bVar7 = true;
    uVar6 = 1;
    while( true ) {
      plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + -8 + uVar6 * 8);
      FUN_00d50b00();
      (**(code **)(*plVar2 + 0x130))();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if (*(char *)(unaff_RDI + 0x48) == '\0') goto LAB_00dae91a;
      bVar7 = uVar6 < uVar1;
      if (uVar1 == uVar6) break;
      lVar4 = *(longlong *)(unaff_RDI + 0x28);
      uVar6 = uVar6 + 1;
    }
  }
  lVar4 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(lVar4 + 0x10);
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar4 = 0;
      do {
        local_70 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar4 * 8);
        local_68 = '\0';
        FUN_00d23f50();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar3 + 0xc));
      lVar4 = *(longlong *)(unaff_RDI + 0x50);
      if (lVar4 == 0) goto LAB_00dae91a;
    }
    local_88 = '\0';
    local_80 = *(longlong *)(lVar4 + 0x10);
    local_78 = 0;
    if (0 < *(int *)(local_80 + 0xc)) {
      do {
        local_90 = *(longlong *)(*(longlong *)(local_80 + 0x10) + (longlong)local_78 * 8);
        FUN_012d5b70((longlong)local_78,&local_90);
        lVar4 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        FUN_00d21140();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        local_78 = local_78 + 1;
      } while (local_78 < *(int *)(local_80 + 0xc));
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_00dae91a:
  return CONCAT71(uVar5,~bVar7) & 0xffffff01;
}




// ============================================================
// @00dab660 — 509 bytes
// ============================================================

ulonglong FUN_00dab660(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint7 uVar10;
  ulonglong uVar9;
  int iVar11;
  uint *unaff_RSI;
  longlong unaff_RDI;
  bool bVar12;
  bool bVar13;
  longlong local_48;
  longlong local_40;
  char local_38;
  char local_2d;
  int local_2c;
  
  uVar10 = (uint7)((ulonglong)unaff_RDI >> 8);
  if (*(longlong *)(unaff_RDI + 0x20) == 0) {
    lVar3 = *(longlong *)(unaff_RDI + 0x10);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    iVar2 = *(int *)(unaff_RDI + 0x18);
    lVar6 = (longlong)iVar2;
    iVar11 = *(int *)(lVar3 + 0x18) - iVar2;
    if (*(char *)(unaff_RDI + 0x28) == '\0') {
      if (3 < iVar11) {
        iVar2 = *(int *)(unaff_RDI + 0x2c);
        uVar5 = *(uint *)(lVar4 + lVar6);
LAB_00dab83e:
        uVar7 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        if (iVar2 == 0) {
          uVar7 = uVar5;
        }
        *unaff_RSI = uVar7;
        *(int *)(unaff_RDI + 0x18) = *(int *)(unaff_RDI + 0x18) + 4;
LAB_00dab84c:
        uVar9 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        goto LAB_00dab84e;
      }
    }
    else if (4 < iVar11) {
      cVar1 = *(char *)(lVar4 + lVar6);
      *(int *)(unaff_RDI + 0x18) = iVar2 + 1;
      if (cVar1 == 'i') {
        iVar2 = *(int *)(unaff_RDI + 0x2c);
        uVar5 = *(uint *)(lVar4 + 1 + lVar6);
        goto LAB_00dab83e;
      }
      if ((cVar1 == 'l') && (7 < *(int *)(lVar3 + 0x18) - (iVar2 + 1))) {
        uVar9 = *(ulonglong *)(lVar4 + 1 + lVar6);
        uVar8 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28 |
                uVar9 << 0x38;
        if (*(int *)(unaff_RDI + 0x2c) == 0) {
          uVar8 = uVar9;
        }
        *(int *)(unaff_RDI + 0x18) = iVar2 + 9;
        if ((longlong)(int)(uint)uVar8 == uVar8) {
          *unaff_RSI = (uint)uVar8;
        }
        uVar9 = CONCAT71(uVar10,uVar8 + 0x80000000 >> 0x20 == 0);
        goto LAB_00dab84e;
      }
    }
  }
  else {
    if (*(char *)(unaff_RDI + 0x28) == '\0') {
      FUN_00ccd540(&local_2c);
      bVar12 = local_40 == 0;
      bVar13 = local_2c == 4;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_00dab831:
      uVar9 = CONCAT71(uVar10,bVar12 & bVar13);
      goto LAB_00dab84e;
    }
    FUN_00ccd300(&local_2c,&local_2d);
    bVar12 = local_40 == 0;
    bVar13 = local_2c == 1;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar12 && bVar13) {
      if (local_2d == 'i') {
        FUN_00ccd540(&local_2c);
        bVar12 = local_40 == 0;
        bVar13 = local_2c == 4;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00dab831;
      }
      if (local_2d == 'l') {
        FUN_00ccd5c0(&local_2c,&local_48);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        unaff_RDI = (ulonglong)uVar10 << 8;
        if ((local_40 == 0 && local_2c == 8) && ((int)(uint)local_48 == local_48)) {
          *unaff_RSI = (uint)local_48;
          goto LAB_00dab84c;
        }
      }
    }
  }
  uVar9 = 0;
LAB_00dab84e:
  return uVar9 & 0xffffffff;
}



