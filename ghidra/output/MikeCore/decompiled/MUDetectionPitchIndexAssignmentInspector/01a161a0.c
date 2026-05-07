// Function: FUN_01a161a0
// Address: 01a161a0
// Size: 1572 bytes
// Class: MUDetectionPitchIndexAssignmentInspector


/* WARNING: Removing unreachable block (ram,0x01a16253) */
/* WARNING: Removing unreachable block (ram,0x01a1625f) */
/* WARNING: Removing unreachable block (ram,0x01a166cd) */
/* WARNING: Removing unreachable block (ram,0x01a166d9) */
/* WARNING: Removing unreachable block (ram,0x01a163e0) */
/* WARNING: Removing unreachable block (ram,0x01a163e9) */
/* WARNING: Removing unreachable block (ram,0x01a16794) */
/* WARNING: Removing unreachable block (ram,0x01a167a4) */
/* WARNING: Removing unreachable block (ram,0x01a16363) */
/* WARNING: Removing unreachable block (ram,0x01a1636c) */
/* WARNING: Removing unreachable block (ram,0x01a1675f) */
/* WARNING: Removing unreachable block (ram,0x01a1676c) */
/* WARNING: Removing unreachable block (ram,0x01a16577) */
/* WARNING: Removing unreachable block (ram,0x01a165a0) */
/* WARNING: Removing unreachable block (ram,0x01a16579) */
/* WARNING: Removing unreachable block (ram,0x01a165a2) */

ulonglong FUN_01a161a0(undefined8 param_1,byte param_2)

{
  bool bVar1;
  code *pcVar2;
  longlong *plVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  longlong *unaff_RDI;
  longlong *plVar9;
  pthread_key_t pVar10;
  longlong local_d8;
  char local_d0;
  longlong *local_70;
  char local_68;
  int local_58;
  longlong local_48;
  char local_40;
  longlong *local_38;
  
  FUN_01a58dc0();
  (**(code **)(*local_70 + 0xe20))();
  if ((local_d0 == '\0') && (local_d8 != 0)) {
    FUN_00d50b00();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_d8 == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    if (*(int *)(local_d8 + 0xc) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      uVar4 = (**(code **)(*unaff_RDI + 0x488))();
      pcVar2 = DAT_02572370;
      plVar9 = (longlong *)(uVar4 & 0xffffffff);
      if (((byte)plVar9 & param_2) != 0) {
        pVar10 = 0;
        if (*(int *)(local_d8 + 0xc) < 1) {
          bVar1 = false;
          puVar7 = (undefined8 *)0x0;
        }
        else {
          plVar9 = &local_48;
          puVar7 = (undefined8 *)0x0;
          bVar1 = false;
          do {
            plVar3 = local_70;
            pVar8 = pVar10;
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            local_38 = local_70;
            if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific(pVar8);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              pVar8 = (pthread_key_t)local_38;
            }
            pvVar5 = _pthread_getspecific(pVar8);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              pVar8 = (pthread_key_t)local_38;
            }
            FUN_014ed790();
            FUN_014ed740();
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd790();
            if (local_68 == '\0') {
              if (local_70 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_70 != (longlong *)0x0) {
              local_68 = '\0';
              local_70 = (longlong *)0x0;
              local_58 = -1;
LAB_01a16573:
              while( true ) {
                lVar6 = (longlong)local_58;
                local_58 = local_58 + 1;
                if (*(int *)((longlong)plVar3 + 0xc) <= local_58) break;
                local_70 = *(longlong **)(plVar3[2] + 8 + lVar6 * 8);
                pvVar5 = _pthread_getspecific((pthread_key_t)plVar3[2]);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef8d0();
                lVar6 = local_48;
                if (local_40 == '\0') goto LAB_01a16620;
                if (local_48 != 0) goto LAB_01a16650;
              }
              FUN_0015edf0();
              FUN_00d50b20();
            }
            if (local_38 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (plVar3 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            pVar10 = pVar10 + 1;
          } while ((int)pVar10 < *(int *)(local_d8 + 0xc));
        }
        FUN_001159b0();
        plVar9 = (longlong *)CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
        if ((bVar1) && (puVar7 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  return (ulonglong)plVar9 & 0xffffffff;
LAB_01a16620:
  if (local_48 != 0) {
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
LAB_01a16650:
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_02572358;
      (*pcVar2)();
      bVar1 = true;
    }
    local_40 = '\0';
    local_48 = lVar6;
    FUN_00d21140();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_012879b0();
    FUN_00d23740();
    FUN_00d50b20();
  }
  goto LAB_01a16573;
}


