// Reconstructed implementation of GNBKVA
// From MikeCore binary — reverse-engineered pseudocode

#include "GNBKVA.h"

// ============================================================
// @00e46c90 — 1186 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e46dc2) */
/* WARNING: Removing unreachable block (ram,0x00e46e10) */
/* WARNING: Removing unreachable block (ram,0x00e46e25) */
/* WARNING: Removing unreachable block (ram,0x00e46e14) */
/* WARNING: Removing unreachable block (ram,0x00e46dcc) */
/* WARNING: Removing unreachable block (ram,0x00e46dd0) */
/* WARNING: Removing unreachable block (ram,0x00e46dd8) */
/* WARNING: Removing unreachable block (ram,0x00e46f6d) */
/* WARNING: Removing unreachable block (ram,0x00e46f79) */
/* WARNING: Removing unreachable block (ram,0x00e46fde) */
/* WARNING: Removing unreachable block (ram,0x00e46fea) */
/* WARNING: Removing unreachable block (ram,0x00e470f2) */
/* WARNING: Removing unreachable block (ram,0x00e470fe) */
/* WARNING: Removing unreachable block (ram,0x00e46d98) */
/* WARNING: Removing unreachable block (ram,0x00e46da1) */
/* WARNING: Removing unreachable block (ram,0x00e46e03) */
/* WARNING: Removing unreachable block (ram,0x00e46e43) */
/* WARNING: Removing unreachable block (ram,0x00e46e4c) */
/* WARNING: Removing unreachable block (ram,0x00e47123) */
/* WARNING: Removing unreachable block (ram,0x00e47128) */

void FUN_00e46c90(void)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  lVar1 = *unaff_RSI;
  lVar4 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar4 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x38) = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d4efa0();
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  lVar4 = lVar1;
  if (lVar1 != local_48) {
    lVar4 = local_48;
    if (local_40 == '\0') {
      if (local_48 == 0) {
        lVar4 = 0;
        goto LAB_00e46cfc;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x40);
      *(longlong *)(unaff_RDI + 0x40) = local_48;
    }
    else {
      local_40 = '\0';
LAB_00e46cfc:
      *(longlong *)(unaff_RDI + 0x40) = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_48;
    }
  }
  if ((local_40 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    do {
      cVar2 = FUN_00e3a1c0();
      if (cVar2 == '\0') break;
      FUN_00c80a40();
    } while (lVar1 != 0);
    local_40 = '\0';
    lVar4 = *(longlong *)(unaff_RDI + 0x40);
    local_48 = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
  }
  FUN_00e47ad0();
  *(longlong *)(unaff_RDI + 0x48) = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x48) == 0) {
    plVar3 = (longlong *)FUN_00e4c0a0();
    (**(code **)(*plVar3 + 0x18))();
    lVar1 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00e47b80();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    *(longlong **)(unaff_RDI + 0x48) = plVar3;
    FUN_00d50b20();
  }
  plVar3 = *(longlong **)(unaff_RDI + 200);
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
    cVar2 = (**(code **)(*plVar3 + 0x18))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') goto LAB_00e47094;
  }
  cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x1e8))();
  plVar3 = (longlong *)*unaff_RSI;
  if (cVar2 == '\0') {
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x120))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x250))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
LAB_00e47094:
  plVar3 = *(longlong **)(unaff_RDI + 200);
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x20))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00e484f0 — 1072 bytes
// str: ""object tried to encode key more than once!""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e48816) */
/* WARNING: Removing unreachable block (ram,0x00e4881f) */
/* WARNING: Removing unreachable block (ram,0x00e487ca) */
/* WARNING: Removing unreachable block (ram,0x00e48916) */
/* WARNING: Removing unreachable block (ram,0x00e48923) */
/* WARNING: Removing unreachable block (ram,0x00e4852d) */
/* WARNING: Removing unreachable block (ram,0x00e48536) */
/* WARNING: Removing unreachable block (ram,0x00e4859b) */
/* WARNING: Removing unreachable block (ram,0x00e485a4) */
/* WARNING: Removing unreachable block (ram,0x00e48612) */
/* WARNING: Removing unreachable block (ram,0x00e4861b) */
/* WARNING: Removing unreachable block (ram,0x00e4871c) */
/* WARNING: Removing unreachable block (ram,0x00e48728) */
/* WARNING: Removing unreachable block (ram,0x00e488ab) */
/* WARNING: Removing unreachable block (ram,0x00e48808) */
/* WARNING: Removing unreachable block (ram,0x00e48841) */
/* WARNING: Removing unreachable block (ram,0x00e488b7) */

void FUN_00e484f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  char unaff_SIL;
  longlong unaff_RDI;
  int iVar9;
  
  FUN_00e3a1c0();
  if (*(char *)(unaff_RDI + 0x2c) == '\0') {
    lVar8 = *(longlong *)(unaff_RDI + 0x60);
  }
  else {
    lVar8 = *(longlong *)(unaff_RDI + 0x48);
  }
  bVar3 = lVar8 == 0;
  if (bVar3) {
    lVar8 = 0;
  }
  else {
    FUN_00d50b00();
  }
  lVar1 = *param_2;
  iVar5 = FUN_00e3a2a0();
  iVar9 = 0;
  do {
    iVar6 = FUN_00d795b0();
    if (iVar6 <= iVar9) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_0258e990;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *(undefined1 *)(puVar7 + 2) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
      (*DAT_0258e9a8)();
      FUN_00e5d270();
      FUN_00d795e0();
      FUN_00d50b20();
LAB_00e48735:
      if (!bVar3 && lVar8 != 0) {
        FUN_00d50b20();
      }
      return;
    }
    FUN_00d79670();
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar6 = FUN_00e5d8b0();
    lVar2 = DAT_027816e8;
    if (iVar6 == iVar5) {
      if (*(char *)(unaff_RDI + 0x2c) != '\0') {
        cVar4 = FUN_00e5d8c0();
        if (cVar4 == unaff_SIL) {
          FUN_00e5d8d0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          lVar2 = *(longlong *)(unaff_RDI + 0x40);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00e47c30();
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (lVar1 == 0) {
            FUN_00c8e710();
            FUN_00c92170();
            FUN_00c92160();
            lVar2 = *(longlong *)(unaff_RDI + 0x40);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            FUN_00e48c30();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          iVar9 = *(int *)(lVar1 + 0x18);
          FUN_00c8e340();
          *(int *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar9) = iVar5;
          FUN_00d50b20();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        goto LAB_00e48735;
      }
      if (DAT_027816e8 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    iVar9 = iVar9 + 1;
  } while( true );
}




// ============================================================
// @00e474c0 — 977 bytes
// ============================================================

void FUN_00e474c0(void)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong unaff_RDI;
  longlong lVar11;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  undefined4 local_44;
  longlong local_40;
  char local_38;
  
  if ((*(longlong *)(unaff_RDI + 0x90) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x90) + 0x10), 0 < *(int *)(lVar1 + 0xc))) {
    lVar8 = 0;
    do {
      lVar11 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
      local_70 = '\0';
      local_78 = lVar11;
      uVar7 = FUN_00e47ad0(lVar1,&local_78);
      lVar10 = local_40;
      if (local_40 == 0) {
        local_44 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        lVar10 = 0;
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          local_44 = 0;
          if ((local_38 == '\0') || (local_40 == 0)) goto LAB_00e4759a;
          FUN_00d50b20();
        }
        else {
          local_38 = '\0';
        }
        local_44 = 0;
      }
LAB_00e4759a:
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar10 != 0) {
        FUN_00d79bf0();
        iVar3 = FUN_00d795b0();
        if (iVar3 != 0) {
          local_60 = '\0';
          local_68 = lVar11;
          local_50 = lVar10;
          FUN_00e47c30();
          local_58 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 == 0) || (iVar5 = iVar3, iVar3 < 1)) {
LAB_00e4771e:
            FUN_00d796b0();
            lVar11 = local_40;
            if (((local_38 == '\0') && (local_40 != 0)) &&
               ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
              FUN_00d50b20();
            }
            iVar5 = FUN_00e5d230();
            if (iVar3 < 2) {
              iVar9 = 1;
LAB_00e4780e:
              iVar6 = iVar9;
              if (iVar9 != iVar3 + -1) goto LAB_00e47883;
            }
            else {
              iVar9 = 1;
              lVar10 = lVar11;
              do {
                FUN_00d79670();
                lVar11 = local_40;
                if (local_40 == lVar10) {
LAB_00e477bd:
                  lVar11 = lVar10;
                  if (local_38 != '\0') {
LAB_00e477c3:
                    if (local_40 != 0) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  if (local_38 == '\0') {
                    if (local_40 != 0) {
                      FUN_00d50b00();
                    }
                    if (lVar10 != 0) {
                      FUN_00d50b20();
                      lVar10 = lVar11;
                      goto LAB_00e477bd;
                    }
                    if (local_38 == '\0') goto LAB_00e477e0;
                    goto LAB_00e477c3;
                  }
                  if (lVar10 != 0) {
                    FUN_00d50b20();
                  }
                }
LAB_00e477e0:
                iVar6 = FUN_00e5d230();
                if (iVar6 != iVar5) goto LAB_00e4780e;
                iVar9 = iVar9 + 1;
                lVar10 = lVar11;
                iVar6 = iVar3;
              } while (iVar3 != iVar9);
LAB_00e47883:
              iVar3 = (iVar3 - iVar6) + 1;
              while (iVar3 = iVar3 + -1, 0 < iVar3) {
                FUN_00d79770();
              }
            }
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            do {
              FUN_00d79670();
              lVar11 = local_40;
              if ((local_38 == '\0') &&
                 (((local_40 != 0 && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)))) {
                FUN_00d50b20();
              }
              iVar4 = FUN_00e5d8b0();
              iVar9 = *(int *)(local_58 + 0x18);
              iVar6 = iVar9 + 3;
              if (-1 < iVar9) {
                iVar6 = iVar9;
              }
              if (3 < iVar9) {
                lVar10 = 0;
                do {
                  if (*(int *)(*(longlong *)(local_58 + 0x10) + lVar10 * 4) == iVar4) {
                    FUN_00d79730();
                    iVar3 = iVar3 + -1;
                    if (lVar11 == 0) goto LAB_00e47640;
                    goto LAB_00e476f8;
                  }
                  lVar10 = lVar10 + 1;
                } while (iVar6 >> 2 != (int)lVar10);
              }
              if (lVar11 != 0) {
LAB_00e476f8:
                FUN_00d50b20();
              }
LAB_00e47640:
              bVar2 = 1 < iVar5;
              iVar5 = iVar5 + -1;
            } while (bVar2);
            if (iVar3 != 0) goto LAB_00e4771e;
          }
          if (local_58 != 0) {
            FUN_00d50b20();
          }
        }
        if ((char)local_44 == '\0') {
          FUN_00d50b20();
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(lVar1 + 0xc));
  }
  return;
}




// ============================================================
// @00e47ce0 — 794 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e47e34) */
/* WARNING: Removing unreachable block (ram,0x00e47e40) */
/* WARNING: Removing unreachable block (ram,0x00e47ec0) */
/* WARNING: Removing unreachable block (ram,0x00e47ecc) */
/* WARNING: Removing unreachable block (ram,0x00e47fbb) */
/* WARNING: Removing unreachable block (ram,0x00e47fc4) */

void FUN_00e47ce0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  lVar1 = *unaff_RSI;
  lVar4 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar4 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x38) = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d4efa0();
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  lVar4 = lVar1;
  if (lVar1 != local_38) {
    lVar4 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar4 = 0;
        goto LAB_00e47d47;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x40);
      *(longlong *)(unaff_RDI + 0x40) = local_38;
    }
    else {
      local_30 = '\0';
LAB_00e47d47:
      *(longlong *)(unaff_RDI + 0x40) = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00e47ad0();
  *(longlong *)(unaff_RDI + 0x48) = local_38;
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d797a0();
  FUN_00e5d8a0();
  FUN_00dac5e0();
  ___bzero();
  FUN_00dac5e0();
  plVar2 = *(longlong **)(unaff_RDI + 200);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    cVar3 = (**(code **)(*plVar2 + 0x18))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_00e47f73;
  }
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x1e8))();
  plVar2 = (longlong *)*unaff_RSI;
  if (cVar3 == '\0') {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x120))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x250))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
LAB_00e47f73:
  plVar2 = *(longlong **)(unaff_RDI + 200);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x20))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00e46700 — 741 bytes
// ============================================================

undefined8 FUN_00e46700(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  uint local_4c;
  char local_40 [8];
  char local_38 [8];
  
  plVar2 = *(longlong **)(unaff_RDI + 0xd0);
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0xa0) + 0x10) + 0xc);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x18))(0);
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39e40();
  FUN_00e38f50();
  FUN_00e39e40();
  FUN_00e39e40();
  *(undefined1 *)(unaff_RDI + 0x2c) = 0;
  lVar3 = *unaff_RSI;
  local_40[0] = '\0';
  FUN_00e38fb0();
  if ((local_40[0] != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  local_4c = 0;
  while( true ) {
    FUN_00e46bf0();
    local_38[0] = local_40[0];
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = local_38;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) break;
    local_40[0] = '\0';
    cVar4 = FUN_00e3a2e0();
    if ((local_40[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e47ce0();
      FUN_00e48260();
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      plVar2 = *(longlong **)(unaff_RDI + 0xd0);
      if ((plVar2 != (longlong *)0x0) && (local_4c = local_4c + 1, (local_4c & 0x3ff) == 0)) {
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0x18))((float)(int)local_4c / (float)(iVar1 + 1));
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  plVar2 = *(longlong **)(unaff_RDI + 0xd0);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x18))(DAT_02390124);
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}




// ============================================================
// @00e45630 — 737 bytes
// str: ""GNBKVA""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e4572c) */
/* WARNING: Removing unreachable block (ram,0x00e45735) */
/* WARNING: Removing unreachable block (ram,0x00e457e4) */
/* WARNING: Removing unreachable block (ram,0x00e457ed) */
/* WARNING: Removing unreachable block (ram,0x00e4589d) */
/* WARNING: Removing unreachable block (ram,0x00e458aa) */
/* WARNING: Removing unreachable block (ram,0x00e458cf) */
/* WARNING: Removing unreachable block (ram,0x00e458dc) */

ulonglong FUN_00e45630(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *unaff_RDI;
  longlong *local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  FUN_00daa970();
  FUN_00daa990();
  uVar1 = *param_2;
  FUN_00dab200(0,6);
  FUN_00daa9d0();
  FUN_00daaf60();
  FUN_00daa9b0();
  FUN_00daaf60();
  FUN_00daab70();
  FUN_00daab70();
  if ((int)unaff_RDI[5] == 0) {
    FUN_00e45a50();
    uVar4 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    FUN_00daa540();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00daa980();
    FUN_00daa970();
    FUN_00daa9b0();
    FUN_00daa990();
    FUN_00daa9d0();
    FUN_00daa9c0();
    FUN_00e45a50();
    (**(code **)(*unaff_RDI + 0x608))();
    (**(code **)(*local_70 + 0x368))();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = FUN_00dab390();
      uVar4 = (ulonglong)uVar2;
      if ((char)uVar2 != '\0') {
        FUN_00daab50();
      }
      FUN_00d50b20();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return uVar4 & 0xffffffff;
}




// ============================================================
// @00e4a130 — 635 bytes
// ============================================================

void FUN_00e4a130(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  undefined1 local_68;
  longlong local_60;
  undefined1 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(char *)(unaff_RDI + 0x2c) == '\0') {
    local_40 = *param_2;
    local_38 = '\0';
    FUN_00e3a2a0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_50 = *(longlong *)(unaff_RDI + 0x48);
    local_48 = '\0';
    iVar3 = FUN_00e5d7f0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 == -1) {
      local_60 = *param_2;
      local_58 = 0;
      FUN_00e484f0(param_1,&local_60);
      lVar2 = *unaff_RSI;
      lVar1 = local_40;
    }
    else {
      FUN_00dac5e0();
      lVar2 = *unaff_RSI;
      lVar1 = local_40;
    }
    local_40 = lVar2;
    if (local_40 != 0) {
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *unaff_RSI;
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *unaff_RSI;
      local_38 = '\0';
      FUN_00e38fb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *unaff_RSI;
      local_38 = '\0';
      FUN_00e3a2a0();
      lVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
        lVar1 = local_40;
      }
    }
    local_40 = lVar1;
    FUN_00daab70();
  }
  else {
    local_70 = *param_2;
    local_68 = 0;
    FUN_00e484f0(param_1,&local_70);
    local_40 = *unaff_RSI;
    if (local_40 != 0) {
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *unaff_RSI;
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *unaff_RSI;
      local_38 = '\0';
      FUN_00e38fb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @00e45ff0 — 598 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e46177) */
/* WARNING: Removing unreachable block (ram,0x00e46180) */

undefined8 FUN_00e45ff0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RDI;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_80;
  char local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  FUN_00daab70();
  lVar2 = *(longlong *)(unaff_RDI + 0x90);
  if ((lVar2 != 0) && (lVar5 = *(longlong *)(lVar2 + 0x10), 0 < *(int *)(lVar5 + 0xc))) {
    lVar4 = 0;
    local_70 = lVar5;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar4 * 8);
      FUN_00c7e7b0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00dab040();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00c811b0();
      FUN_00daab70();
      local_78 = '\0';
      local_80 = lVar2;
      FUN_00e47ad0(param_1,&local_80);
      lVar5 = local_70;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00d795b0();
      }
      FUN_00daab70();
      if (0 < iVar1) {
        iVar3 = 0;
        do {
          FUN_00d79670(param_1,iVar3);
          local_60 = 0;
          lVar2 = *(longlong *)(unaff_RDI + 0x30);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_60 = '\x01';
          local_68 = lVar2;
          FUN_00e5d8e0();
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          lVar5 = local_70;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          iVar3 = iVar3 + 1;
        } while (iVar1 != iVar3);
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      lVar4 = lVar4 + 1;
      lVar2 = (longlong)*(int *)(lVar5 + 0xc);
    } while (lVar4 < lVar2);
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}




// ============================================================
// @00e45c10 — 510 bytes
// ============================================================

void FUN_00e45c10(void)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00e38430();
  FUN_00e39e40();
  FUN_00e38430();
  FUN_00e39e40();
  FUN_00e39e40();
  FUN_00e39e40();
  FUN_00e38f50();
  FUN_00e39e40();
  *(undefined1 *)(unaff_RDI + 0x2c) = 1;
  lVar1 = *unaff_RSI;
  local_40[0] = '\0';
  FUN_00e38fb0();
  if ((local_40[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  while( true ) {
    FUN_00e46bf0();
    local_38[0] = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 == 0) break;
    local_40[0] = '\0';
    cVar2 = FUN_00e3a2e0();
    if ((local_40[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e46c90();
      local_40[0] = '\0';
      FUN_00e3a1c0();
      if ((local_40[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  FUN_00e474c0();
  return;
}



