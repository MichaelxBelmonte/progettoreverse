// Function: FUN_0174b330
// Address: 0174b330
// Size: 2204 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0174b940) */
/* WARNING: Removing unreachable block (ram,0x0174b91b) */

void FUN_0174b330(longlong param_1)

{
  int iVar1;
  pthread_key_t pVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  int iVar11;
  longlong *unaff_RDI;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_90;
  char local_88;
  longlong local_68;
  char local_60;
  int local_50;
  undefined8 extraout_XMM0_Qb;
  
  lVar3 = unaff_RDI[0xc];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_0173ef00();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  iVar5 = FUN_0174a9c0();
  pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    param_1 = lVar3;
  }
  iVar6 = FUN_01770ea0();
  if (iVar5 != iVar6) {
    pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      param_1 = lVar3;
    }
    cVar4 = FUN_01770870();
    pVar10 = (pthread_key_t)param_1;
    if (cVar4 == '\0') {
      FUN_0174a9c0();
      pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        param_1 = lVar3;
      }
      FUN_01770ea0();
      pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        param_1 = lVar3;
      }
      FUN_01770eb0();
      pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        param_1 = lVar3;
      }
      auVar18._0_8_ = FUN_01772ff0();
      auVar18._8_8_ = extraout_XMM0_Qb;
      auVar19._4_12_ = auVar18._4_12_;
      auVar19._0_4_ = (float)auVar18._0_8_ / DAT_023908e0;
      FUN_00e7d780(auVar19._0_8_);
      pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        param_1 = lVar3;
      }
      pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        param_1 = lVar3;
      }
      FUN_01770220();
      FUN_01770230();
      pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        param_1 = lVar3;
      }
      pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        param_1 = lVar3;
      }
      FUN_017702f0();
      FUN_01770300();
      if (local_68 != 0) {
        for (iVar5 = 0; iVar5 < *(int *)(local_68 + 0xc); iVar5 = iVar5 + 1) {
          pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736c50();
          pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736c60();
        }
        FUN_0176e420();
      }
    }
    else {
      pvVar8 = _pthread_getspecific(pVar10);
      pVar2 = (pthread_key_t)lVar3;
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        pVar10 = pVar2;
      }
      FUN_01770aa0();
      pvVar8 = _pthread_getspecific(pVar10);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        pVar10 = pVar2;
      }
      fVar14 = (float)FUN_017708f0();
      (**(code **)(*unaff_RDI + 0x370))();
      FUN_0174bce0();
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f30();
      FUN_0174bce0();
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f30();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      iVar5 = FUN_0174a9c0();
      pvVar8 = _pthread_getspecific(pVar10);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        pVar10 = pVar2;
      }
      iVar6 = FUN_01770ea0();
      if (local_68 != 0) {
        local_50 = -1;
        while (local_50 = local_50 + 1, local_50 < *(int *)(local_68 + 0xc)) {
          pVar10 = (pthread_key_t)*(undefined8 *)(local_68 + 0x10);
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736e70();
          iVar1 = *(int *)(local_90 + 0xc);
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar7 = FUN_01736c50();
          iVar11 = (iVar6 - iVar5) + iVar1 + iVar7;
          iVar7 = (iVar7 + (iVar6 - iVar5)) - iVar1;
          do {
            iVar12 = iVar7;
            iVar11 = iVar11 - iVar1;
            iVar7 = iVar12 - iVar1;
          } while (iVar1 / 2 < iVar11);
          pVar10 = -(iVar1 / 2);
          do {
            iVar12 = iVar12 + iVar1;
          } while (iVar12 < (int)pVar10);
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736c60();
        }
        lVar9 = local_68;
        FUN_0176e420();
        pVar10 = (pthread_key_t)lVar9;
      }
      pvVar8 = _pthread_getspecific(pVar10);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        pVar10 = pVar2;
      }
      uVar17 = FUN_017726c0();
      fVar22 = DAT_0239011c * fVar14;
      fVar15 = (float)uVar17;
      pvVar8 = _pthread_getspecific(pVar10);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        pVar10 = pVar2;
      }
      fVar16 = (float)FUN_01770220();
      pvVar8 = _pthread_getspecific(pVar10);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        pVar10 = pVar2;
      }
      uStack_c4 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uStack_c0 = (undefined4)extraout_XMM0_Qb_00;
      uStack_bc = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      uVar13 = -(uint)(fVar22 < fVar15);
      auVar20._0_4_ = ~uVar13 & (uint)fVar15;
      auVar20._4_4_ = uStack_c4;
      auVar20._8_4_ = uStack_c0;
      auVar20._12_4_ = uStack_bc;
      auVar20 = auVar20 | ZEXT416((uint)(fVar15 - fVar14) & uVar13);
      auVar21._4_12_ = auVar20._4_12_;
      auVar21._0_4_ = auVar20._0_4_ + fVar16;
      FUN_01770230(auVar21._0_8_);
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01770300();
    }
    FUN_0174bd90();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}


