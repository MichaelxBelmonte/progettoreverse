// Function: FUN_019d9ab0
// Address: 019d9ab0
// Size: 1413 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019d9db8) */
/* WARNING: Removing unreachable block (ram,0x019d9dd6) */
/* WARNING: Removing unreachable block (ram,0x019d9ddb) */
/* WARNING: Removing unreachable block (ram,0x019d9de6) */
/* WARNING: Removing unreachable block (ram,0x019d9dbe) */
/* WARNING: Removing unreachable block (ram,0x019d9ba5) */
/* WARNING: Removing unreachable block (ram,0x019d9bae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019d9ab0(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  void *pvVar3;
  int iVar4;
  longlong *unaff_RDI;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  float local_a8;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_70;
  char local_68;
  float local_38;
  undefined8 uVar13;
  float fVar14;
  
  uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar15 = (undefined4)param_2;
  dVar10 = (double)(**(code **)(*unaff_RDI + 0xa50))();
  uVar11 = (**(code **)(*unaff_RDI + 0xa98))();
  fVar14 = (float)((ulonglong)uVar11 >> 0x20);
  dVar1 = DAT_023908d0 * (double)CONCAT44(uVar17,uVar15);
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e9900(SUB84(dVar10 + dVar1,0),SUB84((double)CONCAT44(uVar17,uVar15) - (dVar1 + dVar1),0));
  if (local_68 == '\0') {
    if (local_70 == 0) goto LAB_019da02d;
    FUN_00d50b00();
  }
  else if (local_70 == 0) goto LAB_019da02d;
  if (*(int *)(local_70 + 0xc) != 0) {
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (float)FUN_0125a2c0();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar12 = FUN_0125a2c0();
    fVar7 = DAT_02391094 * fVar14;
    fVar16 = (float)uVar11 + fVar7;
    fVar7 = fVar14 - (fVar7 + fVar7);
    uVar5 = *(uint *)(local_70 + 0xc);
    uStack_80 = extraout_XMM0_Dc_00;
    uStack_7c = extraout_XMM0_Dd_00;
    if (0 < (int)uVar5) {
      lVar6 = (ulonglong)uVar5 + 1;
      do {
        local_88 = (float)uVar12;
        param_1 = *(undefined8 *)(local_70 + 0x10);
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_0125a2c0();
        fVar8 = (float)uVar13;
        fVar9 = fVar8;
        if ((local_38 <= fVar8) && (fVar9 = local_38, local_88 < fVar8)) {
          uStack_80 = extraout_XMM0_Dc_01;
          uStack_7c = extraout_XMM0_Dd_01;
          uVar12 = uVar13;
        }
        local_38 = fVar9;
        if ((fVar8 < fVar16) || (fVar16 + fVar7 < fVar8)) {
          FUN_00d23620();
        }
        lVar6 = lVar6 + -1;
      } while (1 < lVar6);
      uVar5 = *(uint *)(local_70 + 0xc);
    }
    fStack_84 = (float)((ulonglong)uVar12 >> 0x20);
    local_88 = (float)uVar12;
    if (uVar5 == 0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e9900(SUB84((double)fVar16,0),SUB84((double)fVar7,0));
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 == 0) || (*(int *)(local_70 + 0xc) == 0)) {
        local_a8 = ((local_88 - local_38) - fVar14) * DAT_0239011c + local_38;
      }
      else {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar7 = (float)FUN_0125a2c0();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_a8 = (float)FUN_0125a2c0();
        if (0 < *(int *)(local_70 + 0xc)) {
          fVar16 = (local_38 + local_88) * DAT_0239011c;
          fVar7 = (float)((uint)(fVar7 - fVar16) & _DAT_02390140);
          iVar4 = 0;
          do {
            pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar9 = (float)FUN_0125a2c0();
            fVar9 = (float)((uint)(fVar9 - fVar16) & _DAT_02390140);
            if (fVar9 < fVar7) {
              pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_a8 = (float)FUN_0125a2c0();
              fVar7 = fVar9;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(local_70 + 0xc));
        }
        FUN_001159b0();
        local_a8 = fVar14 * DAT_02390118 + local_a8;
        fStack_84 = fVar14;
        uStack_80 = extraout_XMM0_Dd;
        uStack_7c = extraout_XMM0_Dd;
      }
      auVar2._8_4_ = extraout_XMM0_Dc;
      auVar2._0_8_ = uVar11;
      auVar2._12_4_ = extraout_XMM0_Dd;
      auVar18._4_4_ = fStack_84;
      auVar18._0_4_ = local_a8;
      auVar18._8_4_ = uStack_80;
      auVar18._12_4_ = uStack_7c;
      auVar18 = blendps(auVar2,auVar18,1);
      (**(code **)(*unaff_RDI + 0xcb8))(SUB84(dVar10,0),uVar15,auVar18._0_8_);
    }
  }
LAB_019da02d:
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}


