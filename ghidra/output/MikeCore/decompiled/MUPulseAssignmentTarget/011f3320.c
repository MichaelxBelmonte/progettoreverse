// Function: FUN_011f3320
// Address: 011f3320
// Size: 1543 bytes
// Class: MUPulseAssignmentTarget
// String references:
//   "MUPulseAssignmentTarget"


/* WARNING: Removing unreachable block (ram,0x011f389e) */
/* WARNING: Removing unreachable block (ram,0x011f38a7) */
/* WARNING: Removing unreachable block (ram,0x011f34db) */
/* WARNING: Removing unreachable block (ram,0x011f34e4) */
/* WARNING: Removing unreachable block (ram,0x011f34a8) */
/* WARNING: Removing unreachable block (ram,0x011f34b1) */
/* WARNING: Removing unreachable block (ram,0x011f381a) */
/* WARNING: Removing unreachable block (ram,0x011f3825) */
/* WARNING: Removing unreachable block (ram,0x011f38d1) */
/* WARNING: Removing unreachable block (ram,0x011f38da) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011f3320(pthread_key_t param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  pthread_key_t pVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  pVar12 = param_1;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar2)();
  pvVar7 = _pthread_getspecific(pVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_016ca6f0();
  uVar9 = FUN_00e7bdb0();
  pvVar7 = _pthread_getspecific(pVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_016ca5b0();
  pvVar7 = _pthread_getspecific(pVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_016ca710();
  if (param_1 == 3) {
    uVar17 = FUN_00d214d0(uVar16,*(undefined4 *)((longlong)puVar5 + 0xc));
    uVar17 = FUN_00d214d0(uVar17,*(undefined4 *)((longlong)puVar6 + 0xc));
    uVar17 = FUN_00d242c0(uVar17,0);
    FUN_00d242c0(uVar17,0);
    FUN_011f4f10(uVar16,uVar3,uVar8,uVar9,0);
    lVar13 = 0xffffffff;
    FUN_011f4f10(uVar16,uVar3,uVar8,uVar9,0);
    if (0 < *(int *)((longlong)puVar6 + 0xc)) {
      lVar14 = 0;
      do {
        plVar15 = *(longlong **)(puVar6[2] + lVar14 * 8);
        if ((DAT_0272fca8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          _DAT_027902e0 = "MUPulseAssignmentTarget";
          DAT_027902f0 = 0;
          _DAT_027902e8 = 0;
          ___cxa_guard_release();
        }
        if (plVar15 == (longlong *)0x0) {
          lVar10 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar15 + 0x360))();
          lVar10 = FUN_00e86120(uVar8,1);
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar15 = (longlong *)(lVar10 + (longlong)plVar15);
        uVar8 = (**(code **)(*plVar15 + 0x38))();
        dVar18 = (double)FUN_016c98e0(uVar8,0);
        if (0 < *(int *)((longlong)puVar5 + 0xc)) {
          lVar10 = 0;
          do {
            plVar1 = *(longlong **)(puVar5[2] + lVar10 * 8);
            if ((DAT_0272fca8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
              _DAT_027902e0 = "MUPulseAssignmentTarget";
              DAT_027902f0 = 0;
              _DAT_027902e8 = 0;
              ___cxa_guard_release();
            }
            if (plVar1 == (longlong *)0x0) {
              lVar11 = 0;
            }
            else {
              (**(code **)(*plVar1 + 0x360))();
              lVar11 = FUN_00e86120();
            }
            pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = (**(code **)(*(longlong *)((longlong)plVar1 + lVar11) + 0x38))();
            dVar19 = (double)FUN_016c98e0(uVar8,0);
            dVar20 = (double)(**(code **)(*plVar15 + 0x18))();
            if (dVar20 < dVar19) break;
            if ((dVar18 < dVar19) &&
               (dVar20 = (double)(**(code **)(*plVar15 + 0x18))(), dVar19 < dVar20)) {
              (**(code **)(*(longlong *)((longlong)plVar1 + lVar11) + 0x38))();
              lVar13 = *plVar15;
              (**(code **)(lVar13 + 0x40))();
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(int *)((longlong)puVar5 + 0xc));
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)((longlong)puVar6 + 0xc));
    }
  }
  else {
    uVar17 = FUN_00d214d0(uVar16,*(undefined4 *)((longlong)puVar5 + 0xc));
    uVar17 = FUN_00d214d0(uVar17,*(undefined4 *)((longlong)puVar5 + 0xc));
    FUN_00d242c0(uVar17,0);
    FUN_011f4f10(uVar16,uVar3,uVar8,uVar9,0);
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


