// Function: FUN_01c17760
// Address: 01c17760
// Size: 1729 bytes
// Class: MUDetectionPitchCenterAssignmentInspector


/* WARNING: Removing unreachable block (ram,0x01c17816) */
/* WARNING: Removing unreachable block (ram,0x01c17822) */
/* WARNING: Removing unreachable block (ram,0x01c17d16) */
/* WARNING: Removing unreachable block (ram,0x01c17d1f) */
/* WARNING: Removing unreachable block (ram,0x01c17d47) */
/* WARNING: Removing unreachable block (ram,0x01c17d53) */
/* WARNING: Removing unreachable block (ram,0x01c179b0) */
/* WARNING: Removing unreachable block (ram,0x01c179b9) */
/* WARNING: Removing unreachable block (ram,0x01c17e09) */
/* WARNING: Removing unreachable block (ram,0x01c17e19) */
/* WARNING: Removing unreachable block (ram,0x01c17937) */
/* WARNING: Removing unreachable block (ram,0x01c17940) */
/* WARNING: Removing unreachable block (ram,0x01c17dd3) */
/* WARNING: Removing unreachable block (ram,0x01c17de0) */
/* WARNING: Removing unreachable block (ram,0x01c17c3b) */
/* WARNING: Removing unreachable block (ram,0x01c17c44) */
/* WARNING: Removing unreachable block (ram,0x01c17b77) */
/* WARNING: Removing unreachable block (ram,0x01c17ba0) */
/* WARNING: Removing unreachable block (ram,0x01c17b79) */
/* WARNING: Removing unreachable block (ram,0x01c17ba2) */

ulonglong FUN_01c17760(float param_1)

{
  bool bVar1;
  code *pcVar2;
  longlong *plVar3;
  uint uVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong lVar11;
  byte unaff_SIL;
  longlong *unaff_RDI;
  longlong *plVar12;
  ulonglong uVar13;
  float fVar14;
  longlong local_e0;
  char local_d8;
  longlong *local_78;
  char local_70;
  int local_60;
  ulonglong local_50;
  char local_48;
  
  FUN_01a58dc0();
  (**(code **)(*local_78 + 0xe20))();
  if ((local_d8 == '\0') && (local_e0 != 0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_e0 == 0) {
    uVar13 = 0;
  }
  else {
    if (*(int *)(local_e0 + 0xc) == 0) {
      uVar13 = 0;
    }
    else {
      uVar4 = (**(code **)(*unaff_RDI + 0x488))();
      pcVar2 = DAT_02572370;
      uVar13 = (ulonglong)uVar4;
      if (((byte)uVar4 & unaff_SIL) != 0) {
        if (*(int *)(local_e0 + 0xc) < 1) {
          bVar1 = false;
          puVar7 = (undefined8 *)0x0;
        }
        else {
          plVar10 = (longlong *)0x0;
          puVar7 = (undefined8 *)0x0;
          bVar1 = false;
          do {
            plVar3 = local_78;
            pVar8 = (pthread_key_t)plVar10;
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar10);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar10 = local_78;
            }
            FUN_014ed740();
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar10);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar10 = local_78;
            }
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar10);
            plVar12 = local_78;
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar10 = local_78;
              plVar12 = (longlong *)local_78[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            pVar9 = (pthread_key_t)plVar10;
            fVar14 = (float)(**(code **)(*plVar12 + 0x3e0))();
            FUN_014bd3c0(fVar14 + param_1);
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd790();
            if (local_70 == '\0') {
              if (local_78 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (local_78 != (longlong *)0x0) {
              local_70 = '\0';
              local_78 = (longlong *)0x0;
              local_60 = -1;
LAB_01c17b73:
              while( true ) {
                lVar6 = (longlong)local_60;
                local_60 = local_60 + 1;
                if (*(int *)((longlong)plVar3 + 0xc) <= local_60) break;
                lVar11 = plVar3[2];
                local_78 = *(longlong **)(lVar11 + 8 + lVar6 * 8);
                pvVar5 = _pthread_getspecific((pthread_key_t)lVar11);
                pVar9 = (pthread_key_t)lVar11;
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef8d0();
                if (local_48 == '\0') goto LAB_01c17c20;
                if (local_50 != 0) goto LAB_01c17c50;
              }
              FUN_0015edf0();
              FUN_00d50b20();
            }
            if (plVar3 != (longlong *)0x0) {
              FUN_00d50b20();
              FUN_00d50b20();
            }
            uVar4 = pVar8 + 1;
            plVar10 = (longlong *)(ulonglong)uVar4;
          } while ((int)uVar4 < *(int *)(local_e0 + 0xc));
        }
        FUN_001159b0();
        uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
        if ((bVar1) && (puVar7 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  return uVar13 & 0xffffffff;
LAB_01c17c20:
  if (local_50 != 0) {
    FUN_00d50b00();
LAB_01c17c50:
    pvVar5 = _pthread_getspecific(pVar9);
    uVar13 = local_50;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      uVar13 = *(ulonglong *)(local_50 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar14 = (float)FUN_0125a2c0();
    FUN_012595a0(fVar14 + param_1);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_02572358;
      (*pcVar2)();
      bVar1 = true;
    }
    local_48 = '\0';
    FUN_00d21140();
    FUN_012879b0();
    FUN_00d23740();
    FUN_00d50b20();
  }
  goto LAB_01c17b73;
}


