// Function: FUN_00c9f7e0
// Address: 00c9f7e0
// Size: 1260 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x00c9f9db) */
/* WARNING: Removing unreachable block (ram,0x00c9f9e7) */
/* WARNING: Removing unreachable block (ram,0x00c9fb94) */
/* WARNING: Removing unreachable block (ram,0x00c9fba0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00c9f7e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar10;
  uint uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong *local_60;
  undefined1 local_58;
  longlong *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == unaff_RDI) {
    return true;
  }
  if ((DAT_026fdd40 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    _DAT_026cd0e8 = FUN_00d4fe50();
    DAT_026cd0d0 = "GNDictionary";
    _DAT_026cd0d8 = 0x28;
    _DAT_026cd0e0 = FUN_00022d20;
    _DAT_026cd0f0 = 0;
    uRam00000000026cd0f8 = 0;
    _DAT_026cd100 = 0;
    _DAT_026cd178 = 0;
    uRam00000000026cd180 = 0;
    _DAT_026cd188 = 0;
    DAT_026cd18a = 6;
    _DAT_026cd108 = 0;
    uRam00000000026cd110 = 0;
    _DAT_026cd118 = 0;
    uRam00000000026cd120 = 0;
    _DAT_026cd128 = 0;
    uRam00000000026cd130 = 0;
    _DAT_026cd138 = 0;
    uRam00000000026cd140 = 0;
    _DAT_026cd148 = 0;
    uRam00000000026cd150 = 0;
    _DAT_026cd158 = 0;
    uRam00000000026cd160 = 0;
    _DAT_026cd168 = 0;
    uRam00000000026cd170 = 0;
    DAT_026cd193 = 0;
    _DAT_026cd18b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') goto LAB_00c9f845;
  }
  unaff_RSI = &DAT_02802688;
LAB_00c9f845:
  if ((*unaff_RSI != 0) &&
     (lVar2 = unaff_RDI[2],
     *(int *)(lVar2 + 0xc) == *(int *)(*(longlong *)(*unaff_RSI + 0x10) + 0xc))) {
    cVar5 = FUN_00d24990();
    cVar6 = FUN_00d24990();
    if (cVar5 == cVar6) {
      cVar5 = FUN_00d24990();
      if (cVar5 != '\0') {
        if (0 < *(int *)(lVar2 + 0xc)) {
          lVar10 = 0;
          uVar12 = extraout_XMM0_Da;
          do {
            plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar10 * 8);
            local_58 = 0;
            local_60 = plVar1;
            uVar12 = FUN_00c9fe40(uVar12,&local_60);
            plVar3 = local_50;
            local_40[0] = local_48[0];
            pcVar9 = local_48;
            if (local_48[0] == '\0') {
              pcVar9 = local_40;
            }
            *pcVar9 = '\0';
            if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            local_58 = 0;
            local_60 = plVar1;
            uVar12 = FUN_00c9fe40(uVar12,&local_60);
            plVar4 = local_50;
            local_38[0] = local_48[0];
            pcVar9 = local_48;
            if (local_48[0] == '\0') {
              pcVar9 = local_38;
            }
            *pcVar9 = '\0';
            if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            if (plVar4 == plVar3) {
              uVar11 = 3;
              if (plVar3 == (longlong *)0x0) {
                local_48[0] = '\0';
                local_50 = plVar1;
                bVar7 = FUN_00c9ff50();
                uVar11 = (uint)bVar7 + (uint)bVar7 + 1;
                uVar12 = extraout_XMM0_Da_01;
              }
            }
            else {
              uVar11 = 1;
              if ((plVar4 != (longlong *)0x0) && (plVar3 != (longlong *)0x0)) {
                bVar7 = (**(code **)(*plVar4 + 0x50))();
                uVar11 = (uint)(bVar7 ^ 1);
                uVar12 = extraout_XMM0_Da_00;
              }
            }
            if ((local_38[0] != '\0') && (plVar4 != (longlong *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            if ((local_40[0] != '\0') && (plVar3 != (longlong *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            if ((uVar11 != 0) && (uVar11 != 3)) goto LAB_00c9fbd0;
            lVar10 = lVar10 + 1;
          } while ((int)lVar10 < *(int *)(lVar2 + 0xc));
        }
        uVar11 = 0;
LAB_00c9fbd0:
        FUN_00083b20();
        return (uVar11 & 1) == 0;
      }
      lVar10 = 0;
      uVar12 = extraout_XMM0_Da;
      do {
        if (*(int *)(lVar2 + 0xc) <= (int)lVar10) {
          FUN_00083b20();
          return true;
        }
        plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar10 * 8);
        local_58 = 0;
        local_60 = plVar1;
        uVar12 = FUN_00c9fe40(uVar12,&local_60);
        plVar3 = local_50;
        local_40[0] = local_48[0];
        pcVar9 = local_48;
        if (local_48[0] == '\0') {
          pcVar9 = local_40;
        }
        *pcVar9 = '\0';
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        if (plVar3 == (longlong *)0x0) break;
        local_58 = 0;
        local_60 = plVar1;
        FUN_00c9fe40(uVar12,&local_60);
        plVar1 = local_50;
        local_38[0] = local_48[0];
        pcVar9 = local_48;
        if (local_48[0] == '\0') {
          pcVar9 = local_38;
        }
        *pcVar9 = '\0';
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        cVar5 = (**(code **)(*plVar1 + 0x50))();
        uVar12 = extraout_XMM0_Da_02;
        if (local_38[0] != '\0') {
          uVar12 = FUN_00d50b20();
        }
        if (local_40[0] != '\0') {
          uVar12 = FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
      } while (cVar5 != '\0');
      FUN_00083b20();
    }
  }
  return false;
}


