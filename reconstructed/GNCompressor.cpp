// Reconstructed implementation of GNCompressor
// From MikeCore binary — reverse-engineered pseudocode

#include "GNCompressor.h"

// ============================================================
// @00df3b00 — 1491 bytes
// str: "" (""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00df3f99) */
/* WARNING: Removing unreachable block (ram,0x00df3fa5) */
/* WARNING: Removing unreachable block (ram,0x00df3ffc) */
/* WARNING: Removing unreachable block (ram,0x00df4008) */

undefined8 * FUN_00df3b00(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  char *pcVar6;
  longlong **pplVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025795a8;
  (*DAT_025795c0)();
  local_50 = puVar5;
  FUN_00d4ffd0();
  local_b0 = local_d8;
  local_a8 = 0;
  if (local_d0 == '\0') {
    if (local_d8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_d0 = '\0';
  }
  local_a8 = '\x01';
  FUN_00d8dbf0();
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d4efa0();
  FUN_00c84c80();
  local_a0 = local_48;
  local_98 = 0;
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_98 = '\x01';
  FUN_01e33cd0();
  plVar2 = local_d8;
  if (local_d0 == '\0') {
    if (((local_d8 != (longlong *)0x0) && (FUN_00d50b00(), local_d0 != '\0')) &&
       (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_d0 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    local_d0 = '\0';
    local_d8 = (longlong *)0x0;
    local_c8 = plVar2;
    local_b8 = 0;
    local_c0 = 0;
    if (0 < *(int *)((longlong)plVar2 + 0xc)) {
      lVar8 = 0;
      do {
        plVar1 = *(longlong **)(plVar2[2] + lVar8 * 8);
        local_d8 = plVar1;
        FUN_00d8db40();
        FUN_00d74120();
        local_90 = local_48;
        local_88 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_88 = '\x01';
        FUN_00d8dbf0();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d8db40();
        FUN_00d74120();
        local_80 = local_60;
        local_78 = 0;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_78 = '\x01';
        (**(code **)(*unaff_RSI + 0x88))();
        plVar3 = local_48;
        local_38[0] = local_40[0];
        pcVar6 = local_40;
        if (local_40[0] == '\0') {
          pcVar6 = local_38;
        }
        *pcVar6 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar3 + 400))();
        local_70 = local_48;
        local_68 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_68 = '\x01';
        FUN_00d8dbf0();
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_000274b0();
        pplVar7 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar7 = &local_d8;
          if (cVar4 == '\0') {
            pplVar7 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar7 != (longlong *)0x0) {
          FUN_00c77cd0();
          FUN_00c7b3d0();
          plVar1 = local_48;
          if (local_40[0] == '\0') {
            if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d8db40();
            FUN_00d8dbf0();
            FUN_00d8db40();
            FUN_00d50b20();
          }
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
        local_c0 = CONCAT44(local_c0._4_4_,(int)lVar8);
      } while ((int)lVar8 < *(int *)((longlong)plVar2 + 0xc));
    }
    FUN_00d74c70();
    puVar5 = local_50;
  }
  FUN_00d8c7d0();
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00df54b0 — 1201 bytes
// str: ""Cannot open %@.""
// ============================================================

void FUN_00df54b0(char *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (unaff_ESI == 1) {
    (**(code **)(*unaff_RDI + 0x3b0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_00cde020();
    iVar2 = _open(param_1,0x1e4);
    *(int *)(unaff_RDI + 3) = iVar2;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02784870;
    if ((int)unaff_RDI[3] == -1) {
      if (DAT_02784870 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x3b0))();
      (**(code **)(*local_48 + 0x388))();
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if (unaff_ESI == 6) {
    (**(code **)(*unaff_RDI + 0x3b0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_00cde020();
    iVar2 = _open(param_1,param_2);
    *(int *)(unaff_RDI + 3) = iVar2;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02784870;
    if ((int)unaff_RDI[3] == -1) {
      if (DAT_02784870 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x3b0))();
      (**(code **)(*local_48 + 0x388))();
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if (unaff_ESI == 2) {
    (**(code **)(*unaff_RDI + 0x3b0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_00cde020();
    iVar2 = _open(param_1,param_2);
    *(int *)(unaff_RDI + 3) = iVar2;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02784870;
    if ((int)unaff_RDI[3] == -1) {
      if (DAT_02784870 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x3b0))();
      (**(code **)(*local_48 + 0x388))();
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @00df3030 — 902 bytes
// str: ""GNCompressor""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df3030(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar8;
  undefined4 uVar9;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  if ((DAT_028a87f8 == (longlong *)0x0) || (DAT_028a8801 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a87f8 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar6 + 0x18))();
      if (DAT_028a87f8 == plVar6) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar8 = DAT_028a87f8 != (longlong *)0x0;
        DAT_028a87f8 = plVar6;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a8800 == '\0') {
        DAT_028a8800 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      DAT_028a8801 = '\x01';
      param_1 = FUN_00e8cb70();
    }
    else {
      DAT_028a8801 = '\x01';
      param_1 = FUN_00e8cb70();
    }
  }
  local_80 = *unaff_RSI;
  local_78 = '\0';
  FUN_00df35a0(param_1,&local_80);
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
LAB_00df315b:
    *unaff_RDI = plVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  local_70 = *unaff_RSI;
  local_68 = '\0';
  FUN_00c80cd0();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) goto LAB_00df315b;
  FUN_00c811e0();
  plVar6 = local_40;
  if ((DAT_02775ad0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026d7568 = FUN_00d4fe50();
    _DAT_026d7550 = "GNCompressor";
    _DAT_026d7558 = 0x10;
    _DAT_026d7560 = FUN_00068b20;
    _DAT_026d7570 = 0;
    uRam00000000026d7578 = 0;
    _DAT_026d7580 = 0;
    uRam00000000026d7588 = 0;
    _DAT_026d7590 = 0;
    uRam00000000026d7598 = 0;
    _DAT_026d75a0 = 0;
    uRam00000000026d75a8 = 0;
    _DAT_026d75b0 = 0;
    uRam00000000026d75b8 = 0;
    _DAT_026d75c0 = 0;
    uRam00000000026d75c8 = 0;
    _DAT_026d75d0 = 0;
    uRam00000000026d75d8 = 0;
    _DAT_026d75e0 = 0;
    uRam00000000026d75e8 = 0;
    _DAT_026d75f0 = 0;
    uRam00000000026d75f8 = 0;
    _DAT_026d7600 = 0;
    uRam00000000026d7608 = 0;
    _DAT_026d7610 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    pplVar7 = &local_40;
    if (cVar4 != '\0') goto LAB_00df3222;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_00df3222:
  plVar6 = *pplVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else if (*(char *)(pplVar7 + 1) == '\0') {
    FUN_00d50b00();
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    uVar9 = (**(code **)(*plVar6 + 0x18))();
    local_58 = '\0';
    local_50 = *unaff_RSI;
    local_48 = '\0';
    local_60 = plVar6;
    FUN_00df3650(uVar9,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return;
}




// ============================================================
// @00df6180 — 648 bytes
// str: ""file '%@' not open while readBytes""
// str: ""readBytes failed on file '%@'""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00df62cd) */
/* WARNING: Removing unreachable block (ram,0x00df62c1) */
/* WARNING: Removing unreachable block (ram,0x00df63d6) */
/* WARNING: Removing unreachable block (ram,0x00df63df) */

ssize_t FUN_00df6180(int param_1,int param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  ssize_t sVar3;
  undefined8 **ppuVar4;
  longlong *unaff_RDI;
  undefined8 *local_70;
  undefined4 local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = DAT_02784870;
  if ((int)unaff_RDI[3] == -1) {
    if (DAT_02784870 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x3b0))();
    (**(code **)(*local_40 + 0x368))();
    local_60 = local_50;
    local_68 = 1;
    local_70 = &DAT_024c5048;
    local_58 = 0;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    ppuVar4 = &local_70;
    FUN_00cc7c70(ppuVar4,"file \'%@\' not open while readBytes");
    param_1 = (int)ppuVar4;
    local_70 = &DAT_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  sVar3 = _read(param_1,(void *)(longlong)param_2,param_3);
  lVar1 = DAT_02784870;
  if (sVar3 == -1) {
    if (DAT_02784870 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x3b0))();
    (**(code **)(*local_40 + 0x368))();
    lVar2 = local_50;
    local_68 = 1;
    local_70 = &DAT_024c5048;
    local_58 = 0;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    FUN_00cc7c70(&local_70,"readBytes failed on file \'%@\'");
    local_70 = &DAT_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return sVar3;
}




// ============================================================
// @00df5d40 — 634 bytes
// str: ""file '%@' not open while writeBytes""
// str: ""writeBytes failed on file '%@', not all bytes written""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00df5f8e) */
/* WARNING: Removing unreachable block (ram,0x00df5f82) */
/* WARNING: Removing unreachable block (ram,0x00df5e5f) */
/* WARNING: Removing unreachable block (ram,0x00df5e68) */

void FUN_00df5d40(int param_1,int param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  ssize_t sVar3;
  undefined8 **ppuVar4;
  longlong *unaff_RDI;
  undefined8 *local_70;
  undefined4 local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = DAT_02784870;
  if ((int)unaff_RDI[3] == -1) {
    if (DAT_02784870 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x3b0))();
    (**(code **)(*local_40 + 0x368))();
    local_60 = local_50;
    local_68 = 1;
    local_70 = &DAT_024c5048;
    local_58 = 0;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    ppuVar4 = &local_70;
    FUN_00cc7c70(ppuVar4,"file \'%@\' not open while writeBytes");
    param_1 = (int)ppuVar4;
    local_70 = &DAT_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  sVar3 = _write(param_1,(void *)(longlong)param_2,param_3);
  lVar1 = DAT_02784870;
  if (sVar3 != param_2) {
    if (DAT_02784870 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x3b0))();
    (**(code **)(*local_40 + 0x368))();
    lVar2 = local_50;
    local_68 = 1;
    local_70 = &DAT_024c5048;
    local_58 = 0;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    FUN_00cc7c70(&local_70,"writeBytes failed on file \'%@\', not all bytes written");
    local_70 = &DAT_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00df4a00 — 525 bytes
// str: ""BZh""
// ============================================================

void FUN_00df4a00(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_48;
  char local_40;
  undefined8 *local_38;
  
  iVar5 = *(int *)(*param_2 + 0x18);
  iVar3 = FUN_00e7dde0();
  uVar4 = extraout_XMM0_Da;
  if (iVar3 <= iVar5) {
    uVar4 = FUN_00e7dde0();
    iVar5 = FUN_00e7de00(extraout_XMM0_Da_00,uVar4);
    uVar4 = extraout_XMM0_Da_01;
    if (iVar5 == 0) {
      FUN_00e9eb80(0,0);
      (*(code *)0x0)(*(undefined8 *)(*param_2 + 0x10),*(undefined4 *)(*param_2 + 0x18));
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      local_38 = puVar7;
      do {
        uVar6 = FUN_00e9ecb0();
        if ((uVar6 & 0xfffffffb) == 0) {
          FUN_00c92190(extraout_XMM0_Da_02,0);
        }
      } while (uVar6 == 0);
      FUN_00e9fd30();
      *unaff_RDI = local_38;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
  }
  lVar1 = DAT_02784840;
  if (DAT_02784840 != 0) {
    uVar4 = FUN_00d50b00();
  }
  lVar2 = DAT_02784848;
  if (DAT_02784848 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_48 = lVar2;
  local_40 = '\x01';
  FUN_00df3740(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}




// ============================================================
// @00df3740 — 513 bytes
// ============================================================

void FUN_00df3740(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong local_b0;
  undefined8 *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_00d4efa0();
  FUN_00c7e7b0();
  puVar2 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027847f8;
  lVar3 = *param_2;
  if (lVar3 == 0) {
    local_88 = puVar2;
    local_80 = '\0';
    local_78 = *unaff_RSI;
    local_70 = '\0';
    FUN_00e972c0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8 = puVar2;
    local_a0 = '\0';
    local_98 = *unaff_RSI;
    local_90 = '\0';
    if (DAT_027847f8 != 0) {
      FUN_00d50b00();
      lVar3 = *param_2;
    }
    local_38 = lVar1;
    local_b0 = lVar3;
    FUN_00083ea0(2,&local_b0);
    FUN_00e972c0();
    local_68 = (undefined8 *)&DAT_0253d630;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_68 = &DAT_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}



