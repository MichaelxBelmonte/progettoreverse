// Reconstructed implementation of MUQuarterAssignmentBeat
// From MikeCore binary — reverse-engineered pseudocode

#include "MUQuarterAssignmentBeat.h"

// ============================================================
// @01232860 — 1258 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01232d67) */
/* WARNING: Removing unreachable block (ram,0x01232d73) */
/* WARNING: Removing unreachable block (ram,0x012328e7) */
/* WARNING: Removing unreachable block (ram,0x01232910) */
/* WARNING: Removing unreachable block (ram,0x012328e9) */
/* WARNING: Removing unreachable block (ram,0x01232912) */

void FUN_01232860(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  char *pcVar7;
  pthread_key_t pVar8;
  longlong **pplVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined *puVar12;
  longlong unaff_RDI;
  int iVar13;
  longlong local_a0;
  char local_98;
  int local_68;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar12 = &DAT_02572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  puVar10 = *(undefined **)(unaff_RDI + 0x60);
  if (puVar10 != (undefined *)0x0) {
    local_68 = -1;
    while( true ) {
      lVar5 = (longlong)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(puVar10 + 0xc) <= local_68) break;
      plVar1 = *(longlong **)(*(longlong *)(puVar10 + 0x10) + 8 + lVar5 * 8);
      local_48 = plVar1;
      FUN_0006e1c0();
      pplVar9 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar9 = &local_48;
        if (cVar3 == '\0') {
          pplVar9 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar9 != (longlong *)0x0) {
        local_40[0] = '\0';
        local_48 = plVar1;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_002d7220();
    puVar12 = puVar10;
    if (puVar4 == (undefined8 *)0x0) {
      bVar2 = true;
      goto LAB_01232d4a;
    }
  }
  if (0 < *(int *)((longlong)puVar4 + 0xc)) {
    iVar13 = 0;
    do {
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      plVar1 = local_48;
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pVar8 = (pthread_key_t)puVar12;
      if (plVar1 != (longlong *)0x0) {
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        plVar1 = local_48;
        local_38[0] = local_40[0];
        pcVar11 = local_38;
        pcVar7 = local_40;
        if (local_40[0] == '\0') {
          pcVar7 = pcVar11;
        }
        *pcVar7 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pVar8 = (pthread_key_t)pcVar11;
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a280();
        pVar8 = 0;
        FUN_016cb9d0(0,4);
        FUN_015084d0();
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012646c0();
        puVar12 = (undefined *)0x0;
        FUN_016cb9d0(0,4);
        FUN_015085a0();
        if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)((longlong)puVar4 + 0xc));
  }
  FUN_001159b0();
  bVar2 = false;
LAB_01232d4a:
  FUN_0152eef0();
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01233c30 — 510 bytes
// str: ""MUQuarterAssignmentBeat""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01233c30(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025cb678;
  FUN_01233e70();
  FUN_01234170();
  unaff_RDI[4] = 0x100000000;
  if (DAT_027bda10 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027bd960 = FUN_00d4fe50();
      _DAT_027bd948 = "MUQuarterAssignmentBeat";
      _DAT_027bd950 = 0x30;
      _DAT_027bd958 = FUN_01233a60;
      _DAT_027bd968 = 0;
      uRam00000000027bd970 = 0;
      _DAT_027bd978 = 0;
      uRam00000000027bd980 = 0;
      _DAT_027bd988 = 0;
      uRam00000000027bd990 = 0;
      _DAT_027bd998 = 0;
      uRam00000000027bd9a0 = 0;
      _DAT_027bd9a8 = 0;
      uRam00000000027bd9b0 = 0;
      _DAT_027bd9b8 = 0;
      uRam00000000027bd9c0 = 0;
      _DAT_027bd9c8 = 0;
      uRam00000000027bd9d0 = 0;
      _DAT_027bd9d8 = 0;
      uRam00000000027bd9e0 = 0;
      _DAT_027bd9e8 = 0;
      uRam00000000027bd9f0 = 0;
      _DAT_027bd9f8 = 0;
      _uRam00000000027bda00 = 0;
      _DAT_027bda08 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027bda03 == '\0') {
    FUN_01234480();
    FUN_00e87980();
  }
  unaff_RDI[5] = 0x100000000;
  if (DAT_027bda10 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027bd960 = FUN_00d4fe50();
      _DAT_027bd948 = "MUQuarterAssignmentBeat";
      _DAT_027bd950 = 0x30;
      _DAT_027bd958 = FUN_01233a60;
      _DAT_027bd968 = 0;
      uRam00000000027bd970 = 0;
      _DAT_027bd978 = 0;
      uRam00000000027bd980 = 0;
      _DAT_027bd988 = 0;
      uRam00000000027bd990 = 0;
      _DAT_027bd998 = 0;
      uRam00000000027bd9a0 = 0;
      _DAT_027bd9a8 = 0;
      uRam00000000027bd9b0 = 0;
      _DAT_027bd9b8 = 0;
      uRam00000000027bd9c0 = 0;
      _DAT_027bd9c8 = 0;
      uRam00000000027bd9d0 = 0;
      _DAT_027bd9d8 = 0;
      uRam00000000027bd9e0 = 0;
      _DAT_027bd9e8 = 0;
      uRam00000000027bd9f0 = 0;
      _DAT_027bd9f8 = 0;
      _uRam00000000027bda00 = 0;
      _DAT_027bda08 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027bda03 == '\0') {
    FUN_012345f0();
    FUN_00e87980();
  }
  return;
}



