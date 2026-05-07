// Function: FUN_01c957d0
// Address: 01c957d0
// Size: 2056 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01c95c15) */
/* WARNING: Removing unreachable block (ram,0x01c95c1b) */
/* WARNING: Removing unreachable block (ram,0x01c95ae4) */
/* WARNING: Removing unreachable block (ram,0x01c95c27) */
/* WARNING: Removing unreachable block (ram,0x01c95c64) */
/* WARNING: Removing unreachable block (ram,0x01c95c69) */
/* WARNING: Removing unreachable block (ram,0x01c95c71) */
/* WARNING: Removing unreachable block (ram,0x01c95cc1) */
/* WARNING: Removing unreachable block (ram,0x01c95cca) */
/* WARNING: Removing unreachable block (ram,0x01c95c79) */
/* WARNING: Removing unreachable block (ram,0x01c95bc1) */
/* WARNING: Removing unreachable block (ram,0x01c95bca) */
/* WARNING: Removing unreachable block (ram,0x01c95b5d) */
/* WARNING: Removing unreachable block (ram,0x01c95b66) */
/* WARNING: Removing unreachable block (ram,0x01c95a4b) */
/* WARNING: Removing unreachable block (ram,0x01c95a50) */
/* WARNING: Removing unreachable block (ram,0x01c95a55) */
/* WARNING: Removing unreachable block (ram,0x01c95c8e) */
/* WARNING: Removing unreachable block (ram,0x01c95c9b) */
/* WARNING: Removing unreachable block (ram,0x01c95a70) */
/* WARNING: Removing unreachable block (ram,0x01c95a73) */
/* WARNING: Removing unreachable block (ram,0x01c958bf) */
/* WARNING: Removing unreachable block (ram,0x01c9583d) */
/* WARNING: Removing unreachable block (ram,0x01c95846) */
/* WARNING: Removing unreachable block (ram,0x01c95916) */
/* WARNING: Removing unreachable block (ram,0x01c9591f) */
/* WARNING: Removing unreachable block (ram,0x01c95924) */
/* WARNING: Removing unreachable block (ram,0x01c95934) */
/* WARNING: Removing unreachable block (ram,0x01c95940) */
/* WARNING: Removing unreachable block (ram,0x01c95b90) */
/* WARNING: Removing unreachable block (ram,0x01c95b99) */
/* WARNING: Removing unreachable block (ram,0x01c95d30) */
/* WARNING: Removing unreachable block (ram,0x01c95e2d) */
/* WARNING: Removing unreachable block (ram,0x01c95e36) */
/* WARNING: Removing unreachable block (ram,0x01c95e91) */
/* WARNING: Removing unreachable block (ram,0x01c95e9a) */
/* WARNING: Removing unreachable block (ram,0x01c95ee5) */
/* WARNING: Removing unreachable block (ram,0x01c95eeb) */
/* WARNING: Removing unreachable block (ram,0x01c95dbd) */
/* WARNING: Removing unreachable block (ram,0x01c95ef7) */
/* WARNING: Removing unreachable block (ram,0x01c95f34) */
/* WARNING: Removing unreachable block (ram,0x01c95f39) */
/* WARNING: Removing unreachable block (ram,0x01c95f41) */
/* WARNING: Removing unreachable block (ram,0x01c95f91) */
/* WARNING: Removing unreachable block (ram,0x01c95f9a) */
/* WARNING: Removing unreachable block (ram,0x01c95f5e) */
/* WARNING: Removing unreachable block (ram,0x01c95f6b) */
/* WARNING: Removing unreachable block (ram,0x01c95f49) */
/* WARNING: Removing unreachable block (ram,0x01c95abd) */
/* WARNING: Removing unreachable block (ram,0x01c95ac6) */
/* WARNING: Removing unreachable block (ram,0x01c95d8b) */
/* WARNING: Removing unreachable block (ram,0x01c95d97) */
/* WARNING: Removing unreachable block (ram,0x01c95d9c) */
/* WARNING: Removing unreachable block (ram,0x01c95ad1) */
/* WARNING: Removing unreachable block (ram,0x01c95add) */
/* WARNING: Removing unreachable block (ram,0x01c95d0b) */
/* WARNING: Removing unreachable block (ram,0x01c95d10) */
/* WARNING: Removing unreachable block (ram,0x01c95d15) */
/* WARNING: Removing unreachable block (ram,0x01c95d33) */
/* WARNING: Removing unreachable block (ram,0x01c95da2) */
/* WARNING: Removing unreachable block (ram,0x01c95dab) */
/* WARNING: Removing unreachable block (ram,0x01c95e60) */
/* WARNING: Removing unreachable block (ram,0x01c95e69) */

longlong * FUN_01c957d0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_58;
  longlong local_48;
  longlong local_40;
  
  if (*(char *)(unaff_RSI + 0x29) == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar10 = *param_2;
    if ((char)param_2[1] == '\0') {
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar10;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = lVar10;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02572358;
    (*DAT_02572370)();
    local_40 = *param_2;
    FUN_00d214d0();
    if (*(int *)((longlong)puVar4 + 0xc) < 2) {
      *unaff_RDI = (longlong)puVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_01271180();
      bVar11 = local_40 == 0;
      if (bVar11) {
        local_58 = 0;
      }
      else {
        FUN_00d50b00();
        local_58 = local_40;
      }
      if (*(int *)(local_58 + 0xc) < 1) {
        bVar8 = false;
        lVar10 = 0;
        bVar2 = false;
        local_48 = 0;
      }
      else {
        lVar7 = 0;
        local_48 = 0;
        bVar2 = false;
        lVar10 = 0;
        bVar8 = false;
        do {
          lVar9 = *(longlong *)(*(longlong *)(local_58 + 0x10) + lVar7 * 8);
          lVar6 = local_58;
          if (local_48 == lVar9) {
            if ((!bVar2) && (local_48 != 0)) {
              bVar2 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar9 != 0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (local_48 != 0)) {
              FUN_00d50b20();
              bVar2 = true;
              local_48 = lVar9;
            }
            else {
              bVar2 = true;
              local_48 = lVar9;
            }
          }
          FUN_01266770();
          if (local_40 == lVar10) {
            bVar1 = bVar8;
            lVar9 = lVar10;
            if ((!bVar8) && (local_40 != 0)) {
              FUN_00d50b00();
              bVar1 = true;
            }
          }
          else {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            bVar1 = true;
            lVar9 = local_40;
            if ((bVar8) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
          while (lVar9 != 0) {
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar3 = FUN_01263cf0();
            if (((cVar3 == '\0') || (cVar3 = FUN_00d23d70(), local_40 = lVar9, cVar3 == '\0')) ||
               (cVar3 = FUN_00d23d70(), cVar3 == '\0')) goto LAB_01c95ce3;
            FUN_00d23f50();
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012641c0();
            if ((!bVar1) && (lVar9 != 0)) {
              FUN_00d50b00();
              bVar1 = true;
            }
          }
          lVar9 = 0;
LAB_01c95ce3:
          FUN_01266b80();
          if (local_40 == lVar9) {
            bVar8 = bVar1;
            lVar10 = lVar9;
            if ((!bVar1) && (local_40 != 0)) {
              FUN_00d50b00();
              bVar8 = true;
            }
          }
          else {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            bVar8 = true;
            lVar10 = local_40;
            if ((bVar1) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
          }
          while (lVar10 != 0) {
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar3 = FUN_01263cf0();
            if (((cVar3 == '\0') || (cVar3 = FUN_00d23d70(), local_40 = lVar10, cVar3 == '\0')) ||
               (cVar3 = FUN_00d23d70(), cVar3 == '\0')) goto LAB_01c95983;
            FUN_00d23f50();
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012640f0();
            if ((!bVar8) && (lVar10 != 0)) {
              FUN_00d50b00();
              bVar8 = true;
            }
          }
          lVar10 = 0;
LAB_01c95983:
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(local_58 + 0xc));
      }
      *unaff_RDI = (longlong)puVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((bVar8) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar2) && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar11) {
        FUN_00d50b20();
      }
    }
  }
  return unaff_RDI;
}


