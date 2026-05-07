// Function: FUN_01c16c70
// Address: 01c16c70
// Size: 2015 bytes
// Class: MUDetectionPitchCenterAssignmentInspector


/* WARNING: Removing unreachable block (ram,0x01c17376) */
/* WARNING: Removing unreachable block (ram,0x01c1737f) */
/* WARNING: Removing unreachable block (ram,0x01c17273) */
/* WARNING: Removing unreachable block (ram,0x01c1727c) */
/* WARNING: Removing unreachable block (ram,0x01c16d69) */
/* WARNING: Removing unreachable block (ram,0x01c16d72) */
/* WARNING: Removing unreachable block (ram,0x01c16d01) */
/* WARNING: Removing unreachable block (ram,0x01c16d0a) */
/* WARNING: Removing unreachable block (ram,0x01c173e8) */
/* WARNING: Removing unreachable block (ram,0x01c173f5) */
/* WARNING: Removing unreachable block (ram,0x01c173a7) */
/* WARNING: Removing unreachable block (ram,0x01c173b3) */

bool FUN_01c16c70(double param_1)

{
  longlong lVar1;
  bool bVar2;
  code *pcVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  pthread_key_t in_ECX;
  code *pcVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  longlong *local_80;
  char local_78;
  longlong local_58;
  char local_50;
  
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    if ((local_78 == '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    if ((local_78 == '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc090();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 != (longlong *)0x0) {
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_0125a280();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar14 = FUN_012685b0(param_1 - dVar13);
      pvVar4 = _pthread_getspecific(in_ECX);
      plVar8 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar8 + 0x378))();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_01327990();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc090();
      pvVar4 = _pthread_getspecific(in_ECX);
      plVar8 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      dVar15 = (double)(**(code **)(*plVar8 + 0x380))(uVar14);
      fVar10 = (float)_logf((float)((dVar13 / (double)(float)dVar15) * DAT_0240de70));
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(in_ECX);
      plVar8 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      fVar11 = (float)(**(code **)(*plVar8 + 0x3e0))();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed740();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(in_ECX);
      plVar8 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      fVar12 = (float)(**(code **)(*plVar8 + 0x3e0))();
      fVar11 = fVar10 * DAT_02394208 - fVar11;
      FUN_014bd3c0(fVar12 + fVar11);
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd790();
      if ((local_78 == '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pcVar3 = DAT_02572370;
      if (local_80 != (longlong *)0x0) {
        if (*(int *)((longlong)local_80 + 0xc) < 1) {
          bVar2 = false;
          puVar6 = (undefined8 *)0x0;
        }
        else {
          iVar9 = 0;
          puVar6 = (undefined8 *)0x0;
          bVar2 = false;
          pcVar7 = DAT_02572370;
          do {
            pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
                goto LAB_01c17290;
              }
            }
            else if (local_58 != 0) {
LAB_01c17290:
              pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar10 = (float)FUN_0125a2c0();
              FUN_012595a0(fVar10 + fVar11);
              if (puVar6 == (undefined8 *)0x0) {
                puVar6 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar6 = &DAT_02572358;
                (*pcVar3)();
                bVar2 = true;
              }
              local_50 = '\0';
              FUN_00d21140();
              FUN_012879b0();
              FUN_00d23740();
              FUN_00d50b20();
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)((longlong)local_80 + 0xc));
        }
        FUN_0015edf0();
        FUN_00d50b20();
        if ((bVar2) && (puVar6 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return lVar1 != 0;
}


